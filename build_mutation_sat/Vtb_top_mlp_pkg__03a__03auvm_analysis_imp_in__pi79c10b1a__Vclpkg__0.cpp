// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_scoreboard> imp) {
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz46a19f5f::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz46a19f5f::__PVT__m_if_mask = 0x00000100U;
}

void Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp_in"s;
}

void Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "mlp_scoreboard.sv", 13)->__VnoInFunc_write_in(vlProcess, vlSymsp, t);
}

void Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::~Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a::~\n"); );
}
