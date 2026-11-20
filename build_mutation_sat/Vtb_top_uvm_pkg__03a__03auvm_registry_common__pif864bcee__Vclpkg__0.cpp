// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg::__VnoInFunc_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    {
        type_name__Vfuncrtn = ""s;
        if ((0U != this->__Vnontrivs.__PVT__m___05Ftype_aliases.size())) {
            type_name__Vfuncrtn = this->__Vnontrivs.__PVT__m___05Ftype_aliases.at(0U);
            goto __Vlabel0;
        }
        type_name__Vfuncrtn = "<unknown>"s;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg::__VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__Vnontrivs.__PVT__get__Vstatic__m_inst)) {
        this->__Vnontrivs.__PVT__get__Vstatic__m_inst 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee, vlSymsp);
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__get__Vstatic__m_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg::__VnoInFunc____05Fdeferred_init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &___05Fdeferred_init__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg::__VnoInFunc____05Fdeferred_init\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_core_state;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi4fa82e63> rgtry;
    ___05Fdeferred_init__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi4fa82e63__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rgtry);
    __VlefCall_0__get_core_state = ((0U == vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.size())
                                     ? 0U : vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__m_uvm_core_state.at(0U));
    if ((0U == __VlefCall_0__get_core_state)) {
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_deferred_init.push_back(rgtry);
    } else {
        VL_NULL_CHECK(rgtry, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 656)->__VnoInFunc_initialize(vlProcess, vlSymsp);
    }
    ___05Fdeferred_init__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg.__VnoInFunc_type_name(vlSymsp, get_type_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_registry_common__pif864bcee::__VnoInFunc_initialize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk3__DOT__i__Vloopsize;
    unnamedblk3__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> factory;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi4fa82e63> rgtry;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, factory);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component_registry__pi4fa82e63__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rgtry);
    VL_NULL_CHECK(factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 665)->__VnoInFunc_register(vlProcess, vlSymsp, rgtry);
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg.__Vnontrivs.__PVT__m___05Ftype_aliases.size())) {
        unnamedblk3__DOT__i__Vloopsize = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg.__Vnontrivs.__PVT__m___05Ftype_aliases.size();
        VL_NULL_CHECK(factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 669)->__VnoInFunc_set_type_alias(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg.__Vnontrivs.__PVT__m___05Ftype_aliases.at(unnamedblk3__DOT__i)), rgtry);
        if ((unnamedblk3__DOT__i__Vloopsize <= vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pif864bcee__Vclpkg.__Vnontrivs.__PVT__m___05Ftype_aliases.size())) {
            unnamedblk3__DOT__i = ((::IData)(1U) + unnamedblk3__DOT__i);
        }
    }
}
