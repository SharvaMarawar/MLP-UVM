// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi36337bc7> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi36337bc7__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec__Vclpkg::__VnoInFunc_set_imp(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec> imp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec__Vclpkg::__VnoInFunc_set_imp\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi3ee6a9d7> __Vfunc_create__Vfuncout_621;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi36337bc7> __VlefCall_2__get_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_1__find_override_by_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi36337bc7> __VlefCall_0__get_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk1__DOT__cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> unnamedblk1__DOT__factory;
    if ((VlNull{} == imp)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__cs);
        VL_NULL_CHECK(unnamedblk1__DOT__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 72)->__VnoInFunc_get_factory(vlProcess, vlSymsp, unnamedblk1__DOT__factory);
        this->__VnoInFunc_get_type(vlProcess, vlSymsp, __VlefCall_0__get_type);
        VL_NULL_CHECK(unnamedblk1__DOT__factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 73)->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, __VlefCall_0__get_type, ""s, __VlefCall_1__find_override_by_type);
        this->__VnoInFunc_get_type(vlProcess, vlSymsp, __VlefCall_2__get_type);
        if ((__VlefCall_1__find_override_by_type == __VlefCall_2__get_type)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi1239d443__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, ""s, VlNull{}, ""s, __Vfunc_create__Vfuncout_621);
            imp = __Vfunc_create__Vfuncout_621;
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi36337bc7__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, ""s, VlNull{}, ""s, imp);
        }
    }
    this->__Vnontrivs.__PVT__m_config_db_imp = imp;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec__Vclpkg::__VnoInFunc_get_imp(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec> &get_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec__Vclpkg::__VnoInFunc_get_imp\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_config_db_imp)) {
        this->__VnoInFunc_set_imp(vlProcess, vlSymsp, VlNull{});
    }
    get_imp__Vfuncrtn = this->__Vnontrivs.__PVT__m_config_db_imp;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi36337bc7> __Vfunc_get__Vfuncout_620;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi36337bc7__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_620);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_620;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_env_cfg> &value, ::CData/*0:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string cntxt_name, ::std::string inst_name, ::std::string field_name, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_env_cfg> value, ::IData/*31:0*/ cntxt_depth, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pid9ac4699> pool, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_set\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_exists(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::CData/*0:0*/ rpterr, ::CData/*0:0*/ &exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_exists\n"); );
    // Body
    exists__Vfuncrtn = 0U;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_trigger_modified(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string inst_name, ::std::string field_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_trigger_modified\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_show_msg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string rtype, ::std::string action, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz648eaeea> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_show_msg\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, ""s);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::~Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pifd6107ec::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
