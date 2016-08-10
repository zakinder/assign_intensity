set C_TypeInfoList {{ 
"assign_intensity" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"alphabuf": [[], {"array": [ {"array": ["0", [4]]}, [4]]}] }, {"intensity": [[],"1"] }, {"node_output": [[], {"array": [ {"array": ["2", [4]]}, [4]]}] }, {"node_count": [[], {"array": [ {"array": ["3", [4]]}, [4]]}] }],[],""], 
"0": [ "uint_lut_t", {"typedef": [[[], {"scalar": "unsigned int"}],""]}], 
"1": [ "pixel_value_t", {"typedef": [[[], {"scalar": "unsigned short"}],""]}], 
"3": [ "nodemap_count_t", {"typedef": [[[], {"scalar": "unsigned int"}],""]}], 
"2": [ "nodemap_accum_t", {"typedef": [[[], {"scalar": "unsigned int"}],""]}]
}}
set moduleName assign_intensity
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {assign_intensity}
set C_modelType { int 32 }
set C_modelArgList {
	{ alphabuf int 32 regular {array 16 { 1 1 } 1 1 }  }
	{ intensity uint 16 regular  }
	{ node_output int 32 regular {array 16 { 1 0 } 1 1 }  }
	{ node_count int 32 regular {array 16 { 1 0 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "alphabuf", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "alphabuf","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}]} , 
 	{ "Name" : "intensity", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "intensity","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "node_output", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "node_output","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}]} , 
 	{ "Name" : "node_count", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "node_count","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ alphabuf_address0 sc_out sc_lv 4 signal 0 } 
	{ alphabuf_ce0 sc_out sc_logic 1 signal 0 } 
	{ alphabuf_q0 sc_in sc_lv 32 signal 0 } 
	{ alphabuf_address1 sc_out sc_lv 4 signal 0 } 
	{ alphabuf_ce1 sc_out sc_logic 1 signal 0 } 
	{ alphabuf_q1 sc_in sc_lv 32 signal 0 } 
	{ intensity sc_in sc_lv 16 signal 1 } 
	{ node_output_address0 sc_out sc_lv 4 signal 2 } 
	{ node_output_ce0 sc_out sc_logic 1 signal 2 } 
	{ node_output_q0 sc_in sc_lv 32 signal 2 } 
	{ node_output_address1 sc_out sc_lv 4 signal 2 } 
	{ node_output_ce1 sc_out sc_logic 1 signal 2 } 
	{ node_output_we1 sc_out sc_logic 1 signal 2 } 
	{ node_output_d1 sc_out sc_lv 32 signal 2 } 
	{ node_count_address0 sc_out sc_lv 4 signal 3 } 
	{ node_count_ce0 sc_out sc_logic 1 signal 3 } 
	{ node_count_q0 sc_in sc_lv 32 signal 3 } 
	{ node_count_address1 sc_out sc_lv 4 signal 3 } 
	{ node_count_ce1 sc_out sc_logic 1 signal 3 } 
	{ node_count_we1 sc_out sc_logic 1 signal 3 } 
	{ node_count_d1 sc_out sc_lv 32 signal 3 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "alphabuf_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "alphabuf", "role": "address0" }} , 
 	{ "name": "alphabuf_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "alphabuf", "role": "ce0" }} , 
 	{ "name": "alphabuf_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "alphabuf", "role": "q0" }} , 
 	{ "name": "alphabuf_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "alphabuf", "role": "address1" }} , 
 	{ "name": "alphabuf_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "alphabuf", "role": "ce1" }} , 
 	{ "name": "alphabuf_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "alphabuf", "role": "q1" }} , 
 	{ "name": "intensity", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "intensity", "role": "default" }} , 
 	{ "name": "node_output_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "node_output", "role": "address0" }} , 
 	{ "name": "node_output_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "node_output", "role": "ce0" }} , 
 	{ "name": "node_output_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "node_output", "role": "q0" }} , 
 	{ "name": "node_output_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "node_output", "role": "address1" }} , 
 	{ "name": "node_output_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "node_output", "role": "ce1" }} , 
 	{ "name": "node_output_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "node_output", "role": "we1" }} , 
 	{ "name": "node_output_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "node_output", "role": "d1" }} , 
 	{ "name": "node_count_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "node_count", "role": "address0" }} , 
 	{ "name": "node_count_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "node_count", "role": "ce0" }} , 
 	{ "name": "node_count_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "node_count", "role": "q0" }} , 
 	{ "name": "node_count_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "node_count", "role": "address1" }} , 
 	{ "name": "node_count_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "node_count", "role": "ce1" }} , 
 	{ "name": "node_count_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "node_count", "role": "we1" }} , 
 	{ "name": "node_count_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "node_count", "role": "d1" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"], "CDFG" : "assign_intensity", "VariableLatency" : "1", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "ProcessNetwork" : "0", "Combinational" : "0", "ControlExist" : "1",
		"Port" : [
		{"Name" : "alphabuf", "Type" : "Memory", "Direction" : "I", "BlockSignal" : [], "SubConnect" : []}, 
		{"Name" : "intensity", "Type" : "None", "Direction" : "I", "BlockSignal" : [], "SubConnect" : []}, 
		{"Name" : "node_output", "Type" : "Memory", "Direction" : "IO", "BlockSignal" : [], "SubConnect" : []}, 
		{"Name" : "node_count", "Type" : "Memory", "Direction" : "IO", "BlockSignal" : [], "SubConnect" : []}],
		"WaitState" : [],
		"SubBlockPort" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_fadd_32ns_32ns_32_7_full_dsp_U0", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_fmul_32ns_32ns_32_4_max_dsp_U1", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_uitofp_64ns_32_6_U2", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_frecip_32ns_32ns_32_11_full_dsp_U3", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_mul_48s_32ns_48_6_U4", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_mul_36ns_48ns_52_6_U5", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_mul_48s_32ns_48_6_U6", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_mul_36ns_48ns_52_6_U7", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_mul_48s_32ns_48_6_U8", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_mul_36ns_48ns_52_6_U9", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_mul_32ns_48s_48_6_U10", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.assign_intensity_mul_48ns_36ns_52_6_U11", "Parent" : "0", "Child" : []}]}

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "115", "Max" : "115"}
	, {"Name" : "Interval", "Min" : "116", "Max" : "116"}
]}

set Spec2ImplPortList { 
	alphabuf { ap_memory {  { alphabuf_address0 mem_address 1 4 }  { alphabuf_ce0 mem_ce 1 1 }  { alphabuf_q0 mem_dout 0 32 }  { alphabuf_address1 mem_address 1 4 }  { alphabuf_ce1 mem_ce 1 1 }  { alphabuf_q1 mem_dout 0 32 } } }
	intensity { ap_none {  { intensity in_data 0 16 } } }
	node_output { ap_memory {  { node_output_address0 mem_address 1 4 }  { node_output_ce0 mem_ce 1 1 }  { node_output_q0 mem_dout 0 32 }  { node_output_address1 mem_address 1 4 }  { node_output_ce1 mem_ce 1 1 }  { node_output_we1 mem_we 1 1 }  { node_output_d1 mem_din 1 32 } } }
	node_count { ap_memory {  { node_count_address0 mem_address 1 4 }  { node_count_ce0 mem_ce 1 1 }  { node_count_q0 mem_dout 0 32 }  { node_count_address1 mem_address 1 4 }  { node_count_ce1 mem_ce 1 1 }  { node_count_we1 mem_we 1 1 }  { node_count_d1 mem_din 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
