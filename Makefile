# make run TEST=dsp_fir_block_f32
# make run TEST=dsp_fir_block_f32 TARGET=stm32f4discovery TOOL=armgcc

TEST       ?=
TARGET     ?=dummy
TOOL       ?=gcc

ROOT       :=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

TST_DIR     =$(ROOT)/tests/$(TEST)
TGT_DIR     =$(ROOT)/targets/$(TARGET)

include $(TST_DIR)/test.mk
include $(TGT_DIR)/target.mk

SRC         =$(TGT_SRC) $(TST_SRC) $(ROOT)/main.c
OBJ         =$(TGT_OBJ) $(TST_OBJ) $(patsubst %.c,%.o, $(notdir $(ROOT)/main.c))
FLG         =$(TGT_FLG) $(TST_FLG)

ifeq ($(TOOL),gcc)
    CC=gcc
	OBJDUMP=objdump
	EXE=embench_dsp
else ifeq ($(TOOL),armgcc)
    CC=arm-none-eabi-gcc
	OBJDUMP=arm-none-eabi-objdump
	EXE=embench_dsp.elf
endif

rebuild: clean build

clean:
	rm -rf gen

setup:
	mkdir -p gen

compile: setup
	cd gen && $(CC) $(FLG) $(SRC) -c

link:
	cd gen && $(CC) $(FLG) $(OBJ) $(TGT_LD) -o $(EXE)

disassemble:
	cd gen && $(OBJDUMP) -h -S $(EXE) > embench_dsp.list

build: compile link disassemble
	cd gen && cp embench_dsp* /Users/jhellar/STM32CubeIDE/workspace/embench_dsp/Debug/.

run: rebuild
	./gen/embench_dsp