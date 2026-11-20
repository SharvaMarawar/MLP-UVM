// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_SCOREBOARD__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_SCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_dataset;
class Vtb_top_mlp_pkg__03a__03amlp_env_cfg;
class Vtb_top_mlp_pkg__03a__03amlp_mon_item;
class Vtb_top_mlp_pkg__03a__03amlp_ref_model;
class Vtb_top_mlp_pkg__03a__03amlp_scoreboard;
class Vtb_top_mlp_pkg__03a__03amlp_verdict;
class Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a;
class Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9;
class Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_component_registry__pie75eb616;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_scoreboard;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_scoreboard__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_scoreboard__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_scoreboard__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_scoreboard__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_scoreboard__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_scoreboard__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_scoreboard : public Vtb_top_uvm_pkg__03a__03auvm_scoreboard {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__n_in;
    ::IData/*31:0*/ __PVT__n_out;
    ::IData/*31:0*/ __PVT__n_match;
    ::IData/*31:0*/ __PVT__n_mismatch;
    ::IData/*31:0*/ __PVT__n_cfg;
    ::IData/*31:0*/ __PVT__n_cfg_ignored;
    ::IData/*31:0*/ __PVT__n_reset;
    ::IData/*31:0*/ __PVT__n_aborted;
    ::IData/*31:0*/ __PVT__n_iris;
    ::IData/*31:0*/ __PVT__n_iris_ok;
    ::IData/*31:0*/ __PVT__n_busy_err;
    ::IData/*31:0*/ __PVT__n_ref_err;
    ::IData/*31:0*/ __PVT__n_sat_hi;
    ::IData/*31:0*/ __PVT__n_sat_lo;
    ::QData/*63:0*/ __PVT__lat_min;
    ::QData/*63:0*/ __PVT__lat_max;
    Vtb_top_mlp_if* __PVT__vif;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_in__pi79c10b1a> __PVT__in_imp;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03auvm_analysis_imp_out__pi547d26a9> __PVT__out_imp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_analysis_port__Tz8b2dcfef> __PVT__cov_ap;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_env_cfg> __PVT__cfg;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_ref_model> __PVT__model;
    ::VlQueue<::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict>> __PVT__exp_q;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_scoreboard"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_scoreboard* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_scoreboard(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_check_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_handle_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t);
    void __VnoInFunc_handle_input(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t);
    void __VnoInFunc_handle_reset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_write_in(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t);
    void __VnoInFunc_write_out(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_scoreboard() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_scoreboard();
};


#endif  // guard
