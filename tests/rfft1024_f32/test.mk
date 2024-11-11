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
TST_INC    +=$(DSP_INC)
TST_DEF    +=$(DSP_DEF)

### snr checker
TST_INC    +=-I $(CMN_DIR)
TST_SRC    +=$(CMN_DIR)/snr.c


##############################################################
# TEST
##############################################################

ifeq ($(CFG),)
  CFG       =default
  $(warning WARNING: CFG not set for dct4_512_f32. Defaulting to CFG=default.)
endif

### DEFINES
TST_DEF    +=

### INCLUDES
TST_INC    +=-I $(TST_DIR)
TST_INC    +=-I $(TST_DIR)/cfg/$(CFG)

### FLAGS
TST_FLG    +=$(TST_DEF)

### SOURCES
TST_SRC    +=$(TST_DIR)/test_main.c
TST_SRC    +=$(DSP_DIR)/source/TransformFunctions/arm_rfft_fast_f32.c
TST_SRC    +=$(DSP_DIR)/source/TransformFunctions/arm_rfft_fast_init_f32.c
TST_SRC    +=$(DSP_DIR)/source/TransformFunctions/arm_cfft_f32.c
TST_SRC    +=$(DSP_DIR)/source/TransformFunctions/arm_cfft_init_f32.c
TST_SRC    +=$(DSP_DIR)/source/TransformFunctions/arm_cfft_radix8_f32.c
TST_SRC    +=$(DSP_DIR)/source/TransformFunctions/arm_bitreversal2.c
TST_SRC    +=$(DSP_DIR)/source/CommonTables/CommonTables.c

# data files
TST_SRC    +=$(TST_DIR)/cfg/$(CFG)/in.c
TST_SRC    +=$(TST_DIR)/cfg/$(CFG)/out.c

### OBJECTS
TST_OBJ    +=$(patsubst %.c,%.o, $(patsubst %.S,%.o,$(notdir $(TST_SRC))))
