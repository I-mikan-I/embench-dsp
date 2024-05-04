#include <stdint.h>
#include <stdio.h>

#include "boardsupport.h"

/**
 * @brief test_main
 * 
 */
int test_main (void)
{
    start_trigger();
    printf("Hello, world.\n");
    stop_trigger();

    uint32_t ccnt = get_ccnt();
    printf("CCNT = %i\n", ccnt);

    return 0;
}
