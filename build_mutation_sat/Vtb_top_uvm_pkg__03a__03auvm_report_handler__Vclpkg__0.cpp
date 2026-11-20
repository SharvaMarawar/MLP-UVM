// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_format_action(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ action, ::std::string &format_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_format_action\n"); );
    // Body
    ::std::string s;
    if ((0U == action)) {
        s = "NO ACTION"s;
    } else {
        s = ""s;
        if ((0U != (1U & action))) {
            s = VL_CONCATN_NNN(s, "DISPLAY "s);
        }
        if ((0U != (2U & action))) {
            s = VL_CONCATN_NNN(s, "LOG "s);
        }
        if ((0U != (0x00000040U & action))) {
            s = VL_CONCATN_NNN(s, "RM_RECORD "s);
        }
        if ((0U != (4U & action))) {
            s = VL_CONCATN_NNN(s, "COUNT "s);
        }
        if ((0U != (0x00000010U & action))) {
            s = VL_CONCATN_NNN(s, "CALL_HOOK "s);
        }
        if ((0U != (8U & action))) {
            s = VL_CONCATN_NNN(s, "EXIT "s);
        }
        if ((0U != (0x00000020U & action))) {
            s = VL_CONCATN_NNN(s, "STOP "s);
        }
    }
    format_action__Vfuncrtn = s;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pibac5cd21> __Vfunc_get__Vfuncout_1108;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pibac5cd21__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1108);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1108;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, "uvm_report_handler"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_handler"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    {
        // Inlined CFunc: __VnoInFunc_initialize
        this->__VnoInFunc_set_default_file(vlSymsp, 0U);
        this->__PVT__m_max_verbosity_level = 0x000000c8U;
        this->__PVT__id_actions = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92, vlProcess, vlSymsp, ""s);
        this->__PVT__id_verbosities = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92, vlProcess, vlSymsp, ""s);
        this->__PVT__id_file_handles = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92, vlProcess, vlSymsp, ""s);
        this->__PVT__sev_overrides = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3, vlProcess, vlSymsp, ""s);
        this->__VnoInFunc_set_severity_action(vlSymsp, 0U, 1U);
        this->__VnoInFunc_set_severity_action(vlSymsp, 1U, 1U);
        this->__VnoInFunc_set_severity_action(vlSymsp, 2U, 5U);
        this->__VnoInFunc_set_severity_action(vlSymsp, 3U, 9U);
        this->__VnoInFunc_set_severity_file(vlSymsp, 0U, this->__PVT__default_file_handle);
        this->__VnoInFunc_set_severity_file(vlSymsp, 1U, this->__PVT__default_file_handle);
        this->__VnoInFunc_set_severity_file(vlSymsp, 2U, this->__PVT__default_file_handle);
        this->__VnoInFunc_set_severity_file(vlSymsp, 3U, this->__PVT__default_file_handle);
    }
}

