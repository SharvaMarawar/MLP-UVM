// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_STD__03A__03AMAILBOX__TZ287F54B5__VCLPKG_H_
#define VERILATED_VTB_TOP_STD__03A__03AMAILBOX__TZ287F54B5__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_phase;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_std__03a__03amailbox__Tz287f54b5__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_std__03a__03amailbox__Tz287f54b5__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_std__03a__03amailbox__Tz287f54b5__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_std__03a__03amailbox__Tz287f54b5__Vclpkg);
    VL_UNMOVABLE(Vtb_top_std__03a__03amailbox__Tz287f54b5__Vclpkg);

    // INTERNAL METHODS
};


class Vtb_top__Syms;

class Vtb_top_std__03a__03amailbox__Tz287f54b5 : public virtual VlClass {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__m_bound;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz287f54b5"; }
    VlClass* clone() const { return new Vtb_top_std__03a__03amailbox__Tz287f54b5(*this); }
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_std__03a__03amailbox__Tz287f54b5() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ bound);
    ~Vtb_top_std__03a__03amailbox__Tz287f54b5() {}
};


#endif  // guard
