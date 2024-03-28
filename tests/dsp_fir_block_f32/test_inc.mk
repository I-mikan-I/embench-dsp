##############################################################
# INIT
##############################################################

TEST_SRC    :=
TEST_INC    :=
TEST_DEF    :=
TEST_OBJ    :=

# may be initialized/modified elsewhere with global settings
TEST_FLG    +=


##############################################################
# EXTERNAL
##############################################################

### global options for all library users
include $(ROOT)/dsp_inc.mk
TEST_INC    += $(DSP_INC)
TEST_DEF    += $(DSP_DEF)


##############################################################
# TEST
##############################################################

### DEFINES
TEST_DEF    +=

### INCLUDES
TEST_INC    += -I $(TEST_DIR)

### FLAGS
TEST_FLG    += $(TEST_DEF) $(TEST_INC)

### SOURCES
TEST_SRC    += $(TEST_DIR)/test_main.c
TEST_SRC    += $(TEST_DIR)/math_helper.c
TEST_SRC    += $(DSP_DIR)/source/FilteringFunctions/embench_fir_f32.c
TEST_SRC    += $(DSP_DIR)/source/FilteringFunctions/embench_fir_init_f32.c

# data files
TEST_SRC    += $(TEST_DIR)/data/unfiltered_input.c
TEST_SRC    += $(TEST_DIR)/data/coeff_256.c $(TEST_DIR)/data/filtered_output_256.c

### OBJECTS
TEST_OBJ    +=$(patsubst %.c,%.o, $(patsubst %.S,%.o,$(notdir $(TEST_SRC))))
