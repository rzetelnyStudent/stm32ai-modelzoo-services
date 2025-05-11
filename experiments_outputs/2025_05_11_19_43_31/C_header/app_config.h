/**
******************************************************************************
* @file    app_config.h
* @author  GPM Application Team
*
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

/* ---------------    Generated code    ----------------- */
#ifndef APP_CONFIG
#define APP_CONFIG

#include "arm_math.h"

#define USE_DCACHE

/*Defines: CMW_MIRRORFLIP_NONE; CMW_MIRRORFLIP_FLIP; CMW_MIRRORFLIP_MIRROR; CMW_MIRRORFLIP_FLIP_MIRROR;*/
#define CAMERA_FLIP CMW_MIRRORFLIP_NONE


#define ASPECT_RATIO_CROP       (2)
#define ASPECT_RATIO_FIT        (1)
#define ASPECT_RATIO_FULLSCREEN (3)

#define ASPECT_RATIO_MODE    ASPECT_RATIO_FIT

#define CAPTURE_FORMAT DCMIPP_PIXEL_PACKER_FORMAT_RGB565_1
#define CAPTURE_BPP 2
/* Leave the driver use the default resolution */
#define CAMERA_WIDTH 0
#define CAMERA_HEIGHT 0

#define LCD_FG_WIDTH             800
#define LCD_FG_HEIGHT            480
#define LCD_FG_FRAMEBUFFER_SIZE  (LCD_FG_WIDTH * LCD_FG_HEIGHT * 2)
/* Postprocessing type configuration */
#define POSTPROCESS_TYPE    POSTPROCESS_OD_ST_YOLOX_UF

#define NN_HEIGHT     (480)
#define NN_WIDTH      (480)
#define NN_BPP 3

#define COLOR_BGR (0)
#define COLOR_RGB (1)
#define COLOR_MODE    COLOR_RGB
/* Classes */
/* I/O configuration */
#define NB_CLASSES   (3)
#define CLASSES_TABLE const char* classes_table[NB_CLASSES] = {\
   "Chair" ,   "Sofa" ,   "Table"}\

/* Postprocessing ST_YOLO_X configuration */
#define AI_OBJDETECT_YOLOVX_PP_NB_CLASSES        (3)
#define AI_OBJDETECT_YOLOVX_PP_L_GRID_WIDTH      (60)
#define AI_OBJDETECT_YOLOVX_PP_L_GRID_HEIGHT     (60)
#define AI_OBJDETECT_YOLOVX_PP_L_NB_INPUT_BOXES  (AI_OBJDETECT_YOLOVX_PP_L_GRID_WIDTH * AI_OBJDETECT_YOLOVX_PP_L_GRID_HEIGHT)
#define AI_OBJDETECT_YOLOVX_PP_M_GRID_WIDTH      (30)
#define AI_OBJDETECT_YOLOVX_PP_M_GRID_HEIGHT     (30)
#define AI_OBJDETECT_YOLOVX_PP_M_NB_INPUT_BOXES  (AI_OBJDETECT_YOLOVX_PP_M_GRID_WIDTH * AI_OBJDETECT_YOLOVX_PP_M_GRID_HEIGHT)
#define AI_OBJDETECT_YOLOVX_PP_S_GRID_WIDTH      (15)
#define AI_OBJDETECT_YOLOVX_PP_S_GRID_HEIGHT     (15)
#define AI_OBJDETECT_YOLOVX_PP_S_NB_INPUT_BOXES  (AI_OBJDETECT_YOLOVX_PP_S_GRID_WIDTH * AI_OBJDETECT_YOLOVX_PP_S_GRID_HEIGHT)
#define AI_OBJDETECT_YOLOVX_PP_NB_ANCHORS        (3)
static const float32_t AI_OBJDETECT_YOLOVX_PP_L_ANCHORS[2*AI_OBJDETECT_YOLOVX_PP_NB_ANCHORS] ={30.000000, 30.000000, 4.200000, 15.000000, 13.800000, 41.999999};
static const float32_t AI_OBJDETECT_YOLOVX_PP_M_ANCHORS[2*AI_OBJDETECT_YOLOVX_PP_NB_ANCHORS] ={15.000000, 15.000000, 2.100000, 7.500000, 6.900000, 21.000000};
static const float32_t AI_OBJDETECT_YOLOVX_PP_S_ANCHORS[2*AI_OBJDETECT_YOLOVX_PP_NB_ANCHORS] ={7.500000, 7.500000, 1.050000, 3.750000, 3.450000, 10.500000};
#define AI_OBJDETECT_YOLOVX_PP_IOU_THRESHOLD      (0.5)
#define AI_OBJDETECT_YOLOVX_PP_CONF_THRESHOLD     (0.2)
#define AI_OBJDETECT_YOLOVX_PP_MAX_BOXES_LIMIT    (10)
#define WELCOME_MSG_1     "quantized_model.tflite"
#define WELCOME_MSG_2       "Model Running in STM32 MCU internal memory"

#endif      /* APP_CONFIG */
