// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __assign_intensity_uitofp_64ns_32_6__HH__
#define __assign_intensity_uitofp_64ns_32_6__HH__
#include "ACMP_uitofp.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int dout_WIDTH>
SC_MODULE(assign_intensity_uitofp_64ns_32_6) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_uitofp<ID, 6, din0_WIDTH, dout_WIDTH> ACMP_uitofp_U;

    SC_CTOR(assign_intensity_uitofp_64ns_32_6):  ACMP_uitofp_U ("ACMP_uitofp_U") {
        ACMP_uitofp_U.clk(clk);
        ACMP_uitofp_U.reset(reset);
        ACMP_uitofp_U.ce(ce);
        ACMP_uitofp_U.din0(din0);
        ACMP_uitofp_U.dout(dout);

    }

};

#endif //
