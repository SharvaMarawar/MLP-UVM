// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_RANDVAL__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_REG_RANDVAL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_reg_randval__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_reg_randval__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_reg_randval__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_randval__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_reg_randval__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_reg_randval : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::QData/*63:0*/ __PVT__randval;

    // INTERNAL VARIABLES
    VlRNGReseeds __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_randval"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_reg_randval* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_reg_randval(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_reg_randval() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp);
    ~Vtb_top_uvm_pkg__03a__03auvm_reg_randval() {}
};


#endif  // guard
