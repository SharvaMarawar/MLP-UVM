// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pie5b05a22::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz17d3d61e::init(vlProcess, vlSymsp, name, parent, 1U, 1U, 0xffffffffU);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pie5b05a22::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz17d3d61e::__PVT__m_if_mask = 0x00000100U;
}

void Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pie5b05a22::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pie5b05a22::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_export"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pie5b05a22::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pie5b05a22::__VnoInFunc_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz17d3d61e> __Vfunc_get_if__Vfuncout_1466;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_full_name;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0> tif;
    unnamedblk1__DOT__i = 0U;
    while (true) {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_0__size))) break;
        this->__VnoInFunc_get_if(vlProcess, vlSymsp, unnamedblk1__DOT__i, __Vfunc_get_if__Vfuncout_1466);
        tif = __Vfunc_get_if__Vfuncout_1466;
        if (VL_UNLIKELY(((VlNull{} == tif)))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NTCONN"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No uvm_tlm interface is connected to "s, __VlefCall_1__get_full_name), " for executing write()"s)), 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(tif, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_analysis_port.svh", 171)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
    }
}

Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pie5b05a22::~Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pie5b05a22() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pie5b05a22::~\n"); );
}
