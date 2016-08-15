
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set cinoutgroup [add_wave_group "C InOuts" -into $designtopgroup]
set node_count_group [add_wave_group node_count(memory) -into $cinoutgroup]
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_count_d1 -into $node_count_group -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_count_we1 -into $node_count_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_count_ce1 -into $node_count_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_count_address1 -into $node_count_group -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_count_q0 -into $node_count_group -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_count_ce0 -into $node_count_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_count_address0 -into $node_count_group -radix hex
set node_output_group [add_wave_group node_output(memory) -into $cinoutgroup]
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_output_d1 -into $node_output_group -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_output_we1 -into $node_output_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_output_ce1 -into $node_output_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_output_address1 -into $node_output_group -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_output_q0 -into $node_output_group -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_output_ce0 -into $node_output_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/node_output_address0 -into $node_output_group -radix hex
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set return_group [add_wave_group return(wire) -into $coutputgroup]
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/ap_return -into $return_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set intensity_group [add_wave_group intensity(wire) -into $cinputgroup]
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/intensity -into $intensity_group -radix hex
set alphabuf_group [add_wave_group alphabuf(memory) -into $cinputgroup]
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/alphabuf_q1 -into $alphabuf_group -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/alphabuf_ce1 -into $alphabuf_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/alphabuf_address1 -into $alphabuf_group -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/alphabuf_q0 -into $alphabuf_group -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/alphabuf_ce0 -into $alphabuf_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/alphabuf_address0 -into $alphabuf_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/ap_start -into $blocksiggroup
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/ap_done -into $blocksiggroup
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/ap_idle -into $blocksiggroup
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_assign_intensity_top/AESL_inst_assign_intensity/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_assign_intensity_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_assign_intensity_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_assign_intensity_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_assign_intensity_top/LENGTH_alphabuf -into $tb_portdepth_group -radix hex
add_wave /apatb_assign_intensity_top/LENGTH_intensity -into $tb_portdepth_group -radix hex
add_wave /apatb_assign_intensity_top/LENGTH_node_output -into $tb_portdepth_group -radix hex
add_wave /apatb_assign_intensity_top/LENGTH_node_count -into $tb_portdepth_group -radix hex
add_wave /apatb_assign_intensity_top/LENGTH_ap_return -into $tb_portdepth_group -radix hex
set tbcinoutgroup [add_wave_group "C InOuts" -into $testbenchgroup]
set tb_node_count_group [add_wave_group node_count(memory) -into $tbcinoutgroup]
add_wave /apatb_assign_intensity_top/node_count_d1 -into $tb_node_count_group -radix hex
add_wave /apatb_assign_intensity_top/node_count_we1 -into $tb_node_count_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/node_count_ce1 -into $tb_node_count_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/node_count_address1 -into $tb_node_count_group -radix hex
add_wave /apatb_assign_intensity_top/node_count_q0 -into $tb_node_count_group -radix hex
add_wave /apatb_assign_intensity_top/node_count_ce0 -into $tb_node_count_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/node_count_address0 -into $tb_node_count_group -radix hex
set tb_node_output_group [add_wave_group node_output(memory) -into $tbcinoutgroup]
add_wave /apatb_assign_intensity_top/node_output_d1 -into $tb_node_output_group -radix hex
add_wave /apatb_assign_intensity_top/node_output_we1 -into $tb_node_output_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/node_output_ce1 -into $tb_node_output_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/node_output_address1 -into $tb_node_output_group -radix hex
add_wave /apatb_assign_intensity_top/node_output_q0 -into $tb_node_output_group -radix hex
add_wave /apatb_assign_intensity_top/node_output_ce0 -into $tb_node_output_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/node_output_address0 -into $tb_node_output_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_return_group [add_wave_group return(wire) -into $tbcoutputgroup]
add_wave /apatb_assign_intensity_top/ap_return -into $tb_return_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_intensity_group [add_wave_group intensity(wire) -into $tbcinputgroup]
add_wave /apatb_assign_intensity_top/intensity -into $tb_intensity_group -radix hex
set tb_alphabuf_group [add_wave_group alphabuf(memory) -into $tbcinputgroup]
add_wave /apatb_assign_intensity_top/alphabuf_q1 -into $tb_alphabuf_group -radix hex
add_wave /apatb_assign_intensity_top/alphabuf_ce1 -into $tb_alphabuf_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/alphabuf_address1 -into $tb_alphabuf_group -radix hex
add_wave /apatb_assign_intensity_top/alphabuf_q0 -into $tb_alphabuf_group -radix hex
add_wave /apatb_assign_intensity_top/alphabuf_ce0 -into $tb_alphabuf_group -color #ffff00 -radix hex
add_wave /apatb_assign_intensity_top/alphabuf_address0 -into $tb_alphabuf_group -radix hex
save_wave_config assign_intensity.wcfg
run all
quit

