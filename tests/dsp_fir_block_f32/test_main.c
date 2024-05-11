#include <stdint.h>
#include <stdio.h>

// includes for every benchmark
#include "boardsupport.h"

// includes for this benchmark
#include "test_main.h"
#include "embench_math.h"
#include "math_helper.h"

/**
 * @brief Filter Input, Output, and Reference Output
 *      - See data/
 */

// Input Samples
extern float32_t testInput[N_SAMPLES];

// Test Result
static float32_t testOutput[N_SAMPLES];

// Golden Reference
extern float32_t refOutput[N_SAMPLES];



/**
 * @brief Filter Coefficients & State
 */

// State Vector
static float32_t filter_state [N_TAPS + N_SAMPLES - 1];

// Coefficient Array
extern const float32_t coeff[N_TAPS];



/**
 * @brief test_main
 * 
 */
int __attribute__ ((used)) test_main (int argc __attribute__ ((unused)), char *argv[] __attribute__ ((unused)))
{
    uint32_t ccnt;
    uint32_t fail_count = 0;
    float32_t initialOutput[N_TAPS];
    uint32_t ptr;

    // filter initialization
    embench_fir_instance_f32 filter_S;
    embench_fir_init_f32(&filter_S, N_TAPS, coeff, filter_state, N_SAMPLES);

    // ignore the first N_TAPS outputs (bad output based on zero initial state)
    for (ptr = 0; ptr < (N_TAPS/N_SAMPLES); ptr++)
    {
        embench_fir_f32(&filter_S, testInput + (ptr * N_SAMPLES), initialOutput + (ptr * N_SAMPLES), N_SAMPLES);
    }

    // begin profiling
    start_trigger();

    embench_fir_f32(&filter_S, (testInput + N_TAPS), testOutput, N_SAMPLES);

    // end profiling
    stop_trigger();

    // get the cycle count
    ccnt = get_ccnt();

#ifdef CHECK_SNR
    // calculate SNR of test output vs golden reference
    float32_t snr;
    snr = snr_f32(refOutput, testOutput, N_SAMPLES);

    // check correctness (if reference and actual filter outputs matched)
    fail_count += !(snr > SNR_REF_THLD);
#endif

    if (fail_count)
        printf("TEST FAIL\n");
    else
        printf("TEST PASS\nCCNT = %i\n", ccnt);

    return !(fail_count == 0);
}
