# make run TEST=dsp_fir_block_f32

TEST       ?=

ROOT       :=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

TEST_DIR    =$(ROOT)/tests/$(TEST)

include $(TEST_DIR)/test_inc.mk

setup:
	mkdir -p gen

build: setup
	gcc $(TEST_FLG) $(TEST_SRC) $(ROOT)/main.c -o gen/runme

run: setup build
	./gen/runme