/**
  ******************************************************************************
  * @file    network_data.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2025-04-25T15:52:39+0200
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef NETWORK_DATA_H
#define NETWORK_DATA_H

#include "network_config.h"
#include "network_data_params.h"

AI_DEPRECATED
#define AI_NETWORK_DATA_ACTIVATIONS(ptr_)  \
  ai_network_data_activations_buffer_get(AI_HANDLE_PTR(ptr_))

AI_DEPRECATED
#define AI_NETWORK_DATA_WEIGHTS(ptr_)  \
  ai_network_data_weights_buffer_get(AI_HANDLE_PTR(ptr_))


AI_API_DECLARE_BEGIN


extern const ai_u64 s_network_conv2d_1_weights_array_u64[41];
extern const ai_u64 s_network_conv2d_1_bias_array_u64[6];
extern const ai_u64 s_network_conv2d_2_weights_array_u64[864];
extern const ai_u64 s_network_conv2d_2_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_3_weights_array_u64[72];
extern const ai_u64 s_network_conv2d_3_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_4_weights_array_u64[1024];
extern const ai_u64 s_network_conv2d_4_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_18_weights_array_u64[1024];
extern const ai_u64 s_network_conv2d_18_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_5_weights_array_u64[1024];
extern const ai_u64 s_network_conv2d_5_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_6_weights_array_u64[512];
extern const ai_u64 s_network_conv2d_6_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_7_weights_array_u64[72];
extern const ai_u64 s_network_conv2d_7_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_8_weights_array_u64[512];
extern const ai_u64 s_network_conv2d_8_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_10_weights_array_u64[512];
extern const ai_u64 s_network_conv2d_10_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_11_weights_array_u64[72];
extern const ai_u64 s_network_conv2d_11_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_12_weights_array_u64[512];
extern const ai_u64 s_network_conv2d_12_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_14_weights_array_u64[512];
extern const ai_u64 s_network_conv2d_14_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_15_weights_array_u64[72];
extern const ai_u64 s_network_conv2d_15_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_16_weights_array_u64[512];
extern const ai_u64 s_network_conv2d_16_bias_array_u64[32];
extern const ai_u64 s_network_conv2d_20_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_20_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_21_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_21_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_22_weights_array_u64[4096];
extern const ai_u64 s_network_conv2d_22_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_60_weights_array_u64[4096];
extern const ai_u64 s_network_conv2d_60_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_23_weights_array_u64[4096];
extern const ai_u64 s_network_conv2d_23_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_24_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_24_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_25_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_25_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_26_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_26_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_28_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_28_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_29_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_29_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_30_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_30_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_32_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_32_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_33_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_33_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_34_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_34_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_36_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_36_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_37_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_37_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_38_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_38_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_40_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_40_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_41_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_41_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_42_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_42_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_44_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_44_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_45_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_45_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_46_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_46_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_48_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_48_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_49_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_49_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_50_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_50_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_52_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_52_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_53_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_53_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_54_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_54_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_56_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_56_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_57_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_57_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_58_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_58_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_62_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_62_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_63_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_63_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_64_weights_array_u64[16384];
extern const ai_u64 s_network_conv2d_64_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_102_weights_array_u64[16384];
extern const ai_u64 s_network_conv2d_102_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_65_weights_array_u64[16384];
extern const ai_u64 s_network_conv2d_65_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_66_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_66_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_67_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_67_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_68_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_68_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_70_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_70_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_71_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_71_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_72_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_72_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_74_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_74_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_75_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_75_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_76_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_76_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_78_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_78_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_79_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_79_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_80_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_80_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_82_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_82_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_83_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_83_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_84_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_84_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_86_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_86_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_87_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_87_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_88_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_88_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_90_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_90_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_91_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_91_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_92_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_92_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_94_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_94_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_95_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_95_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_96_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_96_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_98_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_98_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_99_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_99_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_100_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_100_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_104_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_104_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_105_weights_array_u64[576];
extern const ai_u64 s_network_conv2d_105_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_106_weights_array_u64[65536];
extern const ai_u64 s_network_conv2d_106_bias_array_u64[512];
extern const ai_u64 s_network_conv2d_107_weights_array_u64[65536];
extern const ai_u64 s_network_conv2d_107_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_112_weights_array_u64[262144];
extern const ai_u64 s_network_conv2d_112_bias_array_u64[512];
extern const ai_u64 s_network_conv2d_123_weights_array_u64[65536];
extern const ai_u64 s_network_conv2d_123_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_113_weights_array_u64[65536];
extern const ai_u64 s_network_conv2d_113_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_114_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_114_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_115_weights_array_u64[576];
extern const ai_u64 s_network_conv2d_115_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_116_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_116_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_117_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_117_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_118_weights_array_u64[576];
extern const ai_u64 s_network_conv2d_118_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_119_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_119_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_120_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_120_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_121_weights_array_u64[576];
extern const ai_u64 s_network_conv2d_121_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_122_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_122_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_125_weights_array_u64[131072];
extern const ai_u64 s_network_conv2d_125_bias_array_u64[512];
extern const ai_u64 s_network_conv2d_126_weights_array_u64[65536];
extern const ai_u64 s_network_conv2d_126_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_139_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_139_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_129_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_129_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_130_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_130_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_131_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_131_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_132_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_132_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_133_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_133_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_134_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_134_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_135_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_135_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_136_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_136_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_137_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_137_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_138_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_138_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_141_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_141_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_142_weights_array_u64[16384];
extern const ai_u64 s_network_conv2d_142_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_156_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_156_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_146_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_146_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_147_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_147_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_148_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_148_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_149_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_149_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_150_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_150_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_151_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_151_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_152_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_152_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_153_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_153_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_154_weights_array_u64[144];
extern const ai_u64 s_network_conv2d_154_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_155_weights_array_u64[2048];
extern const ai_u64 s_network_conv2d_155_bias_array_u64[64];
extern const ai_u64 s_network_conv2d_158_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_158_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_173_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_173_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_174_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_174_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_186_weights_array_u64[16384];
extern const ai_u64 s_network_conv2d_186_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_176_weights_array_u64[16384];
extern const ai_u64 s_network_conv2d_176_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_177_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_177_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_178_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_178_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_179_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_179_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_180_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_180_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_181_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_181_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_182_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_182_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_183_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_183_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_184_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_184_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_185_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_185_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_188_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_188_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_203_weights_array_u64[576];
extern const ai_u64 s_network_conv2d_203_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_204_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_204_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_216_weights_array_u64[65536];
extern const ai_u64 s_network_conv2d_216_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_206_weights_array_u64[65536];
extern const ai_u64 s_network_conv2d_206_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_207_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_207_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_208_weights_array_u64[576];
extern const ai_u64 s_network_conv2d_208_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_209_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_209_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_210_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_210_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_211_weights_array_u64[576];
extern const ai_u64 s_network_conv2d_211_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_212_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_212_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_213_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_213_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_214_weights_array_u64[576];
extern const ai_u64 s_network_conv2d_214_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_215_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_215_bias_array_u64[256];
extern const ai_u64 s_network_conv2d_218_weights_array_u64[131072];
extern const ai_u64 s_network_conv2d_218_bias_array_u64[512];
extern const ai_u64 s_network_conv2d_219_weights_array_u64[32768];
extern const ai_u64 s_network_conv2d_219_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_220_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_220_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_221_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_221_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_222_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_222_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_223_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_223_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_224_weights_array_u64[96];
extern const ai_u64 s_network_conv2d_224_bias_array_u64[2];
extern const ai_u64 s_network_conv2d_225_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_225_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_226_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_226_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_227_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_227_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_228_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_228_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_230_weights_array_u64[384];
extern const ai_u64 s_network_conv2d_230_bias_array_u64[6];
extern const ai_u64 s_network_conv2d_229_weights_array_u64[96];
extern const ai_u64 s_network_conv2d_229_bias_array_u64[2];
extern const ai_u64 s_network_conv2d_189_weights_array_u64[16384];
extern const ai_u64 s_network_conv2d_189_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_190_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_190_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_191_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_191_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_192_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_192_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_193_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_193_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_194_weights_array_u64[96];
extern const ai_u64 s_network_conv2d_194_bias_array_u64[2];
extern const ai_u64 s_network_conv2d_195_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_195_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_196_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_196_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_197_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_197_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_198_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_198_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_200_weights_array_u64[384];
extern const ai_u64 s_network_conv2d_200_bias_array_u64[6];
extern const ai_u64 s_network_conv2d_199_weights_array_u64[96];
extern const ai_u64 s_network_conv2d_199_bias_array_u64[2];
extern const ai_u64 s_network_conv2d_159_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_159_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_160_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_160_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_161_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_161_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_162_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_162_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_163_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_163_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_164_weights_array_u64[96];
extern const ai_u64 s_network_conv2d_164_bias_array_u64[2];
extern const ai_u64 s_network_conv2d_165_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_165_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_166_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_166_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_167_weights_array_u64[288];
extern const ai_u64 s_network_conv2d_167_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_168_weights_array_u64[8192];
extern const ai_u64 s_network_conv2d_168_bias_array_u64[128];
extern const ai_u64 s_network_conv2d_170_weights_array_u64[384];
extern const ai_u64 s_network_conv2d_170_bias_array_u64[6];
extern const ai_u64 s_network_conv2d_169_weights_array_u64[96];
extern const ai_u64 s_network_conv2d_169_bias_array_u64[2];



/*!
 * @brief Get network activations buffer initialized struct.
 * @ingroup network_data
 * @param[in] ptr a pointer to the activations array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_data_activations_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights buffer initialized struct.
 * @ingroup network_data
 * @param[in] ptr a pointer to the weights array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_data_weights_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup network_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_network_data_weights_get(void);


/*!
 * @brief Get network params configuration data structure.
 * @ingroup network_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_network_data_params_get(ai_network_params* params);


AI_API_DECLARE_END

#endif /* NETWORK_DATA_H */

