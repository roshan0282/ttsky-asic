#!/bin/bash
# verilator bench configuration for raygaming-text-test
# edit these variables to point to your project

# path to your verilog source folder
export VERILATOR_SOURCE_FOLDER=/c/2w/ttsky-asic/raycasting

# name of your top module (module name, not filename)
export VERILATOR_TOP_MODULE=raycasterComplete

# testbench to use (usually tb/tbGenericVga.v for core modules)
export VERILATOR_TESTBENCH=tb/tbGenericVga.v