extern const ::VlAssocArray<::IData/*31:0*/, ::CData/*0:0*/> Vtb_top__ConstPool__CONSASSOC_3;
extern const ::VlAssocArray<::IData/*31:0*/, ::std::string> Vtb_top__ConstPool__CONSASSOC_2;
extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_4;

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_do_print\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_first__Vfuncout_1986;
    __Vtask_first__Vfuncout_1986 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_1987;
    __Vtask_next__Vfuncout_1987 = 0;
    ::IData/*31:0*/ __Vtask_first__Vfuncout_1988;
    __Vtask_first__Vfuncout_1988 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_1989;
    __Vtask_next__Vfuncout_1989 = 0;
    ::IData/*31:0*/ __Vtask_first__Vfuncout_1990;
    __Vtask_first__Vfuncout_1990 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_1991;
    __Vtask_next__Vfuncout_1991 = 0;
    ::IData/*31:0*/ __Vtask_first__Vfuncout_1992;
    __Vtask_first__Vfuncout_1992 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_1993;
    __Vtask_next__Vfuncout_1993 = 0;
    ::IData/*31:0*/ __Vtask_first__Vfuncout_1994;
    __Vtask_first__Vfuncout_1994 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_1995;
    __Vtask_next__Vfuncout_1995 = 0;
    ::IData/*31:0*/ __Vtask_first__Vfuncout_1996;
    __Vtask_first__Vfuncout_1996 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_1997;
    __Vtask_next__Vfuncout_1997 = 0;
    ::IData/*31:0*/ __Vtask_first__Vfuncout_1998;
    __Vtask_first__Vfuncout_1998 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_1999;
    __Vtask_next__Vfuncout_1999 = 0;
    ::IData/*31:0*/ __Vtask_first__Vfuncout_2000;
    __Vtask_first__Vfuncout_2000 = 0;
    ::IData/*31:0*/ __Vtask_next__Vfuncout_2001;
    __Vtask_next__Vfuncout_2001 = 0;
    ::VlWide<128>/*4095:0*/ __Vtemp_1;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    ::std::string __Vtemp_4;
    ::std::string __Vtemp_5;
    ::std::string __Vtemp_6;
    ::std::string __Vtemp_7;
    ::VlWide<128>/*4095:0*/ __Vtemp_8;
    ::VlWide<128>/*4095:0*/ __Vtemp_9;
    ::std::string __Vtemp_10;
    ::VlWide<128>/*4095:0*/ __Vtemp_11;
    ::std::string __Vtemp_12;
    ::VlWide<128>/*4095:0*/ __Vtemp_13;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefExpr_44;
    ::IData/*31:0*/ __VlefCall_43__next;
    ::IData/*31:0*/ __VlefCall_42__get;
    ::IData/*31:0*/ __VlefCall_41__first;
    ::CData/*0:0*/ __VlefExpr_40;
    ::IData/*31:0*/ __VlefCall_39__num;
    ::CData/*0:0*/ __VlefExpr_38;
    ::CData/*0:0*/ __VlefExpr_37;
    ::IData/*31:0*/ __VlefCall_36__next;
    ::IData/*31:0*/ __VlefCall_35__get;
    ::IData/*31:0*/ __VlefCall_34__num;
    ::IData/*31:0*/ __VlefCall_33__first;
    ::CData/*0:0*/ __VlefExpr_32;
    ::IData/*31:0*/ __VlefCall_31__next;
    ::IData/*31:0*/ __VlefCall_30__first;
    ::CData/*0:0*/ __VlefExpr_29;
    ::IData/*31:0*/ __VlefCall_28__num;
    ::IData/*31:0*/ __VlefCall_27__next;
    ::IData/*31:0*/ __VlefCall_26__num;
    ::IData/*31:0*/ __VlefCall_25__first;
    ::CData/*0:0*/ __VlefExpr_24;
    ::IData/*31:0*/ __VlefCall_23__next;
    ::std::string __VlefCall_22__format_action;
    ::IData/*31:0*/ __VlefCall_21__get;
    ::IData/*31:0*/ __VlefCall_20__first;
    ::CData/*0:0*/ __VlefExpr_19;
    ::IData/*31:0*/ __VlefCall_18__num;
    ::CData/*0:0*/ __VlefExpr_17;
    ::std::string __VlefCall_16__format_action;
    ::CData/*0:0*/ __VlefExpr_15;
    ::IData/*31:0*/ __VlefCall_14__next;
    ::std::string __VlefCall_13__format_action;
    ::IData/*31:0*/ __VlefCall_12__num;
    ::IData/*31:0*/ __VlefCall_11__first;
    ::CData/*0:0*/ __VlefExpr_10;
    ::IData/*31:0*/ __VlefCall_9__next;
    ::IData/*31:0*/ __VlefCond_8;
    ::IData/*31:0*/ __VlefCall_7__first;
    ::CData/*0:0*/ __VlefExpr_6;
    ::IData/*31:0*/ __VlefCall_5__num;
    ::IData/*31:0*/ __VlefCall_4__next;
    ::IData/*31:0*/ __VlefCond_3;
    ::IData/*31:0*/ __VlefCall_2__num;
    ::IData/*31:0*/ __VlefCall_1__first;
    ::IData/*31:0*/ __VlefCond_0;
    ::std::string unnamedblk1__DOT__l_str;
    ::IData/*31:0*/ unnamedblk2__DOT___total_cnt;
    ::CData/*1:0*/ unnamedblk2__DOT__unnamedblk3__DOT__l_severity;
    unnamedblk2__DOT__unnamedblk3__DOT__l_severity = 0;
    ::CData/*1:0*/ unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vnext;
    unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vnext = 0;
    ::CData/*0:0*/ unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vmore;
    unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary;
    ::std::string unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str;
    ::IData/*31:0*/ unnamedblk6__DOT___total_cnt;
    ::CData/*1:0*/ unnamedblk6__DOT__unnamedblk7__DOT__l_severity;
    unnamedblk6__DOT__unnamedblk7__DOT__l_severity = 0;
    ::CData/*1:0*/ unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vnext;
    unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vnext = 0;
    ::CData/*0:0*/ unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vmore;
    unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary;
    ::CData/*1:0*/ unnamedblk9__DOT__l_severity_new;
    ::IData/*31:0*/ unnamedblk10__DOT___total_cnt;
    ::std::string unnamedblk10__DOT__unnamedblk11__DOT__idx;
    ::std::string unnamedblk10__DOT__unnamedblk11__DOT__idx__Vnext;
    ::CData/*0:0*/ unnamedblk10__DOT__unnamedblk11__DOT__idx__Vmore;
    unnamedblk10__DOT__unnamedblk11__DOT__idx__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3> unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary;
    ::CData/*1:0*/ unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev;
    ::IData/*31:0*/ unnamedblk14__DOT___total_cnt;
    ::CData/*1:0*/ unnamedblk14__DOT__unnamedblk15__DOT__l_severity;
    unnamedblk14__DOT__unnamedblk15__DOT__l_severity = 0;
    ::CData/*1:0*/ unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vnext;
    unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vnext = 0;
    ::CData/*0:0*/ unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vmore;
    unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary;
    ::IData/*31:0*/ l_verbosity;
    ::CData/*1:0*/ l_severity;
    ::std::string idx;
    ::IData/*31:0*/ l_int;
    l_verbosity = 0U;
    l_severity = 0U;
    idx = ""s;
    l_int = 0U;
    if (Vtb_top__ConstPool__CONSASSOC_3.at(this->__PVT__m_max_verbosity_level)) {
        l_verbosity = this->__PVT__m_max_verbosity_level;
        __VlefCond_0 = 1U;
    } else {
        __VlefCond_0 = 0U;
    }
    if ((0U != __VlefCond_0)) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 144)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "max_verbosity_level"s, "uvm_verbosity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_top__ConstPool__CONSASSOC_2
                                                                                .at(l_verbosity)), 0x2eU);
    } else {
        VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__m_max_verbosity_level);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 150)->__VnoInFunc_print_field(vlProcess, vlSymsp, "max_verbosity_level"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    }
    VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 156)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__Vfuncout_1986);
    __VlefCall_1__first = __Vtask_first__Vfuncout_1986;
    if ((0U != __VlefCall_1__first)) {
        VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 157)->__VnoInFunc_num(vlSymsp, __VlefCall_2__num);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 157)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_verbosities"s, __VlefCall_2__num, "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 160)->__VnoInFunc_get(vlSymsp, idx, l_int);
            if (Vtb_top__ConstPool__CONSASSOC_3.at(l_int)) {
                l_verbosity = l_int;
                __VlefCond_3 = 1U;
            } else {
                __VlefCond_3 = 0U;
            }
            if ((0U != __VlefCond_3)) {
                VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 163)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(idx)) , "uvm_verbosity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_top__ConstPool__CONSASSOC_2
                                                                                .at(l_verbosity)), 0x2eU);
            } else {
                unnamedblk1__DOT__l_str = ""s;
                VL_SFORMAT_NX(unnamedblk1__DOT__l_str
                              ,"%0d",1, '~',32,l_int);
                VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 170)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(idx)) , "int"s, 0x00000020U, unnamedblk1__DOT__l_str, 0x2eU);
            }
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 173)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__Vfuncout_1987);
            __VlefCall_4__next = __Vtask_next__Vfuncout_1987;
        } while ((0U != __VlefCall_4__next));
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 174)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_id_verbosities.size())) {
        unnamedblk2__DOT___total_cnt = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vmore 
            = (0U != this->__PVT__severity_id_verbosities.first(unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vnext));
        while (unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vmore) {
            unnamedblk2__DOT__unnamedblk3__DOT__l_severity 
                = unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vnext;
            unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vmore 
                = (0U != this->__PVT__severity_id_verbosities.next(unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vnext));
            VL_NULL_CHECK(this->__PVT__severity_id_verbosities
                          .at(unnamedblk2__DOT__unnamedblk3__DOT__l_severity), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 182)->__VnoInFunc_num(vlSymsp, __VlefCall_5__num);
            unnamedblk2__DOT___total_cnt = (unnamedblk2__DOT___total_cnt 
                                            + __VlefCall_5__num);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 185)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_id_verbosities"s, unnamedblk2__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_6 = (0U != this->__PVT__severity_id_verbosities.first(l_severity));
        if (__VlefExpr_6) {
            do {
                unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary 
                    = this->__PVT__severity_id_verbosities
                    .at(l_severity);
                VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 190)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__Vfuncout_1988);
                __VlefCall_7__first = __Vtask_first__Vfuncout_1988;
                if ((0U != __VlefCall_7__first)) {
                    do {
                        VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 193)->__VnoInFunc_get(vlSymsp, idx, l_int);
                        if (Vtb_top__ConstPool__CONSASSOC_3
                            .at(l_int)) {
                            l_verbosity = l_int;
                            __VlefCond_8 = 1U;
                        } else {
                            __VlefCond_8 = 0U;
                        }
                        if ((0U != __VlefCond_8)) {
                            __Vtemp_2 = Vtb_top__ConstPool__CONSARRAY_4
                                [l_severity];
                            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 196)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(idx)) , "uvm_verbosity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_top__ConstPool__CONSASSOC_2
                                                                                .at(l_verbosity)), 0x2eU);
                        } else {
                            unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str = ""s;
                            VL_SFORMAT_NX(unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str
                                          ,"%0d",1, '~',32,l_int);
                            __Vtemp_3 = Vtb_top__ConstPool__CONSARRAY_4
                                [l_severity];
                            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 203)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(idx)) , "int"s, 0x00000020U, unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str, 0x2eU);
                        }
                        VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 206)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__Vfuncout_1989);
                        __VlefCall_9__next = __Vtask_next__Vfuncout_1989;
                    } while ((0U != __VlefCall_9__next));
                }
                __VlefExpr_10 = (0U != this->__PVT__severity_id_verbosities.next(l_severity));
            } while (__VlefExpr_10);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 211)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    VL_NULL_CHECK(this->__PVT__id_actions, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 215)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__Vfuncout_1990);
    __VlefCall_11__first = __Vtask_first__Vfuncout_1990;
    if ((0U != __VlefCall_11__first)) {
        VL_NULL_CHECK(this->__PVT__id_actions, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 216)->__VnoInFunc_num(vlSymsp, __VlefCall_12__num);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 216)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_actions"s, __VlefCall_12__num, "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 219)->__VnoInFunc_get(vlSymsp, idx, l_int);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, l_int, __VlefCall_13__format_action);
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 220)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(idx)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_13__format_action), 0x2eU);
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 222)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__Vfuncout_1991);
            __VlefCall_14__next = __Vtask_next__Vfuncout_1991;
        } while ((0U != __VlefCall_14__next));
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 223)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    __VlefExpr_15 = (0U != this->__PVT__severity_actions.first(l_severity));
    if (__VlefExpr_15) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 228)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_actions"s, 4U, "array"s, 0x2eU);
        do {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, this->__PVT__severity_actions
                                                                                .at((::IData)(l_severity)), __VlefCall_16__format_action);
            __Vtemp_4 = Vtb_top__ConstPool__CONSARRAY_4
                [l_severity];
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 230)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(__Vtemp_4)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_16__format_action), 0x2eU);
            __VlefExpr_17 = (0U != this->__PVT__severity_actions.next(l_severity));
        } while (__VlefExpr_17);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 233)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_id_actions.size())) {
        unnamedblk6__DOT___total_cnt = 0U;
        unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vmore 
            = (0U != this->__PVT__severity_id_actions.first(unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vnext));
        while (unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vmore) {
            unnamedblk6__DOT__unnamedblk7__DOT__l_severity 
                = unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vnext;
            unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vmore 
                = (0U != this->__PVT__severity_id_actions.next(unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vnext));
            VL_NULL_CHECK(this->__PVT__severity_id_actions
                          .at(unnamedblk6__DOT__unnamedblk7__DOT__l_severity), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 241)->__VnoInFunc_num(vlSymsp, __VlefCall_18__num);
            unnamedblk6__DOT___total_cnt = (unnamedblk6__DOT___total_cnt 
                                            + __VlefCall_18__num);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 244)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_id_actions"s, unnamedblk6__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_19 = (0U != this->__PVT__severity_id_actions.first(l_severity));
        if (__VlefExpr_19) {
            do {
                unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary 
                    = this->__PVT__severity_id_actions
                    .at(l_severity);
                VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 249)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__Vfuncout_1992);
                __VlefCall_20__first = __Vtask_first__Vfuncout_1992;
                if ((0U != __VlefCall_20__first)) {
                    do {
                        VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 253)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_21__get);
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, __VlefCall_21__get, __VlefCall_22__format_action);
                        __Vtemp_5 = Vtb_top__ConstPool__CONSARRAY_4
                            [l_severity];
                        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 252)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_5)
                                                                                , 'S',&(idx)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_22__format_action), 0x2eU);
                        VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 254)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__Vfuncout_1993);
                        __VlefCall_23__next = __Vtask_next__Vfuncout_1993;
                    } while ((0U != __VlefCall_23__next));
                }
                __VlefExpr_24 = (0U != this->__PVT__severity_id_actions.next(l_severity));
            } while (__VlefExpr_24);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 259)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 263)->__VnoInFunc_first(vlSymsp, l_severity, __Vtask_first__Vfuncout_1994);
    __VlefCall_25__first = __Vtask_first__Vfuncout_1994;
    if ((0U != __VlefCall_25__first)) {
        VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 264)->__VnoInFunc_num(vlSymsp, __VlefCall_26__num);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 264)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "sev_overrides"s, __VlefCall_26__num, "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 267)->__VnoInFunc_get(vlSymsp, l_severity, unnamedblk9__DOT__l_severity_new);
            __Vtemp_6 = Vtb_top__ConstPool__CONSARRAY_4
                [l_severity];
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 268)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(__Vtemp_6)) , "uvm_severity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_top__ConstPool__CONSARRAY_4
                                                                                [unnamedblk9__DOT__l_severity_new]), 0x2eU);
            VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 270)->__VnoInFunc_next(vlSymsp, l_severity, __Vtask_next__Vfuncout_1995);
            __VlefCall_27__next = __Vtask_next__Vfuncout_1995;
        } while ((0U != __VlefCall_27__next));
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 271)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__sev_id_overrides.size())) {
        unnamedblk10__DOT___total_cnt = 0U;
        unnamedblk10__DOT__unnamedblk11__DOT__idx__Vmore 
            = (0U != this->__PVT__sev_id_overrides.first(unnamedblk10__DOT__unnamedblk11__DOT__idx__Vnext));
        while (unnamedblk10__DOT__unnamedblk11__DOT__idx__Vmore) {
            unnamedblk10__DOT__unnamedblk11__DOT__idx 
                = unnamedblk10__DOT__unnamedblk11__DOT__idx__Vnext;
            unnamedblk10__DOT__unnamedblk11__DOT__idx__Vmore 
                = (0U != this->__PVT__sev_id_overrides.next(unnamedblk10__DOT__unnamedblk11__DOT__idx__Vnext));
            VL_NULL_CHECK(this->__PVT__sev_id_overrides
                          .at(unnamedblk10__DOT__unnamedblk11__DOT__idx), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 279)->__VnoInFunc_num(vlSymsp, __VlefCall_28__num);
            unnamedblk10__DOT___total_cnt = (unnamedblk10__DOT___total_cnt 
                                             + __VlefCall_28__num);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 282)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "sev_id_overrides"s, unnamedblk10__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_29 = (0U != this->__PVT__sev_id_overrides.first(idx));
        if (__VlefExpr_29) {
            do {
                unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary 
                    = this->__PVT__sev_id_overrides
                    .at(idx);
                VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 287)->__VnoInFunc_first(vlSymsp, l_severity, __Vtask_first__Vfuncout_1996);
                __VlefCall_30__first = __Vtask_first__Vfuncout_1996;
                if ((0U != __VlefCall_30__first)) {
                    do {
                        VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 290)->__VnoInFunc_get(vlSymsp, l_severity, unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev);
                        __Vtemp_7 = Vtb_top__ConstPool__CONSARRAY_4
                            [l_severity];
                        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 291)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_7)
                                                                                , 'S',&(idx)) , "uvm_severity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_top__ConstPool__CONSARRAY_4
                                                                                [unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev]), 0x2eU);
                        VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 293)->__VnoInFunc_next(vlSymsp, l_severity, __Vtask_next__Vfuncout_1997);
                        __VlefCall_31__next = __Vtask_next__Vfuncout_1997;
                    } while ((0U != __VlefCall_31__next));
                }
                __VlefExpr_32 = (0U != this->__PVT__sev_id_overrides.next(idx));
            } while (__VlefExpr_32);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 298)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    VL_EXTENDS_WI(4096,32, __Vtemp_8, this->__PVT__default_file_handle);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 302)->__VnoInFunc_print_field(vlProcess, vlSymsp, "default_file_handle"s, __Vtemp_8, 0x00000020U, 0x07000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 306)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__Vfuncout_1998);
    __VlefCall_33__first = __Vtask_first__Vfuncout_1998;
    if ((0U != __VlefCall_33__first)) {
        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 307)->__VnoInFunc_num(vlSymsp, __VlefCall_34__num);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 307)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_file_handles"s, __VlefCall_34__num, "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 310)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_35__get);
            VL_EXTENDS_WI(4096,32, __Vtemp_9, __VlefCall_35__get);
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 310)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(idx)) , __Vtemp_9, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 312)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__Vfuncout_1999);
            __VlefCall_36__next = __Vtask_next__Vfuncout_1999;
        } while ((0U != __VlefCall_36__next));
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 313)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    __VlefExpr_37 = (0U != this->__PVT__severity_file_handles.first(l_severity));
    if (__VlefExpr_37) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 318)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_file_handles"s, 4U, "array"s, 0x2eU);
        do {
            __Vtemp_10 = Vtb_top__ConstPool__CONSARRAY_4
                [l_severity];
            VL_EXTENDS_WI(4096,32, __Vtemp_11, this->__PVT__severity_file_handles
                          .at((::IData)(l_severity)));
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 320)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(__Vtemp_10)) , __Vtemp_11, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
            __VlefExpr_38 = (0U != this->__PVT__severity_file_handles.next(l_severity));
        } while (__VlefExpr_38);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 323)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_id_file_handles.size())) {
        unnamedblk14__DOT___total_cnt = 0U;
        unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vmore 
            = (0U != this->__PVT__severity_id_file_handles.first(unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vnext));
        while (unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vmore) {
            unnamedblk14__DOT__unnamedblk15__DOT__l_severity 
                = unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vnext;
            unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vmore 
                = (0U != this->__PVT__severity_id_file_handles.next(unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vnext));
            VL_NULL_CHECK(this->__PVT__severity_id_file_handles
                          .at(unnamedblk14__DOT__unnamedblk15__DOT__l_severity), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 331)->__VnoInFunc_num(vlSymsp, __VlefCall_39__num);
            unnamedblk14__DOT___total_cnt = (unnamedblk14__DOT___total_cnt 
                                             + __VlefCall_39__num);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 334)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_id_file_handles"s, unnamedblk14__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_40 = (0U != this->__PVT__severity_id_file_handles.first(l_severity));
        if (__VlefExpr_40) {
            do {
                unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary 
                    = this->__PVT__severity_id_file_handles
                    .at(l_severity);
                VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 339)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__Vfuncout_2000);
                __VlefCall_41__first = __Vtask_first__Vfuncout_2000;
                if ((0U != __VlefCall_41__first)) {
                    do {
                        VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 343)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_42__get);
                        __Vtemp_12 = Vtb_top__ConstPool__CONSARRAY_4
                            [l_severity];
                        VL_EXTENDS_WI(4096,32, __Vtemp_13, __VlefCall_42__get);
                        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 342)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_12)
                                                                                , 'S',&(idx)) , __Vtemp_13, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
                        VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 344)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__Vfuncout_2001);
                        __VlefCall_43__next = __Vtask_next__Vfuncout_2001;
                    } while ((0U != __VlefCall_43__next));
                }
                __VlefExpr_44 = (0U != this->__PVT__severity_id_file_handles.next(l_severity));
            } while (__VlefExpr_44);
        }
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 349)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_3__get_action;
    ::IData/*31:0*/ __VlefCall_2__get_file_handle;
    ::IData/*31:0*/ __VlefCall_1__exists;
    ::IData/*31:0*/ __VlefCall_0__exists;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    ::std::string id;
    ::CData/*1:0*/ severity;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 368)->__VnoInFunc_get_id(vlSymsp, id);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 369)->__VnoInFunc_get_severity(vlSymsp, severity);
    if ((0U != this->__PVT__sev_id_overrides.exists(id))) {
        VL_NULL_CHECK(this->__PVT__sev_id_overrides
                      .at(id), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 374)->__VnoInFunc_exists(vlSymsp, severity, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            VL_NULL_CHECK(this->__PVT__sev_id_overrides
                          .at(id), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 375)->__VnoInFunc_get(vlSymsp, severity, severity);
            VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 376)->__VnoInFunc_set_severity(vlSymsp, severity);
        }
    } else {
        VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 380)->__VnoInFunc_exists(vlSymsp, severity, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 381)->__VnoInFunc_get(vlSymsp, severity, severity);
            VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 382)->__VnoInFunc_set_severity(vlSymsp, severity);
        }
    }
    this->__VnoInFunc_get_file_handle(vlSymsp, severity, id, __VlefCall_2__get_file_handle);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 385)->__VnoInFunc_set_file(vlSymsp, __VlefCall_2__get_file_handle);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 386)->__VnoInFunc_set_report_handler(vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_handler>{this});
    this->__VnoInFunc_get_action(vlSymsp, severity, id, __VlefCall_3__get_action);
    VL_NULL_CHECK(report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 387)->__VnoInFunc_set_action(vlSymsp, __VlefCall_3__get_action);
    VL_NULL_CHECK(srvr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 388)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set_default_file(vlSymsp, 0U);
    this->__PVT__m_max_verbosity_level = 0x000000c8U;
    this->__PVT__id_actions = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92, vlProcess, vlSymsp, ""s);
    this->__PVT__id_verbosities = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92, vlProcess, vlSymsp, ""s);
    this->__PVT__id_file_handles = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92, vlProcess, vlSymsp, ""s);
    this->__PVT__sev_overrides = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3, vlProcess, vlSymsp, ""s);
    this->__VnoInFunc_set_severity_action(vlSymsp, 0U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 1U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 2U, 5U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 3U, 9U);
    this->__VnoInFunc_set_severity_file(vlSymsp, 0U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 1U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 2U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 3U, this->__PVT__default_file_handle);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_severity_id_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_1__exists;
    ::IData/*31:0*/ __VlefCall_0__exists;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> array;
    {
        get_severity_id_file__Vfuncrtn = 0U;
        if ((0U != this->__PVT__severity_id_file_handles.exists(severity))) {
            array = this->__PVT__severity_id_file_handles
                .at(severity);
            VL_NULL_CHECK(array, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 481)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 483)->__VnoInFunc_get(vlSymsp, id, get_severity_id_file__Vfuncrtn);
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 489)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 491)->__VnoInFunc_get(vlSymsp, id, get_severity_id_file__Vfuncrtn);
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__severity_file_handles.exists(severity))) {
            get_severity_id_file__Vfuncrtn = this->__PVT__severity_file_handles
                .at((::IData)(severity));
            goto __Vlabel0;
        }
        get_severity_id_file__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level\n"); );
    // Body
    this->__PVT__m_max_verbosity_level = verbosity_level;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_1__exists;
    ::IData/*31:0*/ __VlefCall_0__exists;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> array;
    {
        get_verbosity_level__Vfuncrtn = 0U;
        if ((0U != this->__PVT__severity_id_verbosities.exists(severity))) {
            array = this->__PVT__severity_id_verbosities
                .at(severity);
            VL_NULL_CHECK(array, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 530)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 531)->__VnoInFunc_get(vlSymsp, id, get_verbosity_level__Vfuncrtn);
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 535)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 536)->__VnoInFunc_get(vlSymsp, id, get_verbosity_level__Vfuncrtn);
            goto __Vlabel0;
        }
        get_verbosity_level__Vfuncrtn = this->__PVT__m_max_verbosity_level;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_1__exists;
    ::IData/*31:0*/ __VlefCall_0__exists;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> array;
    {
        get_action__Vfuncrtn = 0U;
        if ((0U != this->__PVT__severity_id_actions.exists(severity))) {
            array = this->__PVT__severity_id_actions
                .at(severity);
            VL_NULL_CHECK(array, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 559)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 561)->__VnoInFunc_get(vlSymsp, id, get_action__Vfuncrtn);
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(this->__PVT__id_actions, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 566)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 568)->__VnoInFunc_get(vlSymsp, id, get_action__Vfuncrtn);
            goto __Vlabel0;
        }
        get_action__Vfuncrtn = this->__PVT__severity_actions
            .at((::IData)(severity));
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ &get_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__exists;
    ::IData/*31:0*/ file;
    {
        get_file_handle__Vfuncrtn = 0U;
        file = 0U;
        this->__VnoInFunc_get_severity_id_file(vlSymsp, severity, id, file);
        if ((0U != file)) {
            get_file_handle__Vfuncrtn = file;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 597)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 598)->__VnoInFunc_get(vlSymsp, id, file);
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            }
        }
        if ((0U != this->__PVT__severity_file_handles.exists(severity))) {
            file = this->__PVT__severity_file_handles
                .at((::IData)(severity));
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            }
        }
        get_file_handle__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action\n"); );
    // Body
    this->__PVT__severity_actions.atWrite((::IData)(severity)) 
        = action;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_actions, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 635)->__VnoInFunc_add(vlSymsp, id, action);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string id, ::IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92> __VlefCall_0__new;
    if ((1U & (~ (0U != this->__PVT__severity_id_actions.exists(severity))))) {
        __VlefCall_0__new = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi5bb9bb92, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_actions.atWrite(severity) 
            = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__severity_id_actions.at(severity), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 647)->__VnoInFunc_add(vlSymsp, id, action);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 652)->__VnoInFunc_add(vlSymsp, id, verbosity);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file\n"); );
    // Body
    this->__PVT__default_file_handle = file;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file\n"); );
    // Body
    this->__PVT__severity_file_handles.atWrite((::IData)(severity)) 
        = file;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 686)->__VnoInFunc_add(vlSymsp, id, file);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ cur_severity, ::CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 703)->__VnoInFunc_add(vlSymsp, cur_severity, (::IData)(new_severity));
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ cur_severity, ::std::string id, ::CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3> __VlefCall_0__new;
    if ((1U & (~ (0U != this->__PVT__sev_id_overrides.exists(id))))) {
        __VlefCall_0__new = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_pool__pi03451cc3, vlProcess, vlSymsp, ""s);
        this->__PVT__sev_id_overrides.atWrite(id) = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__sev_id_overrides.at(id), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 719)->__VnoInFunc_add(vlSymsp, cur_severity, (::IData)(new_severity));
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::std::string name, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity_level, ::std::string filename, ::IData/*31:0*/ line, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> client) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_report_enabled__verbosity_1109;
    __Vfunc_uvm_report_enabled__verbosity_1109 = 0;
    ::CData/*1:0*/ __Vfunc_uvm_report_enabled__severity_1110;
    __Vfunc_uvm_report_enabled__severity_1110 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1112;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2002;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2003;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__get_action;
    ::IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> l_report_message;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        this->__Vfunc_uvm_report_enabled__id_1111 = id;
        __Vfunc_uvm_report_enabled__severity_1110 = 0U;
        __Vfunc_uvm_report_enabled__verbosity_1109 
            = verbosity_level;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1112);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1112;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 100)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2002);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2002;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_enabled__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 101)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__verbosity_1109, (::IData)(__Vfunc_uvm_report_enabled__severity_1110), this->__Vfunc_uvm_report_enabled__id_1111, __VlefCall_0__uvm_report_enabled);
        if ((1U & (~ (0U != __VlefCall_0__uvm_report_enabled)))) {
            goto __Vlabel0;
        }
        if ((VlNull{} == client)) {
            VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 752)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2003);
            client = __Vtask_get_root__Vfuncout_2003;
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 757)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity_level, filename, line, name);
        VL_NULL_CHECK(l_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 759)->__VnoInFunc_set_report_object(vlSymsp, client);
        this->__VnoInFunc_get_action(vlSymsp, severity, id, __VlefCall_1__get_action);
        VL_NULL_CHECK(l_report_message, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 760)->__VnoInFunc_set_action(vlSymsp, __VlefCall_1__get_action);
        this->__VnoInFunc_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_run_hooks(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> client, ::CData/*1:0*/ severity, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::CData/*0:0*/ &run_hooks__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_run_hooks\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_3__report_fatal_hook;
    ::CData/*0:0*/ __VlefCall_2__report_error_hook;
    ::CData/*0:0*/ __VlefCall_1__report_warning_hook;
    ::CData/*0:0*/ __VlefCall_0__report_info_hook;
    ::CData/*0:0*/ ok;
    run_hooks__Vfuncrtn = 0U;
    ok = 0U;
    VL_NULL_CHECK(client, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 914)->__VnoInFunc_report_hook(vlSymsp, id, message, verbosity, filename, line, ok);
    if ((2U & (::IData)(severity))) {
        if ((1U & (::IData)(severity))) {
            VL_NULL_CHECK(client, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 934)->__VnoInFunc_report_fatal_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_3__report_fatal_hook);
            ok = ((::IData)(ok) & (::IData)(__VlefCall_3__report_fatal_hook));
        } else {
            VL_NULL_CHECK(client, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 929)->__VnoInFunc_report_error_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_2__report_error_hook);
            ok = ((::IData)(ok) & (::IData)(__VlefCall_2__report_error_hook));
        }
    } else if ((1U & (::IData)(severity))) {
        VL_NULL_CHECK(client, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 924)->__VnoInFunc_report_warning_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_1__report_warning_hook);
        ok = ((::IData)(ok) & (::IData)(__VlefCall_1__report_warning_hook));
    } else {
        VL_NULL_CHECK(client, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_handler.svh", 919)->__VnoInFunc_report_info_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_0__report_info_hook);
        ok = ((::IData)(ok) & (::IData)(__VlefCall_0__report_info_hook));
    }
    run_hooks__Vfuncrtn = ok;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_max_verbosity_level = 0;
    __PVT__severity_actions.atDefault() = 0;
    __PVT__default_file_handle = 0;
    __PVT__severity_file_handles.atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_report_handler::~Vtb_top_uvm_pkg__03a__03auvm_report_handler() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_handler::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_handler::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_handler::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_max_verbosity_level:" + VL_TO_STRING(__PVT__m_max_verbosity_level);
    out += ", id_verbosities:" + VL_TO_STRING(__PVT__id_verbosities);
    out += ", severity_id_verbosities:" + VL_TO_STRING(__PVT__severity_id_verbosities);
    out += ", id_actions:" + VL_TO_STRING(__PVT__id_actions);
    out += ", severity_actions:" + VL_TO_STRING(__PVT__severity_actions);
    out += ", severity_id_actions:" + VL_TO_STRING(__PVT__severity_id_actions);
    out += ", sev_overrides:" + VL_TO_STRING(__PVT__sev_overrides);
    out += ", sev_id_overrides:" + VL_TO_STRING(__PVT__sev_id_overrides);
    out += ", default_file_handle:" + VL_TO_STRING(__PVT__default_file_handle);
    out += ", id_file_handles:" + VL_TO_STRING(__PVT__id_file_handles);
    out += ", severity_file_handles:" + VL_TO_STRING(__PVT__severity_file_handles);
    out += ", severity_id_file_handles:" + VL_TO_STRING(__PVT__severity_id_file_handles);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
