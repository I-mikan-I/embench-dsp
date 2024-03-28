# make run TEST=dsp_fir_block_f32

TEST       ?=

ROOT       :=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

TEST_DIR    =$(ROOT)/tests/$(TEST)

include $(TEST_DIR)/test_inc.mk

run:
	mkdir -p gen
	gcc $(TEST_FLG) $(TEST_DEF) $(TEST_INC) $(TEST_SRC) $(ROOT)/main.c -o gen/runme
	./gen/runme