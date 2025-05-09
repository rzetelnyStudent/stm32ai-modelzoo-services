/**
  ******************************************************************************
  * @file    common_tables.h
  * @author  MCD Application Team
  * @brief   Header for common_tables.c module
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
#ifndef _COMMON_TABLES_H
#define _COMMON_TABLES_H

#include "arm_math.h"

extern const float32_t hannWin_1024[1024];
extern const float32_t hannWin_2048[2048];
extern const float32_t hammingWin_1024[1024];
extern const float32_t blackmanWin_1024[1024];

extern const uint32_t  melFiltersStartIndices_1024_30[30];
extern const uint32_t  melFiltersStopIndices_1024_30[30];
extern const float32_t melFilterLut_1024_30[968];

extern const uint32_t  melFiltersStartIndices_2048_128[128];
extern const uint32_t  melFiltersStopIndices_2048_128[128];
extern const float32_t melFilterLut_2048_128[2020];

#endif /* _COMMON_TABLES_H */
