/******************************************************************************
 * @file     embench_compiler.h
 * @brief    Public header file for Embench DSP Library
 ******************************************************************************/
/*
 * Modified from Arm CMSIS Libray (see Apache license below)
 */


/**************************************************************************//**
 * @file     cmsis_compiler.h
 * @brief    CMSIS compiler generic header file
 * @version  V5.3.0
 * @date     04. April 2023
 ******************************************************************************/
/*
 * Copyright (c) 2009-2023 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __EMBENCH_COMPILER_H
#define __EMBENCH_COMPILER_H

#include <stdint.h>

/*
 * Arm Compiler 4/5
 */
#if   defined ( __CC_ARM )
  #include "toolchain/embench_armcc.h"

  /*
 * Arm Compiler above 6.10.1 (armclang)
 */
#elif defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6100100)
  #include "toolchain/embench_armclang.h"

/*
 * GNU Compiler
 */
#elif defined ( __GNUC__ )
  #include "toolchain/embench_gcc.h"

#else
  #error Unknown compiler.
#endif


#endif /* __EMBENCH_COMPILER_H */
