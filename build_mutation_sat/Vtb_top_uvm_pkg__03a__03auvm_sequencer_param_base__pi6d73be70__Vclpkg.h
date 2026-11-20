// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI6D73BE70__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI6D73BE70__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_mlp_pkg__03a__03amlp_item;
class Vtb_top_std__03a__03aprocess;
class Vtb_top_uvm_pkg__03a__03a__VDynScope_55;
class Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pi4db5e8fa;
class Vtb_top_uvm_pkg__03a__03auvm_analysis_imp__pi66e8f32d;
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_top_uvm_pkg__03a__03auvm_sequence_request;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi1e7305e0;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer_base;
class Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70;
class Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz69703346;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70 : public Vtb_top_uvm_pkg__03a__03auvm_sequencer_base {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__sequence_item_requested;
    ::CData/*0:0*/ __PVT__get_next_item_called;
    ::IData/*31:0*/ __PVT__m_num_last_reqs;
    ::IData/*31:0*/ __PVT__num_last_items;
    ::IData/*31:0*/ __PVT__m_num_last_rsps;
    ::IData/*31:0*/ __PVT__m_num_reqs_sent;
    ::IData/*31:0*/ __PVT__m_num_rsps_received;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlQueue<::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item>> __PVT__m_last_req_buffer;
    ::VlQueue<::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item>> __PVT__m_last_rsp_buffer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi1e7305e0> __PVT__sqr_rsp_analysis_fifo;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_analysis_export__pi4db5e8fa> __PVT__rsp_export;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz69703346> __PVT__m_req_fifo;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_param_base__pi6d73be70"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_m_last_req_push_front(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> item);
    void __VnoInFunc_m_last_rsp_push_front(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> item);
    VlCoroutine __VnoInFunc_m_safe_select_item(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ get_next_item, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> &t);
  private:
    VlCoroutine __VnoInFunc_m_safe_select_item____Vfork_1__0(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03a__VDynScope_55> __VDynScope_m_safe_select_item_0);
  public:
    void __VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_mlp_pkg__03a__03amlp_item> t);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> t, ::CData/*0:0*/ rerandomize);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi6d73be70();
};


#endif  // guard
