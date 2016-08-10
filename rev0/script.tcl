############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project assign_intensity
set_top assign_intensity
add_files assign_intensity/src/assign_intensity.cpp
add_files -tb assign_intensity/testbench/assign_intensity_tb.cpp
open_solution "rev0"
set_part {xc7z045ffg900-2} -tool vivado
create_clock -period 6.66667 -name default
set_clock_uncertainty 0.63
source "./assign_intensity/rev0/directives.tcl"
csim_design -clean
csynth_design
cosim_design -rtl vhdl -tool xsim
export_design -format ip_catalog
