// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_BASE_SEQ__VCLPKG_H_
#define VERILATED_VTB_TOP_MLP_PKG__03A__03AMLP_BASE_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_base_seq;
class Vtb_top_mlp_pkg__03a__03amlp_dataset;
class Vtb_top_mlp_pkg__03a__03amlp_env_cfg;
class Vtb_top_mlp_pkg__03a__03amlp_item;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_registry__pib0131420;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_sequence__pi38b6bb3c;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_mlp_pkg__03a__03amlp_base_seq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_mlp_pkg__03a__03amlp_base_seq__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_mlp_pkg__03a__03amlp_base_seq__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_mlp_pkg__03a__03amlp_base_seq__Vclpkg);
    VL_UNMOVABLE(Vtb_top_mlp_pkg__03a__03amlp_base_seq__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_sequence__pi38b6bb3c__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_mlp_pkg__03a__03amlp_base_seq : public Vtb_top_uvm_pkg__03a__03auvm_sequence__pi38b6bb3c {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_env_cfg> __PVT__cfg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "mlp_pkg::mlp_base_seq"; }
    VlClass* clone() const { Vtb_top_mlp_pkg__03a__03amlp_base_seq* const clonep = new Vtb_top_mlp_pkg__03a__03amlp_base_seq(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_load_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_dataset> ds);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_rnd_gap(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &rnd_gap__Vfuncrtn);
    void __VnoInFunc_rnd_i8(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &rnd_i8__Vfuncrtn);
    void __VnoInFunc_rnd_xp(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ mode, ::IData/*31:0*/ &rnd_xp__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_run_seq(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_send_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ a, ::IData/*31:0*/ d, ::IData/*31:0*/ g, ::CData/*0:0*/ busy_ok, ::CData/*0:0*/ coll);
    VlCoroutine __VnoInFunc_send_drain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_send_infer(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ xp, ::IData/*31:0*/ g);
    VlCoroutine __VnoInFunc_send_rand_cfg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_send_ready(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ pct, ::IData/*31:0*/ hold);
    VlCoroutine __VnoInFunc_send_reset(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ w, ::IData/*31:0*/ hold, ::IData/*31:0*/ g);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_mlp_pkg__03a__03amlp_base_seq() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_mlp_pkg__03a__03amlp_base_seq();
};


#endif  // guard
