// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_db(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_db\n"); );
    // Body
    open_db__Vfuncrtn = 0U;
    if ((1U & (~ (::IData)(this->__PVT__m_is_opened)))) {
        this->__VnoInFunc_do_open_db(vlSymsp, this->__PVT__m_is_opened);
    }
    open_db__Vfuncrtn = this->__PVT__m_is_opened;
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_stream(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string scope, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> &open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_stream\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_0__open_db;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> unnamedblk1__DOT__p;
    ::std::string unnamedblk1__DOT__s;
    this->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (__VlefCall_0__open_db) {
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk1__DOT__p);
        unnamedblk1__DOT__s = ""s;
        if ((VlNull{} != unnamedblk1__DOT__p)) {
            VL_NULL_CHECK(unnamedblk1__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 127)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk1__DOT__s);
        }
        this->__VnoInFunc_do_open_stream(vlProcess, vlSymsp, name, scope, type_name, open_stream__Vfuncrtn);
        if ((VlNull{} != open_stream__Vfuncrtn)) {
            this->__PVT__m_streams.atWrite(open_stream__Vfuncrtn) = 1U;
            VL_NULL_CHECK(open_stream__Vfuncrtn, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 136)->__VnoInFunc_m_do_open(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database>{this}, scope, type_name);
        }
        if ((VlNull{} != unnamedblk1__DOT__p)) {
            VL_NULL_CHECK(unnamedblk1__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 141)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk1__DOT__s);
        }
    } else {
        open_stream__Vfuncrtn = VlNull{};
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_establish_link(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_establish_link\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_897;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1523;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1526;
    __Vtask_uvm_report_warning__verbosity_1526 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1528;
    __Vtask_uvm_report_warning__line_1528 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1530;
    __Vtask_uvm_report_warning__report_enabled_checked_1530 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_898;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1531;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_899;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1532;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1535;
    __Vtask_uvm_report_warning__verbosity_1535 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1537;
    __Vtask_uvm_report_warning__line_1537 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1539;
    __Vtask_uvm_report_warning__report_enabled_checked_1539 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_900;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1540;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_901;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1541;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1544;
    __Vtask_uvm_report_warning__verbosity_1544 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1546;
    __Vtask_uvm_report_warning__line_1546 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1548;
    __Vtask_uvm_report_warning__report_enabled_checked_1548 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_902;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1549;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_903;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1550;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1553;
    __Vtask_uvm_report_warning__verbosity_1553 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1555;
    __Vtask_uvm_report_warning__line_1555 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1557;
    __Vtask_uvm_report_warning__report_enabled_checked_1557 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_904;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1558;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_905;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1559;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1562;
    __Vtask_uvm_report_warning__verbosity_1562 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1564;
    __Vtask_uvm_report_warning__line_1564 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1566;
    __Vtask_uvm_report_warning__report_enabled_checked_1566 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_906;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1567;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_907;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1568;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_1571;
    __Vtask_uvm_report_warning__verbosity_1571 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_1573;
    __Vtask_uvm_report_warning__line_1573 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_1575;
    __Vtask_uvm_report_warning__report_enabled_checked_1575 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_908;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1576;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_39__get_name;
    ::std::string __VlefCall_38__get_name;
    ::CData/*0:0*/ __VlefLogAnd_37;
    ::IData/*31:0*/ __VlefCall_36__get_report_action;
    ::IData/*31:0*/ __VlefCall_35__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_34__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_33;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> __VlefCall_32__get_db;
    ::std::string __VlefCall_31__get_name;
    ::std::string __VlefCall_30__get_name;
    ::CData/*0:0*/ __VlefLogAnd_29;
    ::IData/*31:0*/ __VlefCall_28__get_report_action;
    ::IData/*31:0*/ __VlefCall_27__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_26__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_25;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> __VlefCall_24__get_db;
    ::std::string __VlefCall_23__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_22;
    ::IData/*31:0*/ __VlefCall_21__get_report_action;
    ::IData/*31:0*/ __VlefCall_20__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_19__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_18;
    ::IData/*31:0*/ __VlefExpr_17;
    ::IData/*31:0*/ __VlefExpr_16;
    ::std::string __VlefCall_15__get_type_name;
    ::CData/*0:0*/ __VlefLogAnd_14;
    ::IData/*31:0*/ __VlefCall_13__get_report_action;
    ::IData/*31:0*/ __VlefCall_12__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_11__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_10;
    ::IData/*31:0*/ __VlefExpr_9;
    ::IData/*31:0*/ __VlefExpr_8;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk6__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk7__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> s_lhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> s_rhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> r_lhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> r_rhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> lhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> db;
    {
        VL_NULL_CHECK(link, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 180)->__VnoInFunc_get_lhs(vlSymsp, lhs);
        VL_NULL_CHECK(link, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 181)->__VnoInFunc_get_rhs(vlSymsp, rhs);
        if ((VlNull{} == lhs)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_897);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_897;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1523);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1523;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 186)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 186)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 186)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_warning__report_enabled_checked_1530 = 1U;
                this->__Vtask_uvm_report_warning__context_name_1529 = ""s;
                __Vtask_uvm_report_warning__line_1528 = 0x000000baU;
                this->__Vtask_uvm_report_warning__filename_1527 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__verbosity_1526 = 0U;
                this->__Vtask_uvm_report_warning__message_1525 = "left hand side '<null>' is not supported in links for 'uvm_tr_database'"s;
                this->__Vtask_uvm_report_warning__id_1524 = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_898);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_898;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1531);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1531;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1524, this->__Vtask_uvm_report_warning__message_1525, __Vtask_uvm_report_warning__verbosity_1526, this->__Vtask_uvm_report_warning__filename_1527, __Vtask_uvm_report_warning__line_1528, this->__Vtask_uvm_report_warning__context_name_1529, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1530));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == rhs)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_899);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_899;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1532);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1532;
            __VlefCall_4__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 191)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk4__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 191)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_5__get_report_verbosity_level);
            __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
            if (__VlefLogAnd_7) {
                VL_NULL_CHECK(unnamedblk4__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 191)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_6__get_report_action);
                __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_7))) {
                __Vtask_uvm_report_warning__report_enabled_checked_1539 = 1U;
                this->__Vtask_uvm_report_warning__context_name_1538 = ""s;
                __Vtask_uvm_report_warning__line_1537 = 0x000000bfU;
                this->__Vtask_uvm_report_warning__filename_1536 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__verbosity_1535 = 0U;
                this->__Vtask_uvm_report_warning__message_1534 = "right hand side '<null>' is not supported in links for 'uvm_tr_database'"s;
                this->__Vtask_uvm_report_warning__id_1533 = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_900);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_900;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1540);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1540;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1533, this->__Vtask_uvm_report_warning__message_1534, __Vtask_uvm_report_warning__verbosity_1535, this->__Vtask_uvm_report_warning__filename_1536, __Vtask_uvm_report_warning__line_1537, this->__Vtask_uvm_report_warning__context_name_1538, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1539));
            }
            goto __Vlabel0;
        }
        __VlefExpr_8 = VL_CAST_DYNAMIC(lhs, s_lhs);
        __VlefLogAnd_10 = (1U & (~ (0U != __VlefExpr_8)));
        if (__VlefLogAnd_10) {
            __VlefExpr_9 = VL_CAST_DYNAMIC(lhs, r_lhs);
            __VlefLogAnd_10 = (1U & (~ (0U != __VlefExpr_9)));
        }
        if (__VlefLogAnd_10) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_901);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_901;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1541);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1541;
            __VlefCall_11__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_11__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 199)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 199)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_12__get_report_verbosity_level);
            __VlefLogAnd_14 = VL_LTES_III(32, 0U, __VlefCall_12__get_report_verbosity_level);
            if (__VlefLogAnd_14) {
                VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 199)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_13__get_report_action);
                __VlefLogAnd_14 = (0U != __VlefCall_13__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_14))) {
                VL_NULL_CHECK(lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 199)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_15__get_type_name);
                __Vtask_uvm_report_warning__report_enabled_checked_1548 = 1U;
                this->__Vtask_uvm_report_warning__context_name_1547 = ""s;
                __Vtask_uvm_report_warning__line_1546 = 0x000000c7U;
                this->__Vtask_uvm_report_warning__filename_1545 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__verbosity_1544 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_1543
                              ,"left hand side of type '%s' not supported in links for 'uvm_tr_database'",1
                              , 'S',&(__VlefCall_15__get_type_name));
                this->__Vtask_uvm_report_warning__id_1542 = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_902);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_902;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1549);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1549;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1542, this->__Vtask_uvm_report_warning__message_1543, __Vtask_uvm_report_warning__verbosity_1544, this->__Vtask_uvm_report_warning__filename_1545, __Vtask_uvm_report_warning__line_1546, this->__Vtask_uvm_report_warning__context_name_1547, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1548));
            }
            goto __Vlabel0;
        }
        __VlefExpr_16 = VL_CAST_DYNAMIC(rhs, s_rhs);
        __VlefLogAnd_18 = (1U & (~ (0U != __VlefExpr_16)));
        if (__VlefLogAnd_18) {
            __VlefExpr_17 = VL_CAST_DYNAMIC(rhs, r_rhs);
            __VlefLogAnd_18 = (1U & (~ (0U != __VlefExpr_17)));
        }
        if (__VlefLogAnd_18) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_903);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_903;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1550);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1550;
            __VlefCall_19__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_19__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 206)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk6__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 206)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_20__get_report_verbosity_level);
            __VlefLogAnd_22 = VL_LTES_III(32, 0U, __VlefCall_20__get_report_verbosity_level);
            if (__VlefLogAnd_22) {
                VL_NULL_CHECK(unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 206)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_21__get_report_action);
                __VlefLogAnd_22 = (0U != __VlefCall_21__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_22))) {
                VL_NULL_CHECK(rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 206)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_23__get_type_name);
                __Vtask_uvm_report_warning__report_enabled_checked_1557 = 1U;
                this->__Vtask_uvm_report_warning__context_name_1556 = ""s;
                __Vtask_uvm_report_warning__line_1555 = 0x000000ceU;
                this->__Vtask_uvm_report_warning__filename_1554 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__verbosity_1553 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_1552
                              ,"right hand side of type '%s' not supported in links for 'uvm_record_datbasae'",1
                              , 'S',&(__VlefCall_23__get_type_name));
                this->__Vtask_uvm_report_warning__id_1551 = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_904);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_904;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1558);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1558;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1551, this->__Vtask_uvm_report_warning__message_1552, __Vtask_uvm_report_warning__verbosity_1553, this->__Vtask_uvm_report_warning__filename_1554, __Vtask_uvm_report_warning__line_1555, this->__Vtask_uvm_report_warning__context_name_1556, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1557));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} != r_lhs)) {
            VL_NULL_CHECK(r_lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 211)->__VnoInFunc_get_stream(vlProcess, vlSymsp, s_lhs);
        }
        if ((VlNull{} != r_rhs)) {
            VL_NULL_CHECK(r_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 214)->__VnoInFunc_get_stream(vlProcess, vlSymsp, s_rhs);
        }
        __VlefLogAnd_25 = (VlNull{} != s_lhs);
        if (__VlefLogAnd_25) {
            VL_NULL_CHECK(s_lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 217)->__VnoInFunc_get_db(vlProcess, vlSymsp, __VlefCall_24__get_db);
            __VlefLogAnd_25 = (__VlefCall_24__get_db 
                               != ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database>{this});
        }
        if (__VlefLogAnd_25) {
            VL_NULL_CHECK(s_lhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 218)->__VnoInFunc_get_db(vlProcess, vlSymsp, db);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_905);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_905;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1559);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1559;
            __VlefCall_26__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_26__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 221)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk7__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 221)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_27__get_report_verbosity_level);
            __VlefLogAnd_29 = VL_LTES_III(32, 0U, __VlefCall_27__get_report_verbosity_level);
            if (__VlefLogAnd_29) {
                VL_NULL_CHECK(unnamedblk7__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 221)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_28__get_report_action);
                __VlefLogAnd_29 = (0U != __VlefCall_28__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_29))) {
                VL_NULL_CHECK(db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 221)->__VnoInFunc_get_name(vlSymsp, __VlefCall_30__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_31__get_name);
                __Vtask_uvm_report_warning__report_enabled_checked_1566 = 1U;
                this->__Vtask_uvm_report_warning__context_name_1565 = ""s;
                __Vtask_uvm_report_warning__line_1564 = 0x000000ddU;
                this->__Vtask_uvm_report_warning__filename_1563 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__verbosity_1562 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_1561
                              ,"attempt to link stream from '%s' into '%s'",2
                              , 'S',&(__VlefCall_30__get_name)
                              , 'S',&(__VlefCall_31__get_name));
                this->__Vtask_uvm_report_warning__id_1560 = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_906);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_906;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1567);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1567;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1560, this->__Vtask_uvm_report_warning__message_1561, __Vtask_uvm_report_warning__verbosity_1562, this->__Vtask_uvm_report_warning__filename_1563, __Vtask_uvm_report_warning__line_1564, this->__Vtask_uvm_report_warning__context_name_1565, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1566));
            }
            goto __Vlabel0;
        }
        __VlefLogAnd_33 = (VlNull{} != s_rhs);
        if (__VlefLogAnd_33) {
            VL_NULL_CHECK(s_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 224)->__VnoInFunc_get_db(vlProcess, vlSymsp, __VlefCall_32__get_db);
            __VlefLogAnd_33 = (__VlefCall_32__get_db 
                               != ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database>{this});
        }
        if (__VlefLogAnd_33) {
            VL_NULL_CHECK(s_rhs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 225)->__VnoInFunc_get_db(vlProcess, vlSymsp, db);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_907);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_907;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1568);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1568;
            __VlefCall_34__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_34__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 228)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 228)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_35__get_report_verbosity_level);
            __VlefLogAnd_37 = VL_LTES_III(32, 0U, __VlefCall_35__get_report_verbosity_level);
            if (__VlefLogAnd_37) {
                VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 228)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM/TR_DB/BAD_LINK"s, __VlefCall_36__get_report_action);
                __VlefLogAnd_37 = (0U != __VlefCall_36__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_37))) {
                VL_NULL_CHECK(db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh", 228)->__VnoInFunc_get_name(vlSymsp, __VlefCall_38__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_39__get_name);
                __Vtask_uvm_report_warning__report_enabled_checked_1575 = 1U;
                this->__Vtask_uvm_report_warning__context_name_1574 = ""s;
                __Vtask_uvm_report_warning__line_1573 = 0x000000e4U;
                this->__Vtask_uvm_report_warning__filename_1572 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__verbosity_1571 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_1570
                              ,"attempt to link stream from '%s' into '%s'",2
                              , 'S',&(__VlefCall_38__get_name)
                              , 'S',&(__VlefCall_39__get_name));
                this->__Vtask_uvm_report_warning__id_1569 = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_908);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_908;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1576);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_1576;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_1569, this->__Vtask_uvm_report_warning__message_1570, __Vtask_uvm_report_warning__verbosity_1571, this->__Vtask_uvm_report_warning__filename_1572, __Vtask_uvm_report_warning__line_1573, this->__Vtask_uvm_report_warning__context_name_1574, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_1575));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_establish_link(vlSymsp, link);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_db(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &do_open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_db\n"); );
    // Body
    do_open_db__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string scope, ::std::string type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_stream\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_establish_link(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_establish_link\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tr_database::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_is_opened = 0;
    __PVT__m_streams.atDefault() = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_tr_database::~Vtb_top_uvm_pkg__03a__03auvm_tr_database() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tr_database::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tr_database::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_tr_database::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_is_opened:" + VL_TO_STRING(__PVT__m_is_opened);
    out += ", m_streams:" + VL_TO_STRING(__PVT__m_streams);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
