// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_> imp) {
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz0a5b446e::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz0a5b446e::__PVT__m_if_mask = 0x000001ffU;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_imp"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_disable_auto_item_recording(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_is_auto_item_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, is_auto_item_recording_enabled__Vfuncrtn);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_get_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_get_next_item\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_next_item__t_3459;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__t_3459);
    t = __Vtask_get_next_item__t_3459;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_try_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_try_next_item\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_next_item__t_3460;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__t_3460);
    t = __Vtask_try_next_item__t_3460;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_item_done(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_item_done(vlSymsp, t);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_wait_for_sequences(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_has_do_available(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_put_response(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_put_response\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__t_3461;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_get(vlSymsp, __Vtask_get__t_3461);
    t = __Vtask_get__t_3461;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__t_3462;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__t_3462);
    t = __Vtask_peek__t_3462;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 97)->__VnoInFunc_put(vlSymsp, t);
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::~Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi94d139c4::~\n"); );
}
