// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_DATASET__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_DATASET__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_dataset;
class Vtb_top_mlp_pkg__03a__03amlp_ref_model;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi68a5ab13;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_dataset__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_dataset__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_dataset__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_dataset__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_dataset__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_dataset : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__test_n;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<::IData/*31:0*/> __PVT__xp;
    ::VlQueue<::IData/*31:0*/> __PVT__yp;
    ::VlQueue<::IData/*31:0*/> __PVT__label;
    ::VlQueue<::IData/*31:0*/> __PVT__cfg_addr;
    ::VlQueue<::IData/*31:0*/> __PVT__cfg_data;
    ::VlAssocArray<::IData/*31:0*/, ::IData/*31:0*/> __PVT__lab_of;
    ::VlAssocArray<::IData/*31:0*/, ::IData/*31:0*/> __PVT__y_of;
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_ref_model> __PVT__cfg_model;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_dataset"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_dataset* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_dataset(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_cfg_equals(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_ref_model> m, ::CData/*0:0*/ &cfg_equals__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_load_cfg(Vtb_top__Syms* __restrict vlSymsp, ::std::string path, ::CData/*0:0*/ &load_cfg__Vfuncrtn);
    void __VnoInFunc_load_vectors(Vtb_top__Syms* __restrict vlSymsp, ::std::string path, ::CData/*0:0*/ &load_vectors__Vfuncrtn);
    void __VnoInFunc_lookup(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ p, ::IData/*31:0*/ &lab, ::IData/*31:0*/ &yg, ::CData/*0:0*/ &lookup__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_size(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_dataset() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_dataset();
};


#endif  // guard
