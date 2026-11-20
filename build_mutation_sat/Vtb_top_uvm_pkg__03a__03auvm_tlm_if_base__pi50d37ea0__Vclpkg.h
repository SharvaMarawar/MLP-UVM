// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PI50D37EA0__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PI50D37EA0__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0 : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_3198;
    ::std::string __Vtask_uvm_report_error__message_3199;
    ::std::string __Vtask_uvm_report_error__filename_3201;
    ::std::string __Vtask_uvm_report_error__context_name_3203;
    ::std::string __Vtask_uvm_report_error__id_3206;
    ::std::string __Vtask_uvm_report_error__message_3207;
    ::std::string __Vtask_uvm_report_error__filename_3209;
    ::std::string __Vtask_uvm_report_error__context_name_3211;
    ::std::string __Vtask_uvm_report_error__id_3214;
    ::std::string __Vtask_uvm_report_error__message_3215;
    ::std::string __Vtask_uvm_report_error__filename_3217;
    ::std::string __Vtask_uvm_report_error__context_name_3219;
    ::std::string __Vtask_uvm_report_error__id_3222;
    ::std::string __Vtask_uvm_report_error__message_3223;
    ::std::string __Vtask_uvm_report_error__filename_3225;
    ::std::string __Vtask_uvm_report_error__context_name_3227;
    ::std::string __Vtask_uvm_report_error__id_3230;
    ::std::string __Vtask_uvm_report_error__message_3231;
    ::std::string __Vtask_uvm_report_error__filename_3233;
    ::std::string __Vtask_uvm_report_error__context_name_3235;
    ::std::string __Vtask_uvm_report_error__id_3238;
    ::std::string __Vtask_uvm_report_error__message_3239;
    ::std::string __Vtask_uvm_report_error__filename_3241;
    ::std::string __Vtask_uvm_report_error__context_name_3243;
    ::std::string __Vtask_uvm_report_error__id_3246;
    ::std::string __Vtask_uvm_report_error__message_3247;
    ::std::string __Vtask_uvm_report_error__filename_3249;
    ::std::string __Vtask_uvm_report_error__context_name_3251;
    ::std::string __Vtask_uvm_report_error__id_3254;
    ::std::string __Vtask_uvm_report_error__message_3255;
    ::std::string __Vtask_uvm_report_error__filename_3257;
    ::std::string __Vtask_uvm_report_error__context_name_3259;
    ::std::string __Vtask_uvm_report_error__id_3262;
    ::std::string __Vtask_uvm_report_error__message_3263;
    ::std::string __Vtask_uvm_report_error__filename_3265;
    ::std::string __Vtask_uvm_report_error__context_name_3267;
    ::std::string __Vtask_uvm_report_error__id_3270;
    ::std::string __Vtask_uvm_report_error__message_3271;
    ::std::string __Vtask_uvm_report_error__filename_3273;
    ::std::string __Vtask_uvm_report_error__context_name_3275;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_if_base__pi50d37ea0"; }
    virtual void __VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pi50d37ea0();
};


#endif  // guard
