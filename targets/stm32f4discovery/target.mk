##############################################################
# INIT
##############################################################

TGT_SRC    :=
TGT_INC    :=
TGT_DEF    :=
TGT_OBJ    :=

# may be initialized/modified elsewhere with global settings
TGT_FLG    +=


##############################################################
# EXTERNAL
##############################################################


##############################################################
# TARGET
##############################################################

### ISA
TGT_ISA     = -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb 

### DEFINES
TGT_DEF    += -DSTM32F407xx

### INCLUDES
TGT_INC    += -I $(TGT_DIR)/.. -I $(TGT_DIR)

### FLAGS
TGT_FLG    += $(TGT_ISA) $(TGT_DEF) $(TGT_INC) -g3 -O2 -ffunction-sections -fdata-sections
TGT_LD     +=  -Wl,--gc-sections -static -Wl,--start-group -lc -lm -Wl,--end-group --specs=nano.specs -T $(TGT_DIR)/link.ld

### SOURCES
TGT_SRC    += $(TGT_DIR)/boardsupport.c
TGT_SRC    += $(TGT_DIR)/startup.S
TGT_SRC    += $(TGT_DIR)/syscalls.c
TGT_SRC    += $(TGT_DIR)/system_stm32f4.c

### OBJECTS
TGT_OBJ    +=$(patsubst %.c,%.o, $(patsubst %.S,%.o,$(notdir $(TGT_SRC))))
