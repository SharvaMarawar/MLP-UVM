// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg::__VnoInFunc_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "mlp_scoreboard"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__Vnontrivs.__PVT__get__Vstatic__m_inst)) {
        this->__Vnontrivs.__PVT__get__Vstatic__m_inst 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb, vlSymsp);
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__get__Vstatic__m_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::std::string contxt, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_scoreboard> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> __Vfunc_create_by_type__Vfuncout_218;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_type_name;
    ::std::string __VlefCall_4__get_type_name;
    ::std::string __VlefCall_3__type_name;
    ::std::string __VlefCall_2__base_type_name;
    ::IData/*31:0*/ __VlefExpr_1;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pie75eb616> __VlefCall_0__get;
    ::std::string unnamedblk1__DOT__msg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj;
    if (((""s == contxt) & (VlNull{} != parent))) {
        VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 593)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, contxt);
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pie75eb616__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg.__VnoInFunc_create_by_type(vlProcess, vlSymsp, __VlefCall_0__get, contxt, name, parent, __Vfunc_create_by_type__Vfuncout_218);
    obj = __Vfunc_create_by_type__Vfuncout_218;
    __VlefExpr_1 = VL_CAST_DYNAMIC(obj, create__Vfuncrtn);
    if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_1)))))) {
        unnamedblk1__DOT__msg = ""s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg.__VnoInFunc_base_type_name(vlSymsp, __VlefCall_2__base_type_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pie75eb616__Vclpkg.__VnoInFunc_type_name(vlSymsp, __VlefCall_3__type_name);
        if ((VlNull{} == obj)) {
            __VlefCall_4__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(obj, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 600)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
        }
        if ((VlNull{} == parent)) {
            __VlefCall_5__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 602)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
        }
        unnamedblk1__DOT__msg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Factory did not return a "s, __VlefCall_2__base_type_name), " of type '"s), __VlefCall_3__type_name), "'. A component of type '"s), __VlefCall_4__get_type_name), "' was returned instead. Name="s), name), " Parent="s), __VlefCall_5__get_type_name), " contxt="s), contxt);
        vlSymsp->vlInst.TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "FCTTYP"s, unnamedblk1__DOT__msg, 0U, ""s, 0U, ""s, 0U);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg::__VnoInFunc____05Fdeferred_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &___05Fdeferred_init__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg::__VnoInFunc____05Fdeferred_init\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_core_state;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pie75eb616> rgtry;
    ___05Fdeferred_init__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pie75eb616__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rgtry);
    __VlefCall_0__get_core_state = ((0U == vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.size())
                                     ? 0U : vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.at(0U));
    if ((0U == __VlefCall_0__get_core_state)) {
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_deferred_init.push_back(rgtry);
    } else {
        VL_NULL_CHECK(rgtry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 656)->__VnoInFunc_initialize(vlProcess, vlSymsp);
    }
    ___05Fdeferred_init__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg.__VnoInFunc_type_name(vlSymsp, get_type_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi1869dccb::__VnoInFunc_initialize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__i__Vloopsize;
    unnamedblk3__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> factory;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pie75eb616> rgtry;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, factory);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pie75eb616__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rgtry);
    VL_NULL_CHECK(factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 665)->__VnoInFunc_register(vlProcess, vlSymsp, rgtry);
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg.__Vnontrivs.__PVT__m___05Ftype_aliases.size())) {
        unnamedblk3__DOT__i__Vloopsize = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg.__Vnontrivs.__PVT__m___05Ftype_aliases.size();
        VL_NULL_CHECK(factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 669)->__VnoInFunc_set_type_alias(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg.__Vnontrivs.__PVT__m___05Ftype_aliases.at(unnamedblk3__DOT__i)), rgtry);
        if ((unnamedblk3__DOT__i__Vloopsize <= vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi1869dccb__Vclpkg.__Vnontrivs.__PVT__m___05Ftype_aliases.size())) {
            unnamedblk3__DOT__i = ((::IData)(1U) + unnamedblk3__DOT__i);
        }
    }
}
