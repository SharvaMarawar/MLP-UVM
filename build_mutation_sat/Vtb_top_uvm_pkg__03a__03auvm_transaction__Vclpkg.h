// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TRANSACTION__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_event_;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc;
class Vtb_top_uvm_pkg__03a__03auvm_parent_child_link;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_recorder;
class Vtb_top_uvm_pkg__03a__03auvm_tr_database;
class Vtb_top_uvm_pkg__03a__03auvm_tr_stream;
class Vtb_top_uvm_pkg__03a__03auvm_transaction;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_transaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_transaction__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_transaction__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_transaction__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_transaction__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_transaction : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::IData/*31:0*/ __PVT__m_transaction_id;
    ::QData/*63:0*/ __PVT__begin_time;
    ::QData/*63:0*/ __PVT__end_time;
    ::QData/*63:0*/ __PVT__accept_time;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc> __PVT__events;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> __PVT__initiator;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> __PVT__stream_handle;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> __PVT__tr_recorder;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> __PVT__begin_event;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> __PVT__end_event;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_transaction"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ begin_time, ::IData/*31:0*/ parent_handle, ::IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_do_begin_tr(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_end_tr(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ end_time, ::CData/*0:0*/ free_handle);
    void __VnoInFunc_get_event_pool(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc> &get_event_pool__Vfuncrtn);
    void __VnoInFunc_get_transaction_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_transaction_id__Vfuncrtn);
    void __VnoInFunc_is_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &is_recording_enabled__Vfuncrtn);
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ begin_time, ::IData/*31:0*/ parent_handle, ::IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_transaction_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ id);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_transaction() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> initiator);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_transaction();
};


#endif  // guard
