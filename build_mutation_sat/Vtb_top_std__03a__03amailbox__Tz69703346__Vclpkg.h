// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_STD__03A__03AMAILBOX__TZ69703346__VCLPKG_H_
#define VERILATED_VTB_TOP_STD__03A__03AMAILBOX__TZ69703346__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_item;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_std__03a__03amailbox__Tz69703346__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_std__03a__03amailbox__Tz69703346__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_std__03a__03amailbox__Tz69703346__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_std__03a__03amailbox__Tz69703346__Vclpkg);
    VL_UNMOVABLE(Vtb_top_std__03a__03amailbox__Tz69703346__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_std__03a__03amailbox__Tz69703346 : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__m_bound;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz69703346"; }
    VlClass* clone() const { return new Vtb_top_std__03a__03amailbox__Tz69703346(*this); }
    VlCoroutine __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &message);
    void __VnoInFunc_num(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &message);
    VlCoroutine __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> message);
    void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &message, ::IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &message, ::IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> message, ::IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_std__03a__03amailbox__Tz69703346() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ bound);
    ~Vtb_top_std__03a__03amailbox__Tz69703346() {}
};


#endif  // guard
