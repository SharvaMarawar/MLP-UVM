// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_uvm_pkg.h"
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_factory_override__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_factory_override__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_factory_override__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_factory_override__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_factory_override : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__replace;
    ::CData/*0:0*/ __PVT__selected;
    ::CData/*0:0*/ __PVT__has_wildcard;
    ::IData/*31:0*/ __PVT__used;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    Vtb_top_m_uvm_factory_type_pair_t__struct__0 __PVT__orig;
    Vtb_top_m_uvm_factory_type_pair_t__struct__0 __PVT__ovrd;
    ::std::string __PVT__full_inst_path;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_factory_override"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_factory_override(*this); }
    void __VnoInFunc_m_has_wildcard(Vtb_top__Syms* __restrict vlSymsp, ::std::string nm, ::CData/*0:0*/ &m_has_wildcard__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_factory_override() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, ::std::string full_inst_path, ::std::string orig_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> orig_type, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type, ::std::string ovrd_type_name, ::CData/*0:0*/ replace);
    ~Vtb_top_uvm_pkg__03a__03auvm_factory_override() {}
};


#endif  // guard
