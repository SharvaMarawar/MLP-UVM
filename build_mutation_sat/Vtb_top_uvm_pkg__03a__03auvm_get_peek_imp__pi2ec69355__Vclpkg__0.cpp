// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz04da8c99> imp) {
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz17d3d61e::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz17d3d61e::__PVT__m_if_mask = 0x00000066U;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_get_peek_imp"s;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__t_3476;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_imps.svh", 162)->__VnoInFunc_get(vlSymsp, __Vtask_get__t_3476);
    t = __Vtask_get__t_3476;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__t_3477;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_imps.svh", 162)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__t_3477);
    t = __Vtask_peek__t_3477;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_try_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_get__t_3478;
    // Body
    try_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_imps.svh", 162)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__t_3478, try_get__Vfuncrtn);
    t = __Vtask_try_get__t_3478;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_can_get\n"); );
    // Body
    can_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_imps.svh", 162)->__VnoInFunc_can_get(vlSymsp, can_get__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_try_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_peek__t_3479;
    // Body
    try_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_imps.svh", 162)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__t_3479, try_peek__Vfuncrtn);
    t = __Vtask_try_peek__t_3479;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::__VnoInFunc_can_peek\n"); );
    // Body
    can_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_imps.svh", 162)->__VnoInFunc_can_peek(vlSymsp, can_peek__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::~Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi2ec69355::~\n"); );
}
