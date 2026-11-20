// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_57__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03A__VDYNSCOPE_57__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_request;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03a__VDynScope_57__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03a__VDynScope_57__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03a__VDynScope_57__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03a__VDynScope_57__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03a__VDynScope_57__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03a__VDynScope_57 : public virtual VlClass {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __PVT__select_process;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_request> __PVT__selected_sequence_request;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_57"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03a__VDynScope_57(*this); }
    Vtb_top_uvm_pkg__03a__03a__VDynScope_57() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp) {}
    ~Vtb_top_uvm_pkg__03a__03a__VDynScope_57() {}
};


#endif  // guard
