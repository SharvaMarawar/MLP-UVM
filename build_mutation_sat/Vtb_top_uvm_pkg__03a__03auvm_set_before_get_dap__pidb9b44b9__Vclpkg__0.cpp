// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif2454995> __Vfunc_get__Vfuncout_1320;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif2454995__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1320);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1320;
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9, vlProcess, vlSymsp, "unnamed-uvm_set_before_get_dap#(T)"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi35777511::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_set = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_set(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_set\n"); );
    // Body
    this->__PVT__m_set = 1U;
    this->__PVT__m_value = value;
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_try_set(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> value, ::CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_try_set\n"); );
    // Body
    try_set__Vfuncrtn = 0U;
    this->__VnoInFunc_set(vlSymsp, value);
    try_set__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1321;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2602;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2605;
    __Vtask_uvm_report_error__verbosity_2605 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2607;
    __Vtask_uvm_report_error__line_2607 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2609;
    __Vtask_uvm_report_error__report_enabled_checked_2609 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1322;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2610;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    if ((1U & (~ (::IData)(this->__PVT__m_set)))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1321);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1321;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2602);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2602;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 127)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 127)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SET_BEFORE_GET_DAP/NO_SET"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 127)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SET_BEFORE_GET_DAP/NO_SET"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_error__report_enabled_checked_2609 = 1U;
            this->__Vtask_uvm_report_error__context_name_2608 = ""s;
            __Vtask_uvm_report_error__line_2607 = 0x0000007fU;
            this->__Vtask_uvm_report_error__filename_2606 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh"s;
            __Vtask_uvm_report_error__verbosity_2605 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_2604
                          ,"Attempt to get value on '%s', but the data access policy forbits calling 'get' prior to calling 'set' or 'try_set'!",1
                          , 'S',&(__VlefCall_4__get_full_name));
            this->__Vtask_uvm_report_error__id_2603 = "UVM/SET_BEFORE_GET_DAP/NO_SET"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1322);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1322;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2610);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2610;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2603, this->__Vtask_uvm_report_error__message_2604, __Vtask_uvm_report_error__verbosity_2605, this->__Vtask_uvm_report_error__filename_2606, __Vtask_uvm_report_error__line_2607, this->__Vtask_uvm_report_error__context_name_2608, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2609));
        }
    }
    get__Vfuncrtn = this->__PVT__m_value;
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg> &value, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_try_get\n"); );
    // Body
    if (this->__PVT__m_set) {
        value = this->__PVT__m_value;
        try_get__Vfuncrtn = 1U;
    } else {
        try_get__Vfuncrtn = 0U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1323;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2611;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2614;
    __Vtask_uvm_report_error__verbosity_2614 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2616;
    __Vtask_uvm_report_error__line_2616 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2618;
    __Vtask_uvm_report_error__report_enabled_checked_2618 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1324;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2619;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1323);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1323;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2611);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2611;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 159)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 159)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SET_BEFORE_GET_DAP/CPY"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 159)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SET_BEFORE_GET_DAP/CPY"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_2618 = 1U;
        this->__Vtask_uvm_report_error__context_name_2617 = ""s;
        __Vtask_uvm_report_error__line_2616 = 0x0000009fU;
        this->__Vtask_uvm_report_error__filename_2615 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_2614 = 0U;
        this->__Vtask_uvm_report_error__message_2613 = "'copy()' is not supported for 'uvm_set_before_get_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_2612 = "UVM/SET_BEFORE_GET_DAP/CPY"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1324);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1324;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2619);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2619;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2612, this->__Vtask_uvm_report_error__message_2613, __Vtask_uvm_report_error__verbosity_2614, this->__Vtask_uvm_report_error__filename_2615, __Vtask_uvm_report_error__line_2616, this->__Vtask_uvm_report_error__context_name_2617, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2618));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1325;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2620;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2623;
    __Vtask_uvm_report_error__verbosity_2623 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2625;
    __Vtask_uvm_report_error__line_2625 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2627;
    __Vtask_uvm_report_error__report_enabled_checked_2627 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1326;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2628;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1325);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1325;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2620);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2620;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 164)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 164)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SET_BEFORE_GET_DAP/PCK"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 164)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SET_BEFORE_GET_DAP/PCK"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_2627 = 1U;
        this->__Vtask_uvm_report_error__context_name_2626 = ""s;
        __Vtask_uvm_report_error__line_2625 = 0x000000a4U;
        this->__Vtask_uvm_report_error__filename_2624 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_2623 = 0U;
        this->__Vtask_uvm_report_error__message_2622 = "'pack()' is not supported for 'uvm_set_before_get_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_2621 = "UVM/SET_BEFORE_GET_DAP/PCK"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1326);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1326;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2628);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2628;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2621, this->__Vtask_uvm_report_error__message_2622, __Vtask_uvm_report_error__verbosity_2623, this->__Vtask_uvm_report_error__filename_2624, __Vtask_uvm_report_error__line_2625, this->__Vtask_uvm_report_error__context_name_2626, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2627));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1327;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2629;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2632;
    __Vtask_uvm_report_error__verbosity_2632 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2634;
    __Vtask_uvm_report_error__line_2634 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2636;
    __Vtask_uvm_report_error__report_enabled_checked_2636 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1328;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2637;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1327);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1327;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2629);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2629;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 169)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 169)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SET_BEFORE_GET_DAP/UPK"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 169)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SET_BEFORE_GET_DAP/UPK"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_2636 = 1U;
        this->__Vtask_uvm_report_error__context_name_2635 = ""s;
        __Vtask_uvm_report_error__line_2634 = 0x000000a9U;
        this->__Vtask_uvm_report_error__filename_2633 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_2632 = 0U;
        this->__Vtask_uvm_report_error__message_2631 = "'unpack()' is not supported for 'uvm_set_before_get_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_2630 = "UVM/SET_BEFORE_GET_DAP/UPK"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1328);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1328;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2637);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2637;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2630, this->__Vtask_uvm_report_error__message_2631, __Vtask_uvm_report_error__verbosity_2632, this->__Vtask_uvm_report_error__filename_2633, __Vtask_uvm_report_error__line_2634, this->__Vtask_uvm_report_error__context_name_2635, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2636));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_convert2string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    if (this->__PVT__m_set) {
        __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__m_value);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(class uvm_pkg::m_uvm_tr_stream_cfg) %0p [SET]",1
                      , '!',&(__Vtemp_1));
    } else {
        __Vtemp_2 = VL_TO_STRING_DEREF(this->__PVT__m_value);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(class uvm_pkg::m_uvm_tr_stream_cfg) %0p [UNSET]",1
                      , '!',&(__Vtemp_2));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_do_print\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 191)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "set_state"s, (::QData)((::IData)(this->__PVT__m_set)), 1U, 0U, 0x2eU, ""s);
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__m_value);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_set_before_get_dap.svh", 192)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "value"s, "class uvm_pkg::m_uvm_tr_stream_cfg"s, 0U, VL_SFORMATF_N_NX("%0p",1
                                                                                , '!',&(__Vtemp_1)) , 0x2eU);
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_set = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::~Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_set_before_get_dap__pidb9b44b9::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_value:" + VL_TO_STRING(__PVT__m_value);
    out += ", m_set:" + VL_TO_STRING(__PVT__m_set);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi35777511::to_string_middle();
    return (out);
}
