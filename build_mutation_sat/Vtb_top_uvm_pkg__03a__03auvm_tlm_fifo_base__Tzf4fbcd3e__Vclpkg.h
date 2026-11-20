// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZF4FBCD3E__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZF4FBCD3E__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_abstract_component_registry__pibac7f5d7;
class Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tzf4fbcd3e;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_put_imp__pie0aef7ee;
class Vtb_top_uvm_pkg__03a__03auvm_reg_item;
class Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tzf4fbcd3e;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tzf4fbcd3e__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tzf4fbcd3e__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tzf4fbcd3e__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tzf4fbcd3e__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tzf4fbcd3e__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tzf4fbcd3e : public Vtb_top_uvm_pkg__03a__03auvm_component {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_put_imp__pie0aef7ee> __PVT__put_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851> __PVT__get_peek_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tzf4fbcd3e> __PVT__put_ap;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tzf4fbcd3e> __PVT__get_ap;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_put_imp__pie0aef7ee> __PVT__blocking_put_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_put_imp__pie0aef7ee> __PVT__nonblocking_put_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851> __PVT__blocking_get_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851> __PVT__nonblocking_get_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851> __PVT__get_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851> __PVT__blocking_peek_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851> __PVT__nonblocking_peek_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851> __PVT__peek_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851> __PVT__blocking_get_peek_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_get_peek_imp__pi030ef851> __PVT__nonblocking_get_peek_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_fifo_base__Tzf4fbcd3e"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vtb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_use_automatic_config(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &use_automatic_config__Vfuncrtn);
    virtual void __VnoInFunc_used(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tzf4fbcd3e() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tzf4fbcd3e();
};


#endif  // guard
