// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif1fae8ac> __Vfunc_get__Vfuncout_1347;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif1fae8ac__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1347);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1347;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653, vlProcess, vlSymsp, "unnamed-uvm_get_to_lock_dap#(T)"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi721b6873::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_locked = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_set\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1348;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2710;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2713;
    __Vtask_uvm_report_error__verbosity_2713 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2715;
    __Vtask_uvm_report_error__line_2715 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2717;
    __Vtask_uvm_report_error__report_enabled_checked_2717 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1349;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2718;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    if (this->__PVT__m_locked) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1348);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1348;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2710);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2710;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 77)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 77)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/SAG"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 77)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/SAG"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_error__report_enabled_checked_2717 = 1U;
            this->__Vtask_uvm_report_error__context_name_2716 = ""s;
            __Vtask_uvm_report_error__line_2715 = 0x0000004dU;
            this->__Vtask_uvm_report_error__filename_2714 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh"s;
            __Vtask_uvm_report_error__verbosity_2713 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_2712
                          ,"Attempt to set new value on '%s', but the data access policy forbids setting after a get!",1
                          , 'S',&(__VlefCall_4__get_full_name));
            this->__Vtask_uvm_report_error__id_2711 = "UVM/GET_TO_LOCK_DAP/SAG"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1349);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1349;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2718);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2718;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2711, this->__Vtask_uvm_report_error__message_2712, __Vtask_uvm_report_error__verbosity_2713, this->__Vtask_uvm_report_error__filename_2714, __Vtask_uvm_report_error__line_2715, this->__Vtask_uvm_report_error__context_name_2716, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2717));
        }
    } else {
        this->__PVT__m_value = value;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_try_set(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> value, ::CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_try_set\n"); );
    // Body
    if (this->__PVT__m_locked) {
        try_set__Vfuncrtn = 0U;
    } else {
        this->__PVT__m_value = value;
        try_set__Vfuncrtn = 1U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_get\n"); );
    // Body
    this->__PVT__m_locked = 1U;
    get__Vfuncrtn = this->__PVT__m_value;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> &value, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_try_get\n"); );
    // Body
    try_get__Vfuncrtn = 0U;
    this->__VnoInFunc_get(vlSymsp, value);
    try_get__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_is_locked(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_locked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_is_locked\n"); );
    // Body
    is_locked__Vfuncrtn = this->__PVT__m_locked;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1350;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2719;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2722;
    __Vtask_uvm_report_error__verbosity_2722 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2724;
    __Vtask_uvm_report_error__line_2724 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2726;
    __Vtask_uvm_report_error__report_enabled_checked_2726 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1351;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2727;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1350);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1350;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2719);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2719;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 143)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 143)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/CPY"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 143)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/CPY"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_2726 = 1U;
        this->__Vtask_uvm_report_error__context_name_2725 = ""s;
        __Vtask_uvm_report_error__line_2724 = 0x0000008fU;
        this->__Vtask_uvm_report_error__filename_2723 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_2722 = 0U;
        this->__Vtask_uvm_report_error__message_2721 = "'copy()' is not supported for 'uvm_get_to_lock_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_2720 = "UVM/GET_TO_LOCK_DAP/CPY"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1351);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1351;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2727);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2727;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2720, this->__Vtask_uvm_report_error__message_2721, __Vtask_uvm_report_error__verbosity_2722, this->__Vtask_uvm_report_error__filename_2723, __Vtask_uvm_report_error__line_2724, this->__Vtask_uvm_report_error__context_name_2725, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2726));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1352;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2728;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2731;
    __Vtask_uvm_report_error__verbosity_2731 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2733;
    __Vtask_uvm_report_error__line_2733 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2735;
    __Vtask_uvm_report_error__report_enabled_checked_2735 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1353;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2736;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1352);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1352;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2728);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2728;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 148)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 148)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/PCK"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 148)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/PCK"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_2735 = 1U;
        this->__Vtask_uvm_report_error__context_name_2734 = ""s;
        __Vtask_uvm_report_error__line_2733 = 0x00000094U;
        this->__Vtask_uvm_report_error__filename_2732 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_2731 = 0U;
        this->__Vtask_uvm_report_error__message_2730 = "'pack()' is not supported for 'uvm_get_to_lock_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_2729 = "UVM/GET_TO_LOCK_DAP/PCK"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1353);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1353;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2736);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2736;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2729, this->__Vtask_uvm_report_error__message_2730, __Vtask_uvm_report_error__verbosity_2731, this->__Vtask_uvm_report_error__filename_2732, __Vtask_uvm_report_error__line_2733, this->__Vtask_uvm_report_error__context_name_2734, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2735));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1354;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2737;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2740;
    __Vtask_uvm_report_error__verbosity_2740 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2742;
    __Vtask_uvm_report_error__line_2742 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2744;
    __Vtask_uvm_report_error__report_enabled_checked_2744 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1355;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2745;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1354);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1354;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2737);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2737;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 153)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 153)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/UPK"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 153)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/UPK"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_2744 = 1U;
        this->__Vtask_uvm_report_error__context_name_2743 = ""s;
        __Vtask_uvm_report_error__line_2742 = 0x00000099U;
        this->__Vtask_uvm_report_error__filename_2741 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_2740 = 0U;
        this->__Vtask_uvm_report_error__message_2739 = "'unpack()' is not supported for 'uvm_get_to_lock_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_2738 = "UVM/GET_TO_LOCK_DAP/UPK"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1355);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1355;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2745);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2745;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2738, this->__Vtask_uvm_report_error__message_2739, __Vtask_uvm_report_error__verbosity_2740, this->__Vtask_uvm_report_error__filename_2741, __Vtask_uvm_report_error__line_2742, this->__Vtask_uvm_report_error__context_name_2743, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2744));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_convert2string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    if (this->__PVT__m_locked) {
        __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__m_value);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(class uvm_pkg::uvm_phase extends class uvm_pkg::uvm_object) %0p [LOCKED]",1
                      , '!',&(__Vtemp_1));
    } else {
        __Vtemp_2 = VL_TO_STRING_DEREF(this->__PVT__m_value);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(class uvm_pkg::uvm_phase extends class uvm_pkg::uvm_object) %0p [UNLOCKED]",1
                      , '!',&(__Vtemp_2));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_do_print\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 175)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "lock_state"s, (::QData)((::IData)(this->__PVT__m_locked)), 1U, 0U, 0x2eU, ""s);
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__m_value);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 176)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "value"s, "class uvm_pkg::uvm_phase extends class uvm_pkg::uvm_object"s, 0U, VL_SFORMATF_N_NX("%0p",1
                                                                                , '!',&(__Vtemp_1)) , 0x2eU);
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::~Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pibcc32653::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_value:" + VL_TO_STRING(__PVT__m_value);
    out += ", m_locked:" + VL_TO_STRING(__PVT__m_locked);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi721b6873::to_string_middle();
    return (out);
}
