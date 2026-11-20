// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_REGRESS_TEST__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_REGRESS_TEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_base_seq;
class Vtb_top_mlp_pkg__03a__03amlp_base_test;
class Vtb_top_mlp_pkg__03a__03amlp_regress_seq;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_component_registry__pid970076d;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_regress_test__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_regress_test__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_regress_test__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_regress_test__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_regress_test__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_mlp_pkg__03a__03amlp_base_test__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_regress_test : public Vtb_top_mlp_pkg__03a__03amlp_base_test {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_regress_test"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_regress_test* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_regress_test(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_make_seq(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_base_seq> &make_seq__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    Vtb_top_mlp_pkg__03a__03amlp_regress_test() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_regress_test();
};


#endif  // guard
