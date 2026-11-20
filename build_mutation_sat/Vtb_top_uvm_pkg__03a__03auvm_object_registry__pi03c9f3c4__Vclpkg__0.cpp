// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__get__Vstatic__m_inst)) {
        this->__Vnontrivs.__PVT__get__Vstatic__m_inst 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4, vlProcess, vlSymsp);
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__get__Vstatic__m_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::__VnoInFunc_create_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::__VnoInFunc_create_object\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> obj;
    if ((""s == name)) {
        obj = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07, vlProcess, vlSymsp, ""s, "<not provided>"s);
    } else {
        obj = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07, vlProcess, vlSymsp, name, "<not provided>"s);
    }
    create_object__Vfuncrtn = obj;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::__VnoInFunc_get_type_name\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi35eb50c8> common;
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi35eb50c8__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 219)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::__VnoInFunc_initialize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi35eb50c8> common;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi35eb50c8__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 303)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_object_wrapper::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::~Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi03c9f3c4::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
