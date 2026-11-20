// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper__Vclpkg::__VnoInFunc_get_global_hopper(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_hopper> &get_global_hopper__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_phase_hopper__Vclpkg::__VnoInFunc_get_global_hopper\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 290)->__VnoInFunc_get_phase_hopper(vlProcess, vlSymsp, get_global_hopper__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi6a3b1ffb> __Vfunc_get__Vfuncout_1205;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi6a3b1ffb__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1205);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1205;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase_hopper> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_phase_hopper, vlProcess, vlSymsp, "uvm_phase_hopper"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_phase_hopper, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_phase_hopper"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_objection = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_objection, vlProcess, vlSymsp, "phase_hopper_objection"s);
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_try_put(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_try_put\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    this->__VnoInFunc_raise_objection(vlProcess, vlSymsp, phase, "phase scheduled"s, 1U);
    this->__PVT__m_queue.push_back(phase);
    try_put__Vfuncrtn = 1U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_get\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_ha52a08ab__0;
    __Vtrigprevexpr_ha52a08ab__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((0U == this->__PVT__m_queue.size())) {
        ::CData/*0:0*/ __VdynTrigger_h1af99c16__0;
        __VdynTrigger_h1af99c16__0 = 0;
        __VdynTrigger_h1af99c16__0 = 0U;
        while ((1U & (~ (::IData)(__VdynTrigger_h1af99c16__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([true] (32'sh0 != uvm_pkg::uvm_phase_hopper.m_queue.size()))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                            300);
            __Vtrigprevexpr_ha52a08ab__0 = (0U != this->__PVT__m_queue.size());
            __VdynTrigger_h1af99c16__0 = __Vtrigprevexpr_ha52a08ab__0;
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h1af99c16__0);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([true] (32'sh0 != uvm_pkg::uvm_phase_hopper.m_queue.size()))", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                        300);
    }
    phase = this->__PVT__m_queue.pop_front();
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &phase, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_try_get\n"); );
    // Body
    if (VL_LTS_III(32, 0U, this->__PVT__m_queue.size())) {
        phase = this->__PVT__m_queue.pop_front();
        try_get__Vfuncrtn = 1U;
    } else {
        try_get__Vfuncrtn = 0U;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_peek\n"); );
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_ha52a08ab__1;
    __Vtrigprevexpr_ha52a08ab__1 = 0;
    // Body
    VL_KEEP_THIS;
    if ((0U == this->__PVT__m_queue.size())) {
        ::CData/*0:0*/ __VdynTrigger_h1af99c16__1;
        __VdynTrigger_h1af99c16__1 = 0;
        __VdynTrigger_h1af99c16__1 = 0U;
        while ((1U & (~ (::IData)(__VdynTrigger_h1af99c16__1)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            nullptr, 
                                                                            "@([true] (32'sh0 != uvm_pkg::uvm_phase_hopper.m_queue.size()))", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                            315);
            __Vtrigprevexpr_ha52a08ab__1 = (0U != this->__PVT__m_queue.size());
            __VdynTrigger_h1af99c16__1 = __Vtrigprevexpr_ha52a08ab__1;
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h1af99c16__1);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        nullptr, 
                                                                        "@([true] (32'sh0 != uvm_pkg::uvm_phase_hopper.m_queue.size()))", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                        315);
    }
    phase = this->__PVT__m_queue.at(0U);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &phase, ::CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_try_peek\n"); );
    // Body
    if (VL_LTS_III(32, 0U, this->__PVT__m_queue.size())) {
        phase = this->__PVT__m_queue.at(0U);
        try_peek__Vfuncrtn = 1U;
    } else {
        try_peek__Vfuncrtn = 0U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_get_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_get_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_objection)) {
        this->__PVT__m_objection = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_objection, vlProcess, vlSymsp, "phase_hopper_objection"s);
    }
    get_objection__Vfuncrtn = this->__PVT__m_objection;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_raise_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, objection);
    VL_NULL_CHECK(objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 343)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, obj, description, count);
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_drop_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, objection);
    VL_NULL_CHECK(objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 351)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, obj, description, count);
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_wait_for_objection(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ objt_event, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_wait_for_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, objection);
    co_await VL_NULL_CHECK(objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 370)->__VnoInFunc_wait_for(vlProcess, vlSymsp, objt_event, obj);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_run_phases(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_run_phases\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> __VlefCall_0__get_common_domain;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_27> __VDynScope_run_phases_0;
    __VDynScope_run_phases_0 = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_27, vlSymsp);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __VlefCall_0__get_common_domain);
    VL_NULL_CHECK(__VDynScope_run_phases_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 376)->__PVT__ph 
        = __VlefCall_0__get_common_domain;
    co_await this->__VnoInFunc_schedule_phase(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_run_phases_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 377)
                                              ->__PVT__ph, VlNull{});
    this->__VnoInFunc_run_phases____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_run_phases_0);
    co_await this->__VnoInFunc_wait_for_objection(vlProcess, vlSymsp, 4U, VlNull{});
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_run_phases____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_27> __VDynScope_run_phases_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_run_phases____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await this->__VnoInFunc___VforkTask_1(vlProcess, vlSymsp, __VDynScope_run_phases_0);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_schedule_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> from_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_schedule_phase\n"); );
    // Locals
    ::CData/*0:0*/ __Vtask_try_put__Vfuncout_2214;
    __Vtask_try_put__Vfuncout_2214 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1206;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2215;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2218;
    __Vtask_uvm_report_info__verbosity_2218 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2220;
    __Vtask_uvm_report_info__line_2220 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2222;
    __Vtask_uvm_report_info__report_enabled_checked_2222 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1207;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2223;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCond_7;
    ::std::string __VlefCall_6__get_full_name;
    ::IData/*31:0*/ __VlefCall_5__get_inst_id;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk196__DOT___local_report_object_;
    ::IData/*31:0*/ prev_state;
    prev_state = 0U;
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 400)->__VnoInFunc_get_state(vlSymsp, prev_state);
    if (VL_GTS_III(32, 2U, prev_state)) {
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 402)->__VnoInFunc_set_state(vlProcess, vlSymsp, 2U);
        co_await this->__VnoInFunc_wait_for_waiters(vlProcess, vlSymsp, phase, prev_state);
        this->__VnoInFunc_try_put(vlProcess, vlSymsp, phase, __Vtask_try_put__Vfuncout_2214);
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1206);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1206;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2215);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2215;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 405)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk196__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk196__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 405)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/SCHEDULED"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0x00000064U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk196__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 405)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/SCHEDULED"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 405)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 405)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_5__get_inst_id);
                if ((VlNull{} != from_phase)) {
                    VL_NULL_CHECK(from_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 405)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                    __VlefCond_7 = VL_CONCATN_NNN("phase "s, __VlefCall_6__get_full_name);
                } else {
                    __VlefCond_7 = "run_test"s;
                }
                __Vtask_uvm_report_info__report_enabled_checked_2222 = 1U;
                this->__Vtask_uvm_report_info__context_name_2221 = ""s;
                __Vtask_uvm_report_info__line_2220 = 0x00000195U;
                this->__Vtask_uvm_report_info__filename_2219 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                __Vtask_uvm_report_info__verbosity_2218 = 0x00000064U;
                this->__Vtask_uvm_report_info__message_2217 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(__VlefCall_4__get_full_name)
                                                                         , '~',32,__VlefCall_5__get_inst_id) , 
                                                        VL_CONCATN_NNN("Scheduled from "s, __VlefCond_7)));
                this->__Vtask_uvm_report_info__id_2216 = "PH/TRC/SCHEDULED"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1207);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1207;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2223);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2223;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2216, this->__Vtask_uvm_report_info__message_2217, __Vtask_uvm_report_info__verbosity_2218, this->__Vtask_uvm_report_info__filename_2219, __Vtask_uvm_report_info__line_2220, this->__Vtask_uvm_report_info__context_name_2221, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2222));
            }
        }
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_sync_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_sync_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk197__DOT__p;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk197__DOT__p__Vnext;
    ::CData/*0:0*/ unnamedblk197__DOT__p__Vmore;
    unnamedblk197__DOT__p__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk198__DOT__s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk198__DOT__s__Vnext;
    ::CData/*0:0*/ unnamedblk198__DOT__s__Vmore;
    unnamedblk198__DOT__s__Vmore = 0;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> edges;
    ::IData/*31:0*/ prev_state;
    edges.clear();
    edges.atDefault() = 0;
    prev_state = 0U;
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 414)->__VnoInFunc_get_predecessors(vlSymsp, edges);
    unnamedblk197__DOT__p__Vmore = (0U != edges.first(unnamedblk197__DOT__p__Vnext));
    while (unnamedblk197__DOT__p__Vmore) {
        unnamedblk197__DOT__p = unnamedblk197__DOT__p__Vnext;
        unnamedblk197__DOT__p__Vmore = (0U != edges.next(unnamedblk197__DOT__p__Vnext));
        co_await VL_NULL_CHECK(unnamedblk197__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 417)->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 0x00000100U, 3U);
    }
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 421)->__VnoInFunc_get_state(vlSymsp, prev_state);
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 422)->__VnoInFunc_set_state(vlProcess, vlSymsp, 4U);
    co_await this->__VnoInFunc_wait_for_waiters(vlProcess, vlSymsp, phase, prev_state);
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 425)->__VnoInFunc_get_sync_relationships(vlSymsp, edges);
    unnamedblk198__DOT__s__Vmore = (0U != edges.first(unnamedblk198__DOT__s__Vnext));
    while (unnamedblk198__DOT__s__Vmore) {
        unnamedblk198__DOT__s = unnamedblk198__DOT__s__Vnext;
        unnamedblk198__DOT__s__Vmore = (0U != edges.next(unnamedblk198__DOT__s__Vnext));
        co_await VL_NULL_CHECK(unnamedblk198__DOT__s, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 428)->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 4U, 5U);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_start_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_start_phase\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1208;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2224;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2227;
    __Vtask_uvm_report_info__verbosity_2227 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2229;
    __Vtask_uvm_report_info__line_2229 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2231;
    __Vtask_uvm_report_info__report_enabled_checked_2231 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1209;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2232;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_6__get_phase_type;
    ::IData/*31:0*/ __VlefCall_5__get_inst_id;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk199__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk200__DOT__imp;
    ::IData/*31:0*/ prev_state;
    prev_state = 0U;
    if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1208);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1208;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2224);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2224;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 436)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk199__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk199__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 436)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/STRT"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0x00000064U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk199__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 436)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/STRT"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 436)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 436)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_5__get_inst_id);
            __Vtask_uvm_report_info__report_enabled_checked_2231 = 1U;
            this->__Vtask_uvm_report_info__context_name_2230 = ""s;
            __Vtask_uvm_report_info__line_2229 = 0x000001b4U;
            this->__Vtask_uvm_report_info__filename_2228 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
            __Vtask_uvm_report_info__verbosity_2227 = 0x00000064U;
            this->__Vtask_uvm_report_info__message_2226 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                     , 'S',&(__VlefCall_4__get_full_name)
                                                                     , '~',32,__VlefCall_5__get_inst_id) , "Starting phase"s));
            this->__Vtask_uvm_report_info__id_2225 = "PH/TRC/STRT"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1209);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1209;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2232);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2232;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2225, this->__Vtask_uvm_report_info__message_2226, __Vtask_uvm_report_info__verbosity_2227, this->__Vtask_uvm_report_info__filename_2228, __Vtask_uvm_report_info__line_2229, this->__Vtask_uvm_report_info__context_name_2230, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2231));
        }
    }
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 438)->__VnoInFunc_get_state(vlSymsp, prev_state);
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 439)->__VnoInFunc_set_state(vlProcess, vlSymsp, 8U);
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 442)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_6__get_phase_type);
    if ((1U == __VlefCall_6__get_phase_type)) {
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 444)->__VnoInFunc_get_imp(vlSymsp, unnamedblk200__DOT__imp);
        this->__VnoInFunc_traverse_on(vlProcess, vlSymsp, unnamedblk200__DOT__imp, VlNull{}, phase, 8U);
    }
    co_await this->__VnoInFunc_wait_for_waiters(vlProcess, vlSymsp, phase, prev_state);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase\n"); );
    // Locals
    ::IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefExpr_3;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __VlefCall_2__get_imp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __VlefCall_1__get;
    ::IData/*31:0*/ __VlefCall_0__get_phase_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> unnamedblk201__DOT____VDynScope_unnamedblk201_5;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __VDynScope_execute_phase_4;
    ::IData/*31:0*/ prev_state;
    __VDynScope_execute_phase_4 = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_31, vlSymsp);
    VL_NULL_CHECK(__VDynScope_execute_phase_4, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 452)->__PVT__phase 
        = phase;
    prev_state = 0U;
    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_4, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 454)
                  ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 454)->__VnoInFunc_get_state(vlSymsp, prev_state);
    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_4, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 455)
                  ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 455)->__VnoInFunc_set_state(vlProcess, vlSymsp, 0x00000010U);
    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_4, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 458)
                  ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 458)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
    if ((1U != __VlefCall_0__get_phase_type)) {
        co_await this->__VnoInFunc_wait_for_waiters(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_4, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 459)
                                                    ->__PVT__phase, prev_state);
    } else {
        unnamedblk201__DOT____VDynScope_unnamedblk201_5 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_32, vlSymsp);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
        VL_NULL_CHECK(unnamedblk201__DOT____VDynScope_unnamedblk201_5, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 466)->__PVT__top 
            = __VlefCall_1__get;
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_4, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 467)
                      ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 467)->__VnoInFunc_get_imp(vlSymsp, __VlefCall_2__get_imp);
        VL_NULL_CHECK(unnamedblk201__DOT____VDynScope_unnamedblk201_5, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 467)->__PVT__imp 
            = __VlefCall_2__get_imp;
        __VlefExpr_3 = VL_CAST_DYNAMIC(VL_NULL_CHECK(unnamedblk201__DOT____VDynScope_unnamedblk201_5, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 468)
                                       ->__PVT__imp, VL_NULL_CHECK(unnamedblk201__DOT____VDynScope_unnamedblk201_5, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 468)
                                       ->__PVT__task_phase);
        if ((0U != __VlefExpr_3)) {
            this->__VnoInFunc_execute_phase____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, unnamedblk201__DOT____VDynScope_unnamedblk201_5, __VDynScope_execute_phase_4);
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
            this->__VnoInFunc_execute_phase____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
            ::CData/*0:0*/ __VdynTrigger_he1335ce6__0;
            __VdynTrigger_he1335ce6__0 = 0;
            __VdynTrigger_he1335ce6__0 = 0U;
            __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
            while ((1U & (~ (::IData)(__VdynTrigger_he1335ce6__0)))) {
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                                517);
                __VdynTrigger_he1335ce6__0 = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                              != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0);
                vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_he1335ce6__0);
                __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
            }
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                            vlProcess, 
                                                                            "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                            517);
            {
                ::VlForkSync __Vfork_5__sync;
                __Vfork_5__sync.init(1U, vlProcess);
                this->__VnoInFunc_execute_phase____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_5__sync, __VDynScope_execute_phase_4, unnamedblk201__DOT____VDynScope_unnamedblk201_5);
                co_await __Vfork_5__sync.join(vlProcess, 
                                              "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                              493);
            }
        } else {
            co_await this->__VnoInFunc_wait_for_waiters(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_4, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 470)
                                                        ->__PVT__phase, prev_state);
            this->__VnoInFunc_traverse_on(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk201__DOT____VDynScope_unnamedblk201_5, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 471)
                                          ->__PVT__imp, VlNull{}, VL_NULL_CHECK(__VDynScope_execute_phase_4, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 471)
                                          ->__PVT__phase, 0x00000010U);
        }
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_5__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> &__VDynScope_execute_phase_4, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> &unnamedblk201__DOT____VDynScope_unnamedblk201_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_5__sync.onKill(vlProcess);
    {
        ::VlForkSync __Vfork_6__sync;
        __Vfork_6__sync.init(1U, vlProcess);
        this->__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_6__sync, __VDynScope_execute_phase_4);
        this->__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_6__sync, unnamedblk201__DOT____VDynScope_unnamedblk201_5, __VDynScope_execute_phase_4);
        this->__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__2(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_6__sync, unnamedblk201__DOT____VDynScope_unnamedblk201_5, __VDynScope_execute_phase_4);
        co_await __Vfork_6__sync.join(vlProcess, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                      496);
    }
    vlProcess->disableFork();
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_5__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                         494);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__2(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_6__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> unnamedblk201__DOT____VDynScope_unnamedblk201_5, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __VDynScope_execute_phase_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__2\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __Vtask___VforkTask_5____VDynScope_execute_phase_4_2358;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> __Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359;
    ::CData/*0:0*/ __Vtask___VforkTask_5____VlefLogAnd_27_2360;
    __Vtask___VforkTask_5____VlefLogAnd_27_2360 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_26__get_report_action_2361;
    __Vtask___VforkTask_5____VlefCall_26__get_report_action_2361 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_25__get_report_verbosity_level_2362;
    __Vtask___VforkTask_5____VlefCall_25__get_report_verbosity_level_2362 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_5____VlefCall_24__uvm_get_report_object_2363;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_21__get_inst_id_2366;
    __Vtask___VforkTask_5____VlefCall_21__get_inst_id_2366 = 0;
    ::CData/*0:0*/ __Vtask___VforkTask_5____VlefLogAnd_19_2368;
    __Vtask___VforkTask_5____VlefLogAnd_19_2368 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_18__get_report_action_2369;
    __Vtask___VforkTask_5____VlefCall_18__get_report_action_2369 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_17__get_report_verbosity_level_2370;
    __Vtask___VforkTask_5____VlefCall_17__get_report_verbosity_level_2370 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_5____VlefCall_16__uvm_get_report_object_2371;
    ::CData/*0:0*/ __Vtask___VforkTask_5____VlefLogAnd_15_2372;
    __Vtask___VforkTask_5____VlefLogAnd_15_2372 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_14__get_objection_total_2373;
    __Vtask___VforkTask_5____VlefCall_14__get_objection_total_2373 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefExpr_13_2374;
    __Vtask___VforkTask_5____VlefExpr_13_2374 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_12__get_inst_id_2375;
    __Vtask___VforkTask_5____VlefCall_12__get_inst_id_2375 = 0;
    ::CData/*0:0*/ __Vtask___VforkTask_5____VlefLogAnd_10_2377;
    __Vtask___VforkTask_5____VlefLogAnd_10_2377 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_9__get_report_action_2378;
    __Vtask___VforkTask_5____VlefCall_9__get_report_action_2378 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_8__get_report_verbosity_level_2379;
    __Vtask___VforkTask_5____VlefCall_8__get_report_verbosity_level_2379 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_5____VlefCall_7__uvm_get_report_object_2380;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_6__get_inst_id_2381;
    __Vtask___VforkTask_5____VlefCall_6__get_inst_id_2381 = 0;
    ::CData/*0:0*/ __Vtask___VforkTask_5____VlefLogAnd_4_2383;
    __Vtask___VforkTask_5____VlefLogAnd_4_2383 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_3__get_report_action_2384;
    __Vtask___VforkTask_5____VlefCall_3__get_report_action_2384 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5____VlefCall_2__get_report_verbosity_level_2385;
    __Vtask___VforkTask_5____VlefCall_2__get_report_verbosity_level_2385 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_5____VlefCall_1__uvm_get_report_object_2386;
    ::QData/*63:0*/ __Vtask___VforkTask_5__unnamedblk208__DOT__delay_time_2389;
    __Vtask___VforkTask_5__unnamedblk208__DOT__delay_time_2389 = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>> __Vtask___VforkTask_5__unnamedblk208__DOT__objectors_2390;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk209__DOT___local_report_object__2391;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk210__DOT___local_report_object__2392;
    ::IData/*31:0*/ __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i_2393;
    __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i_2393 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i__Vloopsize_2394;
    __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i__Vloopsize_2394 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__p_2395;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__unnamedblk213__DOT__p_done_2396;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT___local_report_object__2397;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk215__DOT___local_report_object__2398;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1226;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1227;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2400;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_2401;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_2402;
    __Vtask_get_report_verbosity_level__Vfuncout_2402 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_2403;
    __Vtask_get_report_action__Vfuncout_2403 = 0;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_2405;
    __Vtask_get_inst_id__Vfuncout_2405 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2408;
    __Vtask_uvm_report_info__verbosity_2408 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2410;
    __Vtask_uvm_report_info__line_2410 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2412;
    __Vtask_uvm_report_info__report_enabled_checked_2412 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1228;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2413;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1229;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1230;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2414;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_2415;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_2416;
    __Vtask_get_report_verbosity_level__Vfuncout_2416 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_2417;
    __Vtask_get_report_action__Vfuncout_2417 = 0;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_2419;
    __Vtask_get_inst_id__Vfuncout_2419 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2422;
    __Vtask_uvm_report_info__verbosity_2422 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2424;
    __Vtask_uvm_report_info__line_2424 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2426;
    __Vtask_uvm_report_info__report_enabled_checked_2426 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1231;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2427;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> __Vtask_get_objection__Vfuncout_2428;
    ::IData/*31:0*/ __Vtask_get_objection_total__Vfuncout_2429;
    __Vtask_get_objection_total__Vfuncout_2429 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1232;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1233;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2430;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_2431;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_2432;
    __Vtask_get_report_verbosity_level__Vfuncout_2432 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_2433;
    __Vtask_get_report_action__Vfuncout_2433 = 0;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_2435;
    __Vtask_get_inst_id__Vfuncout_2435 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2440;
    __Vtask_uvm_report_info__verbosity_2440 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2442;
    __Vtask_uvm_report_info__line_2442 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2444;
    __Vtask_uvm_report_info__report_enabled_checked_2444 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1234;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2445;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1235;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1236;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2446;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_2447;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_2448;
    __Vtask_get_report_verbosity_level__Vfuncout_2448 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_2449;
    __Vtask_get_report_action__Vfuncout_2449 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_6__sync.onKill(vlProcess);
    ::CData/*0:0*/ __Vtrigprevexpr_ha79fdde1__0;
    __Vtrigprevexpr_ha79fdde1__0 = 0;
    __Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359 
        = unnamedblk201__DOT____VDynScope_unnamedblk201_5;
    __Vtask___VforkTask_5____VDynScope_execute_phase_4_2358 
        = __VDynScope_execute_phase_4;
    __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i_2393 = 0U;
    __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i__Vloopsize_2394 = 0;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_execute_phase_4_2358, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 549)
                  ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 549)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__Vfuncout_2399);
    this->__Vtask___VforkTask_5____VlefCall_0__get_name_2387 
        = this->__Vtask_get_name__Vfuncout_2399;
    if (("run"s == this->__Vtask___VforkTask_5____VlefCall_0__get_name_2387)) {
        this->__Vtask___VforkTask_5__unnamedblk208__DOT__delay_type_2388 = ""s;
        __Vtask___VforkTask_5__unnamedblk208__DOT__delay_time_2389 = 0;
        __Vtask___VforkTask_5__unnamedblk208__DOT__objectors_2390.clear();
        if ((0ULL == VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 553)
                                   ->__PVT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 553)
             ->__PVT__phase_timeout)) {
            if ((0ULL == VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 555)
                                       ->__PVT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 555)
                 ->__PVT__phase_timeout)) {
                ::CData/*0:0*/ __VdynTrigger_h17b0b68c__0;
                __VdynTrigger_h17b0b68c__0 = 0;
                __VdynTrigger_h17b0b68c__0 = 0U;
                while ((1U & (~ (::IData)(__VdynTrigger_h17b0b68c__0)))) {
                    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                                vlProcess, 
                                                                                "@([true] (64'h0 != uvm_pkg::uvm_phase_hopper.__Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359.top.phase_timeout))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                                555);
                    __Vtrigprevexpr_ha79fdde1__0 = 
                        (0ULL != VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 555)
                                               ->__PVT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 555)
                         ->__PVT__phase_timeout);
                    __VdynTrigger_h17b0b68c__0 = __Vtrigprevexpr_ha79fdde1__0;
                    vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h17b0b68c__0);
                }
                co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                                vlProcess, 
                                                                                "@([true] (64'h0 != uvm_pkg::uvm_phase_hopper.__Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359.top.phase_timeout))", 
                                                                                "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                                555);
            }
        }
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1227);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1227;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2400);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2400;
            __Vfunc_uvm_get_report_object__Vfuncout_1226 
                = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            __Vtask___VforkTask_5____VlefCall_1__uvm_get_report_object_2386 
                = __Vfunc_uvm_get_report_object__Vfuncout_1226;
            VL_NULL_CHECK(__Vtask___VforkTask_5____VlefCall_1__uvm_get_report_object_2386, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 560)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_2401);
            __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk209__DOT___local_report_object__2391 
                = __Vtask_uvm_get_report_object__Vfuncout_2401;
            VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk209__DOT___local_report_object__2391, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 560)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/TO_WAIT"s, __Vtask_get_report_verbosity_level__Vfuncout_2402);
            __Vtask___VforkTask_5____VlefCall_2__get_report_verbosity_level_2385 
                = __Vtask_get_report_verbosity_level__Vfuncout_2402;
            __Vtask___VforkTask_5____VlefLogAnd_4_2383 
                = VL_LTES_III(32, 0x0000012cU, __Vtask___VforkTask_5____VlefCall_2__get_report_verbosity_level_2385);
            if (__Vtask___VforkTask_5____VlefLogAnd_4_2383) {
                VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk209__DOT___local_report_object__2391, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 560)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/TO_WAIT"s, __Vtask_get_report_action__Vfuncout_2403);
                __Vtask___VforkTask_5____VlefCall_3__get_report_action_2384 
                    = __Vtask_get_report_action__Vfuncout_2403;
                __Vtask___VforkTask_5____VlefLogAnd_4_2383 
                    = (0U != __Vtask___VforkTask_5____VlefCall_3__get_report_action_2384);
            }
            if (VL_UNLIKELY((__Vtask___VforkTask_5____VlefLogAnd_4_2383))) {
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_execute_phase_4_2358, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 560)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 560)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2404);
                this->__Vtask___VforkTask_5____VlefCall_5__get_full_name_2382 
                    = this->__Vtask_get_full_name__Vfuncout_2404;
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_execute_phase_4_2358, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 560)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 560)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_2405);
                __Vtask___VforkTask_5____VlefCall_6__get_inst_id_2381 
                    = __Vtask_get_inst_id__Vfuncout_2405;
                __Vtask_uvm_report_info__report_enabled_checked_2412 = 1U;
                this->__Vtask_uvm_report_info__context_name_2411 = ""s;
                __Vtask_uvm_report_info__line_2410 = 0x00000230U;
                this->__Vtask_uvm_report_info__filename_2409 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                __Vtask_uvm_report_info__verbosity_2408 = 0x0000012cU;
                this->__Vtask_uvm_report_info__message_2407 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(this->__Vtask___VforkTask_5____VlefCall_5__get_full_name_2382)
                                                                         , '~',32,__Vtask___VforkTask_5____VlefCall_6__get_inst_id_2381) , VL_SFORMATF_N_NX("STARTING PHASE TIMEOUT WATCHDOG (timeout == %t)",2, 'T',-9
                                                                                , '#',64,VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 560)
                                                                                ->__PVT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 560)
                                                                                ->__PVT__phase_timeout) ));
                this->__Vtask_uvm_report_info__id_2406 = "PH/TRC/TO_WAIT"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1228);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1228;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2413);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2413;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2406, this->__Vtask_uvm_report_info__message_2407, __Vtask_uvm_report_info__verbosity_2408, this->__Vtask_uvm_report_info__filename_2409, __Vtask_uvm_report_info__line_2410, this->__Vtask_uvm_report_info__context_name_2411, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2412));
            }
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(
                                                                   (0x00000000000003e8ULL 
                                                                    * VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 561)
                                                                                ->__PVT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 561)
                                                                    ->__PVT__phase_timeout), 
                                                                   vlProcess, 
                                                                   "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                   561);
        if ((9.20000000000000000e+12 == VL_ITOR_D_Q(64, VL_TIME_UNITED_Q(1000)))) {
            this->__Vtask___VforkTask_5__unnamedblk208__DOT__delay_type_2388 = "Default"s;
            __Vtask___VforkTask_5__unnamedblk208__DOT__delay_time_2389 = 0x0000085e0abb6000ULL;
        } else {
            this->__Vtask___VforkTask_5__unnamedblk208__DOT__delay_type_2388 = "Explicit"s;
            __Vtask___VforkTask_5__unnamedblk208__DOT__delay_time_2389 
                = VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_unnamedblk201_5_2359, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 568)
                                ->__PVT__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 568)
                ->__PVT__phase_timeout;
        }
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1230);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1230;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2414);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2414;
            __Vfunc_uvm_get_report_object__Vfuncout_1229 
                = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            __Vtask___VforkTask_5____VlefCall_7__uvm_get_report_object_2380 
                = __Vfunc_uvm_get_report_object__Vfuncout_1229;
            VL_NULL_CHECK(__Vtask___VforkTask_5____VlefCall_7__uvm_get_report_object_2380, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 571)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_2415);
            __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk210__DOT___local_report_object__2392 
                = __Vtask_uvm_get_report_object__Vfuncout_2415;
            VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk210__DOT___local_report_object__2392, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 571)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/TIMEOUT"s, __Vtask_get_report_verbosity_level__Vfuncout_2416);
            __Vtask___VforkTask_5____VlefCall_8__get_report_verbosity_level_2379 
                = __Vtask_get_report_verbosity_level__Vfuncout_2416;
            __Vtask___VforkTask_5____VlefLogAnd_10_2377 
                = VL_LTES_III(32, 0x00000064U, __Vtask___VforkTask_5____VlefCall_8__get_report_verbosity_level_2379);
            if (__Vtask___VforkTask_5____VlefLogAnd_10_2377) {
                VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk210__DOT___local_report_object__2392, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 571)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/TIMEOUT"s, __Vtask_get_report_action__Vfuncout_2417);
                __Vtask___VforkTask_5____VlefCall_9__get_report_action_2378 
                    = __Vtask_get_report_action__Vfuncout_2417;
                __Vtask___VforkTask_5____VlefLogAnd_10_2377 
                    = (0U != __Vtask___VforkTask_5____VlefCall_9__get_report_action_2378);
            }
            if (VL_UNLIKELY((__Vtask___VforkTask_5____VlefLogAnd_10_2377))) {
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_execute_phase_4_2358, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 571)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 571)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2418);
                this->__Vtask___VforkTask_5____VlefCall_11__get_full_name_2376 
                    = this->__Vtask_get_full_name__Vfuncout_2418;
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_execute_phase_4_2358, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 571)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 571)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_2419);
                __Vtask___VforkTask_5____VlefCall_12__get_inst_id_2375 
                    = __Vtask_get_inst_id__Vfuncout_2419;
                __Vtask_uvm_report_info__report_enabled_checked_2426 = 1U;
                this->__Vtask_uvm_report_info__context_name_2425 = ""s;
                __Vtask_uvm_report_info__line_2424 = 0x0000023bU;
                this->__Vtask_uvm_report_info__filename_2423 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                __Vtask_uvm_report_info__verbosity_2422 = 0x00000064U;
                this->__Vtask_uvm_report_info__message_2421 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(this->__Vtask___VforkTask_5____VlefCall_11__get_full_name_2376)
                                                                         , '~',32,__Vtask___VforkTask_5____VlefCall_12__get_inst_id_2375) , "PHASE TIMEOUT WATCHDOG EXPIRED"s));
                this->__Vtask_uvm_report_info__id_2420 = "PH/TRC/TIMEOUT"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1231);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1231;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2427);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2427;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2420, this->__Vtask_uvm_report_info__message_2421, __Vtask_uvm_report_info__verbosity_2422, this->__Vtask_uvm_report_info__filename_2423, __Vtask_uvm_report_info__line_2424, this->__Vtask_uvm_report_info__context_name_2425, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2426));
            }
        }
        VL_NULL_CHECK(this->__PVT__m_objection, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 572)->__VnoInFunc_get_objectors(vlSymsp, __Vtask___VforkTask_5__unnamedblk208__DOT__objectors_2390);
        __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i_2393 = 0U;
        while (VL_LTS_III(32, __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i_2393, __Vtask___VforkTask_5__unnamedblk208__DOT__objectors_2390.size())) {
            __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i__Vloopsize_2394 
                = __Vtask___VforkTask_5__unnamedblk208__DOT__objectors_2390.size();
            __Vtask___VforkTask_5____VlefExpr_13_2374 
                = VL_CAST_DYNAMIC(__Vtask___VforkTask_5__unnamedblk208__DOT__objectors_2390.at(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i_2393), __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__p_2395);
            if ((0U != __Vtask___VforkTask_5____VlefExpr_13_2374)) {
                VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__p_2395, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 577)->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vtask_get_objection__Vfuncout_2428);
                __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__unnamedblk213__DOT__p_done_2396 
                    = __Vtask_get_objection__Vfuncout_2428;
                __Vtask___VforkTask_5____VlefLogAnd_15_2372 
                    = (VlNull{} != __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__unnamedblk213__DOT__p_done_2396);
                if (__Vtask___VforkTask_5____VlefLogAnd_15_2372) {
                    VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__unnamedblk213__DOT__p_done_2396, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 578)->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __Vtask_get_objection_total__Vfuncout_2429);
                    __Vtask___VforkTask_5____VlefCall_14__get_objection_total_2373 
                        = __Vtask_get_objection_total__Vfuncout_2429;
                    __Vtask___VforkTask_5____VlefLogAnd_15_2372 
                        = VL_LTS_III(32, 0U, __Vtask___VforkTask_5____VlefCall_14__get_objection_total_2373);
                }
                if (__Vtask___VforkTask_5____VlefLogAnd_15_2372) {
                    if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1233);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1233;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2430);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_2430;
                        __Vfunc_uvm_get_report_object__Vfuncout_1232 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                        __Vtask___VforkTask_5____VlefCall_16__uvm_get_report_object_2371 
                            = __Vfunc_uvm_get_report_object__Vfuncout_1232;
                        VL_NULL_CHECK(__Vtask___VforkTask_5____VlefCall_16__uvm_get_report_object_2371, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 582)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_2431);
                        __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT___local_report_object__2397 
                            = __Vtask_uvm_get_report_object__Vfuncout_2431;
                        VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT___local_report_object__2397, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 582)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/TIMEOUT/OBJCTN"s, __Vtask_get_report_verbosity_level__Vfuncout_2432);
                        __Vtask___VforkTask_5____VlefCall_17__get_report_verbosity_level_2370 
                            = __Vtask_get_report_verbosity_level__Vfuncout_2432;
                        __Vtask___VforkTask_5____VlefLogAnd_19_2368 
                            = VL_LTES_III(32, 0x00000064U, __Vtask___VforkTask_5____VlefCall_17__get_report_verbosity_level_2370);
                        if (__Vtask___VforkTask_5____VlefLogAnd_19_2368) {
                            VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__unnamedblk213__DOT__unnamedblk214__DOT___local_report_object__2397, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 582)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/TIMEOUT/OBJCTN"s, __Vtask_get_report_action__Vfuncout_2433);
                            __Vtask___VforkTask_5____VlefCall_18__get_report_action_2369 
                                = __Vtask_get_report_action__Vfuncout_2433;
                            __Vtask___VforkTask_5____VlefLogAnd_19_2368 
                                = (0U != __Vtask___VforkTask_5____VlefCall_18__get_report_action_2369);
                        }
                        if (VL_UNLIKELY((__Vtask___VforkTask_5____VlefLogAnd_19_2368))) {
                            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_execute_phase_4_2358, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 582)
                                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 582)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2434);
                            this->__Vtask___VforkTask_5____VlefCall_20__get_full_name_2367 
                                = this->__Vtask_get_full_name__Vfuncout_2434;
                            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_5____VDynScope_execute_phase_4_2358, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 582)
                                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 582)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_2435);
                            __Vtask___VforkTask_5____VlefCall_21__get_inst_id_2366 
                                = __Vtask_get_inst_id__Vfuncout_2435;
                            VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__p_2395, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 582)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2436);
                            this->__Vtask___VforkTask_5____VlefCall_22__get_full_name_2365 
                                = this->__Vtask_get_full_name__Vfuncout_2436;
                            VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__unnamedblk212__DOT__unnamedblk213__DOT__p_done_2396, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 582)->__VnoInFunc_convert2string(vlProcess, vlSymsp, this->__Vtask_convert2string__Vfuncout_2437);
                            this->__Vtask___VforkTask_5____VlefCall_23__convert2string_2364 
                                = this->__Vtask_convert2string__Vfuncout_2437;
                            __Vtask_uvm_report_info__report_enabled_checked_2444 = 1U;
                            this->__Vtask_uvm_report_info__context_name_2443 = ""s;
                            __Vtask_uvm_report_info__line_2442 = 0x00000246U;
                            this->__Vtask_uvm_report_info__filename_2441 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                            __Vtask_uvm_report_info__verbosity_2440 = 0x00000064U;
                            this->__Vtask_uvm_report_info__message_2439 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                                , 'S',&(this->__Vtask___VforkTask_5____VlefCall_20__get_full_name_2367)
                                                                                , '~',32,__Vtask___VforkTask_5____VlefCall_21__get_inst_id_2366) , VL_SFORMATF_N_NX("Phase '%s' has outstanding objections:\n%s",2
                                                                                , 'S',&(this->__Vtask___VforkTask_5____VlefCall_22__get_full_name_2365)
                                                                                , 'S',&(this->__Vtask___VforkTask_5____VlefCall_23__convert2string_2364)) ));
                            this->__Vtask_uvm_report_info__id_2438 = "PH/TRC/TIMEOUT/OBJCTN"s;
                            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1234);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__Vfuncout_1234;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2445);
                            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__Vfuncout_2445;
                            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2438, this->__Vtask_uvm_report_info__message_2439, __Vtask_uvm_report_info__verbosity_2440, this->__Vtask_uvm_report_info__filename_2441, __Vtask_uvm_report_info__line_2442, this->__Vtask_uvm_report_info__context_name_2443, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2444));
                        }
                    }
                }
            }
            if ((__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i__Vloopsize_2394 
                 <= __Vtask___VforkTask_5__unnamedblk208__DOT__objectors_2390.size())) {
                __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i_2393 
                    = ((::IData)(1U) + __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk211__DOT__i_2393);
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1236);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1236;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2446);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2446;
        __Vfunc_uvm_get_report_object__Vfuncout_1235 
            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        __Vtask___VforkTask_5____VlefCall_24__uvm_get_report_object_2363 
            = __Vfunc_uvm_get_report_object__Vfuncout_1235;
        VL_NULL_CHECK(__Vtask___VforkTask_5____VlefCall_24__uvm_get_report_object_2363, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 590)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_2447);
        __Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk215__DOT___local_report_object__2398 
            = __Vtask_uvm_get_report_object__Vfuncout_2447;
        VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk215__DOT___local_report_object__2398, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 590)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "PH_TIMEOUT"s, __Vtask_get_report_verbosity_level__Vfuncout_2448);
        __Vtask___VforkTask_5____VlefCall_25__get_report_verbosity_level_2362 
            = __Vtask_get_report_verbosity_level__Vfuncout_2448;
        __Vtask___VforkTask_5____VlefLogAnd_27_2360 
            = VL_LTES_III(32, 0U, __Vtask___VforkTask_5____VlefCall_25__get_report_verbosity_level_2362);
        if (__Vtask___VforkTask_5____VlefLogAnd_27_2360) {
            VL_NULL_CHECK(__Vtask___VforkTask_5__unnamedblk208__DOT__unnamedblk215__DOT___local_report_object__2398, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 590)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "PH_TIMEOUT"s, __Vtask_get_report_action__Vfuncout_2449);
            __Vtask___VforkTask_5____VlefCall_26__get_report_action_2361 
                = __Vtask_get_report_action__Vfuncout_2449;
            __Vtask___VforkTask_5____VlefLogAnd_27_2360 
                = (0U != __Vtask___VforkTask_5____VlefCall_26__get_report_action_2361);
        }
        if (VL_UNLIKELY((__Vtask___VforkTask_5____VlefLogAnd_27_2360))) {
            vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_TIMEOUT"s, VL_SFORMATF_N_NX("%s timeout of %0t hit, indicating a probable testbench issue",3, 'T',-9
                                                                                , 'S',&(this->__Vtask___VforkTask_5__unnamedblk208__DOT__delay_type_2388)
                                                                                , '#',64,__Vtask___VforkTask_5__unnamedblk208__DOT__delay_time_2389) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s, 0x0000024eU, ""s, 1U);
        }
    } else {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.waitForever(
                                                                         vlProcess, 
                                                                         "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                         594);
    }
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_6__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                         548);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_6__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> unnamedblk201__DOT____VDynScope_unnamedblk201_5, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __VDynScope_execute_phase_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __Vtask___VforkTask_4____VDynScope_execute_phase_4_2258;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> __Vtask___VforkTask_4____VDynScope_unnamedblk201_5_2259;
    ::CData/*0:0*/ __Vtask___VforkTask_4____VlefLogAnd_29_2260;
    __Vtask___VforkTask_4____VlefLogAnd_29_2260 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_28__get_max_ready_to_end_iterations_2261;
    __Vtask___VforkTask_4____VlefCall_28__get_max_ready_to_end_iterations_2261 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_27__get_state_2262;
    __Vtask___VforkTask_4____VlefCall_27__get_state_2262 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_26__get_inst_id_2263;
    __Vtask___VforkTask_4____VlefCall_26__get_inst_id_2263 = 0;
    ::CData/*0:0*/ __Vtask___VforkTask_4____VlefLogAnd_24_2265;
    __Vtask___VforkTask_4____VlefLogAnd_24_2265 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_23__get_report_action_2266;
    __Vtask___VforkTask_4____VlefCall_23__get_report_action_2266 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_22__get_report_verbosity_level_2267;
    __Vtask___VforkTask_4____VlefCall_22__get_report_verbosity_level_2267 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_4____VlefCall_21__uvm_get_report_object_2268;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_20__get_inst_id_2269;
    __Vtask___VforkTask_4____VlefCall_20__get_inst_id_2269 = 0;
    ::CData/*0:0*/ __Vtask___VforkTask_4____VlefLogAnd_18_2271;
    __Vtask___VforkTask_4____VlefLogAnd_18_2271 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_17__get_report_action_2272;
    __Vtask___VforkTask_4____VlefCall_17__get_report_action_2272 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_16__get_report_verbosity_level_2273;
    __Vtask___VforkTask_4____VlefCall_16__get_report_verbosity_level_2273 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_4____VlefCall_15__uvm_get_report_object_2274;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_14__get_inst_id_2275;
    __Vtask___VforkTask_4____VlefCall_14__get_inst_id_2275 = 0;
    ::CData/*0:0*/ __Vtask___VforkTask_4____VlefLogAnd_12_2277;
    __Vtask___VforkTask_4____VlefLogAnd_12_2277 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_11__get_report_action_2278;
    __Vtask___VforkTask_4____VlefCall_11__get_report_action_2278 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_10__get_report_verbosity_level_2279;
    __Vtask___VforkTask_4____VlefCall_10__get_report_verbosity_level_2279 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_4____VlefCall_9__uvm_get_report_object_2280;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_8__get_inst_id_2281;
    __Vtask___VforkTask_4____VlefCall_8__get_inst_id_2281 = 0;
    ::CData/*0:0*/ __Vtask___VforkTask_4____VlefLogAnd_6_2283;
    __Vtask___VforkTask_4____VlefLogAnd_6_2283 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_5__get_report_action_2284;
    __Vtask___VforkTask_4____VlefCall_5__get_report_action_2284 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_4__get_report_verbosity_level_2285;
    __Vtask___VforkTask_4____VlefCall_4__get_report_verbosity_level_2285 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_4____VlefCall_3__uvm_get_report_object_2286;
    ::CData/*0:0*/ __Vtask___VforkTask_4____VlefLogAnd_2_2287;
    __Vtask___VforkTask_4____VlefLogAnd_2_2287 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_4____VlefCall_0__get_objection_total_2289;
    __Vtask___VforkTask_4____VlefCall_0__get_objection_total_2289 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_4__unnamedblk204__DOT___local_report_object__2290;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_4__unnamedblk205__DOT___local_report_object__2291;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_4__unnamedblk206__DOT___local_report_object__2292;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_4__unnamedblk207__DOT___local_report_object__2293;
    ::IData/*31:0*/ __Vtask___VforkTask_4__ready_to_end_count_2294;
    __Vtask___VforkTask_4__ready_to_end_count_2294 = 0;
    ::CData/*0:0*/ __Vtask___VforkTask_4__do_ready_to_end_2295;
    __Vtask___VforkTask_4__do_ready_to_end_2295 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> __Vtask___VforkTask_4__phase_done_2296;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> __Vtask_get_objection__Vfuncout_2297;
    ::IData/*31:0*/ __Vtask_get_objection_total__Vfuncout_2298;
    __Vtask_get_objection_total__Vfuncout_2298 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1214;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1215;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2300;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_2301;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_2302;
    __Vtask_get_report_verbosity_level__Vfuncout_2302 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_2303;
    __Vtask_get_report_action__Vfuncout_2303 = 0;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_2305;
    __Vtask_get_inst_id__Vfuncout_2305 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2308;
    __Vtask_uvm_report_info__verbosity_2308 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2310;
    __Vtask_uvm_report_info__line_2310 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2312;
    __Vtask_uvm_report_info__report_enabled_checked_2312 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1216;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2313;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1217;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1218;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2314;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_2315;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_2316;
    __Vtask_get_report_verbosity_level__Vfuncout_2316 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_2317;
    __Vtask_get_report_action__Vfuncout_2317 = 0;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_2319;
    __Vtask_get_inst_id__Vfuncout_2319 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2322;
    __Vtask_uvm_report_info__verbosity_2322 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2324;
    __Vtask_uvm_report_info__line_2324 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2326;
    __Vtask_uvm_report_info__report_enabled_checked_2326 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1219;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2327;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1220;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1221;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2328;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_2329;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_2330;
    __Vtask_get_report_verbosity_level__Vfuncout_2330 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_2331;
    __Vtask_get_report_action__Vfuncout_2331 = 0;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_2333;
    __Vtask_get_inst_id__Vfuncout_2333 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2336;
    __Vtask_uvm_report_info__verbosity_2336 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2338;
    __Vtask_uvm_report_info__line_2338 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2340;
    __Vtask_uvm_report_info__report_enabled_checked_2340 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1222;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2341;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1223;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1224;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2342;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_2343;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_2344;
    __Vtask_get_report_verbosity_level__Vfuncout_2344 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_2345;
    __Vtask_get_report_action__Vfuncout_2345 = 0;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_2347;
    __Vtask_get_inst_id__Vfuncout_2347 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2350;
    __Vtask_uvm_report_info__verbosity_2350 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2352;
    __Vtask_uvm_report_info__line_2352 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2354;
    __Vtask_uvm_report_info__report_enabled_checked_2354 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1225;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2355;
    ::IData/*31:0*/ __Vtask_get_state__Vfuncout_2356;
    __Vtask_get_state__Vfuncout_2356 = 0;
    ::IData/*31:0*/ __Vtask_get_max_ready_to_end_iterations__Vfuncout_2357;
    __Vtask_get_max_ready_to_end_iterations__Vfuncout_2357 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_6__sync.onKill(vlProcess);
    ::IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2 = 0;
    ::IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1 = 0;
    __Vtask___VforkTask_4____VDynScope_unnamedblk201_5_2259 
        = unnamedblk201__DOT____VDynScope_unnamedblk201_5;
    __Vtask___VforkTask_4____VDynScope_execute_phase_4_2258 
        = __VDynScope_execute_phase_4;
    __Vtask___VforkTask_4__ready_to_end_count_2294 = 0U;
    __Vtask___VforkTask_4__do_ready_to_end_2295 = 0U;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 506)
                  ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 506)->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vtask_get_objection__Vfuncout_2297);
    __Vtask___VforkTask_4__phase_done_2296 = __Vtask_get_objection__Vfuncout_2297;
    VL_NULL_CHECK(__Vtask___VforkTask_4__phase_done_2296, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 508)->__VnoInFunc_get_objection_total(vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_unnamedblk201_5_2259, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 508)
                                                                                ->__PVT__top, __Vtask_get_objection_total__Vfuncout_2298);
    __Vtask___VforkTask_4____VlefCall_0__get_objection_total_2289 
        = __Vtask_get_objection_total__Vfuncout_2298;
    __Vtask___VforkTask_4____VlefLogAnd_2_2287 = (0U 
                                                  != __Vtask___VforkTask_4____VlefCall_0__get_objection_total_2289);
    if ((1U & (~ (::IData)(__Vtask___VforkTask_4____VlefLogAnd_2_2287)))) {
        __Vtask___VforkTask_4____VlefLogAnd_2_2287 
            = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_use_ovm_run_semantic;
        if (__Vtask___VforkTask_4____VlefLogAnd_2_2287) {
            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_unnamedblk201_5_2259, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 509)
                          ->__PVT__imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 509)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__Vfuncout_2299);
            this->__Vtask___VforkTask_4____VlefCall_1__get_name_2288 
                = this->__Vtask_get_name__Vfuncout_2299;
            __Vtask___VforkTask_4____VlefLogAnd_2_2287 
                = ("run"s == this->__Vtask___VforkTask_4____VlefCall_1__get_name_2288);
        }
    }
    if (__Vtask___VforkTask_4____VlefLogAnd_2_2287) {
        if ((1U & (~ VL_NULL_CHECK(__Vtask___VforkTask_4__phase_done_2296, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 510)
                   ->__PVT__m_top_all_dropped))) {
            co_await VL_NULL_CHECK(__Vtask___VforkTask_4__phase_done_2296, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 512)->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_unnamedblk201_5_2259, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 512)
                                                                                ->__PVT__top);
        }
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1215);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1215;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2300);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2300;
            __Vfunc_uvm_get_report_object__Vfuncout_1214 
                = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            __Vtask___VforkTask_4____VlefCall_3__uvm_get_report_object_2286 
                = __Vfunc_uvm_get_report_object__Vfuncout_1214;
            VL_NULL_CHECK(__Vtask___VforkTask_4____VlefCall_3__uvm_get_report_object_2286, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 515)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_2301);
            __Vtask___VforkTask_4__unnamedblk204__DOT___local_report_object__2290 
                = __Vtask_uvm_get_report_object__Vfuncout_2301;
            VL_NULL_CHECK(__Vtask___VforkTask_4__unnamedblk204__DOT___local_report_object__2290, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 515)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/EXE/ALLDROP"s, __Vtask_get_report_verbosity_level__Vfuncout_2302);
            __Vtask___VforkTask_4____VlefCall_4__get_report_verbosity_level_2285 
                = __Vtask_get_report_verbosity_level__Vfuncout_2302;
            __Vtask___VforkTask_4____VlefLogAnd_6_2283 
                = VL_LTES_III(32, 0x000001f4U, __Vtask___VforkTask_4____VlefCall_4__get_report_verbosity_level_2285);
            if (__Vtask___VforkTask_4____VlefLogAnd_6_2283) {
                VL_NULL_CHECK(__Vtask___VforkTask_4__unnamedblk204__DOT___local_report_object__2290, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 515)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/EXE/ALLDROP"s, __Vtask_get_report_action__Vfuncout_2303);
                __Vtask___VforkTask_4____VlefCall_5__get_report_action_2284 
                    = __Vtask_get_report_action__Vfuncout_2303;
                __Vtask___VforkTask_4____VlefLogAnd_6_2283 
                    = (0U != __Vtask___VforkTask_4____VlefCall_5__get_report_action_2284);
            }
            if (VL_UNLIKELY((__Vtask___VforkTask_4____VlefLogAnd_6_2283))) {
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 515)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 515)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2304);
                this->__Vtask___VforkTask_4____VlefCall_7__get_full_name_2282 
                    = this->__Vtask_get_full_name__Vfuncout_2304;
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 515)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 515)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_2305);
                __Vtask___VforkTask_4____VlefCall_8__get_inst_id_2281 
                    = __Vtask_get_inst_id__Vfuncout_2305;
                __Vtask_uvm_report_info__report_enabled_checked_2312 = 1U;
                this->__Vtask_uvm_report_info__context_name_2311 = ""s;
                __Vtask_uvm_report_info__line_2310 = 0x00000203U;
                this->__Vtask_uvm_report_info__filename_2309 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                __Vtask_uvm_report_info__verbosity_2308 = 0x000001f4U;
                this->__Vtask_uvm_report_info__message_2307 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(this->__Vtask___VforkTask_4____VlefCall_7__get_full_name_2282)
                                                                         , '~',32,__Vtask___VforkTask_4____VlefCall_8__get_inst_id_2281) , "PHASE EXIT ALL_DROPPED"s));
                this->__Vtask_uvm_report_info__id_2306 = "PH/TRC/EXE/ALLDROP"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1216);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1216;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2313);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2313;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2306, this->__Vtask_uvm_report_info__message_2307, __Vtask_uvm_report_info__verbosity_2308, this->__Vtask_uvm_report_info__filename_2309, __Vtask_uvm_report_info__line_2310, this->__Vtask_uvm_report_info__context_name_2311, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2312));
            }
        }
    } else if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1218);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1218;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2314);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2314;
        __Vfunc_uvm_get_report_object__Vfuncout_1217 
            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        __Vtask___VforkTask_4____VlefCall_9__uvm_get_report_object_2280 
            = __Vfunc_uvm_get_report_object__Vfuncout_1217;
        VL_NULL_CHECK(__Vtask___VforkTask_4____VlefCall_9__uvm_get_report_object_2280, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 518)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_2315);
        __Vtask___VforkTask_4__unnamedblk205__DOT___local_report_object__2291 
            = __Vtask_uvm_get_report_object__Vfuncout_2315;
        VL_NULL_CHECK(__Vtask___VforkTask_4__unnamedblk205__DOT___local_report_object__2291, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 518)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/SKIP"s, __Vtask_get_report_verbosity_level__Vfuncout_2316);
        __Vtask___VforkTask_4____VlefCall_10__get_report_verbosity_level_2279 
            = __Vtask_get_report_verbosity_level__Vfuncout_2316;
        __Vtask___VforkTask_4____VlefLogAnd_12_2277 
            = VL_LTES_III(32, 0x00000064U, __Vtask___VforkTask_4____VlefCall_10__get_report_verbosity_level_2279);
        if (__Vtask___VforkTask_4____VlefLogAnd_12_2277) {
            VL_NULL_CHECK(__Vtask___VforkTask_4__unnamedblk205__DOT___local_report_object__2291, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 518)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/SKIP"s, __Vtask_get_report_action__Vfuncout_2317);
            __Vtask___VforkTask_4____VlefCall_11__get_report_action_2278 
                = __Vtask_get_report_action__Vfuncout_2317;
            __Vtask___VforkTask_4____VlefLogAnd_12_2277 
                = (0U != __Vtask___VforkTask_4____VlefCall_11__get_report_action_2278);
        }
        if (VL_UNLIKELY((__Vtask___VforkTask_4____VlefLogAnd_12_2277))) {
            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 518)
                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 518)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2318);
            this->__Vtask___VforkTask_4____VlefCall_13__get_full_name_2276 
                = this->__Vtask_get_full_name__Vfuncout_2318;
            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 518)
                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 518)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_2319);
            __Vtask___VforkTask_4____VlefCall_14__get_inst_id_2275 
                = __Vtask_get_inst_id__Vfuncout_2319;
            __Vtask_uvm_report_info__report_enabled_checked_2326 = 1U;
            this->__Vtask_uvm_report_info__context_name_2325 = ""s;
            __Vtask_uvm_report_info__line_2324 = 0x00000206U;
            this->__Vtask_uvm_report_info__filename_2323 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
            __Vtask_uvm_report_info__verbosity_2322 = 0x00000064U;
            this->__Vtask_uvm_report_info__message_2321 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                     , 'S',&(this->__Vtask___VforkTask_4____VlefCall_13__get_full_name_2276)
                                                                     , '~',32,__Vtask___VforkTask_4____VlefCall_14__get_inst_id_2275) , "No objections raised, skipping phase"s));
            this->__Vtask_uvm_report_info__id_2320 = "PH/TRC/SKIP"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1219);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1219;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2327);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2327;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2320, this->__Vtask_uvm_report_info__message_2321, __Vtask_uvm_report_info__verbosity_2322, this->__Vtask_uvm_report_info__filename_2323, __Vtask_uvm_report_info__line_2324, this->__Vtask_uvm_report_info__context_name_2325, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2326));
        }
    }
    co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 521)
                           ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 521)->__VnoInFunc_wait_for_self_and_siblings_to_drop(vlProcess, vlSymsp);
    __Vtask___VforkTask_4__do_ready_to_end_2295 = 1U;
    while (__Vtask___VforkTask_4__do_ready_to_end_2295) {
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
        this->__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        ::CData/*0:0*/ __VdynTrigger_he1335ce6__1;
        __VdynTrigger_he1335ce6__1 = 0;
        __VdynTrigger_he1335ce6__1 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1 
            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        while ((1U & (~ (::IData)(__VdynTrigger_he1335ce6__1)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                            517);
            __VdynTrigger_he1335ce6__1 = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                          != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1);
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_he1335ce6__1);
            __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1 
                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        517);
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1221);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1221;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2328);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2328;
            __Vfunc_uvm_get_report_object__Vfuncout_1220 
                = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            __Vtask___VforkTask_4____VlefCall_15__uvm_get_report_object_2274 
                = __Vfunc_uvm_get_report_object__Vfuncout_1220;
            VL_NULL_CHECK(__Vtask___VforkTask_4____VlefCall_15__uvm_get_report_object_2274, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 530)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_2329);
            __Vtask___VforkTask_4__unnamedblk206__DOT___local_report_object__2292 
                = __Vtask_uvm_get_report_object__Vfuncout_2329;
            VL_NULL_CHECK(__Vtask___VforkTask_4__unnamedblk206__DOT___local_report_object__2292, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 530)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH_READY_TO_END"s, __Vtask_get_report_verbosity_level__Vfuncout_2330);
            __Vtask___VforkTask_4____VlefCall_16__get_report_verbosity_level_2273 
                = __Vtask_get_report_verbosity_level__Vfuncout_2330;
            __Vtask___VforkTask_4____VlefLogAnd_18_2271 
                = VL_LTES_III(32, 0x000001f4U, __Vtask___VforkTask_4____VlefCall_16__get_report_verbosity_level_2273);
            if (__Vtask___VforkTask_4____VlefLogAnd_18_2271) {
                VL_NULL_CHECK(__Vtask___VforkTask_4__unnamedblk206__DOT___local_report_object__2292, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 530)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH_READY_TO_END"s, __Vtask_get_report_action__Vfuncout_2331);
                __Vtask___VforkTask_4____VlefCall_17__get_report_action_2272 
                    = __Vtask_get_report_action__Vfuncout_2331;
                __Vtask___VforkTask_4____VlefLogAnd_18_2271 
                    = (0U != __Vtask___VforkTask_4____VlefCall_17__get_report_action_2272);
            }
            if (VL_UNLIKELY((__Vtask___VforkTask_4____VlefLogAnd_18_2271))) {
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 530)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 530)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2332);
                this->__Vtask___VforkTask_4____VlefCall_19__get_full_name_2270 
                    = this->__Vtask_get_full_name__Vfuncout_2332;
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 530)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 530)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_2333);
                __Vtask___VforkTask_4____VlefCall_20__get_inst_id_2269 
                    = __Vtask_get_inst_id__Vfuncout_2333;
                __Vtask_uvm_report_info__report_enabled_checked_2340 = 1U;
                this->__Vtask_uvm_report_info__context_name_2339 = ""s;
                __Vtask_uvm_report_info__line_2338 = 0x00000212U;
                this->__Vtask_uvm_report_info__filename_2337 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                __Vtask_uvm_report_info__verbosity_2336 = 0x000001f4U;
                this->__Vtask_uvm_report_info__message_2335 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(this->__Vtask___VforkTask_4____VlefCall_19__get_full_name_2270)
                                                                         , '~',32,__Vtask___VforkTask_4____VlefCall_20__get_inst_id_2269) , "PHASE READY TO END"s));
                this->__Vtask_uvm_report_info__id_2334 = "PH_READY_TO_END"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1222);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1222;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2341);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2341;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2334, this->__Vtask_uvm_report_info__message_2335, __Vtask_uvm_report_info__verbosity_2336, this->__Vtask_uvm_report_info__filename_2337, __Vtask_uvm_report_info__line_2338, this->__Vtask_uvm_report_info__context_name_2339, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2340));
            }
        }
        __Vtask___VforkTask_4__ready_to_end_count_2294 
            = ((::IData)(1U) + __Vtask___VforkTask_4__ready_to_end_count_2294);
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1224);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1224;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2342);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2342;
            __Vfunc_uvm_get_report_object__Vfuncout_1223 
                = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            __Vtask___VforkTask_4____VlefCall_21__uvm_get_report_object_2268 
                = __Vfunc_uvm_get_report_object__Vfuncout_1223;
            VL_NULL_CHECK(__Vtask___VforkTask_4____VlefCall_21__uvm_get_report_object_2268, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 532)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_2343);
            __Vtask___VforkTask_4__unnamedblk207__DOT___local_report_object__2293 
                = __Vtask_uvm_get_report_object__Vfuncout_2343;
            VL_NULL_CHECK(__Vtask___VforkTask_4__unnamedblk207__DOT___local_report_object__2293, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 532)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH_READY_TO_END_CB"s, __Vtask_get_report_verbosity_level__Vfuncout_2344);
            __Vtask___VforkTask_4____VlefCall_22__get_report_verbosity_level_2267 
                = __Vtask_get_report_verbosity_level__Vfuncout_2344;
            __Vtask___VforkTask_4____VlefLogAnd_24_2265 
                = VL_LTES_III(32, 0x0000012cU, __Vtask___VforkTask_4____VlefCall_22__get_report_verbosity_level_2267);
            if (__Vtask___VforkTask_4____VlefLogAnd_24_2265) {
                VL_NULL_CHECK(__Vtask___VforkTask_4__unnamedblk207__DOT___local_report_object__2293, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 532)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH_READY_TO_END_CB"s, __Vtask_get_report_action__Vfuncout_2345);
                __Vtask___VforkTask_4____VlefCall_23__get_report_action_2266 
                    = __Vtask_get_report_action__Vfuncout_2345;
                __Vtask___VforkTask_4____VlefLogAnd_24_2265 
                    = (0U != __Vtask___VforkTask_4____VlefCall_23__get_report_action_2266);
            }
            if (VL_UNLIKELY((__Vtask___VforkTask_4____VlefLogAnd_24_2265))) {
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 532)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 532)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2346);
                this->__Vtask___VforkTask_4____VlefCall_25__get_full_name_2264 
                    = this->__Vtask_get_full_name__Vfuncout_2346;
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 532)
                              ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 532)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_2347);
                __Vtask___VforkTask_4____VlefCall_26__get_inst_id_2263 
                    = __Vtask_get_inst_id__Vfuncout_2347;
                __Vtask_uvm_report_info__report_enabled_checked_2354 = 1U;
                this->__Vtask_uvm_report_info__context_name_2353 = ""s;
                __Vtask_uvm_report_info__line_2352 = 0x00000214U;
                this->__Vtask_uvm_report_info__filename_2351 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                __Vtask_uvm_report_info__verbosity_2350 = 0x0000012cU;
                this->__Vtask_uvm_report_info__message_2349 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(this->__Vtask___VforkTask_4____VlefCall_25__get_full_name_2264)
                                                                         , '~',32,__Vtask___VforkTask_4____VlefCall_26__get_inst_id_2263) , "CALLING READY_TO_END CB"s));
                this->__Vtask_uvm_report_info__id_2348 = "PH_READY_TO_END_CB"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1225);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1225;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2355);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2355;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2348, this->__Vtask_uvm_report_info__message_2349, __Vtask_uvm_report_info__verbosity_2350, this->__Vtask_uvm_report_info__filename_2351, __Vtask_uvm_report_info__line_2352, this->__Vtask_uvm_report_info__context_name_2353, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2354));
            }
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 533)
                      ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 533)->__VnoInFunc_set_state(vlProcess, vlSymsp, 0x00000020U);
        if ((VlNull{} != VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_unnamedblk201_5_2259, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 534)
             ->__PVT__imp)) {
            this->__VnoInFunc_traverse_on(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_unnamedblk201_5_2259, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 536)
                                          ->__PVT__imp, VlNull{}, VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 536)
                                          ->__PVT__phase, 0x00000020U);
        }
        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
        this->__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_9__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        ::CData/*0:0*/ __VdynTrigger_he1335ce6__2;
        __VdynTrigger_he1335ce6__2 = 0;
        __VdynTrigger_he1335ce6__2 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2 
            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        while ((1U & (~ (::IData)(__VdynTrigger_he1335ce6__2)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                            517);
            __VdynTrigger_he1335ce6__2 = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                          != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2);
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_he1335ce6__2);
            __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2 
                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        517);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 542)
                               ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 542)->__VnoInFunc_wait_for_self_and_siblings_to_drop(vlProcess, vlSymsp);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 543)
                      ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 543)->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__Vfuncout_2356);
        __Vtask___VforkTask_4____VlefCall_27__get_state_2262 
            = __Vtask_get_state__Vfuncout_2356;
        __Vtask___VforkTask_4____VlefLogAnd_29_2260 
            = (0x00000010U == __Vtask___VforkTask_4____VlefCall_27__get_state_2262);
        if (__Vtask___VforkTask_4____VlefLogAnd_29_2260) {
            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_4____VDynScope_execute_phase_4_2258, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 544)
                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 544)->__VnoInFunc_get_max_ready_to_end_iterations(vlSymsp, __Vtask_get_max_ready_to_end_iterations__Vfuncout_2357);
            __Vtask___VforkTask_4____VlefCall_28__get_max_ready_to_end_iterations_2261 
                = __Vtask_get_max_ready_to_end_iterations__Vfuncout_2357;
            __Vtask___VforkTask_4____VlefLogAnd_29_2260 
                = (__Vtask___VforkTask_4__ready_to_end_count_2294 
                   < __Vtask___VforkTask_4____VlefCall_28__get_max_ready_to_end_iterations_2261);
        }
        __Vtask___VforkTask_4__do_ready_to_end_2295 
            = __Vtask___VforkTask_4____VlefLogAnd_29_2260;
    }
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_6__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                         502);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_9__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_9__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                               516);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::IData/*31:0*/ __Vintraval_h5242ab7a__2;
    __Vintraval_h5242ab7a__2 = 0;
    __Vintraval_h5242ab7a__2 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    this->__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_9__0____Vfork_10__0(vlSymsp, __Vintraval_h5242ab7a__2);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_9__0____Vfork_10__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h5242ab7a__2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_9__0____Vfork_10__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__19;
    __VdynTrigger_hd539cefb__19 = 0;
    __VdynTrigger_hd539cefb__19 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__19)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        516);
        __VdynTrigger_hd539cefb__19 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__19);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        516);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                    516);
    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h5242ab7a__2;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_7__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_7__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                               516);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::IData/*31:0*/ __Vintraval_h5242ab7a__1;
    __Vintraval_h5242ab7a__1 = 0;
    __Vintraval_h5242ab7a__1 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    this->__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_7__0____Vfork_8__0(vlSymsp, __Vintraval_h5242ab7a__1);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_7__0____Vfork_8__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h5242ab7a__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__1____Vfork_7__0____Vfork_8__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__18;
    __VdynTrigger_hd539cefb__18 = 0;
    __VdynTrigger_hd539cefb__18 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__18)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        516);
        __VdynTrigger_hd539cefb__18 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__18);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        516);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                    516);
    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h5242ab7a__1;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlForkSync __Vfork_6__sync, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __VDynScope_execute_phase_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_5__0____Vfork_6__0\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __Vtask___VforkTask_3____VDynScope_execute_phase_4_2236;
    ::IData/*31:0*/ __Vtask___VforkTask_3____VlefCall_5__get_inst_id_2237;
    __Vtask___VforkTask_3____VlefCall_5__get_inst_id_2237 = 0;
    ::CData/*0:0*/ __Vtask___VforkTask_3____VlefLogAnd_3_2239;
    __Vtask___VforkTask_3____VlefLogAnd_3_2239 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_3____VlefCall_2__get_report_action_2240;
    __Vtask___VforkTask_3____VlefCall_2__get_report_action_2240 = 0;
    ::IData/*31:0*/ __Vtask___VforkTask_3____VlefCall_1__get_report_verbosity_level_2241;
    __Vtask___VforkTask_3____VlefCall_1__get_report_verbosity_level_2241 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_3____VlefCall_0__uvm_get_report_object_2242;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask___VforkTask_3__unnamedblk202__DOT___local_report_object__2243;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__Vfuncout_1211;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1212;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2244;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vtask_uvm_get_report_object__Vfuncout_2245;
    ::IData/*31:0*/ __Vtask_get_report_verbosity_level__Vfuncout_2246;
    __Vtask_get_report_verbosity_level__Vfuncout_2246 = 0;
    ::IData/*31:0*/ __Vtask_get_report_action__Vfuncout_2247;
    __Vtask_get_report_action__Vfuncout_2247 = 0;
    ::IData/*31:0*/ __Vtask_get_inst_id__Vfuncout_2249;
    __Vtask_get_inst_id__Vfuncout_2249 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2252;
    __Vtask_uvm_report_info__verbosity_2252 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2254;
    __Vtask_uvm_report_info__line_2254 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2256;
    __Vtask_uvm_report_info__report_enabled_checked_2256 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1213;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2257;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_6__sync.onKill(vlProcess);
    __Vtask___VforkTask_3____VDynScope_execute_phase_4_2236 
        = __VDynScope_execute_phase_4;
    if ((1U & (~ VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3____VDynScope_execute_phase_4_2236, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 498)
                               ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 498)
               ->__PVT__m_premature_end))) {
        ::CData/*0:0*/ __VdynTrigger_h9bce22d0__0;
        __VdynTrigger_h9bce22d0__0 = 0;
        __VdynTrigger_h9bce22d0__0 = 0U;
        while ((1U & (~ (::IData)(__VdynTrigger_h9bce22d0__0)))) {
            co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                            vlProcess, 
                                                                            "@([true] uvm_pkg::uvm_phase_hopper.__Vtask___VforkTask_3____VDynScope_execute_phase_4_2236.phase.m_premature_end)", 
                                                                            "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                            498);
            __VdynTrigger_h9bce22d0__0 = VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3____VDynScope_execute_phase_4_2236, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 498)
                                                       ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 498)
                ->__PVT__m_premature_end;
            vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_h9bce22d0__0);
        }
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                        vlProcess, 
                                                                        "@([true] uvm_pkg::uvm_phase_hopper.__Vtask___VforkTask_3____VDynScope_execute_phase_4_2236.phase.m_premature_end)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                        498);
    }
    if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1212);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1212;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2244);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2244;
        __Vfunc_uvm_get_report_object__Vfuncout_1211 
            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        __Vtask___VforkTask_3____VlefCall_0__uvm_get_report_object_2242 
            = __Vfunc_uvm_get_report_object__Vfuncout_1211;
        VL_NULL_CHECK(__Vtask___VforkTask_3____VlefCall_0__uvm_get_report_object_2242, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 499)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vtask_uvm_get_report_object__Vfuncout_2245);
        __Vtask___VforkTask_3__unnamedblk202__DOT___local_report_object__2243 
            = __Vtask_uvm_get_report_object__Vfuncout_2245;
        VL_NULL_CHECK(__Vtask___VforkTask_3__unnamedblk202__DOT___local_report_object__2243, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 499)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/EXE/JUMP"s, __Vtask_get_report_verbosity_level__Vfuncout_2246);
        __Vtask___VforkTask_3____VlefCall_1__get_report_verbosity_level_2241 
            = __Vtask_get_report_verbosity_level__Vfuncout_2246;
        __Vtask___VforkTask_3____VlefLogAnd_3_2239 
            = VL_LTES_III(32, 0x000001f4U, __Vtask___VforkTask_3____VlefCall_1__get_report_verbosity_level_2241);
        if (__Vtask___VforkTask_3____VlefLogAnd_3_2239) {
            VL_NULL_CHECK(__Vtask___VforkTask_3__unnamedblk202__DOT___local_report_object__2243, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 499)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/EXE/JUMP"s, __Vtask_get_report_action__Vfuncout_2247);
            __Vtask___VforkTask_3____VlefCall_2__get_report_action_2240 
                = __Vtask_get_report_action__Vfuncout_2247;
            __Vtask___VforkTask_3____VlefLogAnd_3_2239 
                = (0U != __Vtask___VforkTask_3____VlefCall_2__get_report_action_2240);
        }
        if (VL_UNLIKELY((__Vtask___VforkTask_3____VlefLogAnd_3_2239))) {
            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3____VDynScope_execute_phase_4_2236, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 499)
                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 499)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2248);
            this->__Vtask___VforkTask_3____VlefCall_4__get_full_name_2238 
                = this->__Vtask_get_full_name__Vfuncout_2248;
            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3____VDynScope_execute_phase_4_2236, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 499)
                          ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 499)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__Vfuncout_2249);
            __Vtask___VforkTask_3____VlefCall_5__get_inst_id_2237 
                = __Vtask_get_inst_id__Vfuncout_2249;
            __Vtask_uvm_report_info__report_enabled_checked_2256 = 1U;
            this->__Vtask_uvm_report_info__context_name_2255 = ""s;
            __Vtask_uvm_report_info__line_2254 = 0x000001f3U;
            this->__Vtask_uvm_report_info__filename_2253 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
            __Vtask_uvm_report_info__verbosity_2252 = 0x000001f4U;
            this->__Vtask_uvm_report_info__message_2251 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                     , 'S',&(this->__Vtask___VforkTask_3____VlefCall_4__get_full_name_2238)
                                                                     , '~',32,__Vtask___VforkTask_3____VlefCall_5__get_inst_id_2237) , "PHASE EXIT ON JUMP REQUEST"s));
            this->__Vtask_uvm_report_info__id_2250 = "PH/TRC/EXE/JUMP"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1213);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1213;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2257);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2257;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2250, this->__Vtask_uvm_report_info__message_2251, __Vtask_uvm_report_info__verbosity_2252, this->__Vtask_uvm_report_info__filename_2253, __Vtask_uvm_report_info__line_2254, this->__Vtask_uvm_report_info__context_name_2255, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2256));
        }
    }
    vlProcess->state(VlProcess::FINISHED);
    __Vfork_6__sync.done("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                         497);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_3__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_3__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                               516);
    vlSymsp->vlInst.TOP.__VnbaEventTrigger = 1U;
    ::IData/*31:0*/ __Vintraval_h5242ab7a__0;
    __Vintraval_h5242ab7a__0 = 0;
    __Vintraval_h5242ab7a__0 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    this->__VnoInFunc_execute_phase____Vfork_3__0____Vfork_4__0(vlSymsp, __Vintraval_h5242ab7a__0);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_3__0____Vfork_4__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h5242ab7a__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_3__0____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VdynTrigger_hd539cefb__17;
    __VdynTrigger_hd539cefb__17 = 0;
    __VdynTrigger_hd539cefb__17 = 0U;
    vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    while ((1U & (~ (::IData)(__VdynTrigger_hd539cefb__17)))) {
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.evaluation(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        516);
        __VdynTrigger_hd539cefb__17 = vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.isFired();
        vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.anyTriggered(__VdynTrigger_hd539cefb__17);
        co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.postUpdate(
                                                                        nullptr, 
                                                                        "@([event] __VnbaEvent)", 
                                                                        "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                        516);
        vlSymsp->vlInst.TOP.__Vnontrivs.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdynSched.resumption(
                                                                    nullptr, 
                                                                    "@([event] __VnbaEvent)", 
                                                                    "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 
                                                                    516);
    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h5242ab7a__0;
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_2__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> unnamedblk201__DOT____VDynScope_unnamedblk201_5, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __VDynScope_execute_phase_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_phase____Vfork_2__0\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_31> __Vtask___VforkTask_2____VDynScope_execute_phase_4_2233;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_32> __Vtask___VforkTask_2____VDynScope_unnamedblk201_5_2234;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vtask___VforkTask_2____VlefCall_0__self_2235;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vfunc_self__Vfuncout_1210;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_2____VDynScope_unnamedblk201_5_2234 
        = unnamedblk201__DOT____VDynScope_unnamedblk201_5;
    __Vtask___VforkTask_2____VDynScope_execute_phase_4_2233 
        = __VDynScope_execute_phase_4;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                               475);
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__Vfuncout_1210);
    __Vtask___VforkTask_2____VlefCall_0__self_2235 
        = __Vfunc_self__Vfuncout_1210;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2____VDynScope_execute_phase_4_2233, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 477)
                  ->__PVT__phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 477)->__PVT__m_phase_proc 
        = __Vtask___VforkTask_2____VlefCall_0__self_2235;
    this->__VnoInFunc_traverse_on(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_2____VDynScope_unnamedblk201_5_2234, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 478)
                                  ->__PVT__task_phase, VlNull{}, VL_NULL_CHECK(__Vtask___VforkTask_2____VDynScope_execute_phase_4_2233, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 478)
                                  ->__PVT__phase, 0x00000010U);
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.waitForever(
                                                                     vlProcess, 
                                                                     "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                                     482);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_end_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_end_phase\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1237;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2450;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2453;
    __Vtask_uvm_report_info__verbosity_2453 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2455;
    __Vtask_uvm_report_info__line_2455 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2457;
    __Vtask_uvm_report_info__report_enabled_checked_2457 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1238;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2458;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1239;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2459;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2462;
    __Vtask_uvm_report_info__verbosity_2462 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2464;
    __Vtask_uvm_report_info__line_2464 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2466;
    __Vtask_uvm_report_info__report_enabled_checked_2466 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1240;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2467;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1241;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2468;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2471;
    __Vtask_uvm_report_info__verbosity_2471 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2473;
    __Vtask_uvm_report_info__line_2473 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2475;
    __Vtask_uvm_report_info__report_enabled_checked_2475 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1242;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2476;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1243;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2477;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2480;
    __Vtask_uvm_report_info__verbosity_2480 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2482;
    __Vtask_uvm_report_info__line_2482 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2484;
    __Vtask_uvm_report_info__report_enabled_checked_2484 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1244;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2485;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_29__get_inst_id;
    ::std::string __VlefCall_28__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_27;
    ::IData/*31:0*/ __VlefCall_26__get_report_action;
    ::IData/*31:0*/ __VlefCall_25__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_24__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_23;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __VlefCall_22__get_imp;
    ::IData/*31:0*/ __VlefCall_21__get_inst_id;
    ::std::string __VlefCall_20__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_19;
    ::IData/*31:0*/ __VlefCall_18__get_report_action;
    ::IData/*31:0*/ __VlefCall_17__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_16__uvm_get_report_object;
    ::std::string __VlefCall_15__get_domain_name;
    ::std::string __VlefCall_14__get_schedule_name;
    ::std::string __VlefCall_13__get_name;
    ::CData/*0:0*/ __VlefLogAnd_12;
    ::IData/*31:0*/ __VlefCall_11__get_report_action;
    ::IData/*31:0*/ __VlefCall_10__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_9__uvm_get_report_object;
    ::std::string __VlefCall_8__get_name;
    ::std::string __VlefCall_7__get_domain_name;
    ::std::string __VlefCall_6__get_schedule_name;
    ::std::string __VlefCall_5__get_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_0__get_phase_type;
    ::IData/*31:0*/ unnamedblk216__DOT__prev_state;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk216__DOT__imp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk216__DOT__unnamedblk217__DOT__jump_phase;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk219__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk220__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_task_phase> unnamedblk216__DOT__unnamedblk221__DOT__task_phase;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk216__DOT__unnamedblk222__DOT___local_report_object_;
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 612)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
    if ((1U == __VlefCall_0__get_phase_type)) {
        unnamedblk216__DOT__prev_state = 0U;
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 615)->__VnoInFunc_get_state(vlSymsp, unnamedblk216__DOT__prev_state);
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 616)->__VnoInFunc_get_imp(vlSymsp, unnamedblk216__DOT__imp);
        if (VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 618)
            ->__PVT__m_premature_end) {
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 620)->__VnoInFunc_get_jump_target(vlSymsp, unnamedblk216__DOT__unnamedblk217__DOT__jump_phase);
            if ((VlNull{} != unnamedblk216__DOT__unnamedblk217__DOT__jump_phase)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1237);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1237;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2450);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2450;
                __VlefCall_1__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 628)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 628)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH_JUMP"s, __VlefCall_2__get_report_verbosity_level);
                __VlefLogAnd_4 = VL_LTES_III(32, 0x000000c8U, __VlefCall_2__get_report_verbosity_level);
                if (__VlefLogAnd_4) {
                    VL_NULL_CHECK(unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk218__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 628)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH_JUMP"s, __VlefCall_3__get_report_action);
                    __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_4))) {
                    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 628)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 628)->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __VlefCall_6__get_schedule_name);
                    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 628)->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, __VlefCall_7__get_domain_name);
                    VL_NULL_CHECK(unnamedblk216__DOT__unnamedblk217__DOT__jump_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 628)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                    __Vtask_uvm_report_info__report_enabled_checked_2457 = 1U;
                    this->__Vtask_uvm_report_info__context_name_2456 = ""s;
                    __Vtask_uvm_report_info__line_2455 = 0x00000274U;
                    this->__Vtask_uvm_report_info__filename_2454 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                    __Vtask_uvm_report_info__verbosity_2453 = 0x000000c8U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_2452
                                  ,"phase %s (schedule %s, domain %s) is jumping to phase %s",4
                                  , 'S',&(__VlefCall_5__get_name)
                                  , 'S',&(__VlefCall_6__get_schedule_name)
                                  , 'S',&(__VlefCall_7__get_domain_name)
                                  , 'S',&(__VlefCall_8__get_name));
                    this->__Vtask_uvm_report_info__id_2451 = "PH_JUMP"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1238);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1238;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2458);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_2458;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2451, this->__Vtask_uvm_report_info__message_2452, __Vtask_uvm_report_info__verbosity_2453, this->__Vtask_uvm_report_info__filename_2454, __Vtask_uvm_report_info__line_2455, this->__Vtask_uvm_report_info__context_name_2456, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2457));
                }
            } else {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1239);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1239;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2459);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2459;
                __VlefCall_9__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_9__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 636)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk219__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk219__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 636)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH_JUMP"s, __VlefCall_10__get_report_verbosity_level);
                __VlefLogAnd_12 = VL_LTES_III(32, 0x000000c8U, __VlefCall_10__get_report_verbosity_level);
                if (__VlefLogAnd_12) {
                    VL_NULL_CHECK(unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk219__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 636)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH_JUMP"s, __VlefCall_11__get_report_action);
                    __VlefLogAnd_12 = (0U != __VlefCall_11__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_12))) {
                    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 636)->__VnoInFunc_get_name(vlSymsp, __VlefCall_13__get_name);
                    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 636)->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __VlefCall_14__get_schedule_name);
                    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 636)->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, __VlefCall_15__get_domain_name);
                    __Vtask_uvm_report_info__report_enabled_checked_2466 = 1U;
                    this->__Vtask_uvm_report_info__context_name_2465 = ""s;
                    __Vtask_uvm_report_info__line_2464 = 0x0000027cU;
                    this->__Vtask_uvm_report_info__filename_2463 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                    __Vtask_uvm_report_info__verbosity_2462 = 0x000000c8U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_2461
                                  ,"phase %s (schedule %s, domain %s) is ending prematurely",3
                                  , 'S',&(__VlefCall_13__get_name)
                                  , 'S',&(__VlefCall_14__get_schedule_name)
                                  , 'S',&(__VlefCall_15__get_domain_name));
                    this->__Vtask_uvm_report_info__id_2460 = "PH_JUMP"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1240);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1240;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2467);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_2467;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2460, this->__Vtask_uvm_report_info__message_2461, __Vtask_uvm_report_info__verbosity_2462, this->__Vtask_uvm_report_info__filename_2463, __Vtask_uvm_report_info__line_2464, this->__Vtask_uvm_report_info__context_name_2465, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2466));
                }
            }
            co_await this->__VnoInFunc_wait_for_waiters(vlProcess, vlSymsp, phase, unnamedblk216__DOT__prev_state);
            if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1241);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1241;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2468);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2468;
                __VlefCall_16__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_16__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 640)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk220__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk220__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 640)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH_END"s, __VlefCall_17__get_report_verbosity_level);
                __VlefLogAnd_19 = VL_LTES_III(32, 0x0000012cU, __VlefCall_17__get_report_verbosity_level);
                if (__VlefLogAnd_19) {
                    VL_NULL_CHECK(unnamedblk216__DOT__unnamedblk217__DOT__unnamedblk220__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 640)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH_END"s, __VlefCall_18__get_report_action);
                    __VlefLogAnd_19 = (0U != __VlefCall_18__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_19))) {
                    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 640)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 640)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_21__get_inst_id);
                    __Vtask_uvm_report_info__report_enabled_checked_2475 = 1U;
                    this->__Vtask_uvm_report_info__context_name_2474 = ""s;
                    __Vtask_uvm_report_info__line_2473 = 0x00000280U;
                    this->__Vtask_uvm_report_info__filename_2472 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                    __Vtask_uvm_report_info__verbosity_2471 = 0x0000012cU;
                    this->__Vtask_uvm_report_info__message_2470 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                             , 'S',&(__VlefCall_20__get_full_name)
                                                                             , '~',32,__VlefCall_21__get_inst_id) , "ENDING PHASE PREMATURELY"s));
                    this->__Vtask_uvm_report_info__id_2469 = "PH_END"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1242);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1242;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2476);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_2476;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2469, this->__Vtask_uvm_report_info__message_2470, __Vtask_uvm_report_info__verbosity_2471, this->__Vtask_uvm_report_info__filename_2472, __Vtask_uvm_report_info__line_2473, this->__Vtask_uvm_report_info__context_name_2474, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2475));
                }
            }
        } else {
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 647)->__VnoInFunc_get_imp(vlSymsp, __VlefCall_22__get_imp);
            __VlefExpr_23 = VL_CAST_DYNAMIC(__VlefCall_22__get_imp, unnamedblk216__DOT__unnamedblk221__DOT__task_phase);
            if ((1U & (~ (0U != __VlefExpr_23)))) {
                co_await VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 649)->__VnoInFunc_m_wait_for_pred(vlProcess, vlSymsp);
            }
        }
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1243);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1243;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2477);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2477;
            __VlefCall_24__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_24__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 658)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk216__DOT__unnamedblk222__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk216__DOT__unnamedblk222__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 658)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH_END"s, __VlefCall_25__get_report_verbosity_level);
            __VlefLogAnd_27 = VL_LTES_III(32, 0x0000012cU, __VlefCall_25__get_report_verbosity_level);
            if (__VlefLogAnd_27) {
                VL_NULL_CHECK(unnamedblk216__DOT__unnamedblk222__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 658)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH_END"s, __VlefCall_26__get_report_action);
                __VlefLogAnd_27 = (0U != __VlefCall_26__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_27))) {
                VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 658)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
                VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 658)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_29__get_inst_id);
                __Vtask_uvm_report_info__report_enabled_checked_2484 = 1U;
                this->__Vtask_uvm_report_info__context_name_2483 = ""s;
                __Vtask_uvm_report_info__line_2482 = 0x00000292U;
                this->__Vtask_uvm_report_info__filename_2481 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                __Vtask_uvm_report_info__verbosity_2480 = 0x0000012cU;
                this->__Vtask_uvm_report_info__message_2479 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(__VlefCall_28__get_full_name)
                                                                         , '~',32,__VlefCall_29__get_inst_id) , "ENDING PHASE"s));
                this->__Vtask_uvm_report_info__id_2478 = "PH_END"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1244);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1244;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2485);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2485;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2478, this->__Vtask_uvm_report_info__message_2479, __Vtask_uvm_report_info__verbosity_2480, this->__Vtask_uvm_report_info__filename_2481, __Vtask_uvm_report_info__line_2482, this->__Vtask_uvm_report_info__context_name_2483, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2484));
            }
        }
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 659)->__VnoInFunc_set_state(vlProcess, vlSymsp, 0x00000040U);
        if ((VlNull{} != unnamedblk216__DOT__imp)) {
            this->__VnoInFunc_traverse_on(vlProcess, vlSymsp, unnamedblk216__DOT__imp, VlNull{}, phase, 0x00000040U);
        }
        co_await this->__VnoInFunc_wait_for_waiters(vlProcess, vlSymsp, phase, unnamedblk216__DOT__prev_state);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_cleanup_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_cleanup_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_0__get_phase_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> unnamedblk223__DOT__phase_done;
    ::IData/*31:0*/ unnamedblk223__DOT__prev_state;
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 673)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
    if ((1U == __VlefCall_0__get_phase_type)) {
        unnamedblk223__DOT__prev_state = 0U;
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 676)->__VnoInFunc_get_state(vlSymsp, unnamedblk223__DOT__prev_state);
        if (VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 678)
            ->__PVT__m_premature_end) {
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 680)->__VnoInFunc_set_state(vlProcess, vlSymsp, 0x00000200U);
        } else {
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 685)->__VnoInFunc_set_state(vlProcess, vlSymsp, 0x00000080U);
        }
        if ((VlNull{} != VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 689)
             ->__PVT__m_phase_proc)) {
            VL_NULL_CHECK(VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 690)
                          ->__PVT__m_phase_proc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 690)->__VnoInFunc_kill(vlSymsp);
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 691)->__PVT__m_phase_proc = VlNull{};
        }
        co_await this->__VnoInFunc_wait_for_waiters(vlProcess, vlSymsp, phase, unnamedblk223__DOT__prev_state);
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 694)->__VnoInFunc_get_objection(vlProcess, vlSymsp, unnamedblk223__DOT__phase_done);
        if ((VlNull{} != unnamedblk223__DOT__phase_done)) {
            VL_NULL_CHECK(unnamedblk223__DOT__phase_done, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 697)->__VnoInFunc_clear(vlProcess, vlSymsp, VlNull{});
        }
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_finish_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_finish_phase\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1245;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2486;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2489;
    __Vtask_uvm_report_info__verbosity_2489 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2491;
    __Vtask_uvm_report_info__line_2491 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2493;
    __Vtask_uvm_report_info__report_enabled_checked_2493 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1246;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2494;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_6__get_inst_id;
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__is_jumping_forward;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk224__DOT___local_report_object_;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>, ::CData/*0:0*/> unnamedblk225__DOT__edges;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>> unnamedblk225__DOT__succ_q;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ__Vnext;
    ::CData/*0:0*/ unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ__Vmore;
    unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ__Vmore = 0;
    ::IData/*31:0*/ unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i;
    unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i__Vloopsize;
    unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> phase_done;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> jump_phase;
    ::IData/*31:0*/ prev_state;
    prev_state = 0U;
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 709)->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 710)->__VnoInFunc_get_jump_target(vlSymsp, jump_phase);
    VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 711)->__VnoInFunc_get_state(vlSymsp, prev_state);
    if ((VlNull{} != jump_phase)) {
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 722)->__VnoInFunc_is_jumping_forward(vlSymsp, __VlefCall_0__is_jumping_forward);
        if (__VlefCall_0__is_jumping_forward) {
            VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 723)->__VnoInFunc_clear_successors(vlProcess, vlSymsp, 0x00000100U, jump_phase);
        }
        VL_NULL_CHECK(jump_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 725)->__VnoInFunc_clear_successors(vlProcess, vlSymsp, 1U, VlNull{});
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 726)->__VnoInFunc_set_jump_phase(vlProcess, vlSymsp, VlNull{});
    } else {
        if (vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1245);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1245;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2486);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2486;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 730)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk224__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk224__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 730)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "PH/TRC/DONE"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0x00000064U, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk224__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 730)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "PH/TRC/DONE"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 730)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 730)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
                __Vtask_uvm_report_info__report_enabled_checked_2493 = 1U;
                this->__Vtask_uvm_report_info__context_name_2492 = ""s;
                __Vtask_uvm_report_info__line_2491 = 0x000002daU;
                this->__Vtask_uvm_report_info__filename_2490 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh"s;
                __Vtask_uvm_report_info__verbosity_2489 = 0x00000064U;
                this->__Vtask_uvm_report_info__message_2488 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(__VlefCall_5__get_full_name)
                                                                         , '~',32,__VlefCall_6__get_inst_id) , "Completed phase"s));
                this->__Vtask_uvm_report_info__id_2487 = "PH/TRC/DONE"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1246);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1246;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2494);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2494;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2487, this->__Vtask_uvm_report_info__message_2488, __Vtask_uvm_report_info__verbosity_2489, this->__Vtask_uvm_report_info__filename_2490, __Vtask_uvm_report_info__line_2491, this->__Vtask_uvm_report_info__context_name_2492, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2493));
            }
        }
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 731)->__VnoInFunc_set_state(vlProcess, vlSymsp, 0x00000100U);
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 732)->__PVT__m_phase_proc = VlNull{};
    }
    co_await this->__VnoInFunc_wait_for_waiters(vlProcess, vlSymsp, phase, prev_state);
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 739)->__VnoInFunc_clear(vlProcess, vlSymsp, VlNull{});
    }
    if ((VlNull{} != jump_phase)) {
        co_await this->__VnoInFunc_schedule_phase(vlProcess, vlSymsp, jump_phase, phase);
    } else {
        unnamedblk225__DOT__edges.clear();
        unnamedblk225__DOT__edges.atDefault() = 0;
        unnamedblk225__DOT__succ_q.clear();
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 753)->__VnoInFunc_get_successors(vlSymsp, unnamedblk225__DOT__edges);
        if ((0U != unnamedblk225__DOT__edges.size())) {
            unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ__Vmore 
                = (0U != unnamedblk225__DOT__edges.first(unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ__Vnext));
            while (unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ__Vmore) {
                unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ 
                    = unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ__Vnext;
                unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ__Vmore 
                    = (0U != unnamedblk225__DOT__edges.next(unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ__Vnext));
                unnamedblk225__DOT__succ_q.push_back(unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk227__DOT__succ);
            }
            unnamedblk225__DOT__succ_q.sort([&](::IData/*31:0*/ item__DOT__index, 
                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> item) -> 
                                            ::std::string {
                    return (([&]() {
                                VL_NULL_CHECK(item, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 763)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__Vfuncout_2495);
                            }(), this->__Vtask_get_full_name__Vfuncout_2495));
                }
            );
            unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i, unnamedblk225__DOT__succ_q.size())) {
                unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i__Vloopsize 
                    = unnamedblk225__DOT__succ_q.size();
                co_await this->__VnoInFunc_schedule_phase(vlProcess, vlSymsp, unnamedblk225__DOT__succ_q.at(unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i), phase);
                if ((unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i__Vloopsize 
                     <= unnamedblk225__DOT__succ_q.size())) {
                    unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i 
                        = ((::IData)(1U) + unnamedblk225__DOT__unnamedblk226__DOT__unnamedblk228__DOT__i);
                }
            }
        }
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_process_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_process_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_sync_phase(vlProcess, vlSymsp, phase);
    co_await this->__VnoInFunc_start_phase(vlProcess, vlSymsp, phase);
    co_await this->__VnoInFunc_execute_phase(vlProcess, vlSymsp, phase);
    co_await this->__VnoInFunc_end_phase(vlProcess, vlSymsp, phase);
    co_await this->__VnoInFunc_cleanup_phase(vlProcess, vlSymsp, phase);
    co_await this->__VnoInFunc_finish_phase(vlProcess, vlSymsp, phase);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_wait_for_waiters(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase, ::IData/*31:0*/ prev_state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_wait_for_waiters\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0ULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                               787);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_traverse_on(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> imp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> node, ::IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_traverse_on\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__Vfuncout_1247;
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == comp)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1247);
        comp = __Vfunc_get__Vfuncout_1247;
    }
    VL_NULL_CHECK(imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 799)->__VnoInFunc_traverse(vlProcess, vlSymsp, comp, node, state);
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_on(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> imp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> comp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> node) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_execute_on\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(imp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 805)->__VnoInFunc_execute(vlProcess, vlSymsp, comp, node);
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___VforkTask_1(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_27> __VDynScope_run_phases_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___VforkTask_1\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask_get__phase_2496;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_30> _Vwrapped_unnamedblk195_3__DOT____VDynScope_unnamedblk195_3;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                               379);
    while (true) {
        co_await this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__phase_2496);
        VL_NULL_CHECK(__VDynScope_run_phases_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 382)->__PVT__ph 
            = __Vtask_get__phase_2496;
        _Vwrapped_unnamedblk195_3__DOT____VDynScope_unnamedblk195_3 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03a__VDynScope_30, vlSymsp);
        VL_NULL_CHECK(_Vwrapped_unnamedblk195_3__DOT____VDynScope_unnamedblk195_3, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 384)->__PVT__phase 
            = VL_NULL_CHECK(__VDynScope_run_phases_0, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 384)
            ->__PVT__ph;
        this->__VnoInFunc___VforkTask_1____Vfork_11__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, _Vwrapped_unnamedblk195_3__DOT____VDynScope_unnamedblk195_3);
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___VforkTask_1____Vfork_11__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_30> _Vwrapped_unnamedblk195_3__DOT____VDynScope_unnamedblk195_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::__VnoInFunc___VforkTask_1____Vfork_11__0\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_30> __Vtask___VforkTask_0____VDynScope_unnamedblk195_3_2497;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0____VDynScope_unnamedblk195_3_2497 
        = _Vwrapped_unnamedblk195_3__DOT____VDynScope_unnamedblk195_3;
    co_await vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.delay(0xffffffffffffffffULL, 
                                                               vlProcess, 
                                                               "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 
                                                               383);
    co_await this->__VnoInFunc_process_phase(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_unnamedblk195_3_2497, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 386)
                                             ->__PVT__phase);
    this->__VnoInFunc_drop_objection(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0____VDynScope_unnamedblk195_3_2497, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_phase_hopper.svh", 387)
                                     ->__PVT__phase, "phase done"s, 1U);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::~Vtb_top_uvm_pkg__03a__03auvm_phase_hopper() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_phase_hopper::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_queue:" + VL_TO_STRING(__PVT__m_queue);
    out += ", m_objection:" + VL_TO_STRING(__PVT__m_objection);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
