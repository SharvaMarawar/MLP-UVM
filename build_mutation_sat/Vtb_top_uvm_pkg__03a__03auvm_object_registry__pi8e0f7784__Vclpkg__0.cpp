// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784__Vclpkg::__VnoInFunc_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__piaa634d54__Vclpkg.__VnoInFunc_type_name(vlSymsp, type_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__get__Vstatic__m_inst)) {
        this->__Vnontrivs.__PVT__get__Vstatic__m_inst 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784, vlProcess, vlSymsp);
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__get__Vstatic__m_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784__Vclpkg::__VnoInFunc_create(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::std::string contxt, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi5be862af> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784__Vclpkg::__VnoInFunc_create\n"); );
    // Body
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__piaa634d54__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, create__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::__VnoInFunc_create_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::__VnoInFunc_create_object\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi5be862af> obj;
    if ((""s == name)) {
        obj = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi5be862af, vlProcess, vlSymsp, "uvm_resource_db_default_implementation_t"s);
    } else {
        obj = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pi5be862af, vlProcess, vlSymsp, name);
    }
    create_object__Vfuncrtn = obj;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::__VnoInFunc_get_type_name\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__piaa634d54> common;
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__piaa634d54__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 219)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::__VnoInFunc_initialize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__piaa634d54> common;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__piaa634d54__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 303)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_object_wrapper::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::~Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi8e0f7784::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
