############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project assign_intensity
set_top assign_intensity
add_files assign_intensity/src/assign_intensity.cpp
add_files -tb assign_intensity/testbench/assign_intensity_tb.cpp
open_solution "rev2"
set_part {xc7z045ffg900-2}
create_clock -period 6.66667 -name default
set_clock_uncertainty 0.63
config_compile -name_max_length 30 -pipeline_loops 0
config_array_partition -auto_partition_threshold 4 -auto_promotion_threshold 64 -throughput_driven
#source "./assign_intensity/rev2/directives.tcl"
csim_design -clean -setup
csynth_design
cosim_design -trace_level all -compiled_library_dir "C:/Users/sakin/Desktop/pj_r_0001/assign_intensity/rev2/csim" -rtl vhdl -tool xsim
export_design -format ip_catalog -description "Assigns the pixel intensity to the nodemap area covered by the pixel" -vendor "lynntech" -display_name "assign_intensity"
