/**
  ******************************************************************************
  * @file    mel_filterbank_f16.c
  * @author  MCD Application Team
  * @brief   Generation and processing function of a Mel-Frequencies Filterbank
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
#include "mel_filterbank_f16.h"

#ifdef ARM_FLOAT16_SUPPORTED

/**
 * @defgroup groupMelFilterbank Mel-Frequencies Filterbank
 * @brief Generation and processing function of a Mel-Frequencies Filterbank
 *
 * \par Example
 * \code
 * uint32_t pMelFilterStartIndices[40];
 * uint32_t pMelFilterStopIndices[40];
 * float16_t pMelFilterCoefs[493];
 * MelFilterTypeDef S;
 *
 * S.pStartIndices = pMelFilterStartIndices;
 * S.pStopIndices  = pMelFilterStopIndices;
 * S.pCoefficients = pMelFilterCoefs;
 * S.NumMels   = 40;
 * S.FFTLen    = 1024;
 * S.SampRate  = 16000;
 * S.FMin      = 20.0;
 * S.FMax      = 4000.0;
 * S.Formula   = MEL_HTK;
 * S.Normalize = 0;
 * S.Mel2F     = 0;
 * MelFilterbank_Init(&S_MelFilter);
 *
 * MelFilterbank(&S, pInBuffer, pOutBuffer);
 *
 * \endcode
 * @{
 */

static __INLINE float16_t MelScale_f16(float16_t mel_freq, eMelFormulaTypedef type);
static __INLINE float16_t InverseMelScale_f16(float16_t mel_freq, eMelFormulaTypedef type);


/**
 * @brief      Generate a Mel filterbank matrix for the floating-point MelFilterbank operation
 *
 * @param      *MelFilterStruct  The Mel Filter configuration structure.
 * @return none.
 */
void MelFilterbank_f16_Init(MelFilterTypeDef_f16 *MelFilterStruct)
{
  uint32_t normalize = MelFilterStruct->Normalize;
  uint32_t mel_2_f = MelFilterStruct->Mel2F;
  eMelFormulaTypedef formula = MelFilterStruct->Formula;

  uint32_t *fft_bin_numbers_start = MelFilterStruct->pStartIndices;
  uint32_t *fft_bin_numbers_stop = MelFilterStruct->pStopIndices;
  int32_t start_index;
  int32_t stop_index;
  float16_t *weights = MelFilterStruct->pCoefficients;
  uint32_t *n_coefficients = &MelFilterStruct->CoefficientsLength;

  uint32_t sr = MelFilterStruct->SampRate;
  uint32_t n_mels = MelFilterStruct->NumMels;
  uint32_t n_fft = MelFilterStruct->FFTLen;
  float16_t f_min =  MelFilterStruct->FMin;
  float16_t f_max =  MelFilterStruct->FMax;

  float16_t mel_step;
  float16_t mel_min;
  float16_t mel_max;

  float16_t mel_f_lower;
  float16_t mel_f_center;
  float16_t mel_f_upper;

  float16_t fftfreqs_step;
  float16_t fftfreq;

  float16_t fdiff_lower;
  float16_t fdiff_upper;
  float16_t ramp_lower;
  float16_t ramp_upper;
  float16_t lower;
  float16_t upper;
  float16_t min;
  float16_t weight;

  float16_t enorm;

  // Algorithm based on librosa implementation with memory constraints

  mel_min = MelScale_f16(f_min, formula);
  mel_max = MelScale_f16(f_max, formula);
  // Then, create mel_bin_centers = np.linspace(mel_min, mel_max, n_mels + 2) // + 2 to get boundaries
  mel_step = (mel_max - mel_min) / (float16_t) (n_mels - 1 + 2);

  /* Center frequencies of each FFT bin */
  // fftfreqs = librosa.fft_frequencies(sr=sr, n_fft=n_fft)
  //          = np.linspace(0, float(sr)/2), int(1 + n_fft//2), endpoint=True)
  //          = np.linspace(0, 8000, 513, endpoint=True) # With sr=16000, n_fft=1024
  // fftfreqs_step = (f_max - f_min) / (float32_t) (n_fft / 2);
  fftfreqs_step = ((float16_t) sr / 2.0f16) / (float16_t) (n_fft / 2);

  *n_coefficients = 0;

  /* Create filterbanks */
  // The first filterbank will start at the first point,
  // reach its peak at the second point, then return to zero at the 3rd point.
  // The second filterbank will start at the 2nd point, reach its max at the 3rd,
  // then be zero at the 4th etc. A formula for calculating these is as follows:
  for (uint32_t i = 0; i < n_mels; i++)
  {
    /* Create bin */
    if (mel_2_f != 0) {
      mel_f_lower = InverseMelScale_f16(mel_step * i + mel_min, formula);
      mel_f_center = InverseMelScale_f16(mel_step * (i + 1) + mel_min, formula);
      mel_f_upper = InverseMelScale_f16(mel_step * (i + 2) + mel_min, formula);
    } else {
      mel_f_lower = mel_step * i + mel_min;
      mel_f_center = mel_step * (i + 1) + mel_min;
      mel_f_upper = mel_step * (i + 2) + mel_min;
    }

    /* Round frequencies to the nearest FFT bins */
    // Note: This could be used for future optimization but does not match when InverseMelScale is not used
    // fft_bin_numbers_start[i] = (uint32_t) (n_fft * mel_f_lower / sr) + 1;
    // fft_bin_numbers_stop[i] = (uint32_t) (n_fft * mel_f_upper / sr);

    fdiff_lower = mel_f_center - mel_f_lower;
    fdiff_upper = mel_f_upper - mel_f_center;

    start_index = -1;
    stop_index = -1;

    for (uint32_t j = 0; j < n_fft / 2; j++)
    {
      /* Center frequency for FFT bin */
      // fftfreq = j * fftfreqs_step + f_min;
      if (mel_2_f != 0) {
        fftfreq = j * fftfreqs_step;
      } else {
        fftfreq = MelScale_f16(j * fftfreqs_step, formula);
      }

      ramp_lower = mel_f_lower - fftfreq;
      ramp_upper = mel_f_upper - fftfreq;
      /* Lower and upper slopes for current bin */
      lower = -ramp_lower / fdiff_lower;
      upper =  ramp_upper / fdiff_upper;

      // # .. then intersect them with each other and zero
      // weights[i] = np.maximum(0, np.minimum(lower, upper))
      if (lower < upper) min = lower;
      else min = upper;

      // Only store non-zero values indexed by start and stop indexes
      if (min > 0)
      {
        weight = min;
        // At this point, matching with:
        // librosa.filters.mel(16000, 1024, fmin=0.0, n_mels=30,norm=None,htk=False)

        if (normalize != 0)
        {
          // norm : {None, 1, np.inf} [scalar]
          //     if 1, divide the triangular mel weights by the width of the mel band
          //     (area normalization).  Otherwise, leave all the triangles aiming for
          //     a peak value of 1.0
          // # Slaney-style mel is scaled to be approx constant energy per channel
          // enorm = 2.0 / (mel_f[2:n_mels+2] - mel_f[:n_mels])
          // weights *= enorm[:, np.newaxis]
          enorm = 2.0f16 / (mel_f_upper - mel_f_lower);
          weight *= enorm;

          // At this point, should be matching with:
          // librosa.filters.mel(16000, 1024, fmin=0.0, n_mels=30,norm=1,htk=False)
        }

        /* Store weight coefficient in Lookup table */
        *weights++ = weight;
        if (start_index == -1) {
          start_index = j;
        }
        stop_index = j;
        /* Increment coefficient counter */
        *n_coefficients = *n_coefficients + 1;
      }
      fft_bin_numbers_start[i] = start_index;
      fft_bin_numbers_stop[i] = stop_index;
    }
  }
}

