// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_err_service> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_reg_err_service__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_err_service> __Vfunc_create__Vfuncout_1624;
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__inst)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif349667b__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "uvm_inst"s, VlNull{}, ""s, __Vfunc_create__Vfuncout_1624);
        this->__Vnontrivs.__PVT__inst = __Vfunc_create__Vfuncout_1624;
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif349667b> __Vfunc_get__Vfuncout_1619;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pif349667b__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1619);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1619;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_err_service> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_err_service, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_err_service, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_err_service"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_do_check_error(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> this_reg, ::QData/*63:0*/ expected, ::QData/*63:0*/ actual, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ valid_bits_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_do_check_error\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1620;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4020;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_4023;
    __Vtask_uvm_report_error__verbosity_4023 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_4025;
    __Vtask_uvm_report_error__line_4025 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_4027;
    __Vtask_uvm_report_error__report_enabled_checked_4027 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1621;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4028;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1622;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4029;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_4032;
    __Vtask_uvm_report_info__verbosity_4032 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_4034;
    __Vtask_uvm_report_info__line_4034 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_4036;
    __Vtask_uvm_report_info__report_enabled_checked_4036 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1623;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_4037;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_19__get_n_bits;
    ::IData/*31:0*/ __VlefCall_18__get_n_bits;
    ::IData/*31:0*/ __VlefCall_17__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_16__get_n_bits;
    ::IData/*31:0*/ __VlefCall_15__get_lsb_pos;
    ::std::string __VlefCall_14__get_full_name;
    ::std::string __VlefCall_13__get_name;
    ::CData/*0:0*/ __VlefLogAnd_12;
    ::IData/*31:0*/ __VlefCall_11__get_report_action;
    ::IData/*31:0*/ __VlefCall_10__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_9__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_8__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_7__get_lsb_pos;
    ::IData/*31:0*/ __VlefCall_6__get_n_bits;
    ::IData/*31:0*/ __VlefCall_5__get_compare;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk612__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk613__DOT__i;
    unnamedblk613__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk613__DOT__i__Vloopsize;
    unnamedblk613__DOT__i__Vloopsize = 0;
    ::std::string unnamedblk613__DOT__unnamedblk614__DOT__acc;
    ::QData/*63:0*/ unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__mask;
    ::QData/*63:0*/ unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__val;
    ::QData/*63:0*/ unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__exp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__unnamedblk616__DOT___local_report_object_;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> fields;
    fields.clear();
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1620);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1620;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4020);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_4020;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2811)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk612__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk612__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2811)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk612__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2811)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "RegModel"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        VL_NULL_CHECK(this_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2811)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        __Vtask_uvm_report_error__report_enabled_checked_4027 = 1U;
        this->__Vtask_uvm_report_error__context_name_4026 = ""s;
        __Vtask_uvm_report_error__line_4025 = 0x00000afbU;
        this->__Vtask_uvm_report_error__filename_4024 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
        __Vtask_uvm_report_error__verbosity_4023 = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_4022
                      ,"Register \"%s\" value read from DUT (0x%h) does not match mirrored value (0x%h) (valid bit mask = 0x%h)",4
                      , 'S',&(__VlefCall_4__get_full_name)
                      , '#',64,actual, '#',64,expected
                      , '#',64,valid_bits_mask);
        this->__Vtask_uvm_report_error__id_4021 = "RegModel"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1621);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1621;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4028);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__Vfuncout_4028;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_4021, this->__Vtask_uvm_report_error__message_4022, __Vtask_uvm_report_error__verbosity_4023, this->__Vtask_uvm_report_error__filename_4024, __Vtask_uvm_report_error__line_4025, this->__Vtask_uvm_report_error__context_name_4026, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_4027));
    }
    VL_NULL_CHECK(this_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2813)->__VnoInFunc_get_fields(vlSymsp, fields);
    unnamedblk613__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk613__DOT__i, fields.size())) {
        unnamedblk613__DOT__i__Vloopsize = fields.size();
        VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2815)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, unnamedblk613__DOT__unnamedblk614__DOT__acc);
        unnamedblk613__DOT__unnamedblk614__DOT__acc 
            = VL_SUBSTR_N(unnamedblk613__DOT__unnamedblk614__DOT__acc,0U,1U);
        VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2817)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_5__get_compare);
        if ((1U & (~ ((0U == __VlefCall_5__get_compare) 
                      || ("WO"s == unnamedblk613__DOT__unnamedblk614__DOT__acc))))) {
            VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2819)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_6__get_n_bits);
            unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__mask 
                = (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_6__get_n_bits) 
                   - 1ULL);
            VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2820)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_7__get_lsb_pos);
            unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__val 
                = (VL_SHIFTR_QQI(64,64,32, actual, __VlefCall_7__get_lsb_pos) 
                   & unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__mask);
            VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2821)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_8__get_lsb_pos);
            unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__exp 
                = (VL_SHIFTR_QQI(64,64,32, expected, __VlefCall_8__get_lsb_pos) 
                   & unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__mask);
            if ((unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__val 
                 != unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__exp)) {
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1622);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1622;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4029);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_4029;
                __VlefCall_9__uvm_get_report_object 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
                VL_NULL_CHECK(__VlefCall_9__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__unnamedblk616__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__unnamedblk616__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_10__get_report_verbosity_level);
                __VlefLogAnd_12 = VL_LTES_III(32, 0U, __VlefCall_10__get_report_verbosity_level);
                if (__VlefLogAnd_12) {
                    VL_NULL_CHECK(unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__unnamedblk616__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "RegModel"s, __VlefCall_11__get_report_action);
                    __VlefLogAnd_12 = (0U != __VlefCall_11__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_12))) {
                    VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_get_name(vlSymsp, __VlefCall_13__get_name);
                    VL_NULL_CHECK(this_reg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_15__get_lsb_pos);
                    VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_16__get_n_bits);
                    VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_17__get_lsb_pos);
                    VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_18__get_n_bits);
                    VL_NULL_CHECK(fields.at(unnamedblk613__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh", 2832)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_19__get_n_bits);
                    __Vtask_uvm_report_info__report_enabled_checked_4036 = 1U;
                    this->__Vtask_uvm_report_info__context_name_4035 = ""s;
                    __Vtask_uvm_report_info__line_4034 = 0x00000b10U;
                    this->__Vtask_uvm_report_info__filename_4033 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_info__verbosity_4032 = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__message_4031
                                  ,"Field %s (%s[%0d:%0d]) mismatch read=%0d'h%0h mirrored=%0d'h%0h ",8
                                  , 'S',&(__VlefCall_13__get_name)
                                  , 'S',&(__VlefCall_14__get_full_name)
                                  , '#',32,((__VlefCall_15__get_lsb_pos 
                                             + __VlefCall_16__get_n_bits) 
                                            - (::IData)(1U))
                                  , '#',32,__VlefCall_17__get_lsb_pos
                                  , '#',32,__VlefCall_18__get_n_bits
                                  , '#',64,unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__val
                                  , '#',32,__VlefCall_19__get_n_bits
                                  , '#',64,unnamedblk613__DOT__unnamedblk614__DOT__unnamedblk615__DOT__exp);
                    this->__Vtask_uvm_report_info__id_4030 = "RegModel"s;
                    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1623);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__Vfuncout_1623;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_4037);
                    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__Vfuncout_4037;
                    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_4030, this->__Vtask_uvm_report_info__message_4031, __Vtask_uvm_report_info__verbosity_4032, this->__Vtask_uvm_report_info__filename_4033, __Vtask_uvm_report_info__line_4034, this->__Vtask_uvm_report_info__context_name_4035, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_4036));
                }
            }
        }
        if ((unnamedblk613__DOT__i__Vloopsize <= fields.size())) {
            unnamedblk613__DOT__i = ((::IData)(1U) 
                                     + unnamedblk613__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::~Vtb_top_uvm_pkg__03a__03auvm_reg_err_service() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_err_service::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
