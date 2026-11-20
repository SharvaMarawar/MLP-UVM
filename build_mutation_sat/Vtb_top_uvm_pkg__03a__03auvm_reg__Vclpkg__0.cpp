// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_unregister(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_unregister\n"); );
    // Body
    this->__PVT__m_maps.erase(map);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ data, ::QData/*63:0*/ byte_en, ::CData/*0:0*/ is_read, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample_values(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample_values\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ n_bits, ::IData/*31:0*/ has_coverage) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::new\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1625;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4038;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4041;
    __Vtask_uvm_report_error__verbosity_4041 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4043;
    __Vtask_uvm_report_error__line_4043 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4045;
    __Vtask_uvm_report_error__report_enabled_checked_4045 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1626;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4046;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk501__DOT___local_report_object_;
    /*super.new*/;
    if ((0U == n_bits)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1625);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1625;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4038);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4038;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 696)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk501__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk501__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 696)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk501__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 696)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            __Vtask_uvm_report_error__report_enabled_checked_4045 = 1U;
            this->__Vtask_uvm_report_error__context_name_4044 = ""s;
            __Vtask_uvm_report_error__line_4043 = 0x000002b8U;
            this->__Vtask_uvm_report_error__filename_4042 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_error__verbosity_4041 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4040
                          ,"Register \"%s\" cannot have 0 bits",1
                          , 'S',&(__VlefCall_4__get_name));
            this->__Vtask_uvm_report_error__id_4039 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1626);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1626;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4046);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4046;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4039, this->__Vtask_uvm_report_error__message_4040, __Vtask_uvm_report_error__verbosity_4041, this->__Vtask_uvm_report_error__filename_4042, __Vtask_uvm_report_error__line_4043, this->__Vtask_uvm_report_error__context_name_4044, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4045));
        }
        n_bits = 1U;
    }
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_atomic = VL_NEW(Vtb_top_std__03a__03asemaphore, vlSymsp, 1U);
    this->__PVT__m_n_used_bits = 0U;
    this->__PVT__m_locked = 0U;
    this->__PVT__m_is_busy = 0U;
    this->__PVT__m_is_locked_by_field = 0U;
    this->__PVT__m_atomic_cnt = 0U;
    this->__PVT__m_process = VlNull{};
    this->__PVT__m_hdl_paths_pool = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi90f94445, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size 
            = n_bits;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1627;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4047;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4050;
    __Vtask_uvm_report_error__verbosity_4050 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4052;
    __Vtask_uvm_report_error__line_4052 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4054;
    __Vtask_uvm_report_error__report_enabled_checked_4054 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1628;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4055;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1629;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4056;
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_4057;
    __Vtask_get_lsb_pos__Vfuncout_4057 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1630;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4058;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4061;
    __Vtask_uvm_report_error__verbosity_4061 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4063;
    __Vtask_uvm_report_error__line_4063 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4065;
    __Vtask_uvm_report_error__report_enabled_checked_4065 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1631;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4066;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1632;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4067;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4070;
    __Vtask_uvm_report_error__verbosity_4070 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4072;
    __Vtask_uvm_report_error__line_4072 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4074;
    __Vtask_uvm_report_error__report_enabled_checked_4074 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1633;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4075;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1634;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4076;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4079;
    __Vtask_uvm_report_error__verbosity_4079 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4081;
    __Vtask_uvm_report_error__line_4081 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4083;
    __Vtask_uvm_report_error__report_enabled_checked_4083 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1635;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4084;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_32__get_name;
    ::std::string __VlefCall_31__get_name;
    ::std::string __VlefCall_30__get_name;
    ::CData/*0:0*/ __VlefLogAnd_29;
    ::IData/*31:0*/ __VlefCall_28__get_report_action;
    ::IData/*31:0*/ __VlefCall_27__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_26__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_25__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_24__get_n_bits;
    ::std::string __VlefCall_23__get_name;
    ::std::string __VlefCall_22__get_name;
    ::std::string __VlefCall_21__get_name;
    ::CData/*0:0*/ __VlefLogAnd_20;
    ::IData/*31:0*/ __VlefCall_19__get_report_action;
    ::IData/*31:0*/ __VlefCall_18__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_17__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_16__get_n_bits;
    ::IData/*31:0*/ __VlefCall_15__get_lsb_pos;
    ::std::string __VlefCall_14__get_name;
    ::CData/*0:0*/ __VlefLogAnd_13;
    ::IData/*31:0*/ __VlefCall_12__get_report_action;
    ::IData/*31:0*/ __VlefCall_11__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_10__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_9__get_n_bits;
    ::IData/*31:0*/ __VlefCall_8__get_lsb_pos;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk503__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk504__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk505__DOT__i;
    unnamedblk505__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk505__DOT__i__Vloopsize;
    unnamedblk505__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk505__DOT__unnamedblk506__DOT__j;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk507__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk508__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk509__DOT___local_report_object_;
    ::IData/*31:0*/ offset;
    ::IData/*31:0*/ idx;
    {
        offset = 0U;
        idx = 0U;
        if (this->__PVT__m_locked) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1627);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1627;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4047);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4047;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 748)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk503__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk503__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 748)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk503__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 748)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_error__report_enabled_checked_4054 = 1U;
                this->__Vtask_uvm_report_error__context_name_4053 = ""s;
                __Vtask_uvm_report_error__line_4052 = 0x000002ecU;
                this->__Vtask_uvm_report_error__filename_4051 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_error__verbosity_4050 = 0U;
                this->__Vtask_uvm_report_error__message_4049 = "Cannot add field to locked register model"s;
                this->__Vtask_uvm_report_error__id_4048 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1628);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1628;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4055);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4055;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4048, this->__Vtask_uvm_report_error__message_4049, __Vtask_uvm_report_error__verbosity_4050, this->__Vtask_uvm_report_error__filename_4051, __Vtask_uvm_report_error__line_4052, this->__Vtask_uvm_report_error__context_name_4053, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4054));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == field)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1629);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1629;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4056);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4056;
            __VlefCall_4__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 753)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk504__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk504__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 753)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_5__get_report_verbosity_level);
            __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
            if (__VlefLogAnd_7) {
                VL_NULL_CHECK(unnamedblk504__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 753)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_6__get_report_action);
                __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_7))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Attempting to register NULL field"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s, 0x000002f1U, ""s, 1U);
            }
        }
        VL_NULL_CHECK(field, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 757)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_4057);
        offset = __Vtask_get_lsb_pos__Vfuncout_4057;
        idx = 0xffffffffU;
        {
            unnamedblk505__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk505__DOT__i, this->__PVT__m_fields.size())) {
                unnamedblk505__DOT__i__Vloopsize = this->__PVT__m_fields.size();
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk505__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 761)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_8__get_lsb_pos);
                if ((offset < __VlefCall_8__get_lsb_pos)) {
                    unnamedblk505__DOT__unnamedblk506__DOT__j 
                        = unnamedblk505__DOT__i;
                    this->__PVT__m_fields.insert(unnamedblk505__DOT__unnamedblk506__DOT__j, field);
                    idx = unnamedblk505__DOT__i;
                    goto __Vlabel1;
                }
                if ((unnamedblk505__DOT__i__Vloopsize 
                     <= this->__PVT__m_fields.size())) {
                    unnamedblk505__DOT__i = ((::IData)(1U) 
                                             + unnamedblk505__DOT__i);
                }
            }
            __Vlabel1: ;
        }
        if (VL_GTS_III(32, 0U, idx)) {
            this->__PVT__m_fields.push_back(field);
            idx = (this->__PVT__m_fields.size() - (::IData)(1U));
            VL_NULL_CHECK(field, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 771)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_9__get_n_bits);
            this->__PVT__m_n_used_bits = (offset + __VlefCall_9__get_n_bits);
        }
        if ((this->__PVT__m_n_used_bits > this->__PVT__m_n_bits)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1630);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1630;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4058);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4058;
            __VlefCall_10__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_10__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 778)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk507__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk507__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 778)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_11__get_report_verbosity_level);
            __VlefLogAnd_13 = VL_LTES_III(32, 0U, __VlefCall_11__get_report_verbosity_level);
            if (__VlefLogAnd_13) {
                VL_NULL_CHECK(unnamedblk507__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 778)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_12__get_report_action);
                __VlefLogAnd_13 = (0U != __VlefCall_12__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_13))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
                __Vtask_uvm_report_error__report_enabled_checked_4065 = 1U;
                this->__Vtask_uvm_report_error__context_name_4064 = ""s;
                __Vtask_uvm_report_error__line_4063 = 0x0000030aU;
                this->__Vtask_uvm_report_error__filename_4062 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_error__verbosity_4061 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4060
                              ,"Fields use more bits (%0d) than available in register \"%s\" (%0d)",3
                              , '#',32,this->__PVT__m_n_used_bits
                              , 'S',&(__VlefCall_14__get_name)
                              , '#',32,this->__PVT__m_n_bits);
                this->__Vtask_uvm_report_error__id_4059 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1631);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1631;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4066);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4066;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4059, this->__Vtask_uvm_report_error__message_4060, __Vtask_uvm_report_error__verbosity_4061, this->__Vtask_uvm_report_error__filename_4062, __Vtask_uvm_report_error__line_4063, this->__Vtask_uvm_report_error__context_name_4064, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4065));
            }
        }
        if (VL_LTS_III(32, 0U, idx)) {
            VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                   (idx 
                                                    - (::IData)(1U))), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 783)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_15__get_lsb_pos);
            VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                   (idx 
                                                    - (::IData)(1U))), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 784)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_16__get_n_bits);
            if (((__VlefCall_15__get_lsb_pos + __VlefCall_16__get_n_bits) 
                 > offset)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1632);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1632;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4067);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4067;
                __VlefCall_17__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_17__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 787)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk508__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk508__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 787)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_18__get_report_verbosity_level);
                __VlefLogAnd_20 = VL_LTES_III(32, 0U, __VlefCall_18__get_report_verbosity_level);
                if (__VlefLogAnd_20) {
                    VL_NULL_CHECK(unnamedblk508__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 787)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_19__get_report_action);
                    __VlefLogAnd_20 = (0U != __VlefCall_19__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_20))) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                           (idx 
                                                            - (::IData)(1U))), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 787)->__VnoInFunc_get_name(vlSymsp, __VlefCall_21__get_name);
                    VL_NULL_CHECK(field, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 787)->__VnoInFunc_get_name(vlSymsp, __VlefCall_22__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_23__get_name);
                    __Vtask_uvm_report_error__report_enabled_checked_4074 = 1U;
                    this->__Vtask_uvm_report_error__context_name_4073 = ""s;
                    __Vtask_uvm_report_error__line_4072 = 0x00000313U;
                    this->__Vtask_uvm_report_error__filename_4071 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_error__verbosity_4070 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4069
                                  ,"Field %s overlaps field %s in register \"%s\"",3
                                  , 'S',&(__VlefCall_21__get_name)
                                  , 'S',&(__VlefCall_22__get_name)
                                  , 'S',&(__VlefCall_23__get_name));
                    this->__Vtask_uvm_report_error__id_4068 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1633);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1633;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4075);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4075;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4068, this->__Vtask_uvm_report_error__message_4069, __Vtask_uvm_report_error__verbosity_4070, this->__Vtask_uvm_report_error__filename_4071, __Vtask_uvm_report_error__line_4072, this->__Vtask_uvm_report_error__context_name_4073, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4074));
                }
            }
        }
        if (VL_LTS_III(32, idx, (this->__PVT__m_fields.size() 
                                 - (::IData)(1U)))) {
            VL_NULL_CHECK(field, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 791)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_24__get_n_bits);
            VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                   ((::IData)(1U) 
                                                    + idx)), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 792)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_25__get_lsb_pos);
            if (((offset + __VlefCall_24__get_n_bits) 
                 > __VlefCall_25__get_lsb_pos)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1634);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1634;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4076);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4076;
                __VlefCall_26__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_26__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 796)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk509__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk509__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 796)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_27__get_report_verbosity_level);
                __VlefLogAnd_29 = VL_LTES_III(32, 0U, __VlefCall_27__get_report_verbosity_level);
                if (__VlefLogAnd_29) {
                    VL_NULL_CHECK(unnamedblk509__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 796)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_28__get_report_action);
                    __VlefLogAnd_29 = (0U != __VlefCall_28__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_29))) {
                    VL_NULL_CHECK(field, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 796)->__VnoInFunc_get_name(vlSymsp, __VlefCall_30__get_name);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                           ((::IData)(1U) 
                                                            + idx)), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 796)->__VnoInFunc_get_name(vlSymsp, __VlefCall_31__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_32__get_name);
                    __Vtask_uvm_report_error__report_enabled_checked_4083 = 1U;
                    this->__Vtask_uvm_report_error__context_name_4082 = ""s;
                    __Vtask_uvm_report_error__line_4081 = 0x0000031cU;
                    this->__Vtask_uvm_report_error__filename_4080 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_error__verbosity_4079 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4078
                                  ,"Field %s overlaps field %s in register \"%s\"",3
                                  , 'S',&(__VlefCall_30__get_name)
                                  , 'S',&(__VlefCall_31__get_name)
                                  , 'S',&(__VlefCall_32__get_name));
                    this->__Vtask_uvm_report_error__id_4077 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1635);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1635;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4084);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4084;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4077, this->__Vtask_uvm_report_error__message_4078, __Vtask_uvm_report_error__verbosity_4079, this->__Vtask_uvm_report_error__filename_4080, __Vtask_uvm_report_error__line_4081, this->__Vtask_uvm_report_error__context_name_4082, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4083));
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        VL_NULL_CHECK(ftdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 845)->__PVT__fname 
            = this->__PVT__m_fname;
        VL_NULL_CHECK(ftdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 846)->__PVT__lineno 
            = this->__PVT__m_lineno;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 853)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
        if ((VlNull{} == map_info)) {
            VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 856)->__VnoInFunc_add_reg(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this}, 0xffffffffffffffffULL, "RW"s, 1U, ftdr);
        } else {
            VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 860)->__PVT__frontdoor 
                = ftdr;
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            get_frontdoor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 875)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
        get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 876)
            ->__PVT__frontdoor;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ inherited, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk513__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk513__DOT__bkdr;
    if (((VlNull{} == this->__PVT__m_backdoor) & (::IData)(inherited))) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk513__DOT__blk);
        {
            while ((VlNull{} != unnamedblk513__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk513__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 903)->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk513__DOT__bkdr);
                if ((VlNull{} != unnamedblk513__DOT__bkdr)) {
                    this->__PVT__m_backdoor = unnamedblk513__DOT__bkdr;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk513__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 908)->__VnoInFunc_get_parent(vlSymsp, unnamedblk513__DOT__blk);
            }
            __Vlabel0: ;
        }
    }
    get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 988)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        } else {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 993)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
    }
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 998)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, ::std::string kind, ::std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1636;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4085;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4088;
    __Vtask_uvm_report_error__verbosity_4088 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4090;
    __Vtask_uvm_report_error__line_4090 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4092;
    __Vtask_uvm_report_error__report_enabled_checked_4092 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1637;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4093;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_6__size;
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk517__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4ea7d76f> unnamedblk518__DOT__hdl_paths;
    ::VlQueue<::std::string> unnamedblk518__DOT__parent_paths;
    ::IData/*31:0*/ unnamedblk518__DOT__unnamedblk519__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__hdl_concat;
    ::IData/*31:0*/ unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j;
    unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j__Vloopsize;
    unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__t;
    ::IData/*31:0*/ unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k;
    unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k = 0;
    ::IData/*31:0*/ unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k__Vloopsize;
    unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k__Vloopsize = 0;
    {
        if ((""s == kind)) {
            if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1065)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            } else {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1070)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            }
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (::IData)(__VlefCall_0__has_hdl_path)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1636);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1636;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4085);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4085;
            __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1077)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk517__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk517__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1077)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_verbosity_level);
            __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(unnamedblk517__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1077)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_action);
                __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_4))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4092 = 1U;
                this->__Vtask_uvm_report_error__context_name_4091 = ""s;
                __Vtask_uvm_report_error__line_4090 = 0x00000435U;
                this->__Vtask_uvm_report_error__filename_4089 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_error__verbosity_4088 = 0U;
                this->__Vtask_uvm_report_error__message_4087 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register "s, __VlefCall_5__get_full_name), " does not have hdl path defined for abstraction '"s), kind), "'"s));
                this->__Vtask_uvm_report_error__id_4086 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1637);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1637;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4093);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4093;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4086, this->__Vtask_uvm_report_error__message_4087, __Vtask_uvm_report_error__verbosity_4088, this->__Vtask_uvm_report_error__filename_4089, __Vtask_uvm_report_error__line_4090, this->__Vtask_uvm_report_error__context_name_4091, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4092));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1082)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk518__DOT__hdl_paths);
        unnamedblk518__DOT__parent_paths.clear();
        unnamedblk518__DOT__parent_paths.atDefault().clear();
        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1087)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk518__DOT__parent_paths, kind, separator);
        } else {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1092)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk518__DOT__parent_paths, kind, separator);
        }
        unnamedblk518__DOT__unnamedblk519__DOT__i = 0U;
        unnamedblk518__DOT__unnamedblk519__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk518__DOT__hdl_paths, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1096)->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
            if (!(VL_LTS_III(32, unnamedblk518__DOT__unnamedblk519__DOT__i, __VlefCall_6__size))) break;
            VL_NULL_CHECK(unnamedblk518__DOT__hdl_paths, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1097)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk518__DOT__unnamedblk519__DOT__i, unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__hdl_concat);
            unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j, unnamedblk518__DOT__parent_paths.size())) {
                unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j__Vloopsize 
                    = unnamedblk518__DOT__parent_paths.size();
                unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__t 
                    = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat, vlProcess, vlSymsp);
                unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k, VL_NULL_CHECK(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1102)
                                  ->__PVT__slices.size())) {
                    unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1102)
                        ->__PVT__slices.size();
                    if ((""s == VL_NULL_CHECK(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1103)
                         ->__PVT__slices.at(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k)
                         .__PVT__path)) {
                        VL_NULL_CHECK(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1105)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk518__DOT__parent_paths.at(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j)), 0xffffffffU, 0xffffffffU);
                    } else {
                        VL_NULL_CHECK(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__t, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1110)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk518__DOT__parent_paths.at(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j), separator), VL_NULL_CHECK(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1110)
                                                                                ->__PVT__slices.at(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1111)
                                                                                ->__PVT__slices.at(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k)
                                                                                .__PVT__offset, VL_NULL_CHECK(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1112)
                                                                                ->__PVT__slices.at(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k)
                                                                                .__PVT__size);
                    }
                    if ((unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1102)
                         ->__PVT__slices.size())) {
                        unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k 
                            = ((::IData)(1U) + unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__unnamedblk523__DOT__k);
                    }
                }
                paths.push_back(unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__unnamedblk522__DOT__t);
                if ((unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j__Vloopsize 
                     <= unnamedblk518__DOT__parent_paths.size())) {
                    unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j 
                        = ((::IData)(1U) + unnamedblk518__DOT__unnamedblk519__DOT__unnamedblk520__DOT__unnamedblk521__DOT__j);
                }
            }
            unnamedblk518__DOT__unnamedblk519__DOT__i 
                = ((::IData)(1U) + unnamedblk518__DOT__unnamedblk519__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ offset, ::CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1638;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4094;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4097;
    __Vtask_uvm_report_error__verbosity_4097 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4099;
    __Vtask_uvm_report_error__line_4099 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4101;
    __Vtask_uvm_report_error__report_enabled_checked_4101 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1639;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4102;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk524__DOT___local_report_object_;
    {
        if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
             & (VlNull{} == map))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1638);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1638;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4094);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4094;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1133)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk524__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk524__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1133)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk524__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1133)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4101 = 1U;
                this->__Vtask_uvm_report_error__context_name_4100 = ""s;
                __Vtask_uvm_report_error__line_4099 = 0x0000046dU;
                this->__Vtask_uvm_report_error__filename_4098 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_error__verbosity_4097 = 0U;
                this->__Vtask_uvm_report_error__message_4096 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("set_offset requires a non-null map when register '"s, __VlefCall_4__get_full_name), "' belongs to more than one map."s));
                this->__Vtask_uvm_report_error__id_4095 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1639);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1639;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4102);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4102;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4095, this->__Vtask_uvm_report_error__message_4096, __Vtask_uvm_report_error__verbosity_4097, this->__Vtask_uvm_report_error__filename_4098, __Vtask_uvm_report_error__line_4099, this->__Vtask_uvm_report_error__context_name_4100, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4101));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1145)->__VnoInFunc_m_set_reg_offset(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this}, offset, (::IData)(unmapped));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent\n"); );
    // Body
    this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_3__get_name;
    ::std::string __VlefCall_2__get_full_name;
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1182)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__m_parent)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1188)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_2__get_full_name, "."s), __VlefCall_3__get_name);
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map\n"); );
    // Body
    this->__PVT__m_maps.atWrite(map) = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk525__DOT__map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk525__DOT__map__Vnext;
    ::CData/*0:0*/ unnamedblk525__DOT__map__Vmore;
    unnamedblk525__DOT__map__Vmore = 0;
    unnamedblk525__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk525__DOT__map__Vnext));
    while (unnamedblk525__DOT__map__Vmore) {
        unnamedblk525__DOT__map = unnamedblk525__DOT__map__Vnext;
        unnamedblk525__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk525__DOT__map__Vnext));
        maps.push_back(unnamedblk525__DOT__map);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps\n"); );
    // Body
    get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk526__DOT__l;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk526__DOT__l__Vnext;
    ::CData/*0:0*/ unnamedblk526__DOT__l__Vmore;
    unnamedblk526__DOT__l__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk526__DOT__unnamedblk527__DOT__local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk526__DOT__unnamedblk527__DOT__parent_map;
    {
        is_in_map__Vfuncrtn = 0U;
        if ((0U != this->__PVT__m_maps.exists(map))) {
            is_in_map__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        unnamedblk526__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk526__DOT__l__Vnext));
        while (unnamedblk526__DOT__l__Vmore) {
            unnamedblk526__DOT__l = unnamedblk526__DOT__l__Vnext;
            unnamedblk526__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk526__DOT__l__Vnext));
            unnamedblk526__DOT__unnamedblk527__DOT__local_map 
                = unnamedblk526__DOT__l;
            VL_NULL_CHECK(unnamedblk526__DOT__unnamedblk527__DOT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1231)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk526__DOT__unnamedblk527__DOT__parent_map);
            while ((VlNull{} != unnamedblk526__DOT__unnamedblk527__DOT__parent_map)) {
                if ((unnamedblk526__DOT__unnamedblk527__DOT__parent_map 
                     == map)) {
                    is_in_map__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk526__DOT__unnamedblk527__DOT__parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1239)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk526__DOT__unnamedblk527__DOT__parent_map);
            }
        }
        is_in_map__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1640;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4103;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4106;
    __Vtask_uvm_report_warning__verbosity_4106 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4108;
    __Vtask_uvm_report_warning__line_4108 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4110;
    __Vtask_uvm_report_warning__report_enabled_checked_4110 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1641;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4111;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk528__DOT__l;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk528__DOT__l__Vnext;
    ::CData/*0:0*/ unnamedblk528__DOT__l__Vmore;
    unnamedblk528__DOT__l__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk528__DOT__unnamedblk529__DOT__local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk528__DOT__unnamedblk529__DOT__parent_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk530__DOT___local_report_object_;
    {
        if ((VlNull{} == map)) {
            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, get_local_map__Vfuncrtn);
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_maps.exists(map))) {
            get_local_map__Vfuncrtn = map;
            goto __Vlabel0;
        }
        unnamedblk528__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk528__DOT__l__Vnext));
        while (unnamedblk528__DOT__l__Vmore) {
            unnamedblk528__DOT__l = unnamedblk528__DOT__l__Vnext;
            unnamedblk528__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk528__DOT__l__Vnext));
            unnamedblk528__DOT__unnamedblk529__DOT__local_map 
                = unnamedblk528__DOT__l;
            VL_NULL_CHECK(unnamedblk528__DOT__unnamedblk529__DOT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1262)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk528__DOT__unnamedblk529__DOT__parent_map);
            while ((VlNull{} != unnamedblk528__DOT__unnamedblk529__DOT__parent_map)) {
                if ((unnamedblk528__DOT__unnamedblk529__DOT__parent_map 
                     == map)) {
                    get_local_map__Vfuncrtn = unnamedblk528__DOT__unnamedblk529__DOT__local_map;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk528__DOT__unnamedblk529__DOT__parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1270)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk528__DOT__unnamedblk529__DOT__parent_map);
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1640);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1640;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4103);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4103;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1274)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk530__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk530__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1274)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk530__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1274)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1274)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_warning__report_enabled_checked_4110 = 1U;
            this->__Vtask_uvm_report_warning__context_name_4109 = ""s;
            __Vtask_uvm_report_warning__line_4108 = 0x000004faU;
            this->__Vtask_uvm_report_warning__filename_4107 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_warning__verbosity_4106 = 0U;
            this->__Vtask_uvm_report_warning__message_4105 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_4__get_full_name), "' is not contained within map '"s), __VlefCall_5__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__id_4104 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1641);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1641;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4111);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4111;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4104, this->__Vtask_uvm_report_warning__message_4105, __Vtask_uvm_report_warning__verbosity_4106, this->__Vtask_uvm_report_warning__filename_4107, __Vtask_uvm_report_warning__line_4108, this->__Vtask_uvm_report_warning__context_name_4109, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4110));
        }
        get_local_map__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1642;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4112;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4115;
    __Vtask_uvm_report_warning__verbosity_4115 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4117;
    __Vtask_uvm_report_warning__line_4117 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4119;
    __Vtask_uvm_report_warning__report_enabled_checked_4119 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1643;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4120;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk531__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk532__DOT__map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk533__DOT__l;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk533__DOT__l__Vnext;
    ::CData/*0:0*/ unnamedblk533__DOT__l__Vmore;
    unnamedblk533__DOT__l__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk533__DOT__unnamedblk534__DOT__map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk533__DOT__unnamedblk534__DOT__blk;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk533__DOT__unnamedblk534__DOT__default_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk533__DOT__unnamedblk534__DOT__unnamedblk535__DOT__local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk536__DOT__map;
    {
        if ((0U == this->__PVT__m_maps.size())) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1642);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1642;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4112);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4112;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1287)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk531__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk531__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1287)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk531__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1287)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_warning__report_enabled_checked_4119 = 1U;
                this->__Vtask_uvm_report_warning__context_name_4118 = ""s;
                __Vtask_uvm_report_warning__line_4117 = 0x00000507U;
                this->__Vtask_uvm_report_warning__filename_4116 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_warning__verbosity_4115 = 0U;
                this->__Vtask_uvm_report_warning__message_4114 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Register '"s, __VlefCall_4__get_full_name), "' is not registered with any map"s));
                this->__Vtask_uvm_report_warning__id_4113 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1643);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1643;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4120);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4120;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4113, this->__Vtask_uvm_report_warning__message_4114, __Vtask_uvm_report_warning__verbosity_4115, this->__Vtask_uvm_report_warning__filename_4116, __Vtask_uvm_report_warning__line_4117, this->__Vtask_uvm_report_warning__context_name_4118, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4119));
            }
            get_default_map__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U == this->__PVT__m_maps.size())) {
            std::ignore = this->__PVT__m_maps.first(unnamedblk532__DOT__map);
            get_default_map__Vfuncrtn = unnamedblk532__DOT__map;
            goto __Vlabel0;
        }
        unnamedblk533__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk533__DOT__l__Vnext));
        while (unnamedblk533__DOT__l__Vmore) {
            unnamedblk533__DOT__l = unnamedblk533__DOT__l__Vnext;
            unnamedblk533__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk533__DOT__l__Vnext));
            unnamedblk533__DOT__unnamedblk534__DOT__map 
                = unnamedblk533__DOT__l;
            VL_NULL_CHECK(unnamedblk533__DOT__unnamedblk534__DOT__map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1301)->__VnoInFunc_get_parent(vlSymsp, unnamedblk533__DOT__unnamedblk534__DOT__blk);
            VL_NULL_CHECK(unnamedblk533__DOT__unnamedblk534__DOT__blk, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1302)->__VnoInFunc_get_default_map(vlSymsp, unnamedblk533__DOT__unnamedblk534__DOT__default_map);
            if ((VlNull{} != unnamedblk533__DOT__unnamedblk534__DOT__default_map)) {
                this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk533__DOT__unnamedblk534__DOT__default_map, unnamedblk533__DOT__unnamedblk534__DOT__unnamedblk535__DOT__local_map);
                if ((VlNull{} != unnamedblk533__DOT__unnamedblk534__DOT__unnamedblk535__DOT__local_map)) {
                    get_default_map__Vfuncrtn = unnamedblk533__DOT__unnamedblk534__DOT__unnamedblk535__DOT__local_map;
                    goto __Vlabel0;
                }
            }
        }
        std::ignore = this->__PVT__m_maps.first(unnamedblk536__DOT__map);
        get_default_map__Vfuncrtn = unnamedblk536__DOT__map;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> info;
    {
        get_rights__Vfuncrtn = ""s;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1338)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, info);
        get_rights__Vfuncrtn = VL_NULL_CHECK(info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1339)
            ->__PVT__rights;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__m_parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1644;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4121;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4124;
    __Vtask_uvm_report_warning__verbosity_4124 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4126;
    __Vtask_uvm_report_warning__line_4126 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4128;
    __Vtask_uvm_report_warning__report_enabled_checked_4128 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1645;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4129;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk537__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_offset__Vfuncrtn = 0ULL;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1367)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1369)
            ->__PVT__unmapped) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1644);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1644;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4121);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4121;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1372)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk537__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk537__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1372)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk537__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1372)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1372)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1372)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                }
                __Vtask_uvm_report_warning__report_enabled_checked_4128 = 1U;
                this->__Vtask_uvm_report_warning__context_name_4127 = ""s;
                __Vtask_uvm_report_warning__line_4126 = 0x0000055cU;
                this->__Vtask_uvm_report_warning__filename_4125 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_warning__verbosity_4124 = 0U;
                this->__Vtask_uvm_report_warning__message_4123 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_4__get_name), "' is unmapped in map '"s), __VlefCall_5__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__id_4122 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1645);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1645;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4129);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4129;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4122, this->__Vtask_uvm_report_warning__message_4123, __Vtask_uvm_report_warning__verbosity_4124, this->__Vtask_uvm_report_warning__filename_4125, __Vtask_uvm_report_warning__line_4126, this->__Vtask_uvm_report_warning__context_name_4127, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4128));
            }
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1376)
            ->__PVT__offset;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlQueue<::QData/*63:0*/> &addr, ::IData/*31:0*/ &get_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1646;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4130;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4133;
    __Vtask_uvm_report_warning__verbosity_4133 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4135;
    __Vtask_uvm_report_warning__line_4135 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4137;
    __Vtask_uvm_report_warning__report_enabled_checked_4137 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1647;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4138;
    ::IData/*31:0*/ __Vtask_get_n_bytes__Vfuncout_4139;
    __Vtask_get_n_bytes__Vfuncout_4139 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_full_name;
    ::std::string __VlefCall_4__get_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk538__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_addresses__Vfuncrtn = 0U;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            get_addresses__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1396)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1398)
            ->__PVT__unmapped) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1646);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1646;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4130);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4130;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1401)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk538__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk538__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1401)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk538__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1401)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1401)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1401)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                }
                __Vtask_uvm_report_warning__report_enabled_checked_4137 = 1U;
                this->__Vtask_uvm_report_warning__context_name_4136 = ""s;
                __Vtask_uvm_report_warning__line_4135 = 0x00000579U;
                this->__Vtask_uvm_report_warning__filename_4134 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_warning__verbosity_4133 = 0U;
                this->__Vtask_uvm_report_warning__message_4132 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_4__get_name), "' is unmapped in map '"s), __VlefCall_5__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__id_4131 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1647);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1647;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4138);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4138;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4131, this->__Vtask_uvm_report_warning__message_4132, __Vtask_uvm_report_warning__verbosity_4133, this->__Vtask_uvm_report_warning__filename_4134, __Vtask_uvm_report_warning__line_4135, this->__Vtask_uvm_report_warning__context_name_4136, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4137));
            }
            get_addresses__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        addr = VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1405)
            ->__PVT__addr;
        VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1406)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__Vfuncout_4139);
        get_addresses__Vfuncrtn = __Vtask_get_n_bytes__Vfuncout_4139;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_addresses__Vfuncout_4140;
    __Vtask_get_addresses__Vfuncout_4140 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlQueue<::QData/*63:0*/> addr;
    get_address__Vfuncrtn = 0ULL;
    addr.clear();
    addr.atDefault() = 0;
    this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, map, addr, __Vtask_get_addresses__Vfuncout_4140);
    get_address__Vfuncrtn = addr.at(0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((::IData)(1U) + ((this->__PVT__m_n_bits 
                                               - (::IData)(1U)) 
                                              >> 3U));
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk539__DOT__i;
    unnamedblk539__DOT__i = 0;
    unnamedblk539__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk539__DOT__i, this->__PVT__m_fields.size())) {
        fields.push_back(this->__PVT__m_fields.at(unnamedblk539__DOT__i));
        unnamedblk539__DOT__i = ((::IData)(1U) + unnamedblk539__DOT__i);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::std::string &Xget_fields_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk541__DOT__i;
    unnamedblk541__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk541__DOT__i__Vloopsize;
    unnamedblk541__DOT__i__Vloopsize = 0;
    ::std::string __VCase_h12ee9c17__0;
    ::CData/*0:0*/ is_R;
    ::CData/*0:0*/ is_W;
    {
        Xget_fields_accessX__Vfuncrtn = ""s;
        is_R = 0U;
        is_W = 0U;
        unnamedblk541__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk541__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk541__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk541__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1479)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __VCase_h12ee9c17__0);
            if (((("RO"s == __VCase_h12ee9c17__0) || 
                  ("RC"s == __VCase_h12ee9c17__0)) 
                 || ("RS"s == __VCase_h12ee9c17__0))) {
                is_R = 1U;
            } else if ((((("WO"s == __VCase_h12ee9c17__0) 
                          || ("WOC"s == __VCase_h12ee9c17__0)) 
                         || ("WOS"s == __VCase_h12ee9c17__0)) 
                        || ("WO1"s == __VCase_h12ee9c17__0))) {
                is_W = 1U;
            } else {
                Xget_fields_accessX__Vfuncrtn = "RW"s;
                goto __Vlabel0;
            }
            if (((::IData)(is_R) & (::IData)(is_W))) {
                Xget_fields_accessX__Vfuncrtn = "RW"s;
                goto __Vlabel0;
            }
            if ((unnamedblk541__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk541__DOT__i = ((::IData)(1U) 
                                         + unnamedblk541__DOT__i);
            }
        }
        if ((1U == (((::IData)(is_R) << 1U) | (::IData)(is_W)))) {
            Xget_fields_accessX__Vfuncrtn = "WO"s;
            goto __Vlabel0;
        } else if ((2U == (((::IData)(is_R) << 1U) 
                           | (::IData)(is_W)))) {
            Xget_fields_accessX__Vfuncrtn = "RO"s;
            goto __Vlabel0;
        }
        Xget_fields_accessX__Vfuncrtn = "RW"s;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ is_on, ::IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage\n"); );
    // Body
    {
        set_coverage__Vfuncrtn = 0U;
        if ((0U == is_on)) {
            this->__PVT__m_cover_on = is_on;
            set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
            goto __Vlabel0;
        }
        this->__PVT__m_cover_on = (this->__PVT__m_has_cover 
                                   & is_on);
        set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__get_n_bits;
    ::IData/*31:0*/ __VlefCall_0__get_lsb_pos;
    ::IData/*31:0*/ unnamedblk542__DOT__i;
    unnamedblk542__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk542__DOT__i__Vloopsize;
    unnamedblk542__DOT__i__Vloopsize = 0;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    unnamedblk542__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk542__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk542__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk542__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1608)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_0__get_lsb_pos);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk542__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1609)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk542__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1608)->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_0__get_lsb_pos) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                                                                - 1ULL)), ""s, 0U);
        if ((unnamedblk542__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk542__DOT__i = ((::IData)(1U) 
                                     + unnamedblk542__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ kind, ::CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1648;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4141;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4144;
    __Vtask_uvm_report_warning__verbosity_4144 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4146;
    __Vtask_uvm_report_warning__line_4146 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4148;
    __Vtask_uvm_report_warning__report_enabled_checked_4148 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1649;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4149;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1650;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4150;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4153;
    __Vtask_uvm_report_warning__verbosity_4153 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4155;
    __Vtask_uvm_report_warning__line_4155 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4157;
    __Vtask_uvm_report_warning__report_enabled_checked_4157 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1651;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4158;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_12;
    ::IData/*31:0*/ __VlefCall_11__get_report_action;
    ::IData/*31:0*/ __VlefCall_10__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_9__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_8__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_7__get_n_bits;
    ::IData/*31:0*/ __VlefCall_6__get_lsb_pos;
    ::std::string __VlefCall_5__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_0__get_status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk543__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk544__DOT__i;
    unnamedblk544__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk544__DOT__i__Vloopsize;
    unnamedblk544__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk545__DOT___local_report_object_;
    ::QData/*63:0*/ reg_value;
    {
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1641)->__VnoInFunc_get_value(vlSymsp, 0U, reg_value);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1642)->__VnoInFunc_get_fname(vlSymsp, this->__PVT__m_fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1643)->__VnoInFunc_get_line(vlSymsp, this->__PVT__m_lineno);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1645)->__VnoInFunc_get_status(vlSymsp, __VlefCall_0__get_status);
        if ((0U == __VlefCall_0__get_status)) {
            if (((::IData)(this->__PVT__m_is_busy) 
                 & (0U == kind))) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1648);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1648;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4141);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4141;
                __VlefCall_1__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1649)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk543__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk543__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1649)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_verbosity_level);
                __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
                if (__VlefLogAnd_4) {
                    VL_NULL_CHECK(unnamedblk543__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1649)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_3__get_report_action);
                    __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_4))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_4148 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_4147 = ""s;
                    __Vtask_uvm_report_warning__line_4146 = 0x00000671U;
                    this->__Vtask_uvm_report_warning__filename_4145 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__verbosity_4144 = 0U;
                    this->__Vtask_uvm_report_warning__message_4143 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Trying to predict value of register '"s, __VlefCall_5__get_full_name), "' while it is being accessed"s));
                    this->__Vtask_uvm_report_warning__id_4142 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1649);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1649;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4149);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4149;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4142, this->__Vtask_uvm_report_warning__message_4143, __Vtask_uvm_report_warning__verbosity_4144, this->__Vtask_uvm_report_warning__filename_4145, __Vtask_uvm_report_warning__line_4146, this->__Vtask_uvm_report_warning__context_name_4147, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4148));
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1650)->__VnoInFunc_set_status(vlSymsp, 1U);
                goto __Vlabel0;
            }
            unnamedblk544__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk544__DOT__i, this->__PVT__m_fields.size())) {
                unnamedblk544__DOT__i__Vloopsize = this->__PVT__m_fields.size();
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk544__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1655)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk544__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1656)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1655)->__VnoInFunc_set_value(vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, reg_value, __VlefCall_6__get_lsb_pos) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_7__get_n_bits) 
                                                                                - 1ULL)), 0U);
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk544__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1657)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_8__get_lsb_pos);
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk544__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1657)->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, 
                                                                                VL_SHIFTR_III(8,8,32, (::IData)(be), 
                                                                                (__VlefCall_8__get_lsb_pos 
                                                                                >> 3U)));
                if ((unnamedblk544__DOT__i__Vloopsize 
                     <= this->__PVT__m_fields.size())) {
                    unnamedblk544__DOT__i = ((::IData)(1U) 
                                             + unnamedblk544__DOT__i);
                }
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1660)->__VnoInFunc_set_value(vlSymsp, reg_value, 0U);
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1650);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1650;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4150);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4150;
            __VlefCall_9__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_9__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1663)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk545__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk545__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1663)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "PREDICT_NOK"s, __VlefCall_10__get_report_verbosity_level);
            __VlefLogAnd_12 = VL_LTES_III(32, 0U, __VlefCall_10__get_report_verbosity_level);
            if (__VlefLogAnd_12) {
                VL_NULL_CHECK(unnamedblk545__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1663)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "PREDICT_NOK"s, __VlefCall_11__get_report_action);
                __VlefLogAnd_12 = (0U != __VlefCall_11__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_12))) {
                __Vtask_uvm_report_warning__report_enabled_checked_4157 = 1U;
                this->__Vtask_uvm_report_warning__context_name_4156 = ""s;
                __Vtask_uvm_report_warning__line_4155 = 0x0000067fU;
                this->__Vtask_uvm_report_warning__filename_4154 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_warning__verbosity_4153 = 0U;
                this->__Vtask_uvm_report_warning__message_4152 = "status UVM_NOT_OK; skip prediction."s;
                this->__Vtask_uvm_report_warning__id_4151 = "PREDICT_NOK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1651);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1651;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4158);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4158;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4151, this->__Vtask_uvm_report_warning__message_4152, __Vtask_uvm_report_warning__verbosity_4153, this->__Vtask_uvm_report_warning__filename_4154, __Vtask_uvm_report_warning__line_4155, this->__Vtask_uvm_report_warning__context_name_4156, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4157));
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__get_lsb_pos;
    ::QData/*63:0*/ __VlefCall_0__get;
    ::IData/*31:0*/ unnamedblk546__DOT__i;
    unnamedblk546__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk546__DOT__i__Vloopsize;
    unnamedblk546__DOT__i__Vloopsize = 0;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get__Vfuncrtn = 0ULL;
    unnamedblk546__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk546__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk546__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk546__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1681)->__VnoInFunc_get(vlSymsp, ""s, 0U, __VlefCall_0__get);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk546__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1681)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
        get__Vfuncrtn = (get__Vfuncrtn | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get, __VlefCall_1__get_lsb_pos));
        if ((unnamedblk546__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk546__DOT__i = ((::IData)(1U) 
                                     + unnamedblk546__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string fname, ::IData/*31:0*/ lineno, ::QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__get_lsb_pos;
    ::QData/*63:0*/ __VlefCall_0__get_mirrored_value;
    ::IData/*31:0*/ unnamedblk547__DOT__i;
    unnamedblk547__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk547__DOT__i__Vloopsize;
    unnamedblk547__DOT__i__Vloopsize = 0;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get_mirrored_value__Vfuncrtn = 0ULL;
    unnamedblk547__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk547__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk547__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk547__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1700)->__VnoInFunc_get_mirrored_value(vlProcess, vlSymsp, ""s, 0U, __VlefCall_0__get_mirrored_value);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk547__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1700)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
        get_mirrored_value__Vfuncrtn = (get_mirrored_value__Vfuncrtn 
                                        | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get_mirrored_value, __VlefCall_1__get_lsb_pos));
        if ((unnamedblk547__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk547__DOT__i = ((::IData)(1U) 
                                     + unnamedblk547__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_try_get__Vfuncout_4159;
    __Vtask_try_get__Vfuncout_4159 = 0;
    // Body
    ::IData/*31:0*/ unnamedblk548__DOT__i;
    unnamedblk548__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk548__DOT__i__Vloopsize;
    unnamedblk548__DOT__i__Vloopsize = 0;
    unnamedblk548__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk548__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk548__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk548__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1711)->__VnoInFunc_reset(vlSymsp, kind);
        if ((unnamedblk548__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk548__DOT__i = ((::IData)(1U) 
                                     + unnamedblk548__DOT__i);
        }
    }
    VL_NULL_CHECK(this->__PVT__m_atomic, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1716)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__Vfuncout_4159);
    VL_NULL_CHECK(this->__PVT__m_atomic, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1717)->__VnoInFunc_put(vlSymsp, 1U);
    this->__PVT__m_process = VlNull{};
    this->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::QData/*63:0*/ &get_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_1__get_lsb_pos;
    ::QData/*63:0*/ __VlefCall_0__get_reset;
    ::IData/*31:0*/ unnamedblk549__DOT__i;
    unnamedblk549__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk549__DOT__i__Vloopsize;
    unnamedblk549__DOT__i__Vloopsize = 0;
    get_reset__Vfuncrtn = 0ULL;
    unnamedblk549__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk549__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk549__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk549__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1732)->__VnoInFunc_get_reset(vlSymsp, kind, __VlefCall_0__get_reset);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk549__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1732)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
        get_reset__Vfuncrtn = (get_reset__Vfuncrtn 
                               | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get_reset, __VlefCall_1__get_lsb_pos));
        if ((unnamedblk549__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk549__DOT__i = ((::IData)(1U) 
                                     + unnamedblk549__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset(Vtb_top__Syms* __restrict vlSymsp, ::std::string kind, ::CData/*0:0*/ __SYM__delete, ::CData/*0:0*/ &has_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_0__has_reset;
    ::IData/*31:0*/ unnamedblk550__DOT__i;
    unnamedblk550__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk550__DOT__i__Vloopsize;
    unnamedblk550__DOT__i__Vloopsize = 0;
    {
        has_reset__Vfuncrtn = 0U;
        has_reset__Vfuncrtn = 0U;
        unnamedblk550__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk550__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk550__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk550__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1745)->__VnoInFunc_has_reset(vlSymsp, kind, (::IData)(__SYM__delete), __VlefCall_0__has_reset);
            has_reset__Vfuncrtn = ((::IData)(has_reset__Vfuncrtn) 
                                   | (::IData)(__VlefCall_0__has_reset));
            if (((~ (::IData)(__SYM__delete)) & (::IData)(has_reset__Vfuncrtn))) {
                has_reset__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk550__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk550__DOT__i = ((::IData)(1U) 
                                         + unnamedblk550__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__get_lsb_pos;
    ::IData/*31:0*/ unnamedblk551__DOT__i;
    unnamedblk551__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk551__DOT__i__Vloopsize;
    unnamedblk551__DOT__i__Vloopsize = 0;
    unnamedblk551__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk551__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk551__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk551__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1760)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_0__get_lsb_pos);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk551__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1760)->__VnoInFunc_set_reset(vlSymsp, 
                                                                                VL_SHIFTR_QQI(64,64,32, value, __VlefCall_0__get_lsb_pos), kind);
        if ((unnamedblk551__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk551__DOT__i = ((::IData)(1U) 
                                     + unnamedblk551__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_0__needs_update;
    ::IData/*31:0*/ unnamedblk552__DOT__i;
    unnamedblk552__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk552__DOT__i__Vloopsize;
    unnamedblk552__DOT__i__Vloopsize = 0;
    {
        needs_update__Vfuncrtn = 0U;
        needs_update__Vfuncrtn = 0U;
        unnamedblk552__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk552__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk552__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk552__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1774)->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
            if (__VlefCall_0__needs_update) {
                needs_update__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk552__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk552__DOT__i = ((::IData)(1U) 
                                         + unnamedblk552__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_write__status_4160;
    __Vtask_write__status_4160 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::IData/*31:0*/ __VlefCall_2__get_lsb_pos;
    ::QData/*63:0*/ __VlefCall_1__XupdateX;
    ::CData/*0:0*/ __VlefCall_0__needs_update;
    ::IData/*31:0*/ unnamedblk553__DOT__i;
    unnamedblk553__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk553__DOT__i__Vloopsize;
    unnamedblk553__DOT__i__Vloopsize = 0;
    ::QData/*63:0*/ upd;
    {
        status = 0U;
        upd = 0ULL;
        status = 0U;
        this->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
        if ((1U & (~ (::IData)(__VlefCall_0__needs_update)))) {
            goto __Vlabel0;
        }
        upd = 0ULL;
        unnamedblk553__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk553__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk553__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk553__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1805)->__VnoInFunc_XupdateX(vlSymsp, __VlefCall_1__XupdateX);
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk553__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1805)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
            upd = (upd | VL_SHIFTL_QQI(64,64,32, __VlefCall_1__XupdateX, __VlefCall_2__get_lsb_pos));
            if ((unnamedblk553__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk553__DOT__i = ((::IData)(1U) 
                                         + unnamedblk553__DOT__i);
            }
        }
        co_await this->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__status_4160, upd, path, map, parent, prior, extension, fname, lineno);
        status = __Vtask_write__status_4160;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_set(vlProcess, vlSymsp, value, ""s, 0U);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1834)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1835)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1836)->__VnoInFunc_set_kind(vlSymsp, 1U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1837)->__VnoInFunc_set_value(vlSymsp, value, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1838)->__VnoInFunc_set_door(vlSymsp, path);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1839)->__VnoInFunc_set_map(vlSymsp, map);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1840)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1841)->__VnoInFunc_set_priority(vlSymsp, prior);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1842)->__VnoInFunc_set_extension(vlSymsp, extension);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1843)->__VnoInFunc_set_fname(vlSymsp, fname);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1844)->__VnoInFunc_set_line(vlSymsp, lineno);
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1848)->__VnoInFunc_get_status(vlSymsp, status);
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__map_info_1652;
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_4161;
    __Vtask_get_lsb_pos__Vfuncout_4161 = 0;
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_4162;
    __Vtask_get_lsb_pos__Vfuncout_4162 = 0;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_4163;
    __Vtask_get_n_bits__Vfuncout_4163 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_report_enabled__verbosity_1653;
    __Vfunc_uvm_report_enabled__verbosity_1653 = 0;
    ::CData/*1:0*/ __Vfunc_uvm_report_enabled__severity_1654;
    __Vfunc_uvm_report_enabled__severity_1654 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1656;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4164;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4167;
    __Vtask_uvm_report_info__verbosity_4167 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4169;
    __Vtask_uvm_report_info__line_4169 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4171;
    __Vtask_uvm_report_info__report_enabled_checked_4171 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1657;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4172;
    ::VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_26__get_full_name;
    ::QData/*63:0*/ __VlefCall_25__get_value;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_24__get_backdoor;
    ::std::string __VlefCond_23;
    ::std::string __VlefCall_22__get_full_name;
    ::IData/*31:0*/ __VlefCall_21__get_door;
    ::IData/*31:0*/ __VlefCall_20__uvm_report_enabled;
    ::IData/*31:0*/ __VlefCall_19__get_n_bits;
    ::IData/*31:0*/ __VlefCall_18__get_lsb_pos;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_17__get_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_16__get_map;
    ::IData/*31:0*/ __VlefCall_15__get_status;
    ::CData/*0:0*/ __VlefCall_14__get_auto_predict;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_13__get_parent_sequence;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_12__get_sequencer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_11__get_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_10__get_local_map;
    ::QData/*63:0*/ __VlefCall_9__get_value;
    ::IData/*31:0*/ __VlefCall_8__get_status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_7__get_default_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_6__get_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_5__get_map;
    ::IData/*31:0*/ __VlefCall_4__get_door;
    ::IData/*31:0*/ __VlefCall_3__get_status;
    ::QData/*63:0*/ __VlefCall_2__get_value;
    ::IData/*31:0*/ __VlefCall_1__get_n_bits;
    ::CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    ::QData/*63:0*/ pre_write_callbacks__DOT__msk;
    ::IData/*31:0*/ pre_write_callbacks__DOT__lsb;
    ::IData/*31:0*/ pre_write_callbacks__DOT__unnamedblk554__DOT__i;
    pre_write_callbacks__DOT__unnamedblk554__DOT__i = 0;
    ::IData/*31:0*/ pre_write_callbacks__DOT__unnamedblk554__DOT__i__Vloopsize;
    pre_write_callbacks__DOT__unnamedblk554__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e> pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__f;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk557__DOT__cb;
    ::QData/*63:0*/ unnamedblk558__DOT__final_val;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk558__DOT__bkdr;
    ::IData/*31:0*/ unnamedblk558__DOT__unnamedblk559__DOT__i;
    unnamedblk558__DOT__unnamedblk559__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk558__DOT__unnamedblk559__DOT__i__Vloopsize;
    unnamedblk558__DOT__unnamedblk559__DOT__i__Vloopsize = 0;
    ::QData/*63:0*/ unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__field_val;
    ::IData/*31:0*/ unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__lsb;
    ::IData/*31:0*/ unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__sz;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk561__DOT__system_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk561__DOT__unnamedblk562__DOT__fd;
    ::IData/*31:0*/ unnamedblk561__DOT__unnamedblk563__DOT__status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk564__DOT__cb;
    ::IData/*31:0*/ unnamedblk565__DOT__i;
    unnamedblk565__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk565__DOT__i__Vloopsize;
    unnamedblk565__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e> unnamedblk565__DOT__unnamedblk566__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk565__DOT__unnamedblk566__DOT__f;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk565__DOT__unnamedblk566__DOT__unnamedblk567__DOT__cb;
    ::std::string unnamedblk568__DOT__path_s;
    ::std::string unnamedblk568__DOT__value_s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk568__DOT__tmp_map;
    ::std::string __VInside_hce28ef74__0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb> cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    ::QData/*63:0*/ value;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> tmp_local_map;
    {
        cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb, vlProcess, vlSymsp, 
                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
        value = 0ULL;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1864)->__VnoInFunc_get_fname(vlSymsp, this->__PVT__m_fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1865)->__VnoInFunc_get_line(vlSymsp, this->__PVT__m_lineno);
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__map_info_1652, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__map_info_1652;
        if ((1U & (~ (::IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_write_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1877)->__VnoInFunc_get_value(vlSymsp, 0U, value);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                          - 1ULL));
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1879)->__VnoInFunc_set_value(vlSymsp, value, 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1881)->__VnoInFunc_set_status(vlSymsp, 0U);
        pre_write_callbacks__DOT__msk = 0ULL;
        pre_write_callbacks__DOT__lsb = 0U;
        pre_write_callbacks__DOT__unnamedblk554__DOT__i = 0U;
        while (VL_LTS_III(32, pre_write_callbacks__DOT__unnamedblk554__DOT__i, this->__PVT__m_fields.size())) {
            pre_write_callbacks__DOT__unnamedblk554__DOT__i__Vloopsize 
                = this->__PVT__m_fields.size();
            pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__cbs 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e, vlProcess, vlSymsp, this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk554__DOT__i));
            pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__f 
                = this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk554__DOT__i);
            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1891)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_4161);
            pre_write_callbacks__DOT__lsb = __Vtask_get_lsb_pos__Vfuncout_4161;
            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1892)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
            pre_write_callbacks__DOT__msk = VL_SHIFTL_QQI(64,64,32, 
                                                          (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                                           - 1ULL), pre_write_callbacks__DOT__lsb);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1893)->__VnoInFunc_set_value(vlSymsp, 
                                                                                VL_SHIFTR_QQI(64,64,32, 
                                                                                (value 
                                                                                & pre_write_callbacks__DOT__msk), pre_write_callbacks__DOT__lsb), 0U);
            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1894)->__VnoInFunc_pre_write(vlSymsp, rw);
            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1895)->__VnoInFunc_first(vlProcess, vlSymsp, pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__cb);
            while ((VlNull{} != pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__cb)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1896)->__VnoInFunc_set_element(vlSymsp, pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__f);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1897)->__VnoInFunc_set_element_kind(vlSymsp, 1U);
                VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1898)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1895)->__VnoInFunc_next(vlProcess, vlSymsp, pre_write_callbacks__DOT__unnamedblk554__DOT__unnamedblk555__DOT__unnamedblk556__DOT__cb);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1901)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_2__get_value);
            value = ((value & (~ pre_write_callbacks__DOT__msk)) 
                     | VL_SHIFTL_QQI(64,64,32, __VlefCall_2__get_value, pre_write_callbacks__DOT__lsb));
            if ((pre_write_callbacks__DOT__unnamedblk554__DOT__i__Vloopsize 
                 <= this->__PVT__m_fields.size())) {
                pre_write_callbacks__DOT__unnamedblk554__DOT__i 
                    = ((::IData)(1U) + pre_write_callbacks__DOT__unnamedblk554__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1904)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1905)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1906)->__VnoInFunc_set_value(vlSymsp, value, 0U);
        this->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1910)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk557__DOT__cb);
        while ((VlNull{} != unnamedblk557__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk557__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1912)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1910)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk557__DOT__cb);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1916)->__VnoInFunc_get_status(vlSymsp, __VlefCall_3__get_status);
        if ((0U != __VlefCall_3__get_status)) {
            this->__PVT__m_write_in_progress = 0U;
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1925)->__VnoInFunc_get_door(vlSymsp, __VlefCall_4__get_door);
        if ((1U == __VlefCall_4__get_door)) {
            unnamedblk558__DOT__final_val = 0ULL;
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk558__DOT__bkdr);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1932)->__VnoInFunc_get_map(vlSymsp, __VlefCall_5__get_map);
            if ((VlNull{} != __VlefCall_5__get_map)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1934)->__VnoInFunc_get_map(vlSymsp, __VlefCall_6__get_map);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1934)->__VnoInFunc_set_local_map(vlSymsp, __VlefCall_6__get_map);
            } else {
                this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __VlefCall_7__get_default_map);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1939)->__VnoInFunc_set_local_map(vlSymsp, __VlefCall_7__get_default_map);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1943)->__VnoInFunc_get_value(vlSymsp, 0U, value);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1946)->__VnoInFunc_set_kind(vlSymsp, 0U);
            if ((VlNull{} != unnamedblk558__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk558__DOT__bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1949)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1958)->__VnoInFunc_get_status(vlSymsp, __VlefCall_8__get_status);
            if ((1U == __VlefCall_8__get_status)) {
                this->__PVT__m_write_in_progress = 0U;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            unnamedblk558__DOT__unnamedblk559__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk558__DOT__unnamedblk559__DOT__i, this->__PVT__m_fields.size())) {
                unnamedblk558__DOT__unnamedblk559__DOT__i__Vloopsize 
                    = this->__PVT__m_fields.size();
                unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__field_val = 0ULL;
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk558__DOT__unnamedblk559__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1967)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_4162);
                unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__lsb 
                    = __Vtask_get_lsb_pos__Vfuncout_4162;
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk558__DOT__unnamedblk559__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1968)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_4163);
                unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__sz 
                    = __Vtask_get_n_bits__Vfuncout_4163;
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1969)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_9__get_value);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1971)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_10__get_local_map);
                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk558__DOT__unnamedblk559__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1969)->__VnoInFunc_XpredictX(vlProcess, vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, __VlefCall_9__get_value, unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__sz) 
                                                                                - 1ULL)), 
                                                                                (VL_SHIFTR_QQI(64,64,32, value, unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__sz) 
                                                                                - 1ULL)), __VlefCall_10__get_local_map, unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__field_val);
                unnamedblk558__DOT__final_val = (unnamedblk558__DOT__final_val 
                                                 | VL_SHIFTL_QQI(64,64,32, unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__field_val, unnamedblk558__DOT__unnamedblk559__DOT__unnamedblk560__DOT__lsb));
                if ((unnamedblk558__DOT__unnamedblk559__DOT__i__Vloopsize 
                     <= this->__PVT__m_fields.size())) {
                    unnamedblk558__DOT__unnamedblk559__DOT__i 
                        = ((::IData)(1U) + unnamedblk558__DOT__unnamedblk559__DOT__i);
                }
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1975)->__VnoInFunc_set_kind(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1976)->__VnoInFunc_set_value(vlSymsp, unnamedblk558__DOT__final_val, 0U);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1978)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_11__get_local_map);
            this->__VnoInFunc_get_rights(vlProcess, vlSymsp, __VlefCall_11__get_local_map, __VInside_hce28ef74__0);
            if ((("RW"s == __VInside_hce28ef74__0) 
                 || ("WO"s == __VInside_hce28ef74__0))) {
                if ((VlNull{} != unnamedblk558__DOT__bkdr)) {
                    VL_NULL_CHECK(unnamedblk558__DOT__bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1981)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                } else {
                    this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                }
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
            } else {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 1993)->__VnoInFunc_set_status(vlSymsp, 1U);
            }
        } else if ((0U == __VlefCall_4__get_door)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2002)->__VnoInFunc_get_local_map(vlSymsp, tmp_local_map);
            VL_NULL_CHECK(tmp_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2003)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk561__DOT__system_map);
            this->__PVT__m_is_busy = 1U;
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2008)
                 ->__PVT__frontdoor)) {
                unnamedblk561__DOT__unnamedblk562__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2009)
                    ->__PVT__frontdoor;
                co_await VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2011)->__VnoInFunc_atomic_lock(vlProcess, vlSymsp);
                VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2012)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2013)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk561__DOT__system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2015)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_12__get_sequencer);
                    VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2015)->__PVT__sequencer 
                        = __VlefCall_12__get_sequencer;
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2018)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_13__get_parent_sequence);
                co_await VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2018)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2018)
                                                                                ->__PVT__sequencer, __VlefCall_13__get_parent_sequence, 0xffffffffU, 1U);
                VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2020)->__VnoInFunc_atomic_unlock(vlProcess, vlSymsp);
            } else {
                co_await VL_NULL_CHECK(tmp_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2026)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            }
            this->__PVT__m_is_busy = 0U;
            VL_NULL_CHECK(unnamedblk561__DOT__system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2032)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_14__get_auto_predict);
            if (__VlefCall_14__get_auto_predict) {
                unnamedblk561__DOT__unnamedblk563__DOT__status = 0U;
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2034)->__VnoInFunc_get_status(vlSymsp, __VlefCall_15__get_status);
                if ((1U != __VlefCall_15__get_status)) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2035)->__VnoInFunc_get_map(vlSymsp, __VlefCall_16__get_map);
                    this->__VnoInFunc_sample(vlSymsp, value, 0xffffffffffffffffULL, 0U, __VlefCall_16__get_map);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2036)->__VnoInFunc_get_map(vlSymsp, __VlefCall_17__get_map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2036)->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2036)
                                                                                ->__PVT__offset, 0U, __VlefCall_17__get_map);
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2039)->__VnoInFunc_get_status(vlSymsp, unnamedblk561__DOT__unnamedblk563__DOT__status);
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2041)->__VnoInFunc_set_status(vlSymsp, unnamedblk561__DOT__unnamedblk563__DOT__status);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2047)->__VnoInFunc_get_value(vlSymsp, 0U, value);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2050)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk564__DOT__cb);
        while ((VlNull{} != unnamedblk564__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk564__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2052)->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2050)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk564__DOT__cb);
        }
        this->__VnoInFunc_post_write(vlSymsp, rw);
        unnamedblk565__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk565__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk565__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            unnamedblk565__DOT__unnamedblk566__DOT__cbs 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e, vlProcess, vlSymsp, this->__PVT__m_fields.at(unnamedblk565__DOT__i));
            unnamedblk565__DOT__unnamedblk566__DOT__f 
                = this->__PVT__m_fields.at(unnamedblk565__DOT__i);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2062)->__VnoInFunc_set_element(vlSymsp, unnamedblk565__DOT__unnamedblk566__DOT__f);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2063)->__VnoInFunc_set_element_kind(vlSymsp, 1U);
            VL_NULL_CHECK(unnamedblk565__DOT__unnamedblk566__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2064)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_18__get_lsb_pos);
            VL_NULL_CHECK(unnamedblk565__DOT__unnamedblk566__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2064)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_19__get_n_bits);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2064)->__VnoInFunc_set_value(vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_18__get_lsb_pos) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_19__get_n_bits) 
                                                                                - 1ULL)), 0U);
            VL_NULL_CHECK(unnamedblk565__DOT__unnamedblk566__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2066)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk565__DOT__unnamedblk566__DOT__unnamedblk567__DOT__cb);
            while ((VlNull{} != unnamedblk565__DOT__unnamedblk566__DOT__unnamedblk567__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk565__DOT__unnamedblk566__DOT__unnamedblk567__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2068)->__VnoInFunc_post_write(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk565__DOT__unnamedblk566__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2066)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk565__DOT__unnamedblk566__DOT__unnamedblk567__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk565__DOT__unnamedblk566__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2071)->__VnoInFunc_post_write(vlSymsp, rw);
            if ((unnamedblk565__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk565__DOT__i = ((::IData)(1U) 
                                         + unnamedblk565__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2074)->__VnoInFunc_set_value(vlSymsp, value, 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2075)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2076)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__id_1655 = "RegModel"s;
        __Vfunc_uvm_report_enabled__severity_1654 = 0U;
        __Vfunc_uvm_report_enabled__verbosity_1653 = 0x0000012cU;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1656);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1656;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 100)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4164);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4164;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 101)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__verbosity_1653, (::IData)(__Vfunc_uvm_report_enabled__severity_1654), this->__Vfunc_uvm_report_enabled__id_1655, __VlefCall_20__uvm_report_enabled);
        if (VL_UNLIKELY(((0U != __VlefCall_20__uvm_report_enabled)))) {
            unnamedblk568__DOT__path_s = ""s;
            unnamedblk568__DOT__value_s = ""s;
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2082)->__VnoInFunc_get_door(vlSymsp, __VlefCall_21__get_door);
            if ((0U == __VlefCall_21__get_door)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2083)->__VnoInFunc_get_map(vlSymsp, unnamedblk568__DOT__tmp_map);
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2084)
                     ->__PVT__frontdoor)) {
                    __VlefCond_23 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(unnamedblk568__DOT__tmp_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2085)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                    __VlefCond_23 = VL_CONCATN_NNN("map "s, __VlefCall_22__get_full_name);
                }
                unnamedblk568__DOT__path_s = __VlefCond_23;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_24__get_backdoor);
                if ((VlNull{} != __VlefCall_24__get_backdoor)) {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x73657220U;
                    __Vtemp_1[3U] = 0x00000075U;
                } else {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x44504920U;
                    __Vtemp_1[3U] = 0U;
                }
                unnamedblk568__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_1);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2093)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_25__get_value);
            VL_SFORMAT_NX(unnamedblk568__DOT__value_s
                          ,"=0x%0h",1, '#',64,__VlefCall_25__get_value);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4171 = 0U;
            this->__Vtask_uvm_report_info__context_name_4170 = ""s;
            __Vtask_uvm_report_info__line_4169 = 0U;
            this->__Vtask_uvm_report_info__filename_4168 = ""s;
            __Vtask_uvm_report_info__verbosity_4167 = 0x0000012cU;
            this->__Vtask_uvm_report_info__message_4166 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Wrote register via "s, unnamedblk568__DOT__path_s), ": "s), __VlefCall_26__get_full_name), unnamedblk568__DOT__value_s));
            this->__Vtask_uvm_report_info__id_4165 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1657);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1657;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4172);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4172;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4165, this->__Vtask_uvm_report_info__message_4166, __Vtask_uvm_report_info__verbosity_4167, this->__Vtask_uvm_report_info__filename_4168, __Vtask_uvm_report_info__line_4169, this->__Vtask_uvm_report_info__context_name_4170, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4171));
        }
        this->__PVT__m_write_in_progress = 0U;
        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_XreadX__status_4173;
    __Vtask_XreadX__status_4173 = 0;
    ::QData/*63:0*/ __Vtask_XreadX__value_4174;
    __Vtask_XreadX__value_4174 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    status = 0U;
    value = 0ULL;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
    co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__status_4173, __Vtask_XreadX__value_4174, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_XreadX__status_4173;
    value = __Vtask_XreadX__value_4174;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2137)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2138)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2139)->__VnoInFunc_set_kind(vlSymsp, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2140)->__VnoInFunc_set_value(vlSymsp, 0ULL, 0U);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2141)->__VnoInFunc_set_door(vlSymsp, path);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2142)->__VnoInFunc_set_map(vlSymsp, map);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2143)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2144)->__VnoInFunc_set_priority(vlSymsp, prior);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2145)->__VnoInFunc_set_extension(vlSymsp, extension);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2146)->__VnoInFunc_set_fname(vlSymsp, fname);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2147)->__VnoInFunc_set_line(vlSymsp, lineno);
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2151)->__VnoInFunc_get_status(vlSymsp, status);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2152)->__VnoInFunc_get_value(vlSymsp, 0U, value);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__map_info_1658;
    ::CData/*0:0*/ __Vtask_do_check__Vfuncout_4175;
    __Vtask_do_check__Vfuncout_4175 = 0;
    ::CData/*0:0*/ __Vtask_do_check__Vfuncout_4176;
    __Vtask_do_check__Vfuncout_4176 = 0;
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_4177;
    __Vtask_get_lsb_pos__Vfuncout_4177 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_report_enabled__verbosity_1659;
    __Vfunc_uvm_report_enabled__verbosity_1659 = 0;
    ::CData/*1:0*/ __Vfunc_uvm_report_enabled__severity_1660;
    __Vfunc_uvm_report_enabled__severity_1660 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1662;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4178;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4181;
    __Vtask_uvm_report_info__verbosity_4181 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4183;
    __Vtask_uvm_report_info__line_4183 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4185;
    __Vtask_uvm_report_info__report_enabled_checked_4185 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1663;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4186;
    ::VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_44__get_full_name;
    ::QData/*63:0*/ __VlefCall_43__get_value;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_42__get_backdoor;
    ::std::string __VlefCond_41;
    ::std::string __VlefCall_40__get_full_name;
    ::IData/*31:0*/ __VlefCall_39__get_door;
    ::IData/*31:0*/ __VlefCall_38__uvm_report_enabled;
    ::IData/*31:0*/ __VlefCall_37__get_lsb_pos;
    ::QData/*63:0*/ __VlefCall_36__get_value;
    ::IData/*31:0*/ __VlefCall_35__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_34__get_n_bits;
    ::IData/*31:0*/ __VlefCall_33__get_n_bits;
    ::IData/*31:0*/ __VlefCall_32__get_lsb_pos;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_31__get_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_30__get_map;
    ::QData/*63:0*/ __VlefCall_29__get_value;
    ::IData/*31:0*/ __VlefCall_28__get_status;
    ::QData/*63:0*/ __VlefCall_27__get_value;
    ::IData/*31:0*/ __VlefCall_26__get_status;
    ::CData/*0:0*/ __VlefCall_25__get_check_on_read;
    ::CData/*0:0*/ __VlefCall_24__get_auto_predict;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_23__get_parent_sequence;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_22__get_sequencer;
    ::CData/*0:0*/ __VlefCall_21__get_check_on_read;
    ::QData/*63:0*/ __VlefCall_20__get_value;
    ::IData/*31:0*/ __VlefCall_19__get_status;
    ::CData/*0:0*/ __VlefCall_18__get_check_on_read;
    ::QData/*63:0*/ __VlefCall_17__get_value;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_16__get_local_map;
    ::IData/*31:0*/ __VlefCall_15__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_14__get_n_bits;
    ::IData/*31:0*/ __VlefCall_13__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_12__get_n_bits;
    ::IData/*31:0*/ __VlefCall_11__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_10__get_n_bits;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_9__get_local_map;
    ::IData/*31:0*/ __VlefCall_8__get_status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_7__get_local_map;
    ::CData/*0:0*/ __VlefCall_6__get_check_on_read;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_5__get_default_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_4__get_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_3__get_map;
    ::IData/*31:0*/ __VlefCall_2__get_door;
    ::IData/*31:0*/ __VlefCall_1__get_status;
    ::CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    ::IData/*31:0*/ unnamedblk569__DOT__i;
    unnamedblk569__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk569__DOT__i__Vloopsize;
    unnamedblk569__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e> unnamedblk569__DOT__unnamedblk570__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk569__DOT__unnamedblk570__DOT__f;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk569__DOT__unnamedblk570__DOT__unnamedblk571__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk572__DOT__cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk573__DOT__bkdr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk573__DOT__map;
    ::QData/*63:0*/ unnamedblk573__DOT__unnamedblk574__DOT__wo_mask;
    ::IData/*31:0*/ unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i;
    unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i__Vloopsize;
    unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i__Vloopsize = 0;
    ::std::string unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc;
    ::QData/*63:0*/ unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk577__DOT__saved;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk578__DOT__local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk578__DOT__system_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk578__DOT__unnamedblk579__DOT__fd;
    ::IData/*31:0*/ unnamedblk578__DOT__unnamedblk580__DOT__status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk581__DOT__cb;
    ::IData/*31:0*/ unnamedblk582__DOT__i;
    unnamedblk582__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk582__DOT__i__Vloopsize;
    unnamedblk582__DOT__i__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk582__DOT__unnamedblk583__DOT__top;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e> unnamedblk582__DOT__unnamedblk583__DOT__cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk582__DOT__unnamedblk583__DOT__f;
    ::IData/*31:0*/ unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk585__DOT__cb;
    ::std::string unnamedblk586__DOT__path_s;
    ::std::string unnamedblk586__DOT__value_s;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk586__DOT__unnamedblk587__DOT__map;
    ::std::string __VInside_hcdf7d2b4__1;
    ::std::string __VInside_hcdf7d2b4__0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb> cbs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    ::QData/*63:0*/ value;
    ::QData/*63:0*/ value_field_filter;
    ::QData/*63:0*/ exp;
    {
        cbs = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif1ab9aeb, vlProcess, vlSymsp, 
                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
        value = 0ULL;
        value_field_filter = 0ULL;
        exp = 0ULL;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2167)->__VnoInFunc_get_fname(vlSymsp, this->__PVT__m_fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2168)->__VnoInFunc_get_line(vlSymsp, this->__PVT__m_lineno);
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__map_info_1658, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__map_info_1658;
        if ((1U & (~ (::IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_read_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2178)->__VnoInFunc_set_status(vlSymsp, 0U);
        unnamedblk569__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk569__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk569__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            unnamedblk569__DOT__unnamedblk570__DOT__cbs 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e, vlProcess, vlSymsp, this->__PVT__m_fields.at(unnamedblk569__DOT__i));
            unnamedblk569__DOT__unnamedblk570__DOT__f 
                = this->__PVT__m_fields.at(unnamedblk569__DOT__i);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2184)->__VnoInFunc_set_element(vlSymsp, unnamedblk569__DOT__unnamedblk570__DOT__f);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2185)->__VnoInFunc_set_element_kind(vlSymsp, 1U);
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk569__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2186)->__VnoInFunc_pre_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk569__DOT__unnamedblk570__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2187)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk569__DOT__unnamedblk570__DOT__unnamedblk571__DOT__cb);
            while ((VlNull{} != unnamedblk569__DOT__unnamedblk570__DOT__unnamedblk571__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk569__DOT__unnamedblk570__DOT__unnamedblk571__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2189)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk569__DOT__unnamedblk570__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2187)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk569__DOT__unnamedblk570__DOT__unnamedblk571__DOT__cb);
            }
            if ((unnamedblk569__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk569__DOT__i = ((::IData)(1U) 
                                         + unnamedblk569__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2194)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2195)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
        this->__VnoInFunc_pre_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2199)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk572__DOT__cb);
        while ((VlNull{} != unnamedblk572__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk572__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2201)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2199)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk572__DOT__cb);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2205)->__VnoInFunc_get_status(vlSymsp, __VlefCall_1__get_status);
        if ((0U != __VlefCall_1__get_status)) {
            this->__PVT__m_read_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2212)->__VnoInFunc_get_door(vlSymsp, __VlefCall_2__get_door);
        if ((1U == __VlefCall_2__get_door)) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk573__DOT__bkdr);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2219)->__VnoInFunc_get_map(vlSymsp, __VlefCall_3__get_map);
            if ((VlNull{} != __VlefCall_3__get_map)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2221)->__VnoInFunc_get_map(vlSymsp, __VlefCall_4__get_map);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2221)->__VnoInFunc_set_local_map(vlSymsp, __VlefCall_4__get_map);
            } else {
                this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __VlefCall_5__get_default_map);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2226)->__VnoInFunc_set_local_map(vlSymsp, __VlefCall_5__get_default_map);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2230)->__VnoInFunc_get_local_map(vlSymsp, unnamedblk573__DOT__map);
            VL_NULL_CHECK(unnamedblk573__DOT__map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2232)->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_6__get_check_on_read);
            if (__VlefCall_6__get_check_on_read) {
                this->__VnoInFunc_get_mirrored_value(vlProcess, vlSymsp, ""s, 0U, exp);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2237)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_7__get_local_map);
            this->__VnoInFunc_get_rights(vlProcess, vlSymsp, __VlefCall_7__get_local_map, __VInside_hcdf7d2b4__0);
            if ((("RW"s == __VInside_hcdf7d2b4__0) 
                 || ("RO"s == __VInside_hcdf7d2b4__0))) {
                if ((VlNull{} != unnamedblk573__DOT__bkdr)) {
                    VL_NULL_CHECK(unnamedblk573__DOT__bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2240)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                } else {
                    this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                }
            } else {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2250)->__VnoInFunc_set_status(vlSymsp, 1U);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2253)->__VnoInFunc_get_value(vlSymsp, 0U, value);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2256)->__VnoInFunc_get_status(vlSymsp, __VlefCall_8__get_status);
            if ((1U != __VlefCall_8__get_status)) {
                unnamedblk573__DOT__unnamedblk574__DOT__wo_mask = 0ULL;
                unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i, this->__PVT__m_fields.size())) {
                    unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i__Vloopsize 
                        = this->__PVT__m_fields.size();
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2262)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_9__get_local_map);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2262)->__VnoInFunc_get_access(vlProcess, vlSymsp, __VlefCall_9__get_local_map, unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc);
                    if (((((("RC"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc) 
                            | ("WRC"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc)) 
                           | ("WSRC"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc)) 
                          | ("W1SRC"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc)) 
                         | ("W0SRC"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc))) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2268)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_10__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2269)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_11__get_lsb_pos);
                        value = (value & (~ VL_SHIFTL_QQI(64,64,32, 
                                                          (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_10__get_n_bits) 
                                                           - 1ULL), __VlefCall_11__get_lsb_pos)));
                    } else if (((((("RS"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc) 
                                   | ("WRS"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc)) 
                                  | ("WCRS"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc)) 
                                 | ("W1CRS"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc)) 
                                | ("W0CRS"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc))) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2276)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2277)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_13__get_lsb_pos);
                        value = (value | VL_SHIFTL_QQI(64,64,32, 
                                                       (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_12__get_n_bits) 
                                                        - 1ULL), __VlefCall_13__get_lsb_pos));
                    } else if ((((("WO"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc) 
                                  | ("WOC"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc)) 
                                 | ("WOS"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc)) 
                                | ("WO1"s == unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__acc))) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2283)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_14__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2284)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_15__get_lsb_pos);
                        unnamedblk573__DOT__unnamedblk574__DOT__wo_mask 
                            = (unnamedblk573__DOT__unnamedblk574__DOT__wo_mask 
                               | VL_SHIFTL_QQI(64,64,32, 
                                               (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_14__get_n_bits) 
                                                - 1ULL), __VlefCall_15__get_lsb_pos));
                    }
                    if ((unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i__Vloopsize 
                         <= this->__PVT__m_fields.size())) {
                        unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i 
                            = ((::IData)(1U) + unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk575__DOT__i);
                    }
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2288)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_16__get_local_map);
                this->__VnoInFunc_get_rights(vlProcess, vlSymsp, __VlefCall_16__get_local_map, __VInside_hcdf7d2b4__1);
                if ((("RW"s == __VInside_hcdf7d2b4__1) 
                     || ("RO"s == __VInside_hcdf7d2b4__1))) {
                    unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk577__DOT__saved = 0ULL;
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2290)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_17__get_value);
                    if ((value != __VlefCall_17__get_value)) {
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2292)->__VnoInFunc_get_value(vlSymsp, 0U, unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk577__DOT__saved);
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2293)->__VnoInFunc_set_value(vlSymsp, value, 0U);
                        if ((VlNull{} != unnamedblk573__DOT__bkdr)) {
                            VL_NULL_CHECK(unnamedblk573__DOT__bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2296)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                        } else {
                            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                        }
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2304)->__VnoInFunc_set_value(vlSymsp, unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk577__DOT__saved, 0U);
                    }
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2307)->__VnoInFunc_get_value(vlSymsp, 0U, unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk577__DOT__saved);
                    unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk577__DOT__saved 
                        = (unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk577__DOT__saved 
                           & (~ unnamedblk573__DOT__unnamedblk574__DOT__wo_mask));
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2309)->__VnoInFunc_set_value(vlSymsp, unnamedblk573__DOT__unnamedblk574__DOT__unnamedblk577__DOT__saved, 0U);
                    VL_NULL_CHECK(unnamedblk573__DOT__map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2311)->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_18__get_check_on_read);
                    if (__VlefCall_18__get_check_on_read) {
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2312)->__VnoInFunc_get_status(vlSymsp, __VlefCall_19__get_status);
                        __VlefCall_18__get_check_on_read 
                            = (1U != __VlefCall_19__get_status);
                    }
                    if (__VlefCall_18__get_check_on_read) {
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2313)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_20__get_value);
                        this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, __VlefCall_20__get_value, unnamedblk573__DOT__map, __Vtask_do_check__Vfuncout_4175);
                    }
                    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                } else {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2319)->__VnoInFunc_set_status(vlSymsp, 1U);
                }
            }
        } else if ((0U == __VlefCall_2__get_door)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2327)->__VnoInFunc_get_local_map(vlSymsp, unnamedblk578__DOT__local_map);
            VL_NULL_CHECK(unnamedblk578__DOT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2328)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk578__DOT__system_map);
            this->__PVT__m_is_busy = 1U;
            VL_NULL_CHECK(unnamedblk578__DOT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2332)->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_21__get_check_on_read);
            if (__VlefCall_21__get_check_on_read) {
                this->__VnoInFunc_get_mirrored_value(vlProcess, vlSymsp, ""s, 0U, exp);
            }
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2338)
                 ->__PVT__frontdoor)) {
                unnamedblk578__DOT__unnamedblk579__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2339)
                    ->__PVT__frontdoor;
                co_await VL_NULL_CHECK(unnamedblk578__DOT__unnamedblk579__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2341)->__VnoInFunc_atomic_lock(vlProcess, vlSymsp);
                VL_NULL_CHECK(unnamedblk578__DOT__unnamedblk579__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2342)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk578__DOT__unnamedblk579__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2343)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk578__DOT__system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2345)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_22__get_sequencer);
                    VL_NULL_CHECK(unnamedblk578__DOT__unnamedblk579__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2345)->__PVT__sequencer 
                        = __VlefCall_22__get_sequencer;
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2348)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_23__get_parent_sequence);
                co_await VL_NULL_CHECK(unnamedblk578__DOT__unnamedblk579__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2348)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk578__DOT__unnamedblk579__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2348)
                                                                                ->__PVT__sequencer, __VlefCall_23__get_parent_sequence, 0xffffffffU, 1U);
                VL_NULL_CHECK(unnamedblk578__DOT__unnamedblk579__DOT__fd, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2350)->__VnoInFunc_atomic_unlock(vlProcess, vlSymsp);
            } else {
                co_await VL_NULL_CHECK(unnamedblk578__DOT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2355)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            }
            this->__PVT__m_is_busy = 0U;
            VL_NULL_CHECK(unnamedblk578__DOT__system_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2360)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_24__get_auto_predict);
            if (__VlefCall_24__get_auto_predict) {
                unnamedblk578__DOT__unnamedblk580__DOT__status = 0U;
                VL_NULL_CHECK(unnamedblk578__DOT__local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2362)->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_25__get_check_on_read);
                if (__VlefCall_25__get_check_on_read) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2363)->__VnoInFunc_get_status(vlSymsp, __VlefCall_26__get_status);
                    __VlefCall_25__get_check_on_read 
                        = (1U != __VlefCall_26__get_status);
                }
                if (__VlefCall_25__get_check_on_read) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2364)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_27__get_value);
                    this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, __VlefCall_27__get_value, unnamedblk578__DOT__system_map, __Vtask_do_check__Vfuncout_4176);
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2367)->__VnoInFunc_get_status(vlSymsp, __VlefCall_28__get_status);
                if ((1U != __VlefCall_28__get_status)) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2368)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_29__get_value);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2368)->__VnoInFunc_get_map(vlSymsp, __VlefCall_30__get_map);
                    this->__VnoInFunc_sample(vlSymsp, __VlefCall_29__get_value, 0xffffffffffffffffULL, 1U, __VlefCall_30__get_map);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2369)->__VnoInFunc_get_map(vlSymsp, __VlefCall_31__get_map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2369)->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2369)
                                                                                ->__PVT__offset, 1U, __VlefCall_31__get_map);
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2372)->__VnoInFunc_get_status(vlSymsp, unnamedblk578__DOT__unnamedblk580__DOT__status);
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2374)->__VnoInFunc_set_status(vlSymsp, unnamedblk578__DOT__unnamedblk580__DOT__status);
            }
        }
        VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2381)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk581__DOT__cb);
        while ((VlNull{} != unnamedblk581__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk581__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2383)->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2381)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk581__DOT__cb);
        }
        this->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2388)->__VnoInFunc_get_value(vlSymsp, 0U, value);
        unnamedblk582__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk582__DOT__i, this->__PVT__m_fields.size())) {
            unnamedblk582__DOT__i__Vloopsize = this->__PVT__m_fields.size();
            unnamedblk582__DOT__unnamedblk583__DOT__top = 0U;
            unnamedblk582__DOT__unnamedblk583__DOT__cbs 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_callback_iter__pif43a684e, vlProcess, vlSymsp, this->__PVT__m_fields.at(unnamedblk582__DOT__i));
            unnamedblk582__DOT__unnamedblk583__DOT__f 
                = this->__PVT__m_fields.at(unnamedblk582__DOT__i);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2395)->__VnoInFunc_set_element(vlSymsp, unnamedblk582__DOT__unnamedblk583__DOT__f);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2396)->__VnoInFunc_set_element_kind(vlSymsp, 1U);
            VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2397)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_32__get_lsb_pos);
            VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2397)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_33__get_n_bits);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2397)->__VnoInFunc_set_value(vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_32__get_lsb_pos) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_33__get_n_bits) 
                                                                                - 1ULL)), 0U);
            VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2398)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_34__get_n_bits);
            VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2398)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_35__get_lsb_pos);
            unnamedblk582__DOT__unnamedblk583__DOT__top 
                = (__VlefCall_34__get_n_bits + __VlefCall_35__get_lsb_pos);
            value_field_filter = 0xffffffffffffffffULL;
            unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__i = 0U;
            VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2402)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_4177);
            unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__i 
                = __Vtask_get_lsb_pos__Vfuncout_4177;
            while (VL_LTS_III(32, unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__i, unnamedblk582__DOT__unnamedblk583__DOT__top)) {
                value_field_filter = ((~ (1ULL << (0x0000003fU 
                                                   & unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__i))) 
                                      & value_field_filter);
                unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__i 
                    = ((::IData)(1U) + unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__i);
            }
            VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2406)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk585__DOT__cb);
            while ((VlNull{} != unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk585__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk585__DOT__cb, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2408)->__VnoInFunc_post_read(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__cbs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2406)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk585__DOT__cb);
            }
            VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2411)->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2414)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_36__get_value);
            VL_NULL_CHECK(unnamedblk582__DOT__unnamedblk583__DOT__f, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2414)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_37__get_lsb_pos);
            value = ((value & value_field_filter) | 
                     ((~ value_field_filter) & VL_SHIFTL_QQI(64,64,32, __VlefCall_36__get_value, __VlefCall_37__get_lsb_pos)));
            if ((unnamedblk582__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
                unnamedblk582__DOT__i = ((::IData)(1U) 
                                         + unnamedblk582__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2418)->__VnoInFunc_set_value(vlSymsp, value, 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2420)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2421)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__id_1661 = "RegModel"s;
        __Vfunc_uvm_report_enabled__severity_1660 = 0U;
        __Vfunc_uvm_report_enabled__verbosity_1659 = 0x0000012cU;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1662);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1662;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 100)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4178);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4178;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 101)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__verbosity_1659, (::IData)(__Vfunc_uvm_report_enabled__severity_1660), this->__Vfunc_uvm_report_enabled__id_1661, __VlefCall_38__uvm_report_enabled);
        if (VL_UNLIKELY(((0U != __VlefCall_38__uvm_report_enabled)))) {
            unnamedblk586__DOT__path_s = ""s;
            unnamedblk586__DOT__value_s = ""s;
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2426)->__VnoInFunc_get_door(vlSymsp, __VlefCall_39__get_door);
            if ((0U == __VlefCall_39__get_door)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2427)->__VnoInFunc_get_map(vlSymsp, unnamedblk586__DOT__unnamedblk587__DOT__map);
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2428)
                     ->__PVT__frontdoor)) {
                    __VlefCond_41 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(unnamedblk586__DOT__unnamedblk587__DOT__map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2429)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_40__get_full_name);
                    __VlefCond_41 = VL_CONCATN_NNN("map "s, __VlefCall_40__get_full_name);
                }
                unnamedblk586__DOT__path_s = __VlefCond_41;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_42__get_backdoor);
                if ((VlNull{} != __VlefCall_42__get_backdoor)) {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x73657220U;
                    __Vtemp_1[3U] = 0x00000075U;
                } else {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x44504920U;
                    __Vtemp_1[3U] = 0U;
                }
                unnamedblk586__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_1);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2437)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_43__get_value);
            VL_SFORMAT_NX(unnamedblk586__DOT__value_s
                          ,"=0x%0h",1, '#',64,__VlefCall_43__get_value);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_44__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4185 = 0U;
            this->__Vtask_uvm_report_info__context_name_4184 = ""s;
            __Vtask_uvm_report_info__line_4183 = 0U;
            this->__Vtask_uvm_report_info__filename_4182 = ""s;
            __Vtask_uvm_report_info__verbosity_4181 = 0x0000012cU;
            this->__Vtask_uvm_report_info__message_4180 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Read  register via "s, unnamedblk586__DOT__path_s), ": "s), __VlefCall_44__get_full_name), unnamedblk586__DOT__value_s));
            this->__Vtask_uvm_report_info__id_4179 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1663);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1663;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4186);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4186;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4179, this->__Vtask_uvm_report_info__message_4180, __Vtask_uvm_report_info__verbosity_4181, this->__Vtask_uvm_report_info__filename_4182, __Vtask_uvm_report_info__line_4183, this->__Vtask_uvm_report_info__context_name_4184, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4185));
        }
        this->__PVT__m_read_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, ::CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1664;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4187;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4190;
    __Vtask_uvm_report_warning__verbosity_4190 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4192;
    __Vtask_uvm_report_warning__line_4192 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4194;
    __Vtask_uvm_report_warning__report_enabled_checked_4194 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1665;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4195;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1666;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4196;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4199;
    __Vtask_uvm_report_error__verbosity_4199 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4201;
    __Vtask_uvm_report_error__line_4201 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4203;
    __Vtask_uvm_report_error__report_enabled_checked_4203 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1667;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4204;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1668;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4205;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4208;
    __Vtask_uvm_report_error__verbosity_4208 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4210;
    __Vtask_uvm_report_error__line_4210 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4212;
    __Vtask_uvm_report_error__report_enabled_checked_4212 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1669;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4213;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1670;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4214;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4217;
    __Vtask_uvm_report_error__verbosity_4217 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4219;
    __Vtask_uvm_report_error__line_4219 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4221;
    __Vtask_uvm_report_error__report_enabled_checked_4221 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1671;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4222;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_37__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_36__get_map;
    ::std::string __VlefCall_35__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_34;
    ::IData/*31:0*/ __VlefCall_33__get_report_action;
    ::IData/*31:0*/ __VlefCall_32__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_31__uvm_get_report_object;
    ::std::string __VlefCall_30__get_full_name;
    ::std::string __VlefCall_29__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_28;
    ::IData/*31:0*/ __VlefCall_27__get_report_action;
    ::std::string __VlefCall_26__get_type_name;
    ::IData/*31:0*/ __VlefCall_25__get_report_verbosity_level;
    ::std::string __VlefCall_24__get_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_23__uvm_get_report_object;
    ::std::string __VlefCall_22__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_21;
    ::IData/*31:0*/ __VlefCall_20__get_report_action;
    ::std::string __VlefCall_19__get_type_name;
    ::IData/*31:0*/ __VlefCall_18__get_report_verbosity_level;
    ::std::string __VlefCall_17__get_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_16__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_15__get_local_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_14__get_local_map;
    ::IData/*31:0*/ __VlefCall_13__get_door;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_12__backdoor;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> __VlefCall_11__get_map;
    ::std::string __VlefCall_10__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_9;
    ::IData/*31:0*/ __VlefCall_8__get_report_action;
    ::IData/*31:0*/ __VlefCall_7__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_6__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::CData/*0:0*/ __VlefCall_4__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_3__get_backdoor;
    ::IData/*31:0*/ __VlefCall_2__get_door;
    ::IData/*31:0*/ __VlefCall_1__get_default_door;
    ::IData/*31:0*/ __VlefCall_0__get_door;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk588__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk589__DOT__bkdr_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk590__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk591__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk592__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> tmp_map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> tmp_local_map;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2455)->__VnoInFunc_get_door(vlSymsp, __VlefCall_0__get_door);
        if ((3U == __VlefCall_0__get_door)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2457)->__VnoInFunc_get_default_door(vlSymsp, __VlefCall_1__get_default_door);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2457)->__VnoInFunc_set_door(vlSymsp, __VlefCall_1__get_default_door);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2461)->__VnoInFunc_get_door(vlSymsp, __VlefCall_2__get_door);
        if ((1U == __VlefCall_2__get_door)) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_3__get_backdoor);
            __VlefLogAnd_5 = (VlNull{} == __VlefCall_3__get_backdoor);
            if (__VlefLogAnd_5) {
                this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_4__has_hdl_path);
                __VlefLogAnd_5 = (1U & (~ (::IData)(__VlefCall_4__has_hdl_path)));
            }
            if (__VlefLogAnd_5) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1664);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1664;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4187);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4187;
                __VlefCall_6__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_6__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2465)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk588__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk588__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2465)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_7__get_report_verbosity_level);
                __VlefLogAnd_9 = VL_LTES_III(32, 0U, __VlefCall_7__get_report_verbosity_level);
                if (__VlefLogAnd_9) {
                    VL_NULL_CHECK(unnamedblk588__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2465)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_8__get_report_action);
                    __VlefLogAnd_9 = (0U != __VlefCall_8__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_9))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    __Vtask_uvm_report_warning__report_enabled_checked_4194 = 1U;
                    this->__Vtask_uvm_report_warning__context_name_4193 = ""s;
                    __Vtask_uvm_report_warning__line_4192 = 0x000009a1U;
                    this->__Vtask_uvm_report_warning__filename_4191 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__verbosity_4190 = 0U;
                    this->__Vtask_uvm_report_warning__message_4189 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for register '"s, __VlefCall_10__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__id_4188 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1665);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1665;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4195);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4195;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4188, this->__Vtask_uvm_report_warning__message_4189, __Vtask_uvm_report_warning__verbosity_4190, this->__Vtask_uvm_report_warning__filename_4191, __Vtask_uvm_report_warning__line_4192, this->__Vtask_uvm_report_warning__context_name_4193, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4194));
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2466)->__VnoInFunc_set_door(vlSymsp, 0U);
            } else {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2468)->__VnoInFunc_get_map(vlSymsp, __VlefCall_11__get_map);
                if ((VlNull{} == __VlefCall_11__get_map)) {
                    this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, unnamedblk589__DOT__bkdr_map);
                    if ((VlNull{} != unnamedblk589__DOT__bkdr_map)) {
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2472)->__VnoInFunc_set_map(vlSymsp, unnamedblk589__DOT__bkdr_map);
                    } else {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_12__backdoor);
                        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2477)->__VnoInFunc_set_map(vlSymsp, __VlefCall_12__backdoor);
                    }
                }
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2485)->__VnoInFunc_get_door(vlSymsp, __VlefCall_13__get_door);
        if ((1U != __VlefCall_13__get_door)) {
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2486)->__VnoInFunc_get_map(vlSymsp, tmp_map);
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, tmp_map, __VlefCall_14__get_local_map);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2487)->__VnoInFunc_set_local_map(vlSymsp, __VlefCall_14__get_local_map);
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2489)->__VnoInFunc_get_local_map(vlSymsp, __VlefCall_15__get_local_map);
            if ((VlNull{} == __VlefCall_15__get_local_map)) {
                if ((VlNull{} == tmp_map)) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1666);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1666;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4196);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4196;
                    __VlefCall_16__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_16__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2492)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk590__DOT___local_report_object_);
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_17__get_type_name);
                    VL_NULL_CHECK(unnamedblk590__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2492)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_17__get_type_name), __VlefCall_18__get_report_verbosity_level);
                    __VlefLogAnd_21 = VL_LTES_III(32, 0U, __VlefCall_18__get_report_verbosity_level);
                    if (__VlefLogAnd_21) {
                        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_19__get_type_name);
                        VL_NULL_CHECK(unnamedblk590__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2492)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_19__get_type_name), __VlefCall_20__get_report_action);
                        __VlefLogAnd_21 = (0U != __VlefCall_20__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_21))) {
                        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_22__get_type_name);
                        __Vtask_uvm_report_error__report_enabled_checked_4203 = 1U;
                        this->__Vtask_uvm_report_error__context_name_4202 = ""s;
                        __Vtask_uvm_report_error__line_4201 = 0x000009bcU;
                        this->__Vtask_uvm_report_error__filename_4200 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_error__verbosity_4199 = 0U;
                        this->__Vtask_uvm_report_error__message_4198 = "Unable to physically access register with null map"s;
                        this->__Vtask_uvm_report_error__id_4197 
                            = VL_CVT_PACK_STR_NN(__VlefCall_22__get_type_name);
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1667);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1667;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4204);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4204;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4197, this->__Vtask_uvm_report_error__message_4198, __Vtask_uvm_report_error__verbosity_4199, this->__Vtask_uvm_report_error__filename_4200, __Vtask_uvm_report_error__line_4201, this->__Vtask_uvm_report_error__context_name_4202, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4203));
                    }
                } else {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1668);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1668;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4205);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4205;
                    __VlefCall_23__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_23__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2497)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk591__DOT___local_report_object_);
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_24__get_type_name);
                    VL_NULL_CHECK(unnamedblk591__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2497)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_24__get_type_name), __VlefCall_25__get_report_verbosity_level);
                    __VlefLogAnd_28 = VL_LTES_III(32, 0U, __VlefCall_25__get_report_verbosity_level);
                    if (__VlefLogAnd_28) {
                        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_26__get_type_name);
                        VL_NULL_CHECK(unnamedblk591__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2497)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_26__get_type_name), __VlefCall_27__get_report_action);
                        __VlefLogAnd_28 = (0U != __VlefCall_27__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_28))) {
                        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_29__get_type_name);
                        VL_NULL_CHECK(tmp_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2497)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_30__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_4212 = 1U;
                        this->__Vtask_uvm_report_error__context_name_4211 = ""s;
                        __Vtask_uvm_report_error__line_4210 = 0x000009c1U;
                        this->__Vtask_uvm_report_error__filename_4209 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_error__verbosity_4208 = 0U;
                        this->__Vtask_uvm_report_error__message_4207 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN("No transactor available to physically access register on map '"s, __VlefCall_30__get_full_name), "'"s));
                        this->__Vtask_uvm_report_error__id_4206 
                            = VL_CVT_PACK_STR_NN(__VlefCall_29__get_type_name);
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1669);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1669;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4213);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4213;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4206, this->__Vtask_uvm_report_error__message_4207, __Vtask_uvm_report_error__verbosity_4208, this->__Vtask_uvm_report_error__filename_4209, __Vtask_uvm_report_error__line_4210, this->__Vtask_uvm_report_error__context_name_4211, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4212));
                    }
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2499)->__VnoInFunc_set_status(vlSymsp, 1U);
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2503)->__VnoInFunc_get_local_map(vlSymsp, tmp_local_map);
            VL_NULL_CHECK(tmp_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2504)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
            if (((VlNull{} == VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2506)
                  ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2506)
                 ->__PVT__unmapped)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1670);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1670;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4214);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4214;
                __VlefCall_31__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_31__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2510)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk592__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk592__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2510)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_32__get_report_verbosity_level);
                __VlefLogAnd_34 = VL_LTES_III(32, 0U, __VlefCall_32__get_report_verbosity_level);
                if (__VlefLogAnd_34) {
                    VL_NULL_CHECK(unnamedblk592__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2510)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_33__get_report_action);
                    __VlefLogAnd_34 = (0U != __VlefCall_33__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_34))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_35__get_full_name);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2510)->__VnoInFunc_get_map(vlSymsp, __VlefCall_36__get_map);
                    if ((VlNull{} == __VlefCall_36__get_map)) {
                        VL_NULL_CHECK(tmp_local_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2510)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_37__get_full_name);
                    } else {
                        VL_NULL_CHECK(tmp_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2510)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_37__get_full_name);
                    }
                    __Vtask_uvm_report_error__report_enabled_checked_4221 = 1U;
                    this->__Vtask_uvm_report_error__context_name_4220 = ""s;
                    __Vtask_uvm_report_error__line_4219 = 0x000009ceU;
                    this->__Vtask_uvm_report_error__filename_4218 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_error__verbosity_4217 = 0U;
                    this->__Vtask_uvm_report_error__message_4216 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_35__get_full_name), "' unmapped in map '"s), __VlefCall_37__get_full_name), "' and does not have a user-defined frontdoor"s));
                    this->__Vtask_uvm_report_error__id_4215 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1671);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1671;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4222);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4222;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4215, this->__Vtask_uvm_report_error__message_4216, __Vtask_uvm_report_error__verbosity_4217, this->__Vtask_uvm_report_error__filename_4218, __Vtask_uvm_report_error__line_4219, this->__Vtask_uvm_report_error__context_name_4220, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4221));
                }
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2511)->__VnoInFunc_set_status(vlSymsp, 1U);
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            if ((VlNull{} == tmp_map)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2517)->__VnoInFunc_set_map(vlSymsp, tmp_local_map);
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_busy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy\n"); );
    // Body
    is_busy__Vfuncrtn = this->__PVT__m_is_busy;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ busy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX\n"); );
    // Body
    this->__PVT__m_is_busy = busy;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1672;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4223;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4226;
    __Vtask_uvm_report_info__verbosity_4226 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4228;
    __Vtask_uvm_report_info__line_4228 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4230;
    __Vtask_uvm_report_info__report_enabled_checked_4230 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1673;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4231;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_8__uvm_hdl_deposit;
    ::QData/*63:0*/ __VlefCall_7__get_value;
    ::IData/*31:0*/ __VlefCall_6__uvm_hdl_deposit;
    ::QData/*63:0*/ __VlefCall_5__get_value;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::std::string __VlefCall_0__get_bd_kind;
    ::IData/*31:0*/ unnamedblk593__DOT__i;
    unnamedblk593__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk593__DOT__i__Vloopsize;
    unnamedblk593__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk593__DOT__unnamedblk594__DOT__hdl_concat;
    ::IData/*31:0*/ unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j;
    unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j__Vloopsize;
    unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__unnamedblk596__DOT___local_report_object_;
    ::QData/*63:0*/ unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__unnamedblk597__DOT__slice;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    ::CData/*0:0*/ ok;
    paths.clear();
    ok = 1U;
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2551)->__VnoInFunc_get_bd_kind(vlSymsp, __VlefCall_0__get_bd_kind);
    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                        VL_CVT_PACK_STR_NN(__VlefCall_0__get_bd_kind), "."s);
    unnamedblk593__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk593__DOT__i, paths.size())) {
        unnamedblk593__DOT__i__Vloopsize = paths.size();
        unnamedblk593__DOT__unnamedblk594__DOT__hdl_concat 
            = paths.at(unnamedblk593__DOT__i);
        unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j, VL_NULL_CHECK(unnamedblk593__DOT__unnamedblk594__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2554)
                          ->__PVT__slices.size())) {
            unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j__Vloopsize 
                = VL_NULL_CHECK(unnamedblk593__DOT__unnamedblk594__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2554)
                ->__PVT__slices.size();
            {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1672);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1672;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4223);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4223;
                __VlefCall_1__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2556)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__unnamedblk596__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__unnamedblk596__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2556)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegMem"s, __VlefCall_2__get_report_verbosity_level);
                __VlefLogAnd_4 = VL_LTES_III(32, 0x000001f4U, __VlefCall_2__get_report_verbosity_level);
                if (__VlefLogAnd_4) {
                    VL_NULL_CHECK(unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__unnamedblk596__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2556)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegMem"s, __VlefCall_3__get_report_action);
                    __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_4))) {
                    __Vtask_uvm_report_info__report_enabled_checked_4230 = 1U;
                    this->__Vtask_uvm_report_info__context_name_4229 = ""s;
                    __Vtask_uvm_report_info__line_4228 = 0x000009fcU;
                    this->__Vtask_uvm_report_info__filename_4227 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_info__verbosity_4226 = 0x000001f4U;
                    __Vtemp_1 = VL_NULL_CHECK(unnamedblk593__DOT__unnamedblk594__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2556)
                        ->__PVT__slices.at(unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j)
                        .__PVT__path;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4225
                                  ,"backdoor_write to %s",1
                                  , 'S',&(__Vtemp_1));
                    this->__Vtask_uvm_report_info__id_4224 = "RegMem"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1673);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1673;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4231);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4231;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4224, this->__Vtask_uvm_report_info__message_4225, __Vtask_uvm_report_info__verbosity_4226, this->__Vtask_uvm_report_info__filename_4227, __Vtask_uvm_report_info__line_4228, this->__Vtask_uvm_report_info__context_name_4229, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4230));
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk593__DOT__unnamedblk594__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2558)
                                            ->__PVT__slices.at(unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j)
                                            .__PVT__offset)))) {
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2559)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_5__get_value);
                    vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                    __VlefCall_6__uvm_hdl_deposit = 0U;
                    ok = ((::IData)(ok) & __VlefCall_6__uvm_hdl_deposit);
                    goto __Vlabel0;
                }
                unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__unnamedblk597__DOT__slice = 0ULL;
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2564)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_7__get_value);
                unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__unnamedblk597__DOT__slice 
                    = VL_SHIFTR_QQI(64,64,32, __VlefCall_7__get_value, VL_NULL_CHECK(unnamedblk593__DOT__unnamedblk594__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2564)
                                    ->__PVT__slices.at(unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j)
                                    .__PVT__offset);
                unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__unnamedblk597__DOT__slice 
                    = (unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__unnamedblk597__DOT__slice 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk593__DOT__unnamedblk594__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2565)
                                        ->__PVT__slices.at(unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j)
                                        .__PVT__size) 
                          - 1ULL));
                vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                __VlefCall_8__uvm_hdl_deposit = 0U;
                ok = ((::IData)(ok) & __VlefCall_8__uvm_hdl_deposit);
                __Vlabel0: ;
            }
            if ((unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j__Vloopsize 
                 <= VL_NULL_CHECK(unnamedblk593__DOT__unnamedblk594__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2554)
                 ->__PVT__slices.size())) {
                unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j 
                    = ((::IData)(1U) + unnamedblk593__DOT__unnamedblk594__DOT__unnamedblk595__DOT__j);
            }
        }
        if ((unnamedblk593__DOT__i__Vloopsize <= paths.size())) {
            unnamedblk593__DOT__i = ((::IData)(1U) 
                                     + unnamedblk593__DOT__i);
        }
    }
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2570)->__VnoInFunc_set_status(vlSymsp, 
                                                                                ((::IData)(ok)
                                                                                 ? 0U
                                                                                 : 1U));
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__backdoor_read_func;
    this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __VlefCall_0__backdoor_read_func);
    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2577)->__VnoInFunc_set_status(vlSymsp, __VlefCall_0__backdoor_read_func);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw, ::IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1678;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4232;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4235;
    __Vtask_uvm_report_info__verbosity_4235 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4237;
    __Vtask_uvm_report_info__line_4237 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4239;
    __Vtask_uvm_report_info__report_enabled_checked_4239 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1679;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4240;
    ::VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__value_1681;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__value_1681);
    ::VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__value_1683;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__value_1683);
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1684;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4241;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__concat_1685;
    ::IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1686;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1686 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1687;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1687 = 0;
    Vtb_top_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1688;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1688.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1688.__PVT__size = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__concat_1690;
    ::IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1691;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1691 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1692;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1692 = 0;
    Vtb_top_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1693;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1693.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1693.__PVT__size = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4244;
    __Vtask_uvm_report_error__verbosity_4244 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4246;
    __Vtask_uvm_report_error__line_4246 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4248;
    __Vtask_uvm_report_error__report_enabled_checked_4248 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1695;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4249;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1696;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4250;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4253;
    __Vtask_uvm_report_info__verbosity_4253 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4255;
    __Vtask_uvm_report_info__line_4255 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4257;
    __Vtask_uvm_report_info__report_enabled_checked_4257 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1697;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4258;
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::QData/*63:0*/ __VlefCall_20__get_value;
    ::CData/*0:0*/ __VlefLogAnd_19;
    ::IData/*31:0*/ __VlefCall_18__get_report_action;
    ::IData/*31:0*/ __VlefCall_17__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_16__uvm_get_report_object;
    ::std::string __VlefCall_15__uvm_hdl_concat2string;
    ::std::string __VlefCall_14__uvm_hdl_concat2string;
    ::QData/*63:0*/ __VlefCall_13__get_value;
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_7__get_value;
    ::IData/*31:0*/ __VlefCall_6__uvm_hdl_read;
    ::IData/*31:0*/ __VlefCall_5__uvm_hdl_read;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::std::string __VlefCall_0__get_bd_kind;
    ::IData/*31:0*/ unnamedblk598__DOT__i;
    unnamedblk598__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk598__DOT__i__Vloopsize;
    unnamedblk598__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk598__DOT__unnamedblk599__DOT__hdl_concat;
    ::IData/*31:0*/ unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j;
    unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j__Vloopsize;
    unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk601__DOT___local_report_object_;
    ::QData/*63:0*/ unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__slice;
    ::IData/*31:0*/ unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__k;
    ::IData/*31:0*/ unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk603__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk604__DOT___local_report_object_;
    ::IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    ::QData/*63:0*/ val;
    ::CData/*0:0*/ ok;
    {
        backdoor_read_func__Vfuncrtn = 0U;
        paths.clear();
        val = 0ULL;
        ok = 1U;
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2587)->__VnoInFunc_get_bd_kind(vlSymsp, __VlefCall_0__get_bd_kind);
        this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                            VL_CVT_PACK_STR_NN(__VlefCall_0__get_bd_kind), "."s);
        unnamedblk598__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk598__DOT__i, paths.size())) {
            unnamedblk598__DOT__i__Vloopsize = paths.size();
            unnamedblk598__DOT__unnamedblk599__DOT__hdl_concat 
                = paths.at(unnamedblk598__DOT__i);
            val = 0ULL;
            unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j, VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2591)
                              ->__PVT__slices.size())) {
                unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j__Vloopsize 
                    = VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2591)
                    ->__PVT__slices.size();
                {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1678);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1678;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4232);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4232;
                    __VlefCall_1__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2593)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk601__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk601__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2593)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegMem"s, __VlefCall_2__get_report_verbosity_level);
                    __VlefLogAnd_4 = VL_LTES_III(32, 0x000001f4U, __VlefCall_2__get_report_verbosity_level);
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk601__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2593)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegMem"s, __VlefCall_3__get_report_action);
                        __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_4))) {
                        __Vtask_uvm_report_info__report_enabled_checked_4239 = 1U;
                        this->__Vtask_uvm_report_info__context_name_4238 = ""s;
                        __Vtask_uvm_report_info__line_4237 = 0x00000a21U;
                        this->__Vtask_uvm_report_info__filename_4236 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_info__verbosity_4235 = 0x000001f4U;
                        __Vtemp_1 = VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2593)
                            ->__PVT__slices.at(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j)
                            .__PVT__path;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4234
                                      ,"backdoor_read from %s ",1
                                      , 'S',&(__Vtemp_1));
                        this->__Vtask_uvm_report_info__id_4233 = "RegMem"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1679);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1679;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4240);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4240;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4233, this->__Vtask_uvm_report_info__message_4234, __Vtask_uvm_report_info__verbosity_4235, this->__Vtask_uvm_report_info__filename_4236, __Vtask_uvm_report_info__line_4237, this->__Vtask_uvm_report_info__context_name_4238, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4239));
                    }
                    if (VL_UNLIKELY((VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2595)
                                                ->__PVT__slices.at(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j)
                                                .__PVT__offset)))) {
                        VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__value_1681);
                        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                        __VlefCall_5__uvm_hdl_read = 0U;
                        val = (((::QData)((::IData)(__Vfunc_uvm_hdl_read__value_1681[1U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_uvm_hdl_read__value_1681[0U])));
                        ok = ((::IData)(ok) & __VlefCall_5__uvm_hdl_read);
                        goto __Vlabel1;
                    }
                    unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__slice = 0ULL;
                    unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__k 
                        = VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2601)
                        ->__PVT__slices.at(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j)
                        .__PVT__offset;
                    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__value_1683);
                    vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                    __VlefCall_6__uvm_hdl_read = 0U;
                    unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__slice 
                        = (((::QData)((::IData)(__Vfunc_uvm_hdl_read__value_1683[1U])) 
                            << 0x00000020U) | (::QData)((::IData)(__Vfunc_uvm_hdl_read__value_1683[0U])));
                    ok = ((::IData)(ok) & __VlefCall_6__uvm_hdl_read);
                    unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2605)
                        ->__PVT__slices.at(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j)
                        .__PVT__size;
                    while (VL_LTS_III(32, 0U, unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                        __Vincrement1 = unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__k;
                        unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__k 
                            = ((::IData)(1U) + unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__k);
                        val = (((~ (1ULL << (0x0000003fU 
                                             & __Vincrement1))) 
                                & val) | ((::QData)((::IData)(
                                                              (1U 
                                                               & (::IData)(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__slice)))) 
                                          << (0x0000003fU 
                                              & __Vincrement1)));
                        unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__slice 
                            = (unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__slice 
                               >> 1U);
                        unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__unnamedblk1_1__DOT____Vrepeat0 
                            = (unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__unnamedblk602__DOT__unnamedblk1_1__DOT____Vrepeat0 
                               - (::IData)(1U));
                    }
                    __Vlabel1: ;
                }
                if ((unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j__Vloopsize 
                     <= VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__hdl_concat, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2591)
                     ->__PVT__slices.size())) {
                    unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j 
                        = ((::IData)(1U) + unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk600__DOT__j);
                }
            }
            val = (val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                          - 1ULL));
            if ((0U == unnamedblk598__DOT__i)) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2616)->__VnoInFunc_set_value(vlSymsp, val, 0U);
            }
            VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2620)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_7__get_value);
            if ((val != __VlefCall_7__get_value)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1684);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1684;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4241);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4241;
                __VlefCall_8__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2624)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk603__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk603__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2624)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_9__get_report_verbosity_level);
                __VlefLogAnd_11 = VL_LTES_III(32, 0U, __VlefCall_9__get_report_verbosity_level);
                if (__VlefLogAnd_11) {
                    VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk603__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2624)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_10__get_report_action);
                    __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_11))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                    VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2624)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_13__get_value);
                    __Vfunc_uvm_hdl_concat2string__concat_1685 
                        = paths.at(0U);
                    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1686 = 0U;
                    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1687 = 0;
                    {
                        __VlefCall_14__uvm_hdl_concat2string = ""s;
                        this->__Vfunc_uvm_hdl_concat2string__image_1689 = "{"s;
                        if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1685, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 413)
                               ->__PVT__slices.size()) 
                              && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1685, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 414)
                                  ->__PVT__slices.at(0U)
                                  .__PVT__offset)) 
                             && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1685, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 415)
                                 ->__PVT__slices.at(0U)
                                 .__PVT__size))) {
                            __VlefCall_14__uvm_hdl_concat2string 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1685, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 417)
                                ->__PVT__slices.at(0U)
                                .__PVT__path;
                            goto __Vlabel2;
                        }
                        __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1686 = 0U;
                        while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1686, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1685, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                          ->__PVT__slices.size())) {
                            __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1687 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1685, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                ->__PVT__slices.size();
                            __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1688 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1685, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 423)
                                ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1686);
                            this->__Vfunc_uvm_hdl_concat2string__image_1689 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1689, 
                                                                VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1686)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1688
                                                 .__PVT__path);
                            if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1688
                                            .__PVT__offset)) {
                                this->__Vfunc_uvm_hdl_concat2string__image_1689 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1689, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1688
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1688
                                                                                .__PVT__size) );
                            }
                            if ((__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1687 
                                 <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1685, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                 ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1686 
                                    = ((::IData)(1U) 
                                       + __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1686);
                            }
                        }
                        this->__Vfunc_uvm_hdl_concat2string__image_1689 
                            = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1689, "}"s);
                        __VlefCall_14__uvm_hdl_concat2string 
                            = this->__Vfunc_uvm_hdl_concat2string__image_1689;
                        __Vlabel2: ;
                    }
                    __Vfunc_uvm_hdl_concat2string__concat_1690 
                        = paths.at(unnamedblk598__DOT__i);
                    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1691 = 0U;
                    __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1692 = 0;
                    {
                        __VlefCall_15__uvm_hdl_concat2string = ""s;
                        this->__Vfunc_uvm_hdl_concat2string__image_1694 = "{"s;
                        if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1690, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 413)
                               ->__PVT__slices.size()) 
                              && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1690, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 414)
                                  ->__PVT__slices.at(0U)
                                  .__PVT__offset)) 
                             && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1690, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 415)
                                 ->__PVT__slices.at(0U)
                                 .__PVT__size))) {
                            __VlefCall_15__uvm_hdl_concat2string 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1690, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 417)
                                ->__PVT__slices.at(0U)
                                .__PVT__path;
                            goto __Vlabel3;
                        }
                        __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1691 = 0U;
                        while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1691, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1690, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                          ->__PVT__slices.size())) {
                            __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1692 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1690, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                ->__PVT__slices.size();
                            __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1693 
                                = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1690, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 423)
                                ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1691);
                            this->__Vfunc_uvm_hdl_concat2string__image_1694 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1694, 
                                                                VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1691)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1693
                                                 .__PVT__path);
                            if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1693
                                            .__PVT__offset)) {
                                this->__Vfunc_uvm_hdl_concat2string__image_1694 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1694, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1693
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__unnamedblk415__DOT__slice_1693
                                                                                .__PVT__size) );
                            }
                            if ((__Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i__Vloopsize_1692 
                                 <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__concat_1690, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg_model.svh", 421)
                                 ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1691 
                                    = ((::IData)(1U) 
                                       + __Vfunc_uvm_hdl_concat2string__unnamedblk414__DOT__i_1691);
                            }
                        }
                        this->__Vfunc_uvm_hdl_concat2string__image_1694 
                            = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__image_1694, "}"s);
                        __VlefCall_15__uvm_hdl_concat2string 
                            = this->__Vfunc_uvm_hdl_concat2string__image_1694;
                        __Vlabel3: ;
                    }
                    __Vtask_uvm_report_error__report_enabled_checked_4248 = 1U;
                    this->__Vtask_uvm_report_error__context_name_4247 = ""s;
                    __Vtask_uvm_report_error__line_4246 = 0x00000a40U;
                    this->__Vtask_uvm_report_error__filename_4245 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_error__verbosity_4244 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4243
                                  ,"Backdoor read of register %s with multiple HDL copies: values are not the same: %0h at path '%s', and %0h at path '%s'. Returning first value.",5
                                  , 'S',&(__VlefCall_12__get_full_name)
                                  , '#',64,__VlefCall_13__get_value
                                  , 'S',&(__VlefCall_14__uvm_hdl_concat2string)
                                  , '#',64,val, 'S',&(__VlefCall_15__uvm_hdl_concat2string));
                    this->__Vtask_uvm_report_error__id_4242 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1695);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1695;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4249);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4249;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4242, this->__Vtask_uvm_report_error__message_4243, __Vtask_uvm_report_error__verbosity_4244, this->__Vtask_uvm_report_error__filename_4245, __Vtask_uvm_report_error__line_4246, this->__Vtask_uvm_report_error__context_name_4247, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4248));
                }
                backdoor_read_func__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1696);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1696;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4250);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4250;
            __VlefCall_16__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_16__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2628)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk604__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk604__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2628)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegMem"s, __VlefCall_17__get_report_verbosity_level);
            __VlefLogAnd_19 = VL_LTES_III(32, 0x000001f4U, __VlefCall_17__get_report_verbosity_level);
            if (__VlefLogAnd_19) {
                VL_NULL_CHECK(unnamedblk598__DOT__unnamedblk599__DOT__unnamedblk604__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2628)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegMem"s, __VlefCall_18__get_report_action);
                __VlefLogAnd_19 = (0U != __VlefCall_18__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_19))) {
                VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2628)->__VnoInFunc_get_value(vlSymsp, 0U, __VlefCall_20__get_value);
                __Vtask_uvm_report_info__report_enabled_checked_4257 = 1U;
                this->__Vtask_uvm_report_info__context_name_4256 = ""s;
                __Vtask_uvm_report_info__line_4255 = 0x00000a44U;
                this->__Vtask_uvm_report_info__filename_4254 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_info__verbosity_4253 = 0x000001f4U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4252
                              ,"returned backdoor value 0x%0x",1
                              , '#',64,__VlefCall_20__get_value);
                this->__Vtask_uvm_report_info__id_4251 = "RegMem"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1697);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1697;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4258);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4258;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4251, this->__Vtask_uvm_report_info__message_4252, __Vtask_uvm_report_info__verbosity_4253, this->__Vtask_uvm_report_info__filename_4254, __Vtask_uvm_report_info__line_4255, this->__Vtask_uvm_report_info__context_name_4256, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4257));
            }
            if ((unnamedblk598__DOT__i__Vloopsize <= paths.size())) {
                unnamedblk598__DOT__i = ((::IData)(1U) 
                                         + unnamedblk598__DOT__i);
            }
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2632)->__VnoInFunc_set_status(vlSymsp, 
                                                                                ((::IData)(ok)
                                                                                 ? 0U
                                                                                 : 1U));
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2633)->__VnoInFunc_get_status(vlSymsp, backdoor_read_func__Vfuncrtn);
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1698;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4259;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4262;
    __Vtask_uvm_report_error__verbosity_4262 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4264;
    __Vtask_uvm_report_error__line_4264 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4266;
    __Vtask_uvm_report_error__report_enabled_checked_4266 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1699;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4267;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1700;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4268;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4271;
    __Vtask_uvm_report_info__verbosity_4271 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4273;
    __Vtask_uvm_report_info__line_4273 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4275;
    __Vtask_uvm_report_info__report_enabled_checked_4275 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1701;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4276;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::std::string __VlefCall_7__get_full_name;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk605__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk606__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        status = 0U;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (::IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1698);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1698;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4259);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4259;
            __VlefCall_2__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2656)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk605__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk605__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2656)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_verbosity_level);
            __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
            if (__VlefLogAnd_5) {
                VL_NULL_CHECK(unnamedblk605__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2656)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_4__get_report_action);
                __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_5))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4266 = 1U;
                this->__Vtask_uvm_report_error__context_name_4265 = ""s;
                __Vtask_uvm_report_error__line_4264 = 0x00000a60U;
                this->__Vtask_uvm_report_error__filename_4263 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_error__verbosity_4262 = 0U;
                this->__Vtask_uvm_report_error__message_4261 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available to poke register '"s, __VlefCall_6__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__id_4260 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1699);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1699;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4267);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4267;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4260, this->__Vtask_uvm_report_error__message_4261, __Vtask_uvm_report_error__verbosity_4262, this->__Vtask_uvm_report_error__filename_4263, __Vtask_uvm_report_error__line_4264, this->__Vtask_uvm_report_error__context_name_4265, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4266));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((1U & (~ (::IData)(this->__PVT__m_is_locked_by_field)))) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2669)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2670)->__VnoInFunc_set_door(vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2671)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2672)->__VnoInFunc_set_kind(vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2673)->__VnoInFunc_set_bd_kind(vlSymsp, kind);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2674)->__VnoInFunc_set_value(vlSymsp, 
                                                                                (value 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                                                                                - 1ULL)), 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2675)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2676)->__VnoInFunc_set_extension(vlSymsp, extension);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2677)->__VnoInFunc_set_fname(vlSymsp, fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2678)->__VnoInFunc_set_line(vlSymsp, lineno);
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2682)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2691)->__VnoInFunc_get_status(vlSymsp, status);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1700);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1700;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4268);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4268;
        __VlefCall_8__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2694)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk606__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk606__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2694)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_9__get_report_verbosity_level);
        __VlefLogAnd_11 = VL_LTES_III(32, 0x0000012cU, __VlefCall_9__get_report_verbosity_level);
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(unnamedblk606__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2694)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_10__get_report_action);
            __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_11))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4275 = 1U;
            this->__Vtask_uvm_report_info__context_name_4274 = ""s;
            __Vtask_uvm_report_info__line_4273 = 0x00000a86U;
            this->__Vtask_uvm_report_info__filename_4272 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_info__verbosity_4271 = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4270
                          ,"Poked register \"%s\": 'h%h",2
                          , 'S',&(__VlefCall_12__get_full_name)
                          , '#',64,value);
            this->__Vtask_uvm_report_info__id_4269 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1701);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1701;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4276);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4276;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4269, this->__Vtask_uvm_report_info__message_4270, __Vtask_uvm_report_info__verbosity_4271, this->__Vtask_uvm_report_info__filename_4272, __Vtask_uvm_report_info__line_4273, this->__Vtask_uvm_report_info__context_name_4274, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4275));
        }
        this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
        if ((1U & (~ (::IData)(this->__PVT__m_is_locked_by_field)))) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::QData/*63:0*/ &value, ::std::string kind, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1702;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4277;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4280;
    __Vtask_uvm_report_error__verbosity_4280 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4282;
    __Vtask_uvm_report_error__line_4282 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4284;
    __Vtask_uvm_report_error__report_enabled_checked_4284 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1703;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4285;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1704;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4286;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4289;
    __Vtask_uvm_report_info__verbosity_4289 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4291;
    __Vtask_uvm_report_info__line_4291 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4293;
    __Vtask_uvm_report_info__report_enabled_checked_4293 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1705;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4294;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::std::string __VlefCall_7__get_full_name;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk607__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk608__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        status = 0U;
        value = 0ULL;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (::IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1702);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1702;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4277);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4277;
            __VlefCall_2__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2725)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk607__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk607__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2725)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_3__get_report_verbosity_level);
            __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
            if (__VlefLogAnd_5) {
                VL_NULL_CHECK(unnamedblk607__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2725)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_4__get_report_action);
                __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_5))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                __Vtask_uvm_report_error__report_enabled_checked_4284 = 1U;
                this->__Vtask_uvm_report_error__context_name_4283 = ""s;
                __Vtask_uvm_report_error__line_4282 = 0x00000aa5U;
                this->__Vtask_uvm_report_error__filename_4281 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_error__verbosity_4280 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4279
                              ,"No backdoor access available to peek register \"%s\"",1
                              , 'S',&(__VlefCall_6__get_full_name));
                this->__Vtask_uvm_report_error__id_4278 = "RegModel"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1703);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1703;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4285);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4285;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4278, this->__Vtask_uvm_report_error__message_4279, __Vtask_uvm_report_error__verbosity_4280, this->__Vtask_uvm_report_error__filename_4281, __Vtask_uvm_report_error__line_4282, this->__Vtask_uvm_report_error__context_name_4283, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4284));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((1U & (~ (::IData)(this->__PVT__m_is_locked_by_field)))) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi3429b725__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_7__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2738)->__VnoInFunc_set_element(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this});
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2739)->__VnoInFunc_set_door(vlSymsp, 1U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2740)->__VnoInFunc_set_element_kind(vlSymsp, 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2741)->__VnoInFunc_set_kind(vlSymsp, 0U);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2742)->__VnoInFunc_set_bd_kind(vlSymsp, kind);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2743)->__VnoInFunc_set_parent_sequence(vlSymsp, parent);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2744)->__VnoInFunc_set_extension(vlSymsp, extension);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2745)->__VnoInFunc_set_fname(vlSymsp, fname);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2746)->__VnoInFunc_set_line(vlSymsp, lineno);
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2750)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
        }
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2759)->__VnoInFunc_get_status(vlSymsp, status);
        VL_NULL_CHECK(rw, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2760)->__VnoInFunc_get_value(vlSymsp, 0U, value);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1704);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1704;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4286);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4286;
        __VlefCall_8__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2763)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk608__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk608__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2763)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_9__get_report_verbosity_level);
        __VlefLogAnd_11 = VL_LTES_III(32, 0x0000012cU, __VlefCall_9__get_report_verbosity_level);
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(unnamedblk608__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2763)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_10__get_report_action);
            __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_11))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
            __Vtask_uvm_report_info__report_enabled_checked_4293 = 1U;
            this->__Vtask_uvm_report_info__context_name_4292 = ""s;
            __Vtask_uvm_report_info__line_4291 = 0x00000acbU;
            this->__Vtask_uvm_report_info__filename_4290 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_info__verbosity_4289 = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4288
                          ,"Peeked register \"%s\": 'h%h",2
                          , 'S',&(__VlefCall_12__get_full_name)
                          , '#',64,value);
            this->__Vtask_uvm_report_info__id_4287 = "RegModel"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1705);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1705;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4294);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__Vfuncout_4294;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4287, this->__Vtask_uvm_report_info__message_4288, __Vtask_uvm_report_info__verbosity_4289, this->__Vtask_uvm_report_info__filename_4290, __Vtask_uvm_report_info__line_4291, this->__Vtask_uvm_report_info__context_name_4292, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4293));
        }
        this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
        if ((1U & (~ (::IData)(this->__PVT__m_is_locked_by_field)))) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ expected, ::QData/*63:0*/ actual, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::CData/*0:0*/ &do_check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_2__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_1__get_n_bits;
    ::IData/*31:0*/ __VlefCall_0__get_compare;
    ::IData/*31:0*/ unnamedblk609__DOT__i;
    unnamedblk609__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk609__DOT__i__Vloopsize;
    unnamedblk609__DOT__i__Vloopsize = 0;
    ::std::string unnamedblk609__DOT__unnamedblk610__DOT__acc;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_err_service> unnamedblk611__DOT__err_service;
    ::QData/*63:0*/ valid_bits_mask;
    do_check__Vfuncrtn = 0U;
    valid_bits_mask = 0ULL;
    unnamedblk609__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk609__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk609__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk609__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2783)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, unnamedblk609__DOT__unnamedblk610__DOT__acc);
        unnamedblk609__DOT__unnamedblk610__DOT__acc 
            = VL_SUBSTR_N(unnamedblk609__DOT__unnamedblk610__DOT__acc,0U,1U);
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk609__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2785)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_0__get_compare);
        if ((1U & (~ ((0U == __VlefCall_0__get_compare) 
                      || ("WO"s == unnamedblk609__DOT__unnamedblk610__DOT__acc))))) {
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk609__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2786)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk609__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2786)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
            valid_bits_mask = (valid_bits_mask | VL_SHIFTL_QQI(64,64,32, 
                                                               (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                                                - 1ULL), __VlefCall_2__get_lsb_pos));
        }
        if ((unnamedblk609__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk609__DOT__i = ((::IData)(1U) 
                                     + unnamedblk609__DOT__i);
        }
    }
    if (((actual & valid_bits_mask) == (expected & valid_bits_mask))) {
        do_check__Vfuncrtn = 1U;
    } else {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_err_service__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk611__DOT__err_service);
        VL_NULL_CHECK(unnamedblk611__DOT__err_service, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2797)->__VnoInFunc_do_check_error(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg>{this}, expected, actual, map, valid_bits_mask);
        do_check__Vfuncrtn = 0U;
    }
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &status, ::IData/*31:0*/ check, ::IData/*31:0*/ path, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> parent, ::IData/*31:0*/ prior, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> extension, ::std::string fname, ::IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_XreadX__status_4295;
    __Vtask_XreadX__status_4295 = 0;
    ::QData/*63:0*/ __Vtask_XreadX__value_4296;
    __Vtask_XreadX__value_4296 = 0;
    ::CData/*0:0*/ __Vtask_do_check__Vfuncout_4297;
    __Vtask_do_check__Vfuncout_4297 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::CData/*0:0*/ __VlefCall_0__has_hdl_path;
    ::QData/*63:0*/ v;
    ::QData/*63:0*/ exp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    {
        status = 0U;
        v = 0ULL;
        exp = 0ULL;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2862)->__VnoInFunc_get_default_door(vlSymsp, path);
        }
        __VlefCall_0__has_hdl_path = (1U == path);
        if (__VlefCall_0__has_hdl_path) {
            __VlefCall_0__has_hdl_path = (VlNull{} 
                                          != bkdr);
            if ((1U & (~ (::IData)(__VlefCall_0__has_hdl_path)))) {
                this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_0__has_hdl_path);
            }
        }
        if (__VlefCall_0__has_hdl_path) {
            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, map);
            if ((VlNull{} == map)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, map);
            }
        } else {
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        }
        if ((VlNull{} == map)) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            goto __Vlabel0;
        }
        if ((1U == check)) {
            this->__VnoInFunc_get_mirrored_value(vlProcess, vlSymsp, ""s, 0U, exp);
        }
        co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__status_4295, __Vtask_XreadX__value_4296, path, map, parent, prior, extension, fname, lineno);
        status = __Vtask_XreadX__status_4295;
        v = __Vtask_XreadX__value_4296;
        if ((1U == status)) {
            co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            goto __Vlabel0;
        }
        if ((1U == check)) {
            this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, v, map, __Vtask_do_check__Vfuncout_4297);
        }
        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1706;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4298;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4301;
    __Vtask_uvm_report_error__verbosity_4301 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4303;
    __Vtask_uvm_report_error__line_4303 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4305;
    __Vtask_uvm_report_error__report_enabled_checked_4305 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1707;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4306;
    ::IData/*31:0*/ __Vtask_try_get__Vfuncout_4307;
    __Vtask_try_get__Vfuncout_4307 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_6__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::IData/*31:0*/ __VlefCall_0__status;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk617__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> m_reg_process;
    {
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, m_reg_process);
        if (on) {
            if ((m_reg_process == this->__PVT__m_process)) {
                this->__PVT__m_atomic_cnt = ((::IData)(1U) 
                                             + this->__PVT__m_atomic_cnt);
            } else {
                __VlefLogAnd_1 = (VlNull{} != this->__PVT__m_process);
                if (__VlefLogAnd_1) {
                    VL_NULL_CHECK(this->__PVT__m_process, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2920)->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
                    __VlefLogAnd_1 = (4U == __VlefCall_0__status);
                }
                if (__VlefLogAnd_1) {
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1706);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1706;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4298);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4298;
                    __VlefCall_2__uvm_get_report_object 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                    VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2921)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk617__DOT___local_report_object_);
                    VL_NULL_CHECK(unnamedblk617__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2921)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/REG/ZOMBIE"s, __VlefCall_3__get_report_verbosity_level);
                    __VlefLogAnd_5 = VL_LTES_III(32, 0U, __VlefCall_3__get_report_verbosity_level);
                    if (__VlefLogAnd_5) {
                        VL_NULL_CHECK(unnamedblk617__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2921)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/REG/ZOMBIE"s, __VlefCall_4__get_report_action);
                        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
                    }
                    if (VL_UNLIKELY((__VlefLogAnd_5))) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        __Vtask_uvm_report_error__report_enabled_checked_4305 = 1U;
                        this->__Vtask_uvm_report_error__context_name_4304 = ""s;
                        __Vtask_uvm_report_error__line_4303 = 0x00000b69U;
                        this->__Vtask_uvm_report_error__filename_4302 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_error__verbosity_4301 = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4300
                                      ,"Register %s access permanently locked by killed process",1
                                      , 'S',&(__VlefCall_6__get_full_name));
                        this->__Vtask_uvm_report_error__id_4299 = "UVM/REG/ZOMBIE"s;
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1707);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__Vfuncout_1707;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4306);
                        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__Vfuncout_4306;
                        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4299, this->__Vtask_uvm_report_error__message_4300, __Vtask_uvm_report_error__verbosity_4301, this->__Vtask_uvm_report_error__filename_4302, __Vtask_uvm_report_error__line_4303, this->__Vtask_uvm_report_error__context_name_4304, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4305));
                    }
                }
                co_await VL_NULL_CHECK(this->__PVT__m_atomic, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2923)->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
                this->__PVT__m_process = m_reg_process;
            }
        } else {
            if ((0U != this->__PVT__m_atomic_cnt)) {
                this->__PVT__m_atomic_cnt = (this->__PVT__m_atomic_cnt 
                                             - (::IData)(1U));
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__m_atomic, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2933)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__Vfuncout_4307);
            VL_NULL_CHECK(this->__PVT__m_atomic, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2934)->__VnoInFunc_put(vlSymsp, 1U);
            this->__PVT__m_process = VlNull{};
        }
        __Vlabel0: ;
    }
    co_return;
}

