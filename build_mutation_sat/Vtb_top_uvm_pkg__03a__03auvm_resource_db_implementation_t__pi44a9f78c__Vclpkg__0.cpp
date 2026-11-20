// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg::__VnoInFunc_get_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg::__VnoInFunc_set_imp(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c> imp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg::__VnoInFunc_set_imp\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pifb555a73> __Vfunc_create__Vfuncout_693;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e> __VlefCall_2__get_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_1__find_override_by_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e> __VlefCall_0__get_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk1__DOT__cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> unnamedblk1__DOT__factory;
    if ((VlNull{} == imp)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__cs);
        VL_NULL_CHECK(unnamedblk1__DOT__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 59)->__VnoInFunc_get_factory(vlProcess, vlSymsp, unnamedblk1__DOT__factory);
        this->__VnoInFunc_get_type(vlSymsp, __VlefCall_0__get_type);
        VL_NULL_CHECK(unnamedblk1__DOT__factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_db_implementation.svh", 60)->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, __VlefCall_0__get_type, ""s, __VlefCall_1__find_override_by_type);
        this->__VnoInFunc_get_type(vlSymsp, __VlefCall_2__get_type);
        if ((__VlefCall_1__find_override_by_type == __VlefCall_2__get_type)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi7a4a8533__Vclpkg.__VnoInFunc_create(vlSymsp, ""s, VlNull{}, ""s, __Vfunc_create__Vfuncout_693);
            imp = __Vfunc_create__Vfuncout_693;
        } else {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e__Vclpkg.__VnoInFunc_create(vlSymsp, ""s, VlNull{}, ""s, imp);
        }
    }
    this->__Vnontrivs.__PVT__m_rsrc_db_imp = imp;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg::__VnoInFunc_get_imp(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c> &get_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c__Vclpkg::__VnoInFunc_get_imp\n"); );
    // Body
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_rsrc_db_imp)) {
        this->__VnoInFunc_set_imp(vlSymsp, VlNull{});
    }
    get_imp__Vfuncrtn = this->__Vnontrivs.__PVT__m_rsrc_db_imp;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e> __Vfunc_get__Vfuncout_692;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi142f147e__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_692);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_692;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_get_by_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::CData/*0:0*/ rpterr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz973cbb7f> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_get_by_name\n"); );
    // Body
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_show_msg(Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string rtype, ::std::string action, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz973cbb7f> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_show_msg\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_set(Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> val, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_set\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, ""s);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::~Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi44a9f78c::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
