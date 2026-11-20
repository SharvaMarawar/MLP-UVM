// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_REF_MODEL__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_REF_MODEL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_ref_model;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pia18cdc6b;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_ref_model__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_ref_model__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_ref_model__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_ref_model__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_ref_model__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_ref_model : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__sh;
    ::IData/*31:0*/ __PVT__leak;
    ::VlUnpacked<::VlUnpacked<::IData/*31:0*/, 4>, 4> __PVT__w;
    ::VlUnpacked<::IData/*31:0*/, 4> __PVT__b;
    ::VlUnpacked<::IData/*31:0*/, 4> __PVT__r_acc;
    ::VlUnpacked<::CData/*7:0*/, 4> __PVT__r_y;
    ::VlUnpacked<::CData/*0:0*/, 4> __PVT__r_sat_hi;
    ::VlUnpacked<::CData/*0:0*/, 4> __PVT__r_sat_lo;
    ::VlUnpacked<::CData/*0:0*/, 4> __PVT__r_leaky;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_ref_model"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_ref_model* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_ref_model(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_predict(Vtb_top__Syms* __restrict vlSymsp, ::VlUnpacked<::CData/*7:0*/, 4> x);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_same_cfg(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_ref_model> o, ::CData/*0:0*/ &same_cfg__Vfuncrtn);
    void __VnoInFunc_write(Vtb_top__Syms* __restrict vlSymsp, ::CData/*4:0*/ addr, ::CData/*7:0*/ data, ::CData/*0:0*/ busy, ::CData/*0:0*/ &write__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_ref_model() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_ref_model();
};


#endif  // guard
