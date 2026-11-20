// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_time::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, double res) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_time::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_name = name;
    this->__PVT__m_res = ((0.0 == res) ? 9.99999999999999980e-13
                           : res);
    {
        // Inlined CFunc: __VnoInFunc_reset
        this->__PVT__m_time = 0ULL;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__m_time = 0ULL;
}

void Vtb_top_uvm_pkg__03a__03auvm_time::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_time::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_res = 0;
    __PVT__m_time = VL_SCOPED_RAND_RESET_Q(64, 15686929798528229692ULL, 8253044889826645110ull);
}

Vtb_top_uvm_pkg__03a__03auvm_time::~Vtb_top_uvm_pkg__03a__03auvm_time() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_time::~\n"); );
}
