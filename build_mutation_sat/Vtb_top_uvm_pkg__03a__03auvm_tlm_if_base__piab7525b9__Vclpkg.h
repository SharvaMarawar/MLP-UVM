// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PIAB7525B9__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PIAB7525B9__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_verdict;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__piab7525b9__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__piab7525b9__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__piab7525b9__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__piab7525b9__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__piab7525b9__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__piab7525b9 : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_2914;
    ::std::string __Vtask_uvm_report_error__message_2915;
    ::std::string __Vtask_uvm_report_error__filename_2917;
    ::std::string __Vtask_uvm_report_error__context_name_2919;
    ::std::string __Vtask_uvm_report_error__id_2922;
    ::std::string __Vtask_uvm_report_error__message_2923;
    ::std::string __Vtask_uvm_report_error__filename_2925;
    ::std::string __Vtask_uvm_report_error__context_name_2927;
    ::std::string __Vtask_uvm_report_error__id_2930;
    ::std::string __Vtask_uvm_report_error__message_2931;
    ::std::string __Vtask_uvm_report_error__filename_2933;
    ::std::string __Vtask_uvm_report_error__context_name_2935;
    ::std::string __Vtask_uvm_report_error__id_2938;
    ::std::string __Vtask_uvm_report_error__message_2939;
    ::std::string __Vtask_uvm_report_error__filename_2941;
    ::std::string __Vtask_uvm_report_error__context_name_2943;
    ::std::string __Vtask_uvm_report_error__id_2946;
    ::std::string __Vtask_uvm_report_error__message_2947;
    ::std::string __Vtask_uvm_report_error__filename_2949;
    ::std::string __Vtask_uvm_report_error__context_name_2951;
    ::std::string __Vtask_uvm_report_error__id_2954;
    ::std::string __Vtask_uvm_report_error__message_2955;
    ::std::string __Vtask_uvm_report_error__filename_2957;
    ::std::string __Vtask_uvm_report_error__context_name_2959;
    ::std::string __Vtask_uvm_report_error__id_2962;
    ::std::string __Vtask_uvm_report_error__message_2963;
    ::std::string __Vtask_uvm_report_error__filename_2965;
    ::std::string __Vtask_uvm_report_error__context_name_2967;
    ::std::string __Vtask_uvm_report_error__id_2970;
    ::std::string __Vtask_uvm_report_error__message_2971;
    ::std::string __Vtask_uvm_report_error__filename_2973;
    ::std::string __Vtask_uvm_report_error__context_name_2975;
    ::std::string __Vtask_uvm_report_error__id_2978;
    ::std::string __Vtask_uvm_report_error__message_2979;
    ::std::string __Vtask_uvm_report_error__filename_2981;
    ::std::string __Vtask_uvm_report_error__context_name_2983;
    ::std::string __Vtask_uvm_report_error__id_2986;
    ::std::string __Vtask_uvm_report_error__message_2987;
    ::std::string __Vtask_uvm_report_error__filename_2989;
    ::std::string __Vtask_uvm_report_error__context_name_2991;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_if_base__piab7525b9"; }
    virtual void __VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> &t);
    virtual void __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> &t);
    virtual void __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> t);
    virtual void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> &t, ::CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> t, ::CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_verdict> t);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__piab7525b9() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__piab7525b9();
};


#endif  // guard
