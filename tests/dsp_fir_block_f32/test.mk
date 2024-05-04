##############################################################
# INIT
##############################################################

TST_SRC    :=
TST_INC    :=
TST_DEF    :=
TST_OBJ    :=

# may be initialized/modified elsewhere with global settings
TST_FLG    +=


##############################################################
# EXTERNAL
##############################################################

### global options for all library users
include $(ROOT)/dsp_inc.mk
TST_INC    += $(DSP_INC)
TST_DEF    += $(DSP_DEF)


##############################################################
# TEST
##############################################################

### DEFINES
TST_DEF    +=

### INCLUDES
TST_INC    += -I $(TST_DIR)

### FLAGS
TST_FLG    += $(TST_DEF) $(TST_INC)

### SOURCES
TST_SRC    += $(TST_DIR)/test_main.c
TST_SRC    += $(TST_DIR)/math_helper.c
TST_SRC    += $(DSP_DIR)/source/FilteringFunctions/embench_fir_f32.c
TST_SRC    += $(DSP_DIR)/source/FilteringFunctions/embench_fir_init_f32.c

# data files
TST_SRC    += $(TST_DIR)/data/unfiltered_input.c
TST_SRC    += $(TST_DIR)/data/coeff_256.c $(TST_DIR)/data/filtered_output_256.c

### OBJECTS
TST_OBJ    +=$(patsubst %.c,%.o, $(patsubst %.S,%.o,$(notdir $(TST_SRC))))
