// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pid4fbee54> __Vfunc_get__Vfuncout_1338;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pid4fbee54__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1338);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1338;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de, vlProcess, vlSymsp, "unnamed-uvm_get_to_lock_dap#(T)"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi3031eef4::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_locked = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_set\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1339;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2674;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2677;
    __Vtask_uvm_report_error__verbosity_2677 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2679;
    __Vtask_uvm_report_error__line_2679 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2681;
    __Vtask_uvm_report_error__report_enabled_checked_2681 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1340;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2682;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    if (this->__PVT__m_locked) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1339);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1339;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2674);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2674;
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
            __Vtask_uvm_report_error__report_enabled_checked_2681 = 1U;
            this->__Vtask_uvm_report_error__context_name_2680 = ""s;
            __Vtask_uvm_report_error__line_2679 = 0x0000004dU;
            this->__Vtask_uvm_report_error__filename_2678 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh"s;
            __Vtask_uvm_report_error__verbosity_2677 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_2676
                          ,"Attempt to set new value on '%s', but the data access policy forbids setting after a get!",1
                          , 'S',&(__VlefCall_4__get_full_name));
            this->__Vtask_uvm_report_error__id_2675 = "UVM/GET_TO_LOCK_DAP/SAG"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1340);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1340;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2682);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2682;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2675, this->__Vtask_uvm_report_error__message_2676, __Vtask_uvm_report_error__verbosity_2677, this->__Vtask_uvm_report_error__filename_2678, __Vtask_uvm_report_error__line_2679, this->__Vtask_uvm_report_error__context_name_2680, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2681));
        }
    } else {
        this->__PVT__m_value = value;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_try_set(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ value, ::CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_try_set\n"); );
    // Body
    if (this->__PVT__m_locked) {
        try_set__Vfuncrtn = 0U;
    } else {
        this->__PVT__m_value = value;
        try_set__Vfuncrtn = 1U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_get\n"); );
    // Body
    this->__PVT__m_locked = 1U;
    get__Vfuncrtn = this->__PVT__m_value;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &value, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_try_get\n"); );
    // Body
    try_get__Vfuncrtn = 0U;
    value = 0U;
    this->__VnoInFunc_get(vlSymsp, value);
    try_get__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1341;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2683;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2686;
    __Vtask_uvm_report_error__verbosity_2686 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2688;
    __Vtask_uvm_report_error__line_2688 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2690;
    __Vtask_uvm_report_error__report_enabled_checked_2690 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1342;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2691;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1341);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1341;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2683);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2683;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 143)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 143)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/CPY"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 143)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/CPY"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_2690 = 1U;
        this->__Vtask_uvm_report_error__context_name_2689 = ""s;
        __Vtask_uvm_report_error__line_2688 = 0x0000008fU;
        this->__Vtask_uvm_report_error__filename_2687 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_2686 = 0U;
        this->__Vtask_uvm_report_error__message_2685 = "'copy()' is not supported for 'uvm_get_to_lock_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_2684 = "UVM/GET_TO_LOCK_DAP/CPY"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1342);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1342;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2691);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2691;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2684, this->__Vtask_uvm_report_error__message_2685, __Vtask_uvm_report_error__verbosity_2686, this->__Vtask_uvm_report_error__filename_2687, __Vtask_uvm_report_error__line_2688, this->__Vtask_uvm_report_error__context_name_2689, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2690));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1343;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2692;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2695;
    __Vtask_uvm_report_error__verbosity_2695 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2697;
    __Vtask_uvm_report_error__line_2697 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2699;
    __Vtask_uvm_report_error__report_enabled_checked_2699 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1344;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2700;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1343);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1343;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2692);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2692;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 148)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 148)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/PCK"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 148)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/PCK"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_2699 = 1U;
        this->__Vtask_uvm_report_error__context_name_2698 = ""s;
        __Vtask_uvm_report_error__line_2697 = 0x00000094U;
        this->__Vtask_uvm_report_error__filename_2696 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_2695 = 0U;
        this->__Vtask_uvm_report_error__message_2694 = "'pack()' is not supported for 'uvm_get_to_lock_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_2693 = "UVM/GET_TO_LOCK_DAP/PCK"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1344);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1344;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2700);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2700;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2693, this->__Vtask_uvm_report_error__message_2694, __Vtask_uvm_report_error__verbosity_2695, this->__Vtask_uvm_report_error__filename_2696, __Vtask_uvm_report_error__line_2697, this->__Vtask_uvm_report_error__context_name_2698, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2699));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1345;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2701;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2704;
    __Vtask_uvm_report_error__verbosity_2704 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2706;
    __Vtask_uvm_report_error__line_2706 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2708;
    __Vtask_uvm_report_error__report_enabled_checked_2708 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1346;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2709;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1345);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1345;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2701);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2701;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 153)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 153)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/UPK"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 153)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/GET_TO_LOCK_DAP/UPK"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_error__report_enabled_checked_2708 = 1U;
        this->__Vtask_uvm_report_error__context_name_2707 = ""s;
        __Vtask_uvm_report_error__line_2706 = 0x00000099U;
        this->__Vtask_uvm_report_error__filename_2705 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh"s;
        __Vtask_uvm_report_error__verbosity_2704 = 0U;
        this->__Vtask_uvm_report_error__message_2703 = "'unpack()' is not supported for 'uvm_get_to_lock_dap#(T)'"s;
        this->__Vtask_uvm_report_error__id_2702 = "UVM/GET_TO_LOCK_DAP/UPK"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1346);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1346;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2709);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2709;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2702, this->__Vtask_uvm_report_error__message_2703, __Vtask_uvm_report_error__verbosity_2704, this->__Vtask_uvm_report_error__filename_2705, __Vtask_uvm_report_error__line_2706, this->__Vtask_uvm_report_error__context_name_2707, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2708));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if (this->__PVT__m_locked) {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(bit) %0p [LOCKED]",1
                      , '#',1,this->__PVT__m_value);
    } else {
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"(bit) %0p [UNLOCKED]",1
                      , '#',1,this->__PVT__m_value);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 175)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "lock_state"s, (::QData)((::IData)(this->__PVT__m_locked)), 1U, 0U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/dap/uvm_get_to_lock_dap.svh", 176)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "value"s, "bit"s, 0U, VL_SFORMATF_N_NX("%0p",1
                                                                                , '#',1,this->__PVT__m_value) , 0x2eU);
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_value = 0;
    __PVT__m_locked = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::~Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_get_to_lock_dap__pi40a351de::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_value:" + VL_TO_STRING(__PVT__m_value);
    out += ", m_locked:" + VL_TO_STRING(__PVT__m_locked);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_set_get_dap_base__pi3031eef4::to_string_middle();
    return (out);
}
