// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vtb_top_uvm_pkg__03a__03auvm_typeid_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string __PVT__typename;
            ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks_base>> __PVT__typeid_map;
            ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks_base>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base>> __PVT__type_map;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_typeid_base : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typeid_base"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_typeid_base(*this); }
    Vtb_top_uvm_pkg__03a__03auvm_typeid_base() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp) {}
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_typeid_base();
};


#endif  // guard
