// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 250)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, get_server__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_server"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ count, ::CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_max_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count\n"); );
    // Body
    get_max_quit_count__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ quit_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count\n"); );
    // Body
    get_quit_count__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ severity, ::IData/*31:0*/ &get_severity_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count\n"); );
    // Body
    get_severity_count__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::IData/*31:0*/ &get_id_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count\n"); );
    // Body
    get_id_count__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_set(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::std::string> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_set\n"); );
    // Body
    q.clear();
    q.atDefault().clear();
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_set(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::CData/*1:0*/> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_set\n"); );
    // Body
    q.clear();
    q.atDefault() = 0;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_message_database(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> database) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_message_database\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_message_database(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_message_database\n"); );
    // Body
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_do_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1099;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1949;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_1952;
    __Vtask_uvm_report_error__verbosity_1952 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_1954;
    __Vtask_uvm_report_error__line_1954 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_1956;
    __Vtask_uvm_report_error__report_enabled_checked_1956 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1100;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1957;
    ::VlQueue<::CData/*1:0*/> __Vtask_get_severity_set__q_1958;
    __Vtask_get_severity_set__q_1958.atDefault() = 0;
    ::VlQueue<::std::string> __Vtask_get_id_set__q_1959;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_9__get_quit_count;
    ::IData/*31:0*/ __VlefCall_8__get_max_quit_count;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> __VlefCall_7__get_message_database;
    ::IData/*31:0*/ __VlefCall_6__get_id_count;
    ::IData/*31:0*/ __VlefCall_5__get_severity_count;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::IData/*31:0*/ __VlefExpr_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::VlQueue<::CData/*1:0*/> unnamedblk2__DOT__q;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__s;
    unnamedblk2__DOT__unnamedblk3__DOT__s = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__s__Vloopsize;
    unnamedblk2__DOT__unnamedblk3__DOT__s__Vloopsize = 0;
    ::VlQueue<::std::string> unnamedblk4__DOT__q;
    ::IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__s;
    unnamedblk4__DOT__unnamedblk5__DOT__s = 0;
    ::IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__s__Vloopsize;
    unnamedblk4__DOT__unnamedblk5__DOT__s__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_server> rhs_;
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, rhs_);
    if ((1U & (~ (0U != __VlefExpr_0)))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1099);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1099;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1949);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1949;
        __VlefCall_1__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 129)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 129)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/REPORT/SERVER/RPTCOPY"s, __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 129)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/REPORT/SERVER/RPTCOPY"s, __VlefCall_3__get_report_action);
            __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_4))) {
            __Vtask_uvm_report_error__report_enabled_checked_1956 = 1U;
            this->__Vtask_uvm_report_error__context_name_1955 = ""s;
            __Vtask_uvm_report_error__line_1954 = 0x00000081U;
            this->__Vtask_uvm_report_error__filename_1953 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh"s;
            __Vtask_uvm_report_error__verbosity_1952 = 0U;
            this->__Vtask_uvm_report_error__message_1951 = "cannot copy to report_server from the given datatype"s;
            this->__Vtask_uvm_report_error__id_1950 = "UVM/REPORT/SERVER/RPTCOPY"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1100);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1100;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1957);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_1957;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_1950, this->__Vtask_uvm_report_error__message_1951, __Vtask_uvm_report_error__verbosity_1952, this->__Vtask_uvm_report_error__filename_1953, __Vtask_uvm_report_error__line_1954, this->__Vtask_uvm_report_error__context_name_1955, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_1956));
        }
    }
    unnamedblk2__DOT__q.clear();
    unnamedblk2__DOT__q.atDefault() = 0;
    VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 134)->__VnoInFunc_get_severity_set(vlSymsp, __Vtask_get_severity_set__q_1958);
    unnamedblk2__DOT__q = __Vtask_get_severity_set__q_1958;
    unnamedblk2__DOT__unnamedblk3__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__s, unnamedblk2__DOT__q.size())) {
        unnamedblk2__DOT__unnamedblk3__DOT__s__Vloopsize 
            = unnamedblk2__DOT__q.size();
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 137)->__VnoInFunc_get_severity_count(vlSymsp, unnamedblk2__DOT__q.at(unnamedblk2__DOT__unnamedblk3__DOT__s), __VlefCall_5__get_severity_count);
        this->__VnoInFunc_set_severity_count(vlSymsp, unnamedblk2__DOT__q.at(unnamedblk2__DOT__unnamedblk3__DOT__s), __VlefCall_5__get_severity_count);
        if ((unnamedblk2__DOT__unnamedblk3__DOT__s__Vloopsize 
             <= unnamedblk2__DOT__q.size())) {
            unnamedblk2__DOT__unnamedblk3__DOT__s = 
                ((::IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__s);
        }
    }
    unnamedblk4__DOT__q.clear();
    unnamedblk4__DOT__q.atDefault().clear();
    VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 144)->__VnoInFunc_get_id_set(vlSymsp, __Vtask_get_id_set__q_1959);
    unnamedblk4__DOT__q = __Vtask_get_id_set__q_1959;
    unnamedblk4__DOT__unnamedblk5__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk5__DOT__s, unnamedblk4__DOT__q.size())) {
        unnamedblk4__DOT__unnamedblk5__DOT__s__Vloopsize 
            = unnamedblk4__DOT__q.size();
        VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 147)->__VnoInFunc_get_id_count(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk4__DOT__q.at(unnamedblk4__DOT__unnamedblk5__DOT__s)), __VlefCall_6__get_id_count);
        this->__VnoInFunc_set_id_count(vlSymsp, VL_CVT_PACK_STR_NN(unnamedblk4__DOT__q.at(unnamedblk4__DOT__unnamedblk5__DOT__s)), __VlefCall_6__get_id_count);
        if ((unnamedblk4__DOT__unnamedblk5__DOT__s__Vloopsize 
             <= unnamedblk4__DOT__q.size())) {
            unnamedblk4__DOT__unnamedblk5__DOT__s = 
                ((::IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__s);
        }
    }
    VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 152)->__VnoInFunc_get_message_database(vlSymsp, __VlefCall_7__get_message_database);
    this->__VnoInFunc_set_message_database(vlSymsp, __VlefCall_7__get_message_database);
    VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 153)->__VnoInFunc_get_max_quit_count(vlSymsp, __VlefCall_8__get_max_quit_count);
    this->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, __VlefCall_8__get_max_quit_count, 1U);
    VL_NULL_CHECK(rhs_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_report_server.svh", 154)->__VnoInFunc_get_quit_count(vlSymsp, __VlefCall_9__get_quit_count);
    this->__VnoInFunc_set_quit_count(vlSymsp, __VlefCall_9__get_quit_count);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report_message\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message, ::std::string composed_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_execute_report_message\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_message> report_message, ::std::string report_object_name, ::std::string &compose_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    compose_report_message__Vfuncrtn = ""s;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report_summarize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report_summarize\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_report_server::~Vtb_top_uvm_pkg__03a__03auvm_report_server() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_server::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_report_server::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_report_server::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
