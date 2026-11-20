// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_45__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_45__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03a__VDynScope_45__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03a__VDynScope_45__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03a__VDynScope_45__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03a__VDynScope_45__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03a__VDynScope_45__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03a__VDynScope_45 : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__i;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_45"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03a__VDynScope_45(*this); }
    Vtb_top_uvm_pkg__03a__03a__VDynScope_45() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp) {}
    ~Vtb_top_uvm_pkg__03a__03a__VDynScope_45() {}
};


#endif  // guard
