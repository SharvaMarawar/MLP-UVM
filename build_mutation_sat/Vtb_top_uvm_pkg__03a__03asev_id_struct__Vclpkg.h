// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03ASEV_ID_STRUCT__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03ASEV_ID_STRUCT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03asev_id_struct__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03asev_id_struct__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03asev_id_struct__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03asev_id_struct__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03asev_id_struct__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03asev_id_struct : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__sev_specified;
    ::CData/*0:0*/ __PVT__id_specified;
    ::CData/*1:0*/ __PVT__sev;
    ::CData/*0:0*/ __PVT__is_on;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__id;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::sev_id_struct"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03asev_id_struct(*this); }
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03asev_id_struct() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp);
    ~Vtb_top_uvm_pkg__03a__03asev_id_struct() {}
};


#endif  // guard
