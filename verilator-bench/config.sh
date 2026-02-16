#!/bin/bash
# verilator bench configuration
# edit these variables to point to your project

# path to your verilog source folder
export VERILATOR_SOURCE_FOLDER=/c/2w/ttsky-asic/raygaming-sphere-test

# name of your top module
export VERILATOR_TOP_MODULE=vga_raytracer.sv

# testbench to use (usually tb/tbGenericVga.v for tinytapeout projects)
export VERILATOR_TESTBENCH=tb/tbGenericVga.v

