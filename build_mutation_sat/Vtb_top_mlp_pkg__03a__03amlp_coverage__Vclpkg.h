// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_COVERAGE__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_COVERAGE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_coverage;
class Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg;
class Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer;
class Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset;
class Vtb_top_mlp_pkg__03a__03amlp_verdict;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_component_registry__piebed7786;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_subscriber__Tz8b2dcfef;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_coverage__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_coverage__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_coverage__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_coverage__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_coverage__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_subscriber__Tz8b2dcfef__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_coverage : public Vtb_top_uvm_pkg__03a__03auvm_subscriber__Tz8b2dcfef {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__v_iris;
    ::CData/*0:0*/ __PVT__v_correct;
    ::CData/*0:0*/ __PVT__v_busy;
    ::CData/*0:0*/ __PVT__v_applied;
    ::CData/*0:0*/ __PVT__v_with_in;
    ::CData/*1:0*/ __PVT__v_stage;
    ::CData/*0:0*/ __PVT__v_stalled;
    ::IData/*31:0*/ __PVT__v_x0;
    ::IData/*31:0*/ __PVT__v_x1;
    ::IData/*31:0*/ __PVT__v_x2;
    ::IData/*31:0*/ __PVT__v_x3;
    ::IData/*31:0*/ __PVT__v_o0;
    ::IData/*31:0*/ __PVT__v_o1;
    ::IData/*31:0*/ __PVT__v_o2;
    ::IData/*31:0*/ __PVT__v_o3;
    ::IData/*31:0*/ __PVT__v_shift;
    ::IData/*31:0*/ __PVT__v_leak;
    ::IData/*31:0*/ __PVT__v_class;
    ::IData/*31:0*/ __PVT__v_in_wait;
    ::IData/*31:0*/ __PVT__v_out_wait;
    ::IData/*31:0*/ __PVT__v_addr;
    ::IData/*31:0*/ __PVT__v_aborted;
    ::VlUnpacked<::VlUnpacked<::IData/*31:0*/, 5>, 4> __PVT__x_hits;
    ::VlUnpacked<::VlUnpacked<::IData/*31:0*/, 5>, 4> __PVT__y_hits;
    ::VlUnpacked<::IData/*31:0*/, 5> __PVT__shift_hits;
    ::VlUnpacked<::IData/*31:0*/, 8> __PVT__leak_hits;
    ::VlUnpacked<::VlUnpacked<::IData/*31:0*/, 8>, 5> __PVT__shift_leak_hits;
    ::VlUnpacked<::IData/*31:0*/, 3> __PVT__class_hits;
    ::VlUnpacked<::IData/*31:0*/, 2> __PVT__correct_hits;
    ::VlUnpacked<::IData/*31:0*/, 4> __PVT__in_wait_hits;
    ::VlUnpacked<::IData/*31:0*/, 4> __PVT__out_wait_hits;
    ::VlUnpacked<::IData/*31:0*/, 32> __PVT__addr_hits;
    ::VlUnpacked<::IData/*31:0*/, 2> __PVT__busy_hits;
    ::VlUnpacked<::IData/*31:0*/, 2> __PVT__applied_hits;
    ::VlUnpacked<::IData/*31:0*/, 2> __PVT__with_in_hits;
    ::VlUnpacked<::VlUnpacked<::IData/*31:0*/, 2>, 5> __PVT__kind_busy_hits;
    ::VlUnpacked<::IData/*31:0*/, 4> __PVT__stage_hits;
    ::VlUnpacked<::IData/*31:0*/, 2> __PVT__stalled_hits;
    ::VlUnpacked<::IData/*31:0*/, 3> __PVT__aborted_hits;
    ::VlUnpacked<::VlUnpacked<::IData/*31:0*/, 2>, 4> __PVT__stage_stall_hits;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_infer> __PVT__cg_infer;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_cfg> __PVT__cg_cfg;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_coverage__02e__vlAnonCG_cg_reset> __PVT__cg_reset;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_coverage"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_coverage* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_coverage(*this); clonep->__VnoInFunc___VupdateRandVars();
        clonep->Vtb_top_mlp_pkg__03a__03amlp_coverage::__PVT__cg_infer = VlNull{}; clonep->Vtb_top_mlp_pkg__03a__03amlp_coverage::__PVT__cg_cfg = VlNull{}; clonep->Vtb_top_mlp_pkg__03a__03amlp_coverage::__PVT__cg_reset = VlNull{}; return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_config_kind(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ addr, ::IData/*31:0*/ &config_kind__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_out_class(Vtb_top__Syms* __restrict vlSymsp, ::CData/*7:0*/ y, ::IData/*31:0*/ &out_class__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_shift_bin(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ value, ::IData/*31:0*/ &shift_bin__Vfuncrtn);
    void __VnoInFunc_signed_value_bin(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ value, ::IData/*31:0*/ &signed_value_bin__Vfuncrtn);
    void __VnoInFunc_stage_bin(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ stage, ::IData/*31:0*/ &stage_bin__Vfuncrtn);
    void __VnoInFunc_wait_bin(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ value, ::IData/*31:0*/ &wait_bin__Vfuncrtn);
    virtual void __VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> t);
    void __VnoInFunc_write_cov_row(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ fd, ::std::string group_name, ::std::string coverpoint_name, ::std::string bin_name, ::IData/*31:0*/ hits);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_coverage() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_coverage();
};


#endif  // guard