/**
 * @brief      Apply triangular mel filterbank to the spectrogram slice.
 *
 * @param      *M          points to an instance of the floating-point MelFilterbank structure.
 * @param      *pSpectrCol points to the input spectrogram slice of length FFTLen / 2.
 * @param      *pMelCol    points to the output mel energies in each filterbank.
 */
void MelFilterbank_f16(MelFilterTypeDef_f16 *M, float16_t *pSpectrCol, float16_t *pMelCol)
{
  uint16_t start_idx;
  uint16_t stop_idx;
  uint32_t *pStart_idxs = M->pStartIndices;
  uint32_t *pStop_idxs = M->pStopIndices;
  float16_t *pCoefs = M->pCoefficients;
  uint32_t n_mels = M->NumMels;

  for (uint32_t i = 0; i < n_mels; i++)
  {
    start_idx = pStart_idxs[i];
    stop_idx = pStop_idxs[i];
    arm_dot_prod_f16(&pSpectrCol[start_idx], pCoefs,stop_idx + 1 - start_idx, &pMelCol[i]);
    pCoefs += stop_idx + 1-start_idx;
  }
}

/* Private functions ---------------------------------------------------------*/

// based on librosa mel_to_hz()
static __INLINE float16_t MelScale_f16(float16_t freq, eMelFormulaTypedef type)
{
  if (type != MEL_HTK) {
    /* Malcolm Slaney's Formula */
    /* Fill in the linear scale */
    const float16_t f_min = 0.0f16;
    const float16_t f_sp = (float16_t) (200.0f16 / 3.0f16);
    float16_t mels = (freq - f_min) / f_sp;

    /* Fill in the log-scale part */
    const float16_t min_log_hz = 1000.0f;                      // beginning of log region (Hz)
    const float16_t min_log_mel = (min_log_hz - f_min) / f_sp; // same (Mels)
    const float16_t logstep = logf(6.4f16) / 27.0f16;              // step size for log region

    if (freq >= min_log_hz)
    {
      mels = min_log_mel + logf(freq / min_log_hz) / logstep;
    }

    return mels;
  } else {
    /* HTK Formula */
    // The formula for converting from frequency to Mel scale is:
    // M(f) = 1127. * ln(1 + f / 700.)
    //      = 2595. * log10(1 + f / 700.)
    return 1127.0f * logf(1.0f16 + freq / 700.0f16);
  }
}

// based on librosa hz_to_mel()
static __INLINE float16_t InverseMelScale_f16(float16_t mel_freq, eMelFormulaTypedef type)
{
  if (type != MEL_HTK) {
    /* Malcolm Slaney's Formula */
    /* Fill in the linear scale */
    const float16_t f_min = 0.0f;
    const float16_t f_sp = (float16_t) (200.0f16 / 3.0f16);
    float16_t freq = f_min + f_sp * mel_freq;

    /* And now the nonlinear scale */
    const float16_t min_log_hz = 1000.0f16;                      // beginning of log region (Hz)
    const float16_t min_log_mel = (min_log_hz - f_min) / f_sp; // same (Mels)
    const float16_t logstep = logf(6.4f16) / 27.0f16;              // step size for log region

    if (mel_freq >= min_log_mel)
    {
      // WARNING: Easy overflow with float32_t
      freq = min_log_hz * expf(logstep * (mel_freq - min_log_mel));
    }

    return freq;
  } else {
    /* HTK Formula */
    return 700.0f16 * (expf(mel_freq / 1127.0f16) - 1.0f16);
  }
}

/**
 * @} end of groupMelFilterbank
 */
#endif
