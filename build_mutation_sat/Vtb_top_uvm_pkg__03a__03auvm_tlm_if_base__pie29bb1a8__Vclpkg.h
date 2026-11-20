// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PIE29BB1A8__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__PIE29BB1A8__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_reg_item;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8 : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::std::string __Vtask_uvm_report_error__id_3366;
    ::std::string __Vtask_uvm_report_error__message_3367;
    ::std::string __Vtask_uvm_report_error__filename_3369;
    ::std::string __Vtask_uvm_report_error__context_name_3371;
    ::std::string __Vtask_uvm_report_error__id_3374;
    ::std::string __Vtask_uvm_report_error__message_3375;
    ::std::string __Vtask_uvm_report_error__filename_3377;
    ::std::string __Vtask_uvm_report_error__context_name_3379;
    ::std::string __Vtask_uvm_report_error__id_3382;
    ::std::string __Vtask_uvm_report_error__message_3383;
    ::std::string __Vtask_uvm_report_error__filename_3385;
    ::std::string __Vtask_uvm_report_error__context_name_3387;
    ::std::string __Vtask_uvm_report_error__id_3390;
    ::std::string __Vtask_uvm_report_error__message_3391;
    ::std::string __Vtask_uvm_report_error__filename_3393;
    ::std::string __Vtask_uvm_report_error__context_name_3395;
    ::std::string __Vtask_uvm_report_error__id_3398;
    ::std::string __Vtask_uvm_report_error__message_3399;
    ::std::string __Vtask_uvm_report_error__filename_3401;
    ::std::string __Vtask_uvm_report_error__context_name_3403;
    ::std::string __Vtask_uvm_report_error__id_3406;
    ::std::string __Vtask_uvm_report_error__message_3407;
    ::std::string __Vtask_uvm_report_error__filename_3409;
    ::std::string __Vtask_uvm_report_error__context_name_3411;
    ::std::string __Vtask_uvm_report_error__id_3414;
    ::std::string __Vtask_uvm_report_error__message_3415;
    ::std::string __Vtask_uvm_report_error__filename_3417;
    ::std::string __Vtask_uvm_report_error__context_name_3419;
    ::std::string __Vtask_uvm_report_error__id_3422;
    ::std::string __Vtask_uvm_report_error__message_3423;
    ::std::string __Vtask_uvm_report_error__filename_3425;
    ::std::string __Vtask_uvm_report_error__context_name_3427;
    ::std::string __Vtask_uvm_report_error__id_3430;
    ::std::string __Vtask_uvm_report_error__message_3431;
    ::std::string __Vtask_uvm_report_error__filename_3433;
    ::std::string __Vtask_uvm_report_error__context_name_3435;
    ::std::string __Vtask_uvm_report_error__id_3438;
    ::std::string __Vtask_uvm_report_error__message_3439;
    ::std::string __Vtask_uvm_report_error__filename_3441;
    ::std::string __Vtask_uvm_report_error__context_name_3443;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_if_base__pie29bb1a8"; }
    virtual void __VnoInFunc_can_get(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &can_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t, ::CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> &t, ::CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t, ::CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_item> t);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_tlm_if_base__pie29bb1a8();
};


#endif  // guard
