/******************************************************************************
 * @file     embench_math_types.h
 * @brief    Public header file for Embench DSP Library
 ******************************************************************************/
/*
 * Modified from Arm CMSIS DSP Libray (see Apache license below)
 */


/******************************************************************************
 * @file     math_types.h
 * @brief    Public header file for CMSIS DSP Library
 * @version  V1.10.0
 * @date     08 July 2021
 * Target Processor: Cortex-M and Cortex-A cores
 ******************************************************************************/
/*
 * Copyright (c) 2010-2021 Arm Limited or its affiliates. All rights reserved.
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

#ifndef _EMBENCH_MATH_TYPES_H_
#define _EMBENCH_MATH_TYPES_H_

#ifdef   __cplusplus
extern "C"
{
#endif

#include "embench_compiler.h"

#include <string.h>
#include <stdint.h>
#include <math.h>
#include <float.h>
#include <limits.h>

/**
 * @defgroup genericTypes Generic Types
 * @{
*/

  /**
   * @brief 8-bit fractional data type in 1.7 format.
   */
  typedef int8_t q7_t;

  /**
   * @brief 16-bit fractional data type in 1.15 format.
   */
  typedef int16_t q15_t;

  /**
   * @brief 32-bit fractional data type in 1.31 format.
   */
  typedef int32_t q31_t;

  /**
   * @brief 64-bit fractional data type in 1.63 format.
   */
  typedef int64_t q63_t;

  /**
   * @brief 32-bit floating-point type definition.
   */
  typedef float float32_t;

  /**
   * @brief 64-bit floating-point type definition.
   */
  typedef double float64_t;


  /**
   * @brief Error status returned by some functions in the library.
   */
  typedef enum
  {
    EMBENCH_MATH_SUCCESS                 =  0,        /**< No error */
    EMBENCH_MATH_ARGUMENT_ERROR          = -1,        /**< One or more arguments are incorrect */
    EMBENCH_MATH_LENGTH_ERROR            = -2,        /**< Length of data buffer is incorrect */
    EMBENCH_MATH_SIZE_MISMATCH           = -3,        /**< Size of matrices is not compatible with the operation */
    EMBENCH_MATH_NANINF                  = -4,        /**< Not-a-number (NaN) or infinity is generated */
    EMBENCH_MATH_SINGULAR                = -5,        /**< Input matrix is singular and cannot be inverted */
    EMBENCH_MATH_TEST_FAILURE            = -6,        /**< Test Failed */
    EMBENCH_MATH_DECOMPOSITION_FAILURE   = -7         /**< Decomposition Failed */
  } embench_status;

/**
 * @} // endgroup generic
*/


#define F64_MAX   ((float64_t)DBL_MAX)
#define F32_MAX   ((float32_t)FLT_MAX)



#define F64_MIN   (-DBL_MAX)
#define F32_MIN   (-FLT_MAX)



#define F64_ABSMAX   ((float64_t)DBL_MAX)
#define F32_ABSMAX   ((float32_t)FLT_MAX)



#define F64_ABSMIN   ((float64_t)0.0)
#define F32_ABSMIN   ((float32_t)0.0)


#define Q31_MAX   ((q31_t)(0x7FFFFFFFL))
#define Q15_MAX   ((q15_t)(0x7FFF))
#define Q7_MAX    ((q7_t)(0x7F))
#define Q31_MIN   ((q31_t)(0x80000000L))
#define Q15_MIN   ((q15_t)(0x8000))
#define Q7_MIN    ((q7_t)(0x80))

#define Q31_ABSMAX   ((q31_t)(0x7FFFFFFFL))
#define Q15_ABSMAX   ((q15_t)(0x7FFF))
#define Q7_ABSMAX    ((q7_t)(0x7F))
#define Q31_ABSMIN   ((q31_t)0)
#define Q15_ABSMIN   ((q15_t)0)
#define Q7_ABSMIN    ((q7_t)0)

/* Dimension C vector space */
#define CMPLX_DIM 2

#ifdef   __cplusplus
}
#endif

#endif /*ifndef _EMBENCH_MATH_TYPES_H_ */