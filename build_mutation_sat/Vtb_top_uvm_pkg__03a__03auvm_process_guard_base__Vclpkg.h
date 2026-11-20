// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PROCESS_GUARD_BASE__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_PROCESS_GUARD_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_44;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_process_guard_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_process_guard_base>> __PVT__m_pending_guards;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_process_guard_base__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_m_init_process_guards(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_init_process_guards____Vfork_1__0(VlProcessRef vlProcess);
  public:
    void __VnoInFunc_m_process_guard(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_process_guard_base> guard);
  private:
    VlCoroutine __VnoInFunc_m_process_guard____Vfork_2__0(VlProcessRef vlProcess, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_44> __VDynScope_m_process_guard_1);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_process_guard_base : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __PVT__m_target_process;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> __PVT__m_guard_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_process_guard_base"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_clear(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_std__03a__03aprocess> &clear__Vfuncrtn);
    virtual void __VnoInFunc_do_trigger(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_process(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_std__03a__03aprocess> &get_process__Vfuncrtn);
    void __VnoInFunc_is_terminated(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_terminated__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_process_guard_base() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_process_guard_base();
};


#endif  // guard
