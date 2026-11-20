// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_DRIVER__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_DRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_item;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi8c9a5517;
class Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_driver__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_driver__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_driver__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_driver__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_driver__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_driver : public Vtb_top_uvm_pkg__03a__03auvm_driver__pi85ffe88e {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__ready_pct;
    ::IData/*31:0*/ __PVT__ready_left;
    ::IData/*31:0*/ __PVT__n_infer;
    ::IData/*31:0*/ __PVT__n_cfg;
    ::IData/*31:0*/ __PVT__n_reset;
    Vtb_top_mlp_if* __PVT__vif;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_driver"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_driver* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_driver(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    VlCoroutine __VnoInFunc_apply_reset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ hold);
  private:
    VlCoroutine __VnoInFunc_apply_reset____Vfork_12__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hd7cb4032__1);
    VlCoroutine __VnoInFunc_apply_reset____Vfork_13__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea59f4ce__2);
    VlCoroutine __VnoInFunc_apply_reset____Vfork_14__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h0b5d038a__0);
    VlCoroutine __VnoInFunc_apply_reset____Vfork_15__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h0b5eb3bf__0);
  public:
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_drive_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it);
  private:
    VlCoroutine __VnoInFunc_drive_cfg____Vfork_10__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hd7cb4032__0);
    VlCoroutine __VnoInFunc_drive_cfg____Vfork_11__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea59f4ce__1);
    VlCoroutine __VnoInFunc_drive_cfg____Vfork_5__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*4:0*/ __Vintraval_hc814fea0__0);
    VlCoroutine __VnoInFunc_drive_cfg____Vfork_6__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*7:0*/ __Vintraval_h86fa03db__0);
    VlCoroutine __VnoInFunc_drive_cfg____Vfork_7__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hd7ccc867__0);
    VlCoroutine __VnoInFunc_drive_cfg____Vfork_8__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_h0353828a__0);
    VlCoroutine __VnoInFunc_drive_cfg____Vfork_9__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea5d657b__1);
  public:
    VlCoroutine __VnoInFunc_drive_input(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it);
  private:
    VlCoroutine __VnoInFunc_drive_input____Vfork_2__0(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ __Vintraval_he493bc9f__0);
    VlCoroutine __VnoInFunc_drive_input____Vfork_3__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea5d657b__0);
    VlCoroutine __VnoInFunc_drive_input____Vfork_4__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_hea59f4ce__0);
  public:
    VlCoroutine __VnoInFunc_drive_reset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> it);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_idle(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ n);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_ready_gen(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_ready_gen____Vfork_16__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h90dc9676__0);
    VlCoroutine __VnoInFunc_ready_gen____Vfork_17__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h90d9e201__0);
    VlCoroutine __VnoInFunc_ready_gen____Vfork_18__0(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ __Vintraval_h3aaabfd6__0);
  public:
    virtual void __VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  public:
    VlCoroutine __VnoInFunc_wait_idle(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_driver() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_driver();
};


#endif  // guard
