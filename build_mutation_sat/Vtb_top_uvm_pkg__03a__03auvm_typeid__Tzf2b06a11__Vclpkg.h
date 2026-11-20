// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TYPEID__TZF2B06A11__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TYPEID__TZF2B06A11__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11;
class Vtb_top_uvm_pkg__03a__03auvm_typeid_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11> __PVT__m_b_inst;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11> &get__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11 : public Vtb_top_uvm_pkg__03a__03auvm_typeid_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typeid__Tzf2b06a11"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11(*this); }
    Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_typeid__Tzf2b06a11();
};


#endif  // guard
