// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AM_UVM_PRINTER_KNOBS__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AM_UVM_PRINTER_KNOBS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__identifier;
    ::CData/*0:0*/ __PVT__type_name;
    ::CData/*0:0*/ __PVT__size;
    ::CData/*0:0*/ __PVT__reference;
    ::CData/*0:0*/ __PVT__show_root;
    ::CData/*0:0*/ __PVT__show_radix;
    ::CData/*0:0*/ __PVT__header;
    ::CData/*0:0*/ __PVT__footer;
    ::CData/*0:0*/ __PVT__full_name;
    ::IData/*31:0*/ __PVT__depth;
    ::IData/*31:0*/ __PVT__begin_elements;
    ::IData/*31:0*/ __PVT__end_elements;
    ::IData/*31:0*/ __PVT__indent;
    ::IData/*31:0*/ __PVT__mcd;
    ::IData/*27:0*/ __PVT__default_radix;
    ::IData/*27:0*/ __PVT__recursion_policy;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__prefix;
    ::std::string __PVT__separator;
    ::std::string __PVT__dec_radix;
    ::std::string __PVT__bin_radix;
    ::std::string __PVT__oct_radix;
    ::std::string __PVT__unsigned_radix;
    ::std::string __PVT__hex_radix;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::m_uvm_printer_knobs"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs(*this); }
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp);
    ~Vtb_top_uvm_pkg__03a__03am_uvm_printer_knobs() {}
};


#endif  // guard
