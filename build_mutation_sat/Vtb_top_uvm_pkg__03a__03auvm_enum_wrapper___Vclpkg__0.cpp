// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::__VnoInFunc_from_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::CData/*0:0*/ &value, ::CData/*0:0*/ &from_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::__VnoInFunc_from_name\n"); );
    // Body
    from_name__Vfuncrtn = 0U;
    if ((0U == this->__Vnontrivs.__PVT__map.size())) {
        {
            // Inlined CFunc: __VnoInFunc_m_init_map
            this->__Vnontrivs.__PVT__map.atWrite("UVM_PASSIVE"s) = 0U;
            this->__Vnontrivs.__PVT__map.atWrite("UVM_ACTIVE"s) = 1U;
        }
    }
    if ((0U != this->__Vnontrivs.__PVT__map.exists(name))) {
        value = this->__Vnontrivs.__PVT__map.at(name);
        from_name__Vfuncrtn = 1U;
    } else {
        from_name__Vfuncrtn = 0U;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::__VnoInFunc_m_init_map(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::__VnoInFunc_m_init_map\n"); );
    // Body
    this->__Vnontrivs.__PVT__map.atWrite("UVM_PASSIVE"s) = 0U;
    this->__Vnontrivs.__PVT__map.atWrite("UVM_ACTIVE"s) = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper_::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper_::~Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper_::~\n"); );
}
