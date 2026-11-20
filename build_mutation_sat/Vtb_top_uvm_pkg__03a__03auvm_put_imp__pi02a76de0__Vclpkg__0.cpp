// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346> imp) {
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tzb8744e66::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tzb8744e66::__PVT__m_if_mask = 0x00000011U;
}

void Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_put_imp"s;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::__VnoInFunc_put\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_imps.svh", 108)->__VnoInFunc_put(vlSymsp, t);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::__VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::__VnoInFunc_try_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_imps.svh", 108)->__VnoInFunc_try_put(vlProcess, vlSymsp, t, try_put__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::__VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::__VnoInFunc_can_put\n"); );
    // Body
    can_put__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_imps.svh", 108)->__VnoInFunc_can_put(vlSymsp, can_put__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::~Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0::~\n"); );
}
