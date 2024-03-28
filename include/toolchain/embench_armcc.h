/******************************************************************************
 * @file     embench_armcc.h
 * @brief    Public header file for Embench DSP Library
 ******************************************************************************/
/*
 * Modified from Arm CMSIS Libray (see Apache license below)
 */


/**************************************************************************//**
 * @file     cmsis_armcc.h
 * @brief    CMSIS compiler ARMCC (Arm Compiler 5) header file
 * @version  V5.4.0
 * @date     20. January 2023
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

#ifndef __EMBENCH_ARMCC_H
#define __EMBENCH_ARMCC_H


#if defined(__ARMCC_VERSION) && (__ARMCC_VERSION < 400677)
  #error "Please use Arm Compiler Toolchain V4.0.677 or later!"
#endif

/* CMSIS compiler control architecture macros */
#if ((defined (__TARGET_ARCH_6_M  ) && (__TARGET_ARCH_6_M   == 1)) || \
     (defined (__TARGET_ARCH_6S_M ) && (__TARGET_ARCH_6S_M  == 1))   )
  #define __ARM_ARCH_6M__           1
#endif

#if (defined (__TARGET_ARCH_7_M ) && (__TARGET_ARCH_7_M  == 1))
  #define __ARM_ARCH_7M__           1
#endif

#if (defined (__TARGET_ARCH_7E_M) && (__TARGET_ARCH_7E_M == 1))
  #define __ARM_ARCH_7EM__          1
#endif

/* CMSIS compiler control DSP macros */
#if ((defined (__ARM_ARCH_7EM__) && (__ARM_ARCH_7EM__ == 1))     )
  #define __ARM_FEATURE_DSP         1
#endif

/* CMSIS compiler specific defines */
#ifndef   __ASM
  #define __ASM                                  __asm
#endif
#ifndef   __INLINE
  #define __INLINE                               __inline
#endif
#ifndef   __STATIC_INLINE
  #define __STATIC_INLINE                        static __inline
#endif
#ifndef   __STATIC_FORCEINLINE
  #define __STATIC_FORCEINLINE                   static __forceinline
#endif
#ifndef   __NO_RETURN
  #define __NO_RETURN                            __declspec(noreturn)
#endif
#ifndef   __USED
  #define __USED                                 __attribute__((used))
#endif
#ifndef   __WEAK
  #define __WEAK                                 __attribute__((weak))
#endif
#ifndef   __PACKED
  #define __PACKED                               __attribute__((packed))
#endif
#ifndef   __PACKED_STRUCT
  #define __PACKED_STRUCT                        __packed struct
#endif
#ifndef   __PACKED_UNION
  #define __PACKED_UNION                         __packed union
#endif
#ifndef   __UNALIGNED_UINT32        /* deprecated */
  #define __UNALIGNED_UINT32(x)                  (*((__packed uint32_t *)(x)))
#endif
#ifndef   __UNALIGNED_UINT16_WRITE
  #define __UNALIGNED_UINT16_WRITE(addr, val)    ((*((__packed uint16_t *)(addr))) = (val))
#endif
#ifndef   __UNALIGNED_UINT16_READ
  #define __UNALIGNED_UINT16_READ(addr)          (*((const __packed uint16_t *)(addr)))
#endif
#ifndef   __UNALIGNED_UINT32_WRITE
  #define __UNALIGNED_UINT32_WRITE(addr, val)    ((*((__packed uint32_t *)(addr))) = (val))
#endif
#ifndef   __UNALIGNED_UINT32_READ
  #define __UNALIGNED_UINT32_READ(addr)          (*((const __packed uint32_t *)(addr)))
#endif
#ifndef   __ALIGNED
  #define __ALIGNED(x)                           __attribute__((aligned(x)))
#endif
#ifndef   __RESTRICT
  #define __RESTRICT                             __restrict
#endif
#ifndef   __COMPILER_BARRIER
  #define __COMPILER_BARRIER()                   __memory_changed()
#endif
#ifndef __NO_INIT
  #define __NO_INIT                              __attribute__ ((section (".bss.noinit"), zero_init))
#endif
#ifndef __ALIAS
  #define __ALIAS(x)                             __attribute__ ((alias(x)))
#endif


/**
  \brief   Reverse bit order of value
  \details Reverses the bit order of the given value.
  \param [in]    value  Value to reverse
  \return               Reversed value
 */

__attribute__((always_inline)) __STATIC_INLINE uint32_t __RBIT(uint32_t value)
{
  uint32_t result;
  uint32_t s = (4U /*sizeof(v)*/ * 8U) - 1U; /* extra shift needed at end */

  result = value;                      /* r will be reversed bits of v; first get LSB of v */
  for (value >>= 1U; value != 0U; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;                        /* shift when v's highest bits are zero */
  return result;
}


/**
  \brief   Signed Saturate
  \details Saturates a signed value.
  \param [in]  value  Value to be saturated
  \param [in]    sat  Bit position to saturate to (1..32)
  \return             Saturated value
 */
__attribute__((always_inline)) __STATIC_INLINE int32_t __SSAT(int32_t val, uint32_t sat)
{
  if ((sat >= 1U) && (sat <= 32U))
  {
    const int32_t max = (int32_t)((1U << (sat - 1U)) - 1U);
    const int32_t min = -1 - max ;
    if (val > max)
    {
      return max;
    }
    else if (val < min)
    {
      return min;
    }
  }
  return val;
}

/**
  \brief   Unsigned Saturate
  \details Saturates an unsigned value.
  \param [in]  value  Value to be saturated
  \param [in]    sat  Bit position to saturate to (0..31)
  \return             Saturated value
 */
__attribute__((always_inline)) __STATIC_INLINE uint32_t __USAT(int32_t val, uint32_t sat)
{
  if (sat <= 31U)
  {
    const uint32_t max = ((1U << sat) - 1U);
    if (val > (int32_t)max)
    {
      return max;
    }
    else if (val < 0)
    {
      return 0U;
    }
  }
  return (uint32_t)val;
}


#endif /* __EMBENCH_ARMCC_H */