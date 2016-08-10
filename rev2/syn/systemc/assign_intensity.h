// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _assign_intensity_HH_
#define _assign_intensity_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "assign_intensity_fadd_32ns_32ns_32_7_full_dsp.h"
#include "assign_intensity_fmul_32ns_32ns_32_4_max_dsp.h"
#include "assign_intensity_uitofp_64ns_32_6.h"
#include "assign_intensity_frecip_32ns_32ns_32_11_full_dsp.h"
#include "assign_intensity_mul_48s_32ns_48_6.h"
#include "assign_intensity_mul_36ns_48ns_52_6.h"
#include "assign_intensity_mul_32ns_48s_48_6.h"
#include "assign_intensity_mul_48ns_36ns_52_6.h"

namespace ap_rtl {

struct assign_intensity : public sc_module {
    // Port declarations 28
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > alphabuf_address0;
    sc_out< sc_logic > alphabuf_ce0;
    sc_in< sc_lv<32> > alphabuf_q0;
    sc_out< sc_lv<4> > alphabuf_address1;
    sc_out< sc_logic > alphabuf_ce1;
    sc_in< sc_lv<32> > alphabuf_q1;
    sc_in< sc_lv<16> > intensity;
    sc_out< sc_lv<4> > node_output_address0;
    sc_out< sc_logic > node_output_ce0;
    sc_in< sc_lv<32> > node_output_q0;
    sc_out< sc_lv<4> > node_output_address1;
    sc_out< sc_logic > node_output_ce1;
    sc_out< sc_logic > node_output_we1;
    sc_out< sc_lv<32> > node_output_d1;
    sc_out< sc_lv<4> > node_count_address0;
    sc_out< sc_logic > node_count_ce0;
    sc_in< sc_lv<32> > node_count_q0;
    sc_out< sc_lv<4> > node_count_address1;
    sc_out< sc_logic > node_count_ce1;
    sc_out< sc_logic > node_count_we1;
    sc_out< sc_lv<32> > node_count_d1;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<32> > ap_var_for_const3;
    sc_signal< sc_lv<32> > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const2;


    // Module declarations
    assign_intensity(sc_module_name name);
    SC_HAS_PROCESS(assign_intensity);

    ~assign_intensity();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    assign_intensity_fadd_32ns_32ns_32_7_full_dsp<1,7,32,32,32>* assign_intensity_fadd_32ns_32ns_32_7_full_dsp_U0;
    assign_intensity_fmul_32ns_32ns_32_4_max_dsp<1,4,32,32,32>* assign_intensity_fmul_32ns_32ns_32_4_max_dsp_U1;
    assign_intensity_uitofp_64ns_32_6<1,6,64,32>* assign_intensity_uitofp_64ns_32_6_U2;
    assign_intensity_frecip_32ns_32ns_32_11_full_dsp<1,11,32,32,32>* assign_intensity_frecip_32ns_32ns_32_11_full_dsp_U3;
    assign_intensity_mul_48s_32ns_48_6<1,6,48,32,48>* assign_intensity_mul_48s_32ns_48_6_U4;
    assign_intensity_mul_36ns_48ns_52_6<1,6,36,48,52>* assign_intensity_mul_36ns_48ns_52_6_U5;
    assign_intensity_mul_48s_32ns_48_6<1,6,48,32,48>* assign_intensity_mul_48s_32ns_48_6_U6;
    assign_intensity_mul_36ns_48ns_52_6<1,6,36,48,52>* assign_intensity_mul_36ns_48ns_52_6_U7;
    assign_intensity_mul_48s_32ns_48_6<1,6,48,32,48>* assign_intensity_mul_48s_32ns_48_6_U8;
    assign_intensity_mul_36ns_48ns_52_6<1,6,36,48,52>* assign_intensity_mul_36ns_48ns_52_6_U9;
    assign_intensity_mul_32ns_48s_48_6<1,6,32,48,48>* assign_intensity_mul_32ns_48s_48_6_U10;
    assign_intensity_mul_48ns_36ns_52_6<1,6,48,36,52>* assign_intensity_mul_48ns_36ns_52_6_U11;
    sc_signal< sc_lv<48> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_63;
    sc_signal< sc_lv<2> > j4_reg_381;
    sc_signal< sc_lv<2> > j_3_reg_392;
    sc_signal< sc_lv<2> > j_s_reg_403;
    sc_signal< sc_lv<2> > j_2_reg_414;
    sc_signal< sc_lv<32> > grp_fu_443_p2;
    sc_signal< sc_lv<32> > reg_455;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_116;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_123;
    sc_signal< sc_logic > ap_sig_cseq_ST_st6_fsm_5;
    sc_signal< bool > ap_sig_131;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_7;
    sc_signal< bool > ap_sig_139;
    sc_signal< sc_lv<32> > reg_459;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_40;
    sc_signal< bool > ap_sig_148;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it2;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it3;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it4;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it5;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it6;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it7;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it8;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it9;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it10;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it11;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it12;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it13;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it14;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg0_fsm_42;
    sc_signal< bool > ap_sig_186;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it1;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it2;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it3;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it4;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it5;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it6;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it7;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it8;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it9;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it10;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it11;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it12;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it13;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it14;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp2_stg0_fsm_44;
    sc_signal< bool > ap_sig_224;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it1;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it2;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it3;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it4;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it5;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it6;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it7;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it8;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it9;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it10;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it11;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it12;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it13;
    sc_signal< sc_logic > ap_reg_ppiten_pp2_it14;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp3_stg0_fsm_46;
    sc_signal< bool > ap_sig_263;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it1;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it2;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it3;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it4;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it5;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it6;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it7;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it8;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it9;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it10;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it11;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it12;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it13;
    sc_signal< sc_logic > ap_reg_ppiten_pp3_it14;
    sc_signal< sc_lv<32> > reg_464;
    sc_signal< sc_lv<32> > reg_468;
    sc_signal< sc_lv<32> > grp_fu_472_p2;
    sc_signal< sc_lv<32> > reg_478;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_312;
    sc_signal< sc_logic > ap_sig_cseq_ST_st9_fsm_8;
    sc_signal< bool > ap_sig_319;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_348;
    sc_signal< sc_lv<32> > val_assign_1_reg_992;
    sc_signal< sc_logic > ap_sig_cseq_ST_st7_fsm_6;
    sc_signal< bool > ap_sig_364;
    sc_signal< sc_lv<32> > val_assign_2_reg_1017;
    sc_signal< sc_lv<33> > tmp_fu_489_p2;
    sc_signal< sc_lv<33> > tmp_reg_1032;
    sc_signal< sc_lv<34> > cumsum_V_fu_515_p2;
    sc_signal< sc_lv<34> > cumsum_V_reg_1037;
    sc_signal< sc_logic > ap_sig_cseq_ST_st10_fsm_9;
    sc_signal< bool > ap_sig_382;
    sc_signal< sc_lv<1> > tmp_i_fu_521_p2;
    sc_signal< sc_lv<1> > tmp_i_reg_1043;
    sc_signal< sc_logic > ap_sig_cseq_ST_st11_fsm_10;
    sc_signal< bool > ap_sig_391;
    sc_signal< sc_logic > ap_sig_cseq_ST_st12_fsm_11;
    sc_signal< bool > ap_sig_400;
    sc_signal< sc_lv<32> > grp_fu_435_p1;
    sc_signal< sc_lv<32> > tmp_1_i_reg_1053;
    sc_signal< sc_logic > ap_sig_cseq_ST_st17_fsm_16;
    sc_signal< bool > ap_sig_412;
    sc_signal< sc_lv<32> > grp_fu_438_p2;
    sc_signal< sc_lv<32> > tmp_i_8_reg_1058;
    sc_signal< sc_logic > ap_sig_cseq_ST_st28_fsm_27;
    sc_signal< bool > ap_sig_422;
    sc_signal< sc_lv<32> > grp_fu_430_p2;
    sc_signal< sc_lv<32> > tmp_2_i_reg_1063;
    sc_signal< sc_logic > ap_sig_cseq_ST_st32_fsm_31;
    sc_signal< bool > ap_sig_432;
    sc_signal< sc_lv<8> > loc_V_reg_1068;
    sc_signal< sc_logic > ap_sig_cseq_ST_st39_fsm_38;
    sc_signal< bool > ap_sig_442;
    sc_signal< sc_lv<23> > loc_V_1_fu_544_p1;
    sc_signal< sc_lv<23> > loc_V_1_reg_1074;
    sc_signal< sc_lv<48> > rec_V_fu_647_p3;
    sc_signal< sc_lv<48> > rec_V_reg_1079;
    sc_signal< sc_logic > ap_sig_cseq_ST_st40_fsm_39;
    sc_signal< bool > ap_sig_454;
    sc_signal< sc_lv<36> > r_V_4_fu_654_p3;
    sc_signal< sc_lv<36> > r_V_4_reg_1087;
    sc_signal< sc_lv<4> > node_output_addr_reg_1097;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter1;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter2;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter3;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter4;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter5;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter6;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter7;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter8;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter9;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter10;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter11;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter12;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_reg_1097_pp0_iter13;
    sc_signal< sc_lv<4> > node_count_addr_reg_1103;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_reg_1103_pp0_iter1;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_reg_1103_pp0_iter2;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_reg_1103_pp0_iter3;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_reg_1103_pp0_iter4;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_reg_1103_pp0_iter5;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_reg_1103_pp0_iter6;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_reg_1103_pp0_iter7;
    sc_signal< sc_lv<2> > j_1_fu_669_p2;
    sc_signal< sc_lv<2> > j_1_reg_1109;
    sc_signal< sc_lv<1> > exitcond_fu_675_p2;
    sc_signal< sc_lv<1> > exitcond_reg_1114;
    sc_signal< sc_lv<48> > grp_fu_685_p2;
    sc_signal< sc_lv<48> > alpha_norm_V_reg_1123;
    sc_signal< sc_lv<32> > tmp_19_fu_690_p1;
    sc_signal< sc_lv<32> > tmp_19_reg_1128;
    sc_signal< sc_lv<52> > rhs_V_cast_fu_703_p1;
    sc_signal< sc_lv<52> > rhs_V_cast_reg_1138;
    sc_signal< sc_lv<32> > phitmp_reg_1146;
    sc_signal< sc_lv<4> > node_output_addr_1_reg_1156;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter1;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter2;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter3;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter4;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter5;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter6;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter7;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter8;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter9;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter10;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter11;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter12;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_1_reg_1156_pp1_iter13;
    sc_signal< sc_lv<4> > node_count_addr_1_reg_1162;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_1_reg_1162_pp1_iter1;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_1_reg_1162_pp1_iter2;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_1_reg_1162_pp1_iter3;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_1_reg_1162_pp1_iter4;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_1_reg_1162_pp1_iter5;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_1_reg_1162_pp1_iter6;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_1_reg_1162_pp1_iter7;
    sc_signal< sc_lv<2> > j_1_1_fu_743_p2;
    sc_signal< sc_lv<2> > j_1_1_reg_1168;
    sc_signal< sc_lv<1> > exitcond_1_fu_749_p2;
    sc_signal< sc_lv<1> > exitcond_1_reg_1173;
    sc_signal< sc_lv<48> > grp_fu_759_p2;
    sc_signal< sc_lv<48> > alpha_norm_V_1_reg_1182;
    sc_signal< sc_lv<32> > tmp_20_fu_764_p1;
    sc_signal< sc_lv<32> > tmp_20_reg_1187;
    sc_signal< sc_lv<32> > phitmp_1_reg_1197;
    sc_signal< sc_lv<4> > node_output_addr_2_reg_1207;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter1;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter2;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter3;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter4;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter5;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter6;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter7;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter8;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter9;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter10;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter11;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter12;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_2_reg_1207_pp2_iter13;
    sc_signal< sc_lv<4> > node_count_addr_2_reg_1213;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_2_reg_1213_pp2_iter1;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_2_reg_1213_pp2_iter2;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_2_reg_1213_pp2_iter3;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_2_reg_1213_pp2_iter4;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_2_reg_1213_pp2_iter5;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_2_reg_1213_pp2_iter6;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_2_reg_1213_pp2_iter7;
    sc_signal< sc_lv<2> > j_1_2_fu_813_p2;
    sc_signal< sc_lv<2> > j_1_2_reg_1219;
    sc_signal< sc_lv<1> > exitcond_2_fu_819_p2;
    sc_signal< sc_lv<1> > exitcond_2_reg_1224;
    sc_signal< sc_lv<48> > grp_fu_829_p2;
    sc_signal< sc_lv<48> > alpha_norm_V_2_reg_1233;
    sc_signal< sc_lv<32> > tmp_21_fu_834_p1;
    sc_signal< sc_lv<32> > tmp_21_reg_1238;
    sc_signal< sc_lv<32> > phitmp_2_reg_1248;
    sc_signal< sc_lv<4> > node_output_addr_3_reg_1258;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter1;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter2;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter3;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter4;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter5;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter6;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter7;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter8;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter9;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter10;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter11;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter12;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_output_addr_3_reg_1258_pp3_iter13;
    sc_signal< sc_lv<4> > node_count_addr_3_reg_1264;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_3_reg_1264_pp3_iter1;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_3_reg_1264_pp3_iter2;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_3_reg_1264_pp3_iter3;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_3_reg_1264_pp3_iter4;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_3_reg_1264_pp3_iter5;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_3_reg_1264_pp3_iter6;
    sc_signal< sc_lv<4> > ap_reg_ppstg_node_count_addr_3_reg_1264_pp3_iter7;
    sc_signal< sc_lv<2> > j_1_3_fu_887_p2;
    sc_signal< sc_lv<2> > j_1_3_reg_1270;
    sc_signal< sc_lv<1> > exitcond_3_fu_893_p2;
    sc_signal< sc_lv<1> > exitcond_3_reg_1275;
    sc_signal< sc_lv<48> > grp_fu_903_p2;
    sc_signal< sc_lv<48> > alpha_norm_V_3_reg_1284;
    sc_signal< sc_lv<32> > tmp_22_fu_908_p1;
    sc_signal< sc_lv<32> > tmp_22_reg_1289;
    sc_signal< sc_lv<32> > phitmp_3_reg_1299;
    sc_signal< sc_logic > ap_sig_cseq_ST_st56_fsm_41;
    sc_signal< bool > ap_sig_741;
    sc_signal< sc_logic > ap_sig_cseq_ST_st72_fsm_43;
    sc_signal< bool > ap_sig_751;
    sc_signal< sc_logic > ap_sig_cseq_ST_st88_fsm_45;
    sc_signal< bool > ap_sig_761;
    sc_signal< sc_lv<2> > j4_phi_fu_385_p4;
    sc_signal< sc_lv<2> > j_3_phi_fu_396_p4;
    sc_signal< sc_lv<2> > j_s_phi_fu_407_p4;
    sc_signal< sc_lv<2> > j_2_phi_fu_418_p4;
    sc_signal< sc_lv<64> > tmp_s_fu_662_p1;
    sc_signal< sc_lv<64> > tmp_17_cast_fu_736_p1;
    sc_signal< sc_lv<64> > tmp_16_fu_802_p3;
    sc_signal< sc_lv<64> > tmp_19_cast_fu_880_p1;
    sc_signal< sc_lv<32> > tmp_7_fu_694_p2;
    sc_signal< sc_lv<32> > tmp_33_1_fu_768_p2;
    sc_signal< sc_lv<32> > tmp_33_2_fu_838_p2;
    sc_signal< sc_lv<32> > tmp_33_3_fu_912_p2;
    sc_signal< sc_lv<32> > tmp_9_fu_722_p2;
    sc_signal< sc_lv<32> > tmp_35_1_fu_792_p2;
    sc_signal< sc_lv<32> > tmp_35_2_fu_862_p2;
    sc_signal< sc_lv<32> > tmp_35_3_fu_936_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st33_fsm_32;
    sc_signal< bool > ap_sig_839;
    sc_signal< sc_logic > ap_sig_cseq_ST_st29_fsm_28;
    sc_signal< bool > ap_sig_849;
    sc_signal< sc_lv<64> > grp_fu_435_p0;
    sc_signal< sc_logic > ap_sig_cseq_ST_st18_fsm_17;
    sc_signal< bool > ap_sig_858;
    sc_signal< sc_lv<32> > grp_fu_449_p2;
    sc_signal< sc_lv<33> > tmp_10_cast_fu_486_p1;
    sc_signal< sc_lv<33> > cumsum_V_cast_fu_482_p1;
    sc_signal< sc_lv<33> > tmp_13_cast_fu_498_p1;
    sc_signal< sc_lv<33> > tmp_7_cast_fu_495_p1;
    sc_signal< sc_lv<33> > tmp9_fu_505_p2;
    sc_signal< sc_lv<34> > tmp10_cast_fu_502_p1;
    sc_signal< sc_lv<34> > tmp11_cast_fu_511_p1;
    sc_signal< sc_lv<32> > grp_fu_425_p2;
    sc_signal< sc_lv<32> > p_Val2_s_fu_530_p1;
    sc_signal< sc_lv<24> > p_Result_s_fu_548_p3;
    sc_signal< sc_lv<9> > tmp_i_i_i_i_cast_fu_559_p1;
    sc_signal< sc_lv<9> > sh_assign_fu_562_p2;
    sc_signal< sc_lv<8> > tmp_4_i_i_i_fu_576_p2;
    sc_signal< sc_lv<1> > isNeg_fu_568_p3;
    sc_signal< sc_lv<9> > tmp_4_i_i_i_cast_fu_581_p1;
    sc_signal< sc_lv<9> > sh_assign_1_fu_585_p3;
    sc_signal< sc_lv<32> > sh_assign_1_cast_fu_593_p1;
    sc_signal< sc_lv<24> > sh_assign_1_cast_cast_fu_597_p1;
    sc_signal< sc_lv<110> > tmp_2_i_i_i_fu_555_p1;
    sc_signal< sc_lv<110> > tmp_6_i_i_i_fu_601_p1;
    sc_signal< sc_lv<24> > tmp_7_i_i_i_fu_605_p2;
    sc_signal< sc_lv<1> > tmp_17_fu_617_p3;
    sc_signal< sc_lv<110> > tmp_9_i_i_i_fu_611_p2;
    sc_signal< sc_lv<48> > tmp_6_fu_625_p1;
    sc_signal< sc_lv<48> > tmp_8_fu_629_p4;
    sc_signal< sc_lv<48> > tmp_14_fu_639_p3;
    sc_signal< sc_lv<32> > grp_fu_685_p1;
    sc_signal< sc_lv<36> > grp_fu_706_p0;
    sc_signal< sc_lv<48> > grp_fu_706_p1;
    sc_signal< sc_lv<52> > grp_fu_706_p2;
    sc_signal< sc_lv<3> > tmp_15_fu_728_p3;
    sc_signal< sc_lv<32> > grp_fu_759_p1;
    sc_signal< sc_lv<36> > grp_fu_777_p0;
    sc_signal< sc_lv<48> > grp_fu_777_p1;
    sc_signal< sc_lv<52> > grp_fu_777_p2;
    sc_signal< sc_lv<3> > j_22_cast_fu_798_p1;
    sc_signal< sc_lv<32> > grp_fu_829_p1;
    sc_signal< sc_lv<36> > grp_fu_847_p0;
    sc_signal< sc_lv<48> > grp_fu_847_p1;
    sc_signal< sc_lv<52> > grp_fu_847_p2;
    sc_signal< sc_lv<3> > tmp_18_fu_868_p3;
    sc_signal< sc_lv<4> > tmp_19_cast5_fu_876_p1;
    sc_signal< sc_lv<32> > grp_fu_903_p0;
    sc_signal< sc_lv<48> > grp_fu_921_p0;
    sc_signal< sc_lv<36> > grp_fu_921_p1;
    sc_signal< sc_lv<52> > grp_fu_921_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st104_fsm_47;
    sc_signal< bool > ap_sig_1171;
    sc_signal< sc_lv<48> > ap_NS_fsm;
    sc_signal< sc_lv<48> > grp_fu_685_p10;
    sc_signal< sc_lv<52> > grp_fu_706_p00;
    sc_signal< sc_lv<52> > grp_fu_706_p10;
    sc_signal< sc_lv<48> > grp_fu_759_p10;
    sc_signal< sc_lv<52> > grp_fu_777_p10;
    sc_signal< sc_lv<48> > grp_fu_829_p10;
    sc_signal< sc_lv<52> > grp_fu_847_p10;
    sc_signal< sc_lv<48> > grp_fu_903_p00;
    sc_signal< sc_lv<52> > grp_fu_921_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<48> ap_ST_st1_fsm_0;
    static const sc_lv<48> ap_ST_st2_fsm_1;
    static const sc_lv<48> ap_ST_st3_fsm_2;
    static const sc_lv<48> ap_ST_st4_fsm_3;
    static const sc_lv<48> ap_ST_st5_fsm_4;
    static const sc_lv<48> ap_ST_st6_fsm_5;
    static const sc_lv<48> ap_ST_st7_fsm_6;
    static const sc_lv<48> ap_ST_st8_fsm_7;
    static const sc_lv<48> ap_ST_st9_fsm_8;
    static const sc_lv<48> ap_ST_st10_fsm_9;
    static const sc_lv<48> ap_ST_st11_fsm_10;
    static const sc_lv<48> ap_ST_st12_fsm_11;
    static const sc_lv<48> ap_ST_st13_fsm_12;
    static const sc_lv<48> ap_ST_st14_fsm_13;
    static const sc_lv<48> ap_ST_st15_fsm_14;
    static const sc_lv<48> ap_ST_st16_fsm_15;
    static const sc_lv<48> ap_ST_st17_fsm_16;
    static const sc_lv<48> ap_ST_st18_fsm_17;
    static const sc_lv<48> ap_ST_st19_fsm_18;
    static const sc_lv<48> ap_ST_st20_fsm_19;
    static const sc_lv<48> ap_ST_st21_fsm_20;
    static const sc_lv<48> ap_ST_st22_fsm_21;
    static const sc_lv<48> ap_ST_st23_fsm_22;
    static const sc_lv<48> ap_ST_st24_fsm_23;
    static const sc_lv<48> ap_ST_st25_fsm_24;
    static const sc_lv<48> ap_ST_st26_fsm_25;
    static const sc_lv<48> ap_ST_st27_fsm_26;
    static const sc_lv<48> ap_ST_st28_fsm_27;
    static const sc_lv<48> ap_ST_st29_fsm_28;
    static const sc_lv<48> ap_ST_st30_fsm_29;
    static const sc_lv<48> ap_ST_st31_fsm_30;
    static const sc_lv<48> ap_ST_st32_fsm_31;
    static const sc_lv<48> ap_ST_st33_fsm_32;
    static const sc_lv<48> ap_ST_st34_fsm_33;
    static const sc_lv<48> ap_ST_st35_fsm_34;
    static const sc_lv<48> ap_ST_st36_fsm_35;
    static const sc_lv<48> ap_ST_st37_fsm_36;
    static const sc_lv<48> ap_ST_st38_fsm_37;
    static const sc_lv<48> ap_ST_st39_fsm_38;
    static const sc_lv<48> ap_ST_st40_fsm_39;
    static const sc_lv<48> ap_ST_pp0_stg0_fsm_40;
    static const sc_lv<48> ap_ST_st56_fsm_41;
    static const sc_lv<48> ap_ST_pp1_stg0_fsm_42;
    static const sc_lv<48> ap_ST_st72_fsm_43;
    static const sc_lv<48> ap_ST_pp2_stg0_fsm_44;
    static const sc_lv<48> ap_ST_st88_fsm_45;
    static const sc_lv<48> ap_ST_pp3_stg0_fsm_46;
    static const sc_lv<48> ap_ST_st104_fsm_47;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_true;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<32> ap_const_lv32_3F000000;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_49800000;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<34> ap_const_lv34_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<9> ap_const_lv9_181;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<32> ap_const_lv32_46;
    static const sc_lv<48> ap_const_lv48_FFFFFFFFFFFF;
    static const sc_lv<20> ap_const_lv20_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<61> ap_const_lv61_1;
    static const sc_lv<32> ap_const_lv32_2F;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_alphabuf_address0();
    void thread_alphabuf_address1();
    void thread_alphabuf_ce0();
    void thread_alphabuf_ce1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ap_sig_116();
    void thread_ap_sig_1171();
    void thread_ap_sig_123();
    void thread_ap_sig_131();
    void thread_ap_sig_139();
    void thread_ap_sig_148();
    void thread_ap_sig_186();
    void thread_ap_sig_224();
    void thread_ap_sig_263();
    void thread_ap_sig_312();
    void thread_ap_sig_319();
    void thread_ap_sig_348();
    void thread_ap_sig_364();
    void thread_ap_sig_382();
    void thread_ap_sig_391();
    void thread_ap_sig_400();
    void thread_ap_sig_412();
    void thread_ap_sig_422();
    void thread_ap_sig_432();
    void thread_ap_sig_442();
    void thread_ap_sig_454();
    void thread_ap_sig_63();
    void thread_ap_sig_741();
    void thread_ap_sig_751();
    void thread_ap_sig_761();
    void thread_ap_sig_839();
    void thread_ap_sig_849();
    void thread_ap_sig_858();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_40();
    void thread_ap_sig_cseq_ST_pp1_stg0_fsm_42();
    void thread_ap_sig_cseq_ST_pp2_stg0_fsm_44();
    void thread_ap_sig_cseq_ST_pp3_stg0_fsm_46();
    void thread_ap_sig_cseq_ST_st104_fsm_47();
    void thread_ap_sig_cseq_ST_st10_fsm_9();
    void thread_ap_sig_cseq_ST_st11_fsm_10();
    void thread_ap_sig_cseq_ST_st12_fsm_11();
    void thread_ap_sig_cseq_ST_st17_fsm_16();
    void thread_ap_sig_cseq_ST_st18_fsm_17();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st28_fsm_27();
    void thread_ap_sig_cseq_ST_st29_fsm_28();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st32_fsm_31();
    void thread_ap_sig_cseq_ST_st33_fsm_32();
    void thread_ap_sig_cseq_ST_st39_fsm_38();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st40_fsm_39();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st56_fsm_41();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_ap_sig_cseq_ST_st6_fsm_5();
    void thread_ap_sig_cseq_ST_st72_fsm_43();
    void thread_ap_sig_cseq_ST_st7_fsm_6();
    void thread_ap_sig_cseq_ST_st88_fsm_45();
    void thread_ap_sig_cseq_ST_st8_fsm_7();
    void thread_ap_sig_cseq_ST_st9_fsm_8();
    void thread_cumsum_V_cast_fu_482_p1();
    void thread_cumsum_V_fu_515_p2();
    void thread_exitcond_1_fu_749_p2();
    void thread_exitcond_2_fu_819_p2();
    void thread_exitcond_3_fu_893_p2();
    void thread_exitcond_fu_675_p2();
    void thread_grp_fu_435_p0();
    void thread_grp_fu_443_p2();
    void thread_grp_fu_449_p2();
    void thread_grp_fu_472_p2();
    void thread_grp_fu_685_p1();
    void thread_grp_fu_685_p10();
    void thread_grp_fu_706_p0();
    void thread_grp_fu_706_p00();
    void thread_grp_fu_706_p1();
    void thread_grp_fu_706_p10();
    void thread_grp_fu_759_p1();
    void thread_grp_fu_759_p10();
    void thread_grp_fu_777_p0();
    void thread_grp_fu_777_p1();
    void thread_grp_fu_777_p10();
    void thread_grp_fu_829_p1();
    void thread_grp_fu_829_p10();
    void thread_grp_fu_847_p0();
    void thread_grp_fu_847_p1();
    void thread_grp_fu_847_p10();
    void thread_grp_fu_903_p0();
    void thread_grp_fu_903_p00();
    void thread_grp_fu_921_p0();
    void thread_grp_fu_921_p00();
    void thread_grp_fu_921_p1();
    void thread_isNeg_fu_568_p3();
    void thread_j4_phi_fu_385_p4();
    void thread_j_1_1_fu_743_p2();
    void thread_j_1_2_fu_813_p2();
    void thread_j_1_3_fu_887_p2();
    void thread_j_1_fu_669_p2();
    void thread_j_22_cast_fu_798_p1();
    void thread_j_2_phi_fu_418_p4();
    void thread_j_3_phi_fu_396_p4();
    void thread_j_s_phi_fu_407_p4();
    void thread_loc_V_1_fu_544_p1();
    void thread_node_count_address0();
    void thread_node_count_address1();
    void thread_node_count_ce0();
    void thread_node_count_ce1();
    void thread_node_count_d1();
    void thread_node_count_we1();
    void thread_node_output_address0();
    void thread_node_output_address1();
    void thread_node_output_ce0();
    void thread_node_output_ce1();
    void thread_node_output_d1();
    void thread_node_output_we1();
    void thread_p_Result_s_fu_548_p3();
    void thread_p_Val2_s_fu_530_p1();
    void thread_r_V_4_fu_654_p3();
    void thread_rec_V_fu_647_p3();
    void thread_rhs_V_cast_fu_703_p1();
    void thread_sh_assign_1_cast_cast_fu_597_p1();
    void thread_sh_assign_1_cast_fu_593_p1();
    void thread_sh_assign_1_fu_585_p3();
    void thread_sh_assign_fu_562_p2();
    void thread_tmp10_cast_fu_502_p1();
    void thread_tmp11_cast_fu_511_p1();
    void thread_tmp9_fu_505_p2();
    void thread_tmp_10_cast_fu_486_p1();
    void thread_tmp_13_cast_fu_498_p1();
    void thread_tmp_14_fu_639_p3();
    void thread_tmp_15_fu_728_p3();
    void thread_tmp_16_fu_802_p3();
    void thread_tmp_17_cast_fu_736_p1();
    void thread_tmp_17_fu_617_p3();
    void thread_tmp_18_fu_868_p3();
    void thread_tmp_19_cast5_fu_876_p1();
    void thread_tmp_19_cast_fu_880_p1();
    void thread_tmp_19_fu_690_p1();
    void thread_tmp_20_fu_764_p1();
    void thread_tmp_21_fu_834_p1();
    void thread_tmp_22_fu_908_p1();
    void thread_tmp_2_i_i_i_fu_555_p1();
    void thread_tmp_33_1_fu_768_p2();
    void thread_tmp_33_2_fu_838_p2();
    void thread_tmp_33_3_fu_912_p2();
    void thread_tmp_35_1_fu_792_p2();
    void thread_tmp_35_2_fu_862_p2();
    void thread_tmp_35_3_fu_936_p2();
    void thread_tmp_4_i_i_i_cast_fu_581_p1();
    void thread_tmp_4_i_i_i_fu_576_p2();
    void thread_tmp_6_fu_625_p1();
    void thread_tmp_6_i_i_i_fu_601_p1();
    void thread_tmp_7_cast_fu_495_p1();
    void thread_tmp_7_fu_694_p2();
    void thread_tmp_7_i_i_i_fu_605_p2();
    void thread_tmp_8_fu_629_p4();
    void thread_tmp_9_fu_722_p2();
    void thread_tmp_9_i_i_i_fu_611_p2();
    void thread_tmp_fu_489_p2();
    void thread_tmp_i_fu_521_p2();
    void thread_tmp_i_i_i_i_cast_fu_559_p1();
    void thread_tmp_s_fu_662_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
