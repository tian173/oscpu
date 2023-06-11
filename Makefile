BUILD_DIR = ./build

export PATH := $(PATH):$(abspath ./utils)

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain RV32ETop -td $(BUILD_DIR) -X low -X verilog

help:
	mill -i __.test.runMain Elaborate --help

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean

INC_DIR += difftest
VFLAGS += $(addprefix -I, $(INC_DIR))

PWD = $(shell pwd)
VFLAGS += --exe --trace-fst --trace-underscore --timescale "1ns/1ns"
# VFLAGS += --trace-threads 4 --threads 3
VFLAGS += --autoflush -Wno-lint

CORE = $(shell find build | grep -xo .*\.v)
CSRCS = $(shell find difftest | grep -xo --extended-regexp '.*\.(cpp|c|cc)')

LDFLAGS = -ldl -O3 -Og -fPIE
CFLAGS = -Wno-deprecated-declarations -O3 -Og -pthread -fPIE -g

TRACE?=1
DIFF?=1

ifeq ($(TRACE),1)
	CFLAGS += -DTRACE
endif

NAME = top
VFLAGS += --top $(NAME)
ifeq ($(DIFF),1)
	CFLAGS += -DDIFFTEST
endif

VSRCS = $(CORE)

PROGRAM_DIR = ./bin
RISCV-TESTS = ./riscv-tests
IMG ?= $(notdir $(wildcard $(PROGRAM_DIR)/*.bin))
RISCV-IMG ?=$(notdir $(wildcard $(RISCV-TESTS)/*.bin))
BIN_F = -riscv32e-nemu.bin
aaa:
	@echo $(IMG)
BIN?=add-longlong-riscv32e-nemuB

compile-verilator:
	verilator $(VFLAGS) -j 8 --cc $(VSRCS) -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LDFLAGS)" --exe $(CSRCS)
	make -s OPT_FAST="-O3" -j -C ./obj_dir -f V$(NAME).mk V$(NAME)

COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m

RESULT = ./result
choose ?= ./bin
bbb:
	@echo $(RISCV-IMG)

%.bin:
	@mkdir -p $(RESULT)
	@./obj_dir/Vtop $(choose)/$@ > $(RESULT)/$@.txt
	@if grep -q 'HIT GOOD TRAP' $(RESULT)/$@.txt ; then \
             echo "[            $@    \t] \e[32mpass!\e[0m" ;\
	     rm $(RESULT)/$@.txt; \
        else \
             echo "[            $@    \t] \e[31mfail!\e[0m see $(RESULT)/$@.txt" ; \
        fi
riscv_tests:compile-verilator $(RISCV-IMG)

cpu_tests:compile-verilator $(IMG)

difftest:compile-verilator 
	@time ./obj_dir/Vtop $(IMG) 
clean_result:
	 -rm -rf $(RESULT)/*.txt

.PHONY: difftest clean_result





-include ../Makefile
