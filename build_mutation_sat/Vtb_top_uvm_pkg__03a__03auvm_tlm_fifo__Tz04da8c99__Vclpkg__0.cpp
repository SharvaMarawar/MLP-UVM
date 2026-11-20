// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi571bba1d> __Vfunc_get__Vfuncout_1465;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi571bba1d__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1465);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1465;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_tlm_fifo #(T)"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::IData/*31:0*/ size) {
    Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz04da8c99::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m = VL_NEW(Vtb_top_std__03a__03amailbox__Tz04da8c99, vlSymsp, size);
    this->__PVT__m_size = size;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__m_size;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_used(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &used__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_used\n"); );
    // Body
    used__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 103)->__VnoInFunc_num(vlSymsp, used__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_is_empty(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_is_empty\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__num;
    is_empty__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 112)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    is_empty__Vfuncrtn = (0U == __VlefCall_0__num);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 128)->__VnoInFunc_put(vlSymsp, t);
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz04da8c99::__PVT__put_ap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 129)->__VnoInFunc_write(vlProcess, vlSymsp, t);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> pid;
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, pid);
    this->__PVT__m_pending_blocked_gets.atWrite(pid) = 1U;
    co_await VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 140)->__VnoInFunc_get(vlSymsp, t);
    this->__PVT__m_pending_blocked_gets.erase(pid);
    VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz04da8c99::__PVT__get_ap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 142)->__VnoInFunc_write(vlProcess, vlSymsp, t);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_peek\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 146)->__VnoInFunc_peek(vlSymsp, t);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_try_get\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_try_get__Vfuncout_3468;
    __Vtask_try_get__Vfuncout_3468 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__try_get;
    {
        try_get__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 150)->__VnoInFunc_try_get(vlSymsp, t, __Vtask_try_get__Vfuncout_3468);
        __VlefCall_0__try_get = __Vtask_try_get__Vfuncout_3468;
        if ((1U & (~ (0U != __VlefCall_0__try_get)))) {
            try_get__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz04da8c99::__PVT__get_ap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 154)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_try_peek\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_try_peek__Vfuncout_3469;
    __Vtask_try_peek__Vfuncout_3469 = 0;
    // Body
    ::IData/*31:0*/ __VlefCall_0__try_peek;
    {
        try_peek__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 159)->__VnoInFunc_try_peek(vlSymsp, t, __Vtask_try_peek__Vfuncout_3469);
        __VlefCall_0__try_peek = __Vtask_try_peek__Vfuncout_3469;
        if ((1U & (~ (0U != __VlefCall_0__try_peek)))) {
            try_peek__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_try_put(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_try_put\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__try_put;
    {
        try_put__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 166)->__VnoInFunc_try_put(vlSymsp, t, __VlefCall_0__try_put);
        if ((1U & (~ (0U != __VlefCall_0__try_put)))) {
            try_put__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz04da8c99::__PVT__put_ap, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 170)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_put__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_can_put\n"); );
    // Body
    ::CData/*0:0*/ __VlefLogOr_1;
    ::IData/*31:0*/ __VlefCall_0__num;
    can_put__Vfuncrtn = 0U;
    __VlefLogOr_1 = (0U == this->__PVT__m_size);
    if ((1U & (~ (::IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 175)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        __VlefLogOr_1 = VL_LTS_III(32, __VlefCall_0__num, this->__PVT__m_size);
    }
    can_put__Vfuncrtn = __VlefLogOr_1;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_m_clear_zombie_gets(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_m_clear_zombie_gets\n"); );
    // Body
    ::VlClassRef<Vtb_top_std__03a__03aprocess> unnamedblk1__DOT__i;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> unnamedblk1__DOT__i__Vnext;
    ::CData/*0:0*/ unnamedblk1__DOT__i__Vmore;
    unnamedblk1__DOT__i__Vmore = 0;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__status;
    ::IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    ::VlQueue<::VlClassRef<Vtb_top_std__03a__03aprocess>> zombie_gets;
    zombie_gets.clear();
    unnamedblk1__DOT__i__Vmore = (0U != this->__PVT__m_pending_blocked_gets.first(unnamedblk1__DOT__i__Vnext));
    while (unnamedblk1__DOT__i__Vmore) {
        unnamedblk1__DOT__i = unnamedblk1__DOT__i__Vnext;
        unnamedblk1__DOT__i__Vmore = (0U != this->__PVT__m_pending_blocked_gets.next(unnamedblk1__DOT__i__Vnext));
        unnamedblk1__DOT__unnamedblk2__DOT__status = 0U;
        VL_NULL_CHECK(unnamedblk1__DOT__i, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 188)->__VnoInFunc_status(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__status);
        if ((4U == unnamedblk1__DOT__unnamedblk2__DOT__status)) {
            zombie_gets.push_back(unnamedblk1__DOT__i);
        }
    }
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, zombie_gets.size())) {
        this->__PVT__m_pending_blocked_gets.erase(zombie_gets.at(unnamedblk3__DOT__i));
        unnamedblk3__DOT__i = ((::IData)(1U) + unnamedblk3__DOT__i);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_can_get\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__num;
    can_get__Vfuncrtn = 0U;
    {
        // Inlined CFunc: __VnoInFunc_m_clear_zombie_gets
        ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i;
        ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vnext;
        ::CData/*0:0*/ __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore;
        __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore = 0;
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__unnamedblk2__DOT__status;
        ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i;
        __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i = 0;
        ::VlQueue<::VlClassRef<Vtb_top_std__03a__03aprocess>> __Vinline_0___VnoInFunc_m_clear_zombie_gets_zombie_gets;
        __Vinline_0___VnoInFunc_m_clear_zombie_gets_zombie_gets.clear();
        __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore 
            = (0U != this->__PVT__m_pending_blocked_gets.first(__Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vnext));
        while (__Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore) {
            __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i 
                = __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vnext;
            __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore 
                = (0U != this->__PVT__m_pending_blocked_gets.next(__Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vnext));
            __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__unnamedblk2__DOT__status = 0U;
            VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 188)->__VnoInFunc_status(vlSymsp, __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__unnamedblk2__DOT__status);
            if ((4U == __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                __Vinline_0___VnoInFunc_m_clear_zombie_gets_zombie_gets.push_back(__Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i);
            }
        }
        __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i, __Vinline_0___VnoInFunc_m_clear_zombie_gets_zombie_gets.size())) {
            this->__PVT__m_pending_blocked_gets.erase(__Vinline_0___VnoInFunc_m_clear_zombie_gets_zombie_gets.at(__Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i));
            __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i 
                = ((::IData)(1U) + __Vinline_0___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i);
        }
    }
    VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 207)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    can_get__Vfuncrtn = (VL_LTS_III(32, 0U, __VlefCall_0__num) 
                         && (0U == this->__PVT__m_pending_blocked_gets.size()));
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_can_peek\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__num;
    can_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 211)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    can_peek__Vfuncrtn = VL_LTS_III(32, 0U, __VlefCall_0__num);
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_flush(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_flush\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_try_get__Vfuncout_3470;
    __Vtask_try_get__Vfuncout_3470 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__try_get;
    ::IData/*31:0*/ __VlefCall_0__num;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t;
    ::CData/*0:0*/ r;
    {
        r = 0U;
        {
            // Inlined CFunc: __VnoInFunc_m_clear_zombie_gets
            ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i;
            ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vnext;
            ::CData/*0:0*/ __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore;
            __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore = 0;
            ::IData/*31:0*/ __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__unnamedblk2__DOT__status;
            ::IData/*31:0*/ __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i;
            __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i = 0;
            ::VlQueue<::VlClassRef<Vtb_top_std__03a__03aprocess>> __Vinline_1___VnoInFunc_m_clear_zombie_gets_zombie_gets;
            __Vinline_1___VnoInFunc_m_clear_zombie_gets_zombie_gets.clear();
            __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore 
                = (0U != this->__PVT__m_pending_blocked_gets.first(__Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vnext));
            while (__Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore) {
                __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i 
                    = __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vnext;
                __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vmore 
                    = (0U != this->__PVT__m_pending_blocked_gets.next(__Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i__Vnext));
                __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__unnamedblk2__DOT__status = 0U;
                VL_NULL_CHECK(__Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 188)->__VnoInFunc_status(vlSymsp, __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__unnamedblk2__DOT__status);
                if ((4U == __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                    __Vinline_1___VnoInFunc_m_clear_zombie_gets_zombie_gets.push_back(__Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk1__DOT__i);
                }
            }
            __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i = 0U;
            while (VL_LTS_III(32, __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i, __Vinline_1___VnoInFunc_m_clear_zombie_gets_zombie_gets.size())) {
                this->__PVT__m_pending_blocked_gets.erase(__Vinline_1___VnoInFunc_m_clear_zombie_gets_zombie_gets.at(__Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i));
                __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i 
                    = ((::IData)(1U) + __Vinline_1___VnoInFunc_m_clear_zombie_gets_unnamedblk3__DOT__i);
            }
        }
        VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 226)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_UNLIKELY(((VL_LTS_III(32, 0U, __VlefCall_0__num) 
                          && (0U != this->__PVT__m_pending_blocked_gets.size()))))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "flush failed"s, "there are blocked gets preventing the flush"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        r = 1U;
        while (r) {
            VL_NULL_CHECK(this->__PVT__m, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/tlm1/uvm_tlm_fifos.svh", 234)->__VnoInFunc_try_get(vlSymsp, t, __Vtask_try_get__Vfuncout_3470);
            __VlefCall_1__try_get = __Vtask_try_get__Vfuncout_3470;
            r = (0U != __VlefCall_1__try_get);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_size = 0;
    __PVT__m_pending_blocked_gets.atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::~Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz04da8c99::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m:" + VL_TO_STRING(__PVT__m);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_pending_blocked_gets:" + VL_TO_STRING(__PVT__m_pending_blocked_gets);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz04da8c99::to_string_middle();
    return (out);
}
