// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_MAP_INFO__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_MAP_INFO__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_reg_map_info__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_reg_map_info__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_reg_map_info__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_map_info__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_map_info__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_reg_map_info : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__unmapped;
    ::CData/*0:0*/ __PVT__is_initialized;
    ::QData/*63:0*/ __PVT__offset;
    ::VlWide<5>/*159:0*/ __PVT__mem_range;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<::QData/*63:0*/> __PVT__addr;
    ::std::string __PVT__rights;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> __PVT__frontdoor;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_map_info"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_reg_map_info(*this); }
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_reg_map_info() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp);
    ~Vtb_top_uvm_pkg__03a__03auvm_reg_map_info() {}
};


#endif  // guard
