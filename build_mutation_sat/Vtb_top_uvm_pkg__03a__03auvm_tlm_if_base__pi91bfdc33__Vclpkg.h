// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PI91BFDC33__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PI91BFDC33__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_item;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33 : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_3118;
    ::std::string __Vtask_uvm_report_error__message_3119;
    ::std::string __Vtask_uvm_report_error__filename_3121;
    ::std::string __Vtask_uvm_report_error__context_name_3123;
    ::std::string __Vtask_uvm_report_error__id_3126;
    ::std::string __Vtask_uvm_report_error__message_3127;
    ::std::string __Vtask_uvm_report_error__filename_3129;
    ::std::string __Vtask_uvm_report_error__context_name_3131;
    ::std::string __Vtask_uvm_report_error__id_3134;
    ::std::string __Vtask_uvm_report_error__message_3135;
    ::std::string __Vtask_uvm_report_error__filename_3137;
    ::std::string __Vtask_uvm_report_error__context_name_3139;
    ::std::string __Vtask_uvm_report_error__id_3142;
    ::std::string __Vtask_uvm_report_error__message_3143;
    ::std::string __Vtask_uvm_report_error__filename_3145;
    ::std::string __Vtask_uvm_report_error__context_name_3147;
    ::std::string __Vtask_uvm_report_error__id_3150;
    ::std::string __Vtask_uvm_report_error__message_3151;
    ::std::string __Vtask_uvm_report_error__filename_3153;
    ::std::string __Vtask_uvm_report_error__context_name_3155;
    ::std::string __Vtask_uvm_report_error__id_3158;
    ::std::string __Vtask_uvm_report_error__message_3159;
    ::std::string __Vtask_uvm_report_error__filename_3161;
    ::std::string __Vtask_uvm_report_error__context_name_3163;
    ::std::string __Vtask_uvm_report_error__id_3166;
    ::std::string __Vtask_uvm_report_error__message_3167;
    ::std::string __Vtask_uvm_report_error__filename_3169;
    ::std::string __Vtask_uvm_report_error__context_name_3171;
    ::std::string __Vtask_uvm_report_error__id_3174;
    ::std::string __Vtask_uvm_report_error__message_3175;
    ::std::string __Vtask_uvm_report_error__filename_3177;
    ::std::string __Vtask_uvm_report_error__context_name_3179;
    ::std::string __Vtask_uvm_report_error__id_3182;
    ::std::string __Vtask_uvm_report_error__message_3183;
    ::std::string __Vtask_uvm_report_error__filename_3185;
    ::std::string __Vtask_uvm_report_error__context_name_3187;
    ::std::string __Vtask_uvm_report_error__id_3190;
    ::std::string __Vtask_uvm_report_error__message_3191;
    ::std::string __Vtask_uvm_report_error__filename_3193;
    ::std::string __Vtask_uvm_report_error__context_name_3195;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_if_base__pi91bfdc33"; }
    virtual void __VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t);
    virtual void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi91bfdc33();
};


#endif  // guard
