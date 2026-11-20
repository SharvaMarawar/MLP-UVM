// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PIFEC5B368__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PIFEC5B368__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_mon_item;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368 : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_2746;
    ::std::string __Vtask_uvm_report_error__message_2747;
    ::std::string __Vtask_uvm_report_error__filename_2749;
    ::std::string __Vtask_uvm_report_error__context_name_2751;
    ::std::string __Vtask_uvm_report_error__id_2754;
    ::std::string __Vtask_uvm_report_error__message_2755;
    ::std::string __Vtask_uvm_report_error__filename_2757;
    ::std::string __Vtask_uvm_report_error__context_name_2759;
    ::std::string __Vtask_uvm_report_error__id_2762;
    ::std::string __Vtask_uvm_report_error__message_2763;
    ::std::string __Vtask_uvm_report_error__filename_2765;
    ::std::string __Vtask_uvm_report_error__context_name_2767;
    ::std::string __Vtask_uvm_report_error__id_2770;
    ::std::string __Vtask_uvm_report_error__message_2771;
    ::std::string __Vtask_uvm_report_error__filename_2773;
    ::std::string __Vtask_uvm_report_error__context_name_2775;
    ::std::string __Vtask_uvm_report_error__id_2778;
    ::std::string __Vtask_uvm_report_error__message_2779;
    ::std::string __Vtask_uvm_report_error__filename_2781;
    ::std::string __Vtask_uvm_report_error__context_name_2783;
    ::std::string __Vtask_uvm_report_error__id_2786;
    ::std::string __Vtask_uvm_report_error__message_2787;
    ::std::string __Vtask_uvm_report_error__filename_2789;
    ::std::string __Vtask_uvm_report_error__context_name_2791;
    ::std::string __Vtask_uvm_report_error__id_2794;
    ::std::string __Vtask_uvm_report_error__message_2795;
    ::std::string __Vtask_uvm_report_error__filename_2797;
    ::std::string __Vtask_uvm_report_error__context_name_2799;
    ::std::string __Vtask_uvm_report_error__id_2802;
    ::std::string __Vtask_uvm_report_error__message_2803;
    ::std::string __Vtask_uvm_report_error__filename_2805;
    ::std::string __Vtask_uvm_report_error__context_name_2807;
    ::std::string __Vtask_uvm_report_error__id_2810;
    ::std::string __Vtask_uvm_report_error__message_2811;
    ::std::string __Vtask_uvm_report_error__filename_2813;
    ::std::string __Vtask_uvm_report_error__context_name_2815;
    ::std::string __Vtask_uvm_report_error__id_2818;
    ::std::string __Vtask_uvm_report_error__message_2819;
    ::std::string __Vtask_uvm_report_error__filename_2821;
    ::std::string __Vtask_uvm_report_error__context_name_2823;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_if_base__pifec5b368"; }
    virtual void __VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> &t);
    virtual void __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> &t);
    virtual void __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t);
    virtual void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_mon_item> t);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pifec5b368();
};


#endif  // guard
