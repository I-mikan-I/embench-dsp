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

### DEFINES
TGT_DEF    +=

### INCLUDES
TGT_INC    +=-I $(TGT_DIR)/..

### FLAGS
TGT_FLG    +=$(TGT_DEF)
TGT_LD     +=

### SOURCES
TGT_SRC    +=$(TGT_DIR)/boardsupport.c

### OBJECTS
TGT_OBJ    +=$(patsubst %.c,%.o, $(patsubst %.S,%.o,$(notdir $(TGT_SRC))))
