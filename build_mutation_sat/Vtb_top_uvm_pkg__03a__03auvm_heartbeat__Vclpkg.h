// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_event_;
class Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_objection;
class Vtb_top_uvm_pkg__03a__03auvm_root;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_heartbeat : public Vtb_top_uvm_pkg__03a__03auvm_object {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_started;
    ::CData/*0:0*/ __PVT__m_added;
    ::IData/*31:0*/ __PVT__m_mode;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    ::VlAssignableEvent __PVT__m_stop_event;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> __PVT__m_objection;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback> __PVT__m_cb;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> __PVT__m_cntxt;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> __PVT__m_hblist;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> __PVT__m_event;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_heartbeat"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_heartbeat* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_heartbeat(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_heartbeat() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_heartbeat();
};


#endif  // guard
