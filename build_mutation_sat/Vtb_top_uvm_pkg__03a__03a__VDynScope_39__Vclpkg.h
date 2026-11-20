// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_39__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_39__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_objection;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03a__VDynScope_39__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03a__VDynScope_39__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03a__VDynScope_39__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03a__VDynScope_39__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03a__VDynScope_39__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03a__VDynScope_39 : public virtual VlClass {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> __PVT__objection;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_39"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03a__VDynScope_39(*this); }
    Vtb_top_uvm_pkg__03a__03a__VDynScope_39() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp) {}
    ~Vtb_top_uvm_pkg__03a__03a__VDynScope_39() {}
};


#endif  // guard
