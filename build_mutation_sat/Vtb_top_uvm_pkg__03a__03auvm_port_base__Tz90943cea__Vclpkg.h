// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PORT_BASE__TZ90943CEA__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PORT_BASE__TZ90943CEA__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea;
class Vtb_top_uvm_pkg__03a__03auvm_port_component__Tzc5f277a6;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea : public Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi02432e64 {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_resolved;
    ::IData/*31:0*/ __PVT__m_if_mask;
    ::IData/*31:0*/ __PVT__m_def_index;
    ::IData/*31:0*/ __PVT__m_port_type;
    ::IData/*31:0*/ __PVT__m_min_size;
    ::IData/*31:0*/ __PVT__m_max_size;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> __PVT__m_if;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_component__Tzc5f277a6> __PVT__m_comp;
    ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea>> __PVT__m_provided_by;
    ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea>> __PVT__m_provided_to;
    ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea>> __PVT__m_imp_list;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_port_base__Tz90943cea"; }
    virtual void __VnoInFunc_connect(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> provider);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_if(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ index, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> &get_if__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_port__Vfuncrtn);
    void __VnoInFunc_m_add_list(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> provider);
    void __VnoInFunc_m_check_relationship(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea> provider, ::CData/*0:0*/ &m_check_relationship__Vfuncrtn);
    void __VnoInFunc_max_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &max_size__Vfuncrtn);
    void __VnoInFunc_min_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &min_size__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_if(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ index);
    void __VnoInFunc_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent, ::IData/*31:0*/ port_type, ::IData/*31:0*/ min_size, ::IData/*31:0*/ max_size);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_port_base__Tz90943cea();
};


#endif  // guard
