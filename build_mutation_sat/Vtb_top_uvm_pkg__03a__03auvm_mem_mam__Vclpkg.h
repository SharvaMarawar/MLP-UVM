// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_mem;
class Vtb_top_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy;
class Vtb_top_uvm_pkg__03a__03auvm_mem_region;
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_mem_mam : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__for_each_idx;
    ::IData/*31:0*/ __PVT__lineno;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__fname;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_mam_policy> __PVT__default_alloc;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> __PVT__memory;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> __PVT__cfg;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_mam"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_mem_mam(*this); }
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_mem_mam() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_mem> mem);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_mem_mam();
};


#endif  // guard
