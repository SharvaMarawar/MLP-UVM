// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_tr_database;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg : public virtual VlClass {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__scope;
    ::std::string __PVT__stream_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> __PVT__db;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::m_uvm_tr_stream_cfg"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg(*this); }
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg() {}
};


#endif  // guard
