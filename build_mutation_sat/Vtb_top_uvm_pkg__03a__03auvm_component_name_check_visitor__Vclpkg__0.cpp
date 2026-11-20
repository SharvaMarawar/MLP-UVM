// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_visit(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> node) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_visit\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1315;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2581;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_2584;
    __Vtask_uvm_report_warning__verbosity_2584 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_2586;
    __Vtask_uvm_report_warning__line_2586 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_2588;
    __Vtask_uvm_report_warning__report_enabled_checked_2588 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1316;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2589;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_;
    if ((this->__PVT___root != node)) {
        if ((1U & (~ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg.__PVT__visit__Vstatic__unnamedblk1__DOT__warned)))) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1315);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1315;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2581);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2581;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 314)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 314)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "NO_VISIT_CHECK"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 314)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "NO_VISIT_CHECK"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_warning__report_enabled_checked_2588 = 1U;
                this->__Vtask_uvm_report_warning__context_name_2587 = ""s;
                __Vtask_uvm_report_warning__line_2586 = 0x0000013aU;
                this->__Vtask_uvm_report_warning__filename_2585 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh"s;
                __Vtask_uvm_report_warning__verbosity_2584 = 0U;
                this->__Vtask_uvm_report_warning__message_2583 = "Because UVM_REGEX_NO_DPI is defined, no uvm component name constraints will be checked"s;
                this->__Vtask_uvm_report_warning__id_2582 = "NO_VISIT_CHECK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1316);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_1316;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2589);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_2589;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_2582, this->__Vtask_uvm_report_warning__message_2583, __Vtask_uvm_report_warning__verbosity_2584, this->__Vtask_uvm_report_warning__filename_2585, __Vtask_uvm_report_warning__line_2586, this->__Vtask_uvm_report_warning__context_name_2587, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_2588));
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg.__PVT__visit__Vstatic__unnamedblk1__DOT__warned = 1U;
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_visitor_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_begin_v(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_begin_v\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1317;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2590;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_2593;
    __Vtask_uvm_report_info__verbosity_2593 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_2595;
    __Vtask_uvm_report_info__line_2595 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_2597;
    __Vtask_uvm_report_info__report_enabled_checked_2597 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1318;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2598;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 342)->__VnoInFunc_get_root(vlProcess, vlSymsp, this->__PVT___root);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1317);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_1317;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2590);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_2590;
    __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 345)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 345)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/COMP/NAMECHECK"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk3__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh", 345)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/COMP/NAMECHECK"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        __Vtask_uvm_report_info__report_enabled_checked_2597 = 1U;
        this->__Vtask_uvm_report_info__context_name_2596 = ""s;
        __Vtask_uvm_report_info__line_2595 = 0x00000159U;
        this->__Vtask_uvm_report_info__filename_2594 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_traversal.svh"s;
        __Vtask_uvm_report_info__verbosity_2593 = 0U;
        this->__Vtask_uvm_report_info__message_2592 = "This implementation of the component name checks requires DPI to be enabled"s;
        this->__Vtask_uvm_report_info__id_2591 = "UVM/COMP/NAMECHECK"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1318);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1318;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2598);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2598;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_2591, this->__Vtask_uvm_report_info__message_2592, __Vtask_uvm_report_info__verbosity_2593, this->__Vtask_uvm_report_info__filename_2594, __Vtask_uvm_report_info__line_2595, this->__Vtask_uvm_report_info__context_name_2596, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_2597));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::~Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_root:" + VL_TO_STRING(__PVT___root);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_visitor_::to_string_middle();
    return (out);
}
