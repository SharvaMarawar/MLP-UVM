// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_mem_mam;
class Vtb_top_uvm_pkg__03a__03auvm_void;
class Vtb_top_uvm_pkg__03a__03auvm_vreg;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_mem_region__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_mem_region__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_mem_region__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_mem_region__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_mem_region__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_mem_region : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__len;
    ::IData/*31:0*/ __PVT__n_bytes;
    ::IData/*31:0*/ __PVT__lineno;
    ::QData/*63:0*/ __PVT__Xstart_offsetX;
    ::QData/*63:0*/ __PVT__Xend_offsetX;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__fname;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_mam> __PVT__parent;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg> __PVT__XvregX;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_region"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_mem_region(*this); }
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_mem_region() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ start_offset, ::QData/*63:0*/ end_offset, ::IData/*31:0*/ len, ::IData/*31:0*/ n_bytes, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_mam> parent);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_mem_region();
};


#endif  // guard
