// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_AGENT__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_AGENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_driver;
class Vtb_top_mlp_pkg__03a__03amlp_monitor;
class Vtb_top_uvm_pkg__03a__03auvm_agent;
class Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz4bbd45ce;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_component_registry__pi48e6180f;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi0278672b;
class Vtb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__piab2e9184;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer__pifce93c9d;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_agent__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_agent__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_agent__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_agent__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_agent__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_agent__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_agent : public Vtb_top_uvm_pkg__03a__03auvm_agent {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer__pifce93c9d> __PVT__sqr;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_driver> __PVT__drv;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_monitor> __PVT__mon;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz4bbd45ce> __PVT__in_ap;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz4bbd45ce> __PVT__out_ap;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_agent"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_agent* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_agent(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_agent() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_agent();
};


#endif  // guard
