// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_factory_override::init(Vtb_top__Syms* __restrict vlSymsp, ::std::string full_inst_path, ::std::string orig_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> orig_type, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type, ::std::string ovrd_type_name, ::CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_factory_override::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__full_inst_path = full_inst_path;
    this->__PVT__orig.__PVT__m_type_name = orig_type_name;
    this->__PVT__orig.__PVT__m_type = orig_type;
    this->__PVT__ovrd.__PVT__m_type_name = ovrd_type_name;
    this->__PVT__ovrd.__PVT__m_type = ovrd_type;
    this->__PVT__replace = replace;
    this->__VnoInFunc_m_has_wildcard(vlSymsp, full_inst_path, this->__PVT__has_wildcard);
}

void Vtb_top_uvm_pkg__03a__03auvm_factory_override::__VnoInFunc_m_has_wildcard(Vtb_top__Syms* __restrict vlSymsp, ::std::string nm, ::CData/*0:0*/ &m_has_wildcard__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_factory_override::__VnoInFunc_m_has_wildcard\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    {
        m_has_wildcard__Vfuncrtn = 0U;
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, 
                          VL_LEN_IN(nm))) {
            if (((0x2aU == VL_GETC_N(nm,unnamedblk1__DOT__i)) 
                 | (0x3fU == VL_GETC_N(nm,unnamedblk1__DOT__i)))) {
                m_has_wildcard__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk1__DOT__i = ((::IData)(1U) + unnamedblk1__DOT__i);
        }
        m_has_wildcard__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__replace = 0;
    __PVT__selected = 0;
    __PVT__used = 0;
    __PVT__has_wildcard = 0;
}
