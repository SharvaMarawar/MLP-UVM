// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PROCESS_GUARD__TZ307140D2__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PROCESS_GUARD__TZ307140D2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2;
class Vtb_top_uvm_pkg__03a__03auvm_process_guard_base;
class Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2 : public Vtb_top_uvm_pkg__03a__03auvm_process_guard_base {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> __PVT__m_context;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_process_guard__Tz307140d2"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_do_trigger(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_frontdoor> ctxt);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_process_guard__Tz307140d2();
};


#endif  // guard
