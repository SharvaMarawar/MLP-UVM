// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_ENV_CFG__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_ENV_CFG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_dataset;
class Vtb_top_mlp_pkg__03a__03amlp_env_cfg;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pif2ab676e;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_env_cfg__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_env_cfg__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_env_cfg__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_env_cfg__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_env_cfg__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_env_cfg : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__num_items;
    ::IData/*31:0*/ __PVT__img_idx;
    ::IData/*31:0*/ __PVT__min_acc_pct;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __PVT__data_dir;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_dataset> __PVT__iris_ds;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_dataset> __PVT__sat_ds;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_env_cfg"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_env_cfg* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_env_cfg(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_env_cfg() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_env_cfg();
};


#endif  // guard
