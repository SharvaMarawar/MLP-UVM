// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_MONITOR__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_MONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_mon_item;
class Vtb_top_mlp_pkg__03a__03amlp_monitor;
class Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz4bbd45ce;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi430f9524;
class Vtb_top_uvm_pkg__03a__03auvm_monitor;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_monitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_monitor__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_monitor__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_monitor__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_monitor__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_monitor__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_monitor : public Vtb_top_uvm_pkg__03a__03auvm_monitor {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    Vtb_top_mlp_if* __PVT__vif;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz4bbd45ce> __PVT__in_ap;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz4bbd45ce> __PVT__out_ap;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_monitor"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_monitor* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_monitor(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_monitor() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_monitor();
};


#endif  // guard
