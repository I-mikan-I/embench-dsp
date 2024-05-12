TEST       ?=hello
TARGET     ?=dummy
TOOL       ?=gcc
OPT        ?=speed
RUNDIR     ?=/Users/$(USER)/STM32CubeIDE/workspace/embench_dsp/Debug/.

ROOT       :=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

TST_DIR     =$(ROOT)/tests/$(TEST)
TGT_DIR     =$(ROOT)/targets/$(TARGET)

include $(TST_DIR)/test.mk
include $(TGT_DIR)/target.mk

SRC         =$(TGT_SRC) $(TST_SRC) $(ROOT)/main.c
OBJ         =$(TGT_OBJ) $(TST_OBJ) $(patsubst %.c,%.o, $(notdir $(ROOT)/main.c))
INC         =$(TGT_INC) $(TST_INC)

ifeq ($(TOOL),gcc)
    CC        =gcc
	OBJDUMP   =objdump
	EXE       =embench_dsp
	SZ        =size
	SZ_FLG    =
else ifeq ($(TOOL),armgcc)
    CC        =arm-none-eabi-gcc
	OBJDUMP   =arm-none-eabi-objdump
	SZ        =arm-none-eabi-size
	EXE       =embench_dsp.elf
	CC_FLG    =$(TGT_FLG) -g3 -ffunction-sections -fdata-sections $(TST_FLG)
	LD_FLG    = -Wl,--gc-sections -static -Wl,--start-group -lc -lm -Wl,--end-group --specs=nano.specs $(TGT_LD)
	SZ_FLG    = --format=GNU
endif

ifeq ($(OPT),speed)
	CC_FLG += -O2
else ifeq ($(OPT),size)
	CC_FLG += -Os
endif

rebuild: clean build

clean:
	rm -rf gen

setup:
	mkdir -p gen

compile: setup
	cd gen && $(CC) $(CC_FLG) $(INC) -c $(SRC)

link:
	cd gen && $(CC) $(CC_FLG) $(LD_FLG) $(OBJ) -o $(EXE)

disassemble:
	cd gen && $(OBJDUMP) -h -S $(EXE) > embench_dsp.list

size:
	cd gen && $(SZ) $(SZ_FLG) $(EXE) > embench_dsp.size

build: compile link disassemble size
	cd gen && cp embench_dsp* $(RUNDIR)

# native build/run only
run: clean compile link disassemble size
	./gen/embench_dsp