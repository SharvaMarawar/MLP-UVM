// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_STD__03A__03AMAILBOX__TZF4FBCD3E__VCLPKG_H_
#define VERILATED_VTB_TOP_STD__03A__03AMAILBOX__TZF4FBCD3E__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_reg_item;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_std__03a__03amailbox__Tzf4fbcd3e__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_std__03a__03amailbox__Tzf4fbcd3e__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_std__03a__03amailbox__Tzf4fbcd3e__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_std__03a__03amailbox__Tzf4fbcd3e__Vclpkg);
    VL_UNMOVABLE(Vtb_top_std__03a__03amailbox__Tzf4fbcd3e__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_std__03a__03amailbox__Tzf4fbcd3e : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__m_bound;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tzf4fbcd3e"; }
    VlClass* clone() const { return new Vtb_top_std__03a__03amailbox__Tzf4fbcd3e(*this); }
    VlCoroutine __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &message);
    void __VnoInFunc_num(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &message);
    VlCoroutine __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> message);
    void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &message, ::IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &message, ::IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> message, ::IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_std__03a__03amailbox__Tzf4fbcd3e() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ bound);
    ~Vtb_top_std__03a__03amailbox__Tzf4fbcd3e() {}
};


#endif  // guard
