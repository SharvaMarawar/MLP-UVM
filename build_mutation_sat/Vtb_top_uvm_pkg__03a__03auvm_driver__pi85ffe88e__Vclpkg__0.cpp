// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__picbf8eb4a> __Vfunc_get__Vfuncout_1455;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__picbf8eb4a__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1455);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1455;
}

void Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_driver #(REQ,RSP)"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__seq_item_port = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184, vlProcess, vlSymsp, "seq_item_port"s, 
                                        ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e>{this}, 0U, 1U);
    this->__PVT__rsp_port = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz69703346, vlProcess, vlSymsp, "rsp_port"s, 
                                   ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e>{this});
    this->__PVT__seq_item_prod_if = this->__PVT__seq_item_port;
}

void Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::IData/*31:0*/ __VlefCall_3__get_report_action;
    ::IData/*31:0*/ __VlefCall_2__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    VL_NULL_CHECK(this->__PVT__seq_item_port, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_driver.svh", 100)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
    if (VL_GTS_III(32, 1U, __VlefCall_0__size)) {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_1__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_1__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_driver.svh", 101)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_driver.svh", 101)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "DRVCONNECT"s, __VlefCall_2__get_report_verbosity_level);
        __VlefLogAnd_4 = VL_LTES_III(32, 0U, __VlefCall_2__get_report_verbosity_level);
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_driver.svh", 101)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "DRVCONNECT"s, __VlefCall_3__get_report_action);
            __VlefLogAnd_4 = (0U != __VlefCall_3__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_4))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "DRVCONNECT"s, "seq_item_port (a uvm_seq_item_pull_port in uvm_driver) has not been connected to a sequencer"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/comps/uvm_driver.svh"s, 0x00000065U, ""s, 1U);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::~Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e::to_string_middle\n"); );
    // Body
    std::string out;
    out += "seq_item_port:" + VL_TO_STRING(__PVT__seq_item_port);
    out += ", seq_item_prod_if:" + VL_TO_STRING(__PVT__seq_item_prod_if);
    out += ", rsp_port:" + VL_TO_STRING(__PVT__rsp_port);
    out += ", req:" + VL_TO_STRING(__PVT__req);
    out += ", rsp:" + VL_TO_STRING(__PVT__rsp);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
