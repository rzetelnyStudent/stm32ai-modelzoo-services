/**
  ******************************************************************************
  * @file    ai_model_config.h
  * @author  Artificial Intelligence Solutions group (AIS)
  * @brief   User header file for Preprocessing configuration
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file in
  * the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* ---------------    Generated code    ----------------- */
#ifndef __AI_MODEL_CONFIG_H__
#define __AI_MODEL_CONFIG_H__


/* I/O configuration */
#define NB_CLASSES        (1)
#define INPUT_HEIGHT      (480)
#define INPUT_WIDTH       (480)
#define INPUT_CHANNELS    (3)

/* Classes */
#define CLASSES_TABLE const char* classes_table[NB_CLASSES] = {\
   "car"}\


/***** Preprocessing configuration *****/

/* Cropping configuration */
#define ASPECT_RATIO_FIT      (1)
#define ASPECT_RATIO_CROP     (2)
#define ASPECT_RATIO_PADDING  (3)

#define ASPECT_RATIO_MODE    ASPECT_RATIO_FIT

/***** Postprocessing configuration *****/

/* Postprocessing type configuration */
#define POSTPROCESS_CENTER_NET (1)
#define POSTPROCESS_YOLO_V2    (2)
#define POSTPROCESS_ST_SSD     (3)
#define POSTPROCESS_SSD        (4)
#define POSTPROCESS_ST_YOLO_X  (5)

#define POSTPROCESS_TYPE    POSTPROCESS_ST_YOLO_X


/* Postprocessing ST_YOLO_X configuration */
#define AI_OBJDETECT_YOLOVX_PP_NB_CLASSES        (1)
#define AI_OBJDETECT_YOLOVX_PP_L_GRID_WIDTH      (60)
#define AI_OBJDETECT_YOLOVX_PP_L_GRID_HEIGHT     (60)
#define AI_OBJDETECT_YOLOVX_PP_L_NB_INPUT_BOXES  (AI_OBJDETECT_YOLOVX_PP_L_GRID_WIDTH * AI_OBJDETECT_YOLOVX_PP_L_GRID_HEIGHT)
#define AI_OBJDETECT_YOLOVX_PP_M_GRID_WIDTH      (30)
#define AI_OBJDETECT_YOLOVX_PP_M_GRID_HEIGHT     (30)
#define AI_OBJDETECT_YOLOVX_PP_M_NB_INPUT_BOXES  (AI_OBJDETECT_YOLOVX_PP_M_GRID_WIDTH * AI_OBJDETECT_YOLOVX_PP_M_GRID_HEIGHT)
#define AI_OBJDETECT_YOLOVX_PP_S_GRID_WIDTH      (15)
#define AI_OBJDETECT_YOLOVX_PP_S_GRID_HEIGHT     (15)
#define AI_OBJDETECT_YOLOVX_PP_S_NB_INPUT_BOXES  (AI_OBJDETECT_YOLOVX_PP_S_GRID_WIDTH * AI_OBJDETECT_YOLOVX_PP_S_GRID_HEIGHT)
#define AI_OBJDETECT_YOLOVX_PP_NB_ANCHORS        (1)
static const float32_t AI_OBJDETECT_YOLOVX_PP_L_ANCHORS[2*AI_OBJDETECT_YOLOVX_PP_NB_ANCHORS] ={30.000000, 30.000000};
static const float32_t AI_OBJDETECT_YOLOVX_PP_M_ANCHORS[2*AI_OBJDETECT_YOLOVX_PP_NB_ANCHORS] ={15.000000, 15.000000};
static const float32_t AI_OBJDETECT_YOLOVX_PP_S_ANCHORS[2*AI_OBJDETECT_YOLOVX_PP_NB_ANCHORS] ={7.500000, 7.500000};
#define AI_OBJDETECT_YOLOVX_PP_IOU_THRESHOLD      (0.5)
#define AI_OBJDETECT_YOLOVX_PP_CONF_THRESHOLD     (0.6)
#define AI_OBJDETECT_YOLOVX_PP_MAX_BOXES_LIMIT    (10)

/* Input color format configuration */
#define RGB_FORMAT          (1)
#define BGR_FORMAT          (2)
#define GRAYSCALE_FORMAT    (3)

#define PP_COLOR_MODE    RGB_FORMAT

/* Input/Output quantization configuration */
#define UINT8_FORMAT      (1)
#define INT8_FORMAT       (2)
#define FLOAT32_FORMAT    (3)

#define QUANT_INPUT_TYPE     UINT8_FORMAT
#define QUANT_OUTPUT_TYPE    FLOAT32_FORMAT

#endif      /* __AI_MODEL_CONFIG_H__ */
