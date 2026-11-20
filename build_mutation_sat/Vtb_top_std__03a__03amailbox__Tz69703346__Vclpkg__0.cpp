// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_std__03a__03amailbox__Tz69703346::init(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_std__03a__03amailbox__Tz69703346::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_num(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_put\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h39748559__0;
    __Vtrigprevexpr_h39748559__0 = 0;
    // Body
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            ::CData/*0:0*/ __VdynTrigger_h67f3c904__0;
            __VdynTrigger_h67f3c904__0 = 0;
            __VdynTrigger_h67f3c904__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_h67f3c904__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                nullptr, 
                                                                                "@([true] (std::mailbox__Tz69703346.m_queue.size() < std::mailbox__Tz69703346.m_bound))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                                54);
                __Vtrigprevexpr_h39748559__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_h67f3c904__0 = __Vtrigprevexpr_h39748559__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h67f3c904__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            nullptr, 
                                                                            "@([true] (std::mailbox__Tz69703346.m_queue.size() < std::mailbox__Tz69703346.m_bound))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                            54);
        }
    }
    this->__PVT__m_queue.push_back(message);
    co_return;
}

void Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> message, ::IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_try_put\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__num;
    {
        try_put__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (((0U == this->__PVT__m_bound) | VL_LTS_III(32, __VlefCall_0__num, this->__PVT__m_bound))) {
            this->__PVT__m_queue.push_back(message);
            try_put__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_put__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_get\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h310a0d1c__0;
    __Vtrigprevexpr_h310a0d1c__0 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            ::CData/*0:0*/ __VdynTrigger_h6ed9924d__0;
            __VdynTrigger_h6ed9924d__0 = 0;
            __VdynTrigger_h6ed9924d__0 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_h6ed9924d__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                nullptr, 
                                                                                "@([true] (32'sh0 < std::mailbox__Tz69703346.m_queue.size()))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                                70);
                __Vtrigprevexpr_h310a0d1c__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h6ed9924d__0 = __Vtrigprevexpr_h310a0d1c__0;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h6ed9924d__0);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            nullptr, 
                                                                            "@([true] (32'sh0 < std::mailbox__Tz69703346.m_queue.size()))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                            70);
        }
    }
    message = this->__PVT__m_queue.pop_front();
    co_return;
}

void Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &message, ::IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_try_get\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__num;
    {
        try_get__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.pop_front();
            try_get__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_peek(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_peek\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h310a0d1c__1;
    __Vtrigprevexpr_h310a0d1c__1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            ::CData/*0:0*/ __VdynTrigger_h6ed9924d__1;
            __VdynTrigger_h6ed9924d__1 = 0;
            __VdynTrigger_h6ed9924d__1 = 0U;
            while ((1U & (~ (::IData)(__VdynTrigger_h6ed9924d__1)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (32'sh0 < std::mailbox__Tz69703346.m_queue.size()))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                                87);
                __Vtrigprevexpr_h310a0d1c__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h6ed9924d__1 = __Vtrigprevexpr_h310a0d1c__1;
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h6ed9924d__1);
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@([true] (32'sh0 < std::mailbox__Tz69703346.m_queue.size()))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/verilator/include/verilated_std.sv", 
                                                                            87);
        }
    }
    message = this->__PVT__m_queue.at(0U);
    co_return;
}

void Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &message, ::IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_std__03a__03amailbox__Tz69703346::__VnoInFunc_try_peek\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__num;
    {
        try_peek__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.at(0U);
            try_peek__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_std__03a__03amailbox__Tz69703346::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_std__03a__03amailbox__Tz69703346::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
}
