create_project prj -part xc7z045ffg900-2 -force
set_property target_language vhdl [current_project]
set vivado_ver [version -short]
source "C:/Users/sakin/Desktop/pj_r_0001/assign_intensity/rev2/syn/vhdl/assign_intensity_ap_fadd_5_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips assign_intensity_ap_fadd_5_full_dsp_32]]
}
source "C:/Users/sakin/Desktop/pj_r_0001/assign_intensity/rev2/syn/vhdl/assign_intensity_ap_fmul_2_max_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips assign_intensity_ap_fmul_2_max_dsp_32]]
}
source "C:/Users/sakin/Desktop/pj_r_0001/assign_intensity/rev2/syn/vhdl/assign_intensity_ap_frecip_9_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips assign_intensity_ap_frecip_9_full_dsp_32]]
}
source "C:/Users/sakin/Desktop/pj_r_0001/assign_intensity/rev2/syn/vhdl/assign_intensity_ap_uitofp_4_no_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips assign_intensity_ap_uitofp_4_no_dsp_64]]
}
