// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi1c915691> __Vfunc_get__Vfuncout_1472;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi1c915691__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1472);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1472;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__put_export = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_put_imp__pi02a76de0, vlProcess, vlSymsp, "put_export"s, 
                                     ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346>{this});
    this->__PVT__blocking_put_export = this->__PVT__put_export;
    this->__PVT__nonblocking_put_export = this->__PVT__put_export;
    this->__PVT__get_peek_export = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi3a7442a1, vlProcess, vlSymsp, "get_peek_export"s, 
                                          ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346>{this});
    this->__PVT__blocking_get_peek_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_get_peek_export = this->__PVT__get_peek_export;
    this->__PVT__blocking_get_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_get_export = this->__PVT__get_peek_export;
    this->__PVT__get_export = this->__PVT__get_peek_export;
    this->__PVT__blocking_peek_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_peek_export = this->__PVT__get_peek_export;
    this->__PVT__peek_export = this->__PVT__get_peek_export;
    this->__PVT__put_ap = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz69703346, vlProcess, vlSymsp, "put_ap"s, 
                                 ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346>{this});
    this->__PVT__get_ap = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz69703346, vlProcess, vlSymsp, "get_ap"s, 
                                 ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346>{this});
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_use_automatic_config(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &use_automatic_config__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_use_automatic_config\n"); );
    // Body
    use_automatic_config__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_flush(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_flush\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "flush"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_size\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    size__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "size"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    size__Vfuncrtn = 0U;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "put"s, "fifo channel task not implemented"s, 0U, ""s, 0U, ""s, 0U);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "get"s, "fifo channel task not implemented"s, 0U, ""s, 0U, ""s, 0U);
    co_return;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_peek(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_peek\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "peek"s, "fifo channel task not implemented"s, 0U, ""s, 0U, ""s, 0U);
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_try_put(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_try_put\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    try_put__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    try_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_try_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_try_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    try_get__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    try_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_try_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    try_peek__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    try_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_can_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_put__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    can_put__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_can_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_get__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    can_get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_can_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    can_peek__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    can_peek__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_is_empty(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_is_empty\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    is_empty__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "is_empty"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    is_empty__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_used(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &used__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_used\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    used__Vfuncrtn = 0U;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "used"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    used__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::~Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69703346::to_string_middle\n"); );
    // Body
    std::string out;
    out += "put_export:" + VL_TO_STRING(__PVT__put_export);
    out += ", get_peek_export:" + VL_TO_STRING(__PVT__get_peek_export);
    out += ", put_ap:" + VL_TO_STRING(__PVT__put_ap);
    out += ", get_ap:" + VL_TO_STRING(__PVT__get_ap);
    out += ", blocking_put_export:" + VL_TO_STRING(__PVT__blocking_put_export);
    out += ", nonblocking_put_export:" + VL_TO_STRING(__PVT__nonblocking_put_export);
    out += ", blocking_get_export:" + VL_TO_STRING(__PVT__blocking_get_export);
    out += ", nonblocking_get_export:" + VL_TO_STRING(__PVT__nonblocking_get_export);
    out += ", get_export:" + VL_TO_STRING(__PVT__get_export);
    out += ", blocking_peek_export:" + VL_TO_STRING(__PVT__blocking_peek_export);
    out += ", nonblocking_peek_export:" + VL_TO_STRING(__PVT__nonblocking_peek_export);
    out += ", peek_export:" + VL_TO_STRING(__PVT__peek_export);
    out += ", blocking_get_peek_export:" + VL_TO_STRING(__PVT__blocking_get_peek_export);
    out += ", nonblocking_get_peek_export:" + VL_TO_STRING(__PVT__nonblocking_get_peek_export);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
