// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0758bed1> __Vfunc_get__Vfuncout_1398;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi0758bed1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1398);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1398;
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c, vlProcess, vlSymsp, "unnamed-uvm_simple_lock_dap#(T)"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi219c5c31::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_locked = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_set\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1399;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3082;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3085;
    __Vtask_uvm_report_error__verbosity_3085 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3087;
    __Vtask_uvm_report_error__line_3087 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3089;
    __Vtask_uvm_report_error__report_enabled_checked_3089 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1400;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3090;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    if (this->__PVT__m_locked) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1399);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1399;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3082);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3082;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 78)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 78)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SIMPLE_LOCK_DAP/SAG"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 78)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SIMPLE_LOCK_DAP/SAG"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_error__report_enabled_checked_3089 = 1U;
            this->__Vtask_uvm_report_error__context_name_3088 = ""s;
            __Vtask_uvm_report_error__line_3087 = 0x0000004eU;
            this->__Vtask_uvm_report_error__filename_3086 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh"s;
            __Vtask_uvm_report_error__verbosity_3085 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_3084
                          ,"Attempt to set new value on '%s', but the data access policy forbids setting while locked!",1
                          , 'S',&(__VlefCall_4__get_full_name));
            this->__Vtask_uvm_report_error__id_3083 = "UVM/SIMPLE_LOCK_DAP/SAG"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1400);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1400;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3090);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_3090;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3083, this->__Vtask_uvm_report_error__message_3084, __Vtask_uvm_report_error__verbosity_3085, this->__Vtask_uvm_report_error__filename_3086, __Vtask_uvm_report_error__line_3087, this->__Vtask_uvm_report_error__context_name_3088, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3089));
        }
    } else {
        this->__PVT__m_value = value;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_try_set(Vtb_top__Syms* __restrict vlSymsp, ::std::string value, ::CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_try_set\n"); );
    // Body
    if (this->__PVT__m_locked) {
        try_set__Vfuncrtn = 0U;
    } else {
        this->__PVT__m_value = value;
        try_set__Vfuncrtn = 1U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_get\n"); );
    // Body
    get__Vfuncrtn = this->__PVT__m_value;
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::std::string &value, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_try_get\n"); );
    // Body
    try_get__Vfuncrtn = 0U;
    value = ""s;
    this->__VnoInFunc_get(vlSymsp, value);
    try_get__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_lock(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_lock\n"); );
    // Body
    this->__PVT__m_locked = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1401;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3091;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3094;
    __Vtask_uvm_report_error__verbosity_3094 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3096;
    __Vtask_uvm_report_error__line_3096 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3098;
    __Vtask_uvm_report_error__report_enabled_checked_3098 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1402;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3099;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1401);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1401;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3091);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3091;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 158)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 158)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SIMPLE_LOCK_DAP/CPY"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 158)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SIMPLE_LOCK_DAP/CPY"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_3098 = 1U;
        this->__Vtask_uvm_report_error__context_name_3097 = ""s;
        __Vtask_uvm_report_error__line_3096 = 0x0000009eU;
        this->__Vtask_uvm_report_error__filename_3095 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_3094 = 0U;
        this->__Vtask_uvm_report_error__message_3093 = "'copy()' is not supported for 'uvm_simple_lock_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_3092 = "UVM/SIMPLE_LOCK_DAP/CPY"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1402);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1402;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3099);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3099;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3092, this->__Vtask_uvm_report_error__message_3093, __Vtask_uvm_report_error__verbosity_3094, this->__Vtask_uvm_report_error__filename_3095, __Vtask_uvm_report_error__line_3096, this->__Vtask_uvm_report_error__context_name_3097, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3098));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1403;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3100;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3103;
    __Vtask_uvm_report_error__verbosity_3103 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3105;
    __Vtask_uvm_report_error__line_3105 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3107;
    __Vtask_uvm_report_error__report_enabled_checked_3107 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1404;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3108;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1403);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1403;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3100);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3100;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 163)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 163)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SIMPLE_LOCK_DAP/PCK"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 163)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SIMPLE_LOCK_DAP/PCK"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_3107 = 1U;
        this->__Vtask_uvm_report_error__context_name_3106 = ""s;
        __Vtask_uvm_report_error__line_3105 = 0x000000a3U;
        this->__Vtask_uvm_report_error__filename_3104 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_3103 = 0U;
        this->__Vtask_uvm_report_error__message_3102 = "'pack()' is not supported for 'uvm_simple_lock_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_3101 = "UVM/SIMPLE_LOCK_DAP/PCK"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1404);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1404;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3108);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3108;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3101, this->__Vtask_uvm_report_error__message_3102, __Vtask_uvm_report_error__verbosity_3103, this->__Vtask_uvm_report_error__filename_3104, __Vtask_uvm_report_error__line_3105, this->__Vtask_uvm_report_error__context_name_3106, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3107));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1405;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3109;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_3112;
    __Vtask_uvm_report_error__verbosity_3112 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_3114;
    __Vtask_uvm_report_error__line_3114 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_3116;
    __Vtask_uvm_report_error__report_enabled_checked_3116 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1406;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_3117;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1405);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1405;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3109);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_3109;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 168)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 168)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/SIMPLE_LOCK_DAP/UPK"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 168)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/SIMPLE_LOCK_DAP/UPK"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_3116 = 1U;
        this->__Vtask_uvm_report_error__context_name_3115 = ""s;
        __Vtask_uvm_report_error__line_3114 = 0x000000a8U;
        this->__Vtask_uvm_report_error__filename_3113 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_3112 = 0U;
        this->__Vtask_uvm_report_error__message_3111 = "'unpack()' is not supported for 'uvm_simple_lock_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_3110 = "UVM/SIMPLE_LOCK_DAP/UPK"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1406);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1406;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_3117);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_3117;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_3110, this->__Vtask_uvm_report_error__message_3111, __Vtask_uvm_report_error__verbosity_3112, this->__Vtask_uvm_report_error__filename_3113, __Vtask_uvm_report_error__line_3114, this->__Vtask_uvm_report_error__context_name_3115, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_3116));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if (this->__PVT__m_locked) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(string) %0p [LOCKED]",1
                      , 'S',&(this->__PVT__m_value));
    } else {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(string) %0p [UNLOCKED]",1
                      , 'S',&(this->__PVT__m_value));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_do_print\n"); );
    // Locals
    ::VlWide<128>/*4095:0*/ __Vtemp_1;
    ::IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    __Vtemp_1[0U] = this->__PVT__m_locked;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_1[__Vilp1] = 0U;
        __Vilp1 = ((::IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 190)->__VnoInFunc_print_field(vlProcess, vlSymsp, "lock_state"s, __Vtemp_1, 1U, 0U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_simple_lock_dap.svh", 191)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "value"s, "string"s, 0U, VL_SFORMATF_N_NX("%0p",1
                                                                                , 'S',&(this->__PVT__m_value)) , 0x2eU);
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::~Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_simple_lock_dap__pic3b2886c::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_value:" + VL_TO_STRING(__PVT__m_value);
    out += ", m_locked:" + VL_TO_STRING(__PVT__m_locked);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi219c5c31::to_string_middle();
    return (out);
}
