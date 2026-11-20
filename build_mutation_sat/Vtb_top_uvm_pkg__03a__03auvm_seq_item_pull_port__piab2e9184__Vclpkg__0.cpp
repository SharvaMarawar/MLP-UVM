// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::IData/*31:0*/ min_size, ::IData/*31:0*/ max_size) {
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::init(vlProcess, vlSymsp, name, parent, 0U, min_size, max_size);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if_mask = 0x000001ffU;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_port"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_disable_auto_item_recording(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_is_auto_item_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, is_auto_item_recording_enabled__Vfuncrtn);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_get_next_item(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_get_next_item\n"); );
    // Locals
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> __Vtask_get_next_item__t_3448;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__t_3448);
    t = __Vtask_get_next_item__t_3448;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_try_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_try_next_item\n"); );
    // Locals
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> __Vtask_try_next_item__t_3449;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__t_3449);
    t = __Vtask_try_next_item__t_3449;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_item_done(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_item_done\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_item_done(vlProcess, vlSymsp, t);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_wait_for_sequences(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_wait_for_sequences(vlSymsp);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_has_do_available(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> __Vtask_get__t_3450;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_get(vlSymsp, __Vtask_get__t_3450);
    t = __Vtask_get__t_3450;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> __Vtask_peek__t_3451;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__t_3451);
    t = __Vtask_peek__t_3451;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea::__PVT__m_if, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_sqr_connections.svh", 59)->__VnoInFunc_put(vlSymsp, t);
}

void Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__print_enabled = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::~Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184::~\n"); );
}
