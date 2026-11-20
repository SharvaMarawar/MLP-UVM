// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SQR_IF_BASE__PI9446AC00__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SQR_IF_BASE__PI9446AC00__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00 : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_2994;
    ::std::string __Vtask_uvm_report_error__message_2995;
    ::std::string __Vtask_uvm_report_error__filename_2997;
    ::std::string __Vtask_uvm_report_error__context_name_2999;
    ::std::string __Vtask_uvm_report_error__id_3002;
    ::std::string __Vtask_uvm_report_error__message_3003;
    ::std::string __Vtask_uvm_report_error__filename_3005;
    ::std::string __Vtask_uvm_report_error__context_name_3007;
    ::std::string __Vtask_uvm_report_error__id_3010;
    ::std::string __Vtask_uvm_report_error__message_3011;
    ::std::string __Vtask_uvm_report_error__filename_3013;
    ::std::string __Vtask_uvm_report_error__context_name_3015;
    ::std::string __Vtask_uvm_report_error__id_3018;
    ::std::string __Vtask_uvm_report_error__message_3019;
    ::std::string __Vtask_uvm_report_error__filename_3021;
    ::std::string __Vtask_uvm_report_error__context_name_3023;
    ::std::string __Vtask_uvm_report_error__id_3026;
    ::std::string __Vtask_uvm_report_error__message_3027;
    ::std::string __Vtask_uvm_report_error__filename_3029;
    ::std::string __Vtask_uvm_report_error__context_name_3031;
    ::std::string __Vtask_uvm_report_error__id_3034;
    ::std::string __Vtask_uvm_report_error__message_3035;
    ::std::string __Vtask_uvm_report_error__filename_3037;
    ::std::string __Vtask_uvm_report_error__context_name_3039;
    ::std::string __Vtask_uvm_report_error__id_3042;
    ::std::string __Vtask_uvm_report_error__message_3043;
    ::std::string __Vtask_uvm_report_error__filename_3045;
    ::std::string __Vtask_uvm_report_error__context_name_3047;
    ::std::string __Vtask_uvm_report_error__id_3050;
    ::std::string __Vtask_uvm_report_error__message_3051;
    ::std::string __Vtask_uvm_report_error__filename_3053;
    ::std::string __Vtask_uvm_report_error__context_name_3055;
    ::std::string __Vtask_uvm_report_error__id_3058;
    ::std::string __Vtask_uvm_report_error__message_3059;
    ::std::string __Vtask_uvm_report_error__filename_3061;
    ::std::string __Vtask_uvm_report_error__context_name_3063;
    ::std::string __Vtask_uvm_report_error__id_3066;
    ::std::string __Vtask_uvm_report_error__message_3067;
    ::std::string __Vtask_uvm_report_error__filename_3069;
    ::std::string __Vtask_uvm_report_error__context_name_3071;
    ::std::string __Vtask_uvm_report_error__id_3074;
    ::std::string __Vtask_uvm_report_error__message_3075;
    ::std::string __Vtask_uvm_report_error__filename_3077;
    ::std::string __Vtask_uvm_report_error__context_name_3079;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sqr_if_base__pi9446ac00"; }
    virtual void __VnoInFunc_disable_auto_item_recording(Vtb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_has_do_available(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &has_do_available__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_item_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    virtual void __VnoInFunc_item_done(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_put_response(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual VlCoroutine __VnoInFunc_try_next_item(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(Vtb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_sqr_if_base__pi9446ac00();
};


#endif  // guard