extern const ::VlUnpacked<::std::string, 8> Vtb_top__ConstPool__CONSARRAY_11;

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_6__convert2string;
    ::IData/*31:0*/ __VlefCall_5__get_n_bytes;
    ::std::string __VlefCall_4__get_full_name;
    ::QData/*63:0*/ __VlefCall_3__get_base_addr;
    ::QData/*63:0*/ __VlefCall_2__get;
    ::IData/*31:0*/ __VlefCall_1__get_n_bytes;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk618__DOT__map;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk618__DOT__map__Vnext;
    ::CData/*0:0*/ unnamedblk618__DOT__map__Vmore;
    unnamedblk618__DOT__map__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk618__DOT__unnamedblk619__DOT__parent_map;
    ::IData/*31:0*/ unnamedblk618__DOT__unnamedblk619__DOT__offset;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__this_map;
    ::IData/*31:0*/ unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__unnamedblk621__DOT__e;
    ::IData/*31:0*/ unnamedblk622__DOT__i;
    unnamedblk622__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk622__DOT__i__Vloopsize;
    unnamedblk622__DOT__i__Vloopsize = 0;
    convert2string__Vfuncrtn = ""s;
    ::std::string res_str;
    ::std::string prefix;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_1__get_n_bytes);
    this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_2__get);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"Register %s -- %0d bytes, mirror value:'h%h",3
                  , 'S',&(__VlefCall_0__get_full_name)
                  , '#',32,__VlefCall_1__get_n_bytes
                  , '#',64,__VlefCall_2__get);
    convert2string__Vfuncrtn = ((0U == this->__PVT__m_maps.size())
                                 ? VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s)
                                 : VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s));
    unnamedblk618__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk618__DOT__map__Vnext));
    while (unnamedblk618__DOT__map__Vmore) {
        unnamedblk618__DOT__map = unnamedblk618__DOT__map__Vnext;
        unnamedblk618__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk618__DOT__map__Vnext));
        unnamedblk618__DOT__unnamedblk619__DOT__parent_map 
            = unnamedblk618__DOT__map;
        unnamedblk618__DOT__unnamedblk619__DOT__offset = 0U;
        while ((VlNull{} != unnamedblk618__DOT__unnamedblk619__DOT__parent_map)) {
            unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__this_map 
                = unnamedblk618__DOT__unnamedblk619__DOT__parent_map;
            VL_NULL_CHECK(unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2971)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk618__DOT__unnamedblk619__DOT__parent_map);
            if ((VlNull{} == unnamedblk618__DOT__unnamedblk619__DOT__parent_map)) {
                VL_NULL_CHECK(unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2972)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_3__get_base_addr);
            } else {
                VL_NULL_CHECK(unnamedblk618__DOT__unnamedblk619__DOT__parent_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2973)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__this_map, __VlefCall_3__get_base_addr);
            }
            unnamedblk618__DOT__unnamedblk619__DOT__offset 
                = (::IData)(__VlefCall_3__get_base_addr);
            prefix = VL_CONCATN_NNN(prefix, "  "s);
            VL_NULL_CHECK(unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2976)->__VnoInFunc_get_endian(vlSymsp, 1U, unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__unnamedblk621__DOT__e);
            VL_NULL_CHECK(unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2979)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            VL_NULL_CHECK(unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__this_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2979)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_5__get_n_bytes);
            __Vtemp_1 = ((4U < unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__unnamedblk621__DOT__e)
                          ? ""s : Vtb_top__ConstPool__CONSARRAY_11
                         [(7U & unnamedblk618__DOT__unnamedblk619__DOT__unnamedblk620__DOT__unnamedblk621__DOT__e)]);
            VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s%sMapped in '%s' -- %d bytes, %s, offset 'h%0h\n",6
                          , 'S',&(convert2string__Vfuncrtn)
                          , 'S',&(prefix), 'S',&(__VlefCall_4__get_full_name)
                          , '#',32,__VlefCall_5__get_n_bytes
                          , 'S',&(__Vtemp_1), '#',32,unnamedblk618__DOT__unnamedblk619__DOT__offset);
        }
    }
    prefix = "  "s;
    unnamedblk622__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk622__DOT__i, this->__PVT__m_fields.size())) {
        unnamedblk622__DOT__i__Vloopsize = this->__PVT__m_fields.size();
        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk622__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2987)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_6__convert2string);
        VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s\n%s",2
                      , 'S',&(convert2string__Vfuncrtn)
                      , 'S',&(__VlefCall_6__convert2string));
        if ((unnamedblk622__DOT__i__Vloopsize <= this->__PVT__m_fields.size())) {
            unnamedblk622__DOT__i = ((::IData)(1U) 
                                     + unnamedblk622__DOT__i);
        }
    }
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_2__convert2string;
    ::std::string __VlefCall_1__get_type_name;
    ::std::string __VlefCall_0__get_name;
    ::IData/*31:0*/ unnamedblk623__DOT__i;
    unnamedblk623__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk623__DOT__i__Vloopsize;
    unnamedblk623__DOT__i__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> f;
    f.clear();
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_fields(vlSymsp, f);
    unnamedblk623__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk623__DOT__i, f.size())) {
        unnamedblk623__DOT__i__Vloopsize = f.size();
        VL_NULL_CHECK(f.at(unnamedblk623__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3019)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        VL_NULL_CHECK(f.at(unnamedblk623__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3019)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(f.at(unnamedblk623__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3019)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3019)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__convert2string), 0x2eU);
        if ((unnamedblk623__DOT__i__Vloopsize <= f.size())) {
            unnamedblk623__DOT__i = ((::IData)(1U) 
                                     + unnamedblk623__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1708;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4308;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk624__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1708);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1708;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4308);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4308;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3029)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk624__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk624__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3029)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk624__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3029)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel registers cannot be cloned"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s, 0x00000bd5U, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1709;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4309;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk625__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1709);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1709;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4309);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4309;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3036)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk625__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk625__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3036)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk625__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3036)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel registers cannot be copied"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s, 0x00000bdcU, ""s, 1U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1710;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4310;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4313;
    __Vtask_uvm_report_warning__verbosity_4313 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4315;
    __Vtask_uvm_report_warning__line_4315 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4317;
    __Vtask_uvm_report_warning__report_enabled_checked_4317 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1711;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4318;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk626__DOT___local_report_object_;
    do_compare__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1710);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1710;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4310);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4310;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3044)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk626__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk626__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3044)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk626__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3044)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_4317 = 1U;
        this->__Vtask_uvm_report_warning__context_name_4316 = ""s;
        __Vtask_uvm_report_warning__line_4315 = 0x00000be4U;
        this->__Vtask_uvm_report_warning__filename_4314 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
        __Vtask_uvm_report_warning__verbosity_4313 = 0U;
        this->__Vtask_uvm_report_warning__message_4312 = "RegModel registers cannot be compared"s;
        this->__Vtask_uvm_report_warning__id_4311 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1711);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1711;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4318);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4318;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4311, this->__Vtask_uvm_report_warning__message_4312, __Vtask_uvm_report_warning__verbosity_4313, this->__Vtask_uvm_report_warning__filename_4314, __Vtask_uvm_report_warning__line_4315, this->__Vtask_uvm_report_warning__context_name_4316, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4317));
    }
    do_compare__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1712;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4319;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4322;
    __Vtask_uvm_report_warning__verbosity_4322 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4324;
    __Vtask_uvm_report_warning__line_4324 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4326;
    __Vtask_uvm_report_warning__report_enabled_checked_4326 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1713;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4327;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk627__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1712);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1712;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4319);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4319;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3052)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk627__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk627__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3052)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk627__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3052)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_4326 = 1U;
        this->__Vtask_uvm_report_warning__context_name_4325 = ""s;
        __Vtask_uvm_report_warning__line_4324 = 0x00000becU;
        this->__Vtask_uvm_report_warning__filename_4323 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
        __Vtask_uvm_report_warning__verbosity_4322 = 0U;
        this->__Vtask_uvm_report_warning__message_4321 = "RegModel registers cannot be packed"s;
        this->__Vtask_uvm_report_warning__id_4320 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1713);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1713;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4327);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4327;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4320, this->__Vtask_uvm_report_warning__message_4321, __Vtask_uvm_report_warning__verbosity_4322, this->__Vtask_uvm_report_warning__filename_4323, __Vtask_uvm_report_warning__line_4324, this->__Vtask_uvm_report_warning__context_name_4325, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4326));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1714;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4328;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_4331;
    __Vtask_uvm_report_warning__verbosity_4331 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_4333;
    __Vtask_uvm_report_warning__line_4333 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_4335;
    __Vtask_uvm_report_warning__report_enabled_checked_4335 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1715;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4336;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk628__DOT___local_report_object_;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1714);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1714;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4328);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4328;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3059)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk628__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk628__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3059)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk628__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 3059)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_warning__report_enabled_checked_4335 = 1U;
        this->__Vtask_uvm_report_warning__context_name_4334 = ""s;
        __Vtask_uvm_report_warning__line_4333 = 0x00000bf3U;
        this->__Vtask_uvm_report_warning__filename_4332 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
        __Vtask_uvm_report_warning__verbosity_4331 = 0U;
        this->__Vtask_uvm_report_warning__message_4330 = "RegModel registers cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__id_4329 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1715);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1715;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4336);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4336;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_4329, this->__Vtask_uvm_report_warning__message_4330, __Vtask_uvm_report_warning__verbosity_4331, this->__Vtask_uvm_report_warning__filename_4332, __Vtask_uvm_report_warning__line_4333, this->__Vtask_uvm_report_warning__context_name_4334, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_4335));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
    __PVT__m_n_bits = 0;
    __PVT__m_n_used_bits = 0;
    __PVT__m_maps.atDefault() = 0;
    __PVT__m_has_cover = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_lineno = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_update_in_progress = 0;
    __PVT__m_is_busy = 0;
    __PVT__m_is_locked_by_field = 0;
    __PVT__m_atomic_cnt = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_reg::~Vtb_top_uvm_pkg__03a__03auvm_reg() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_locked:" + VL_TO_STRING(__PVT__m_locked);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_regfile_parent:" + VL_TO_STRING(__PVT__m_regfile_parent);
    out += ", m_n_bits:" + VL_TO_STRING(__PVT__m_n_bits);
    out += ", m_n_used_bits:" + VL_TO_STRING(__PVT__m_n_used_bits);
    out += ", m_maps:" + VL_TO_STRING(__PVT__m_maps);
    out += ", m_fields:" + VL_TO_STRING(__PVT__m_fields);
    out += ", m_has_cover:" + VL_TO_STRING(__PVT__m_has_cover);
    out += ", m_cover_on:" + VL_TO_STRING(__PVT__m_cover_on);
    out += ", m_atomic:" + VL_TO_STRING(__PVT__m_atomic);
    out += ", m_process:" + VL_TO_STRING(__PVT__m_process);
    out += ", m_fname:" + VL_TO_STRING(__PVT__m_fname);
    out += ", m_lineno:" + VL_TO_STRING(__PVT__m_lineno);
    out += ", m_read_in_progress:" + VL_TO_STRING(__PVT__m_read_in_progress);
    out += ", m_write_in_progress:" + VL_TO_STRING(__PVT__m_write_in_progress);
    out += ", m_update_in_progress:" + VL_TO_STRING(__PVT__m_update_in_progress);
    out += ", m_is_busy:" + VL_TO_STRING(__PVT__m_is_busy);
    out += ", m_is_locked_by_field:" + VL_TO_STRING(__PVT__m_is_locked_by_field);
    out += ", m_atomic_cnt:" + VL_TO_STRING(__PVT__m_atomic_cnt);
    out += ", m_backdoor:" + VL_TO_STRING(__PVT__m_backdoor);
    out += ", m_hdl_paths_pool:" + VL_TO_STRING(__PVT__m_hdl_paths_pool);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
