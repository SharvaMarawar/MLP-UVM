// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd__Vclpkg::__VnoInFunc_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi42409111__Vclpkg.__VnoInFunc_type_name(vlSymsp, type_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__get__Vstatic__m_inst)) {
        this->__Vnontrivs.__PVT__get__Vstatic__m_inst 
            = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd, vlProcess, vlSymsp);
    }
    get__Vfuncrtn = this->__Vnontrivs.__PVT__get__Vstatic__m_inst;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd__Vclpkg::__VnoInFunc_create(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::std::string contxt, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pie3b032e7> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd__Vclpkg::__VnoInFunc_create\n"); );
    // Body
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi42409111__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, create__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::__VnoInFunc_create_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::__VnoInFunc_create_object\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pie3b032e7> obj;
    if ((""s == name)) {
        obj = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pie3b032e7, vlProcess, vlSymsp, "uvm_resource_db_default_implementation_t"s);
    } else {
        obj = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource_db_default_implementation_t__pie3b032e7, vlProcess, vlSymsp, name);
    }
    create_object__Vfuncrtn = obj;
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::__VnoInFunc_get_type_name\n"); );
    // Body
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi42409111> common;
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi42409111__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 219)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::__VnoInFunc_initialize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_registry_common__pi42409111> common;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_registry_common__pi42409111__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_registry.svh", 303)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_object_wrapper::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::~Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi0b3332fd::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
