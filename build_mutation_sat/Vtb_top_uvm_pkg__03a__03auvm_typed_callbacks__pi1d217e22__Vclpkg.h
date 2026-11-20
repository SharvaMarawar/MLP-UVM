// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__PI1D217E22__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__PI1D217E22__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_callback;
class Vtb_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4;
class Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22;
class Vtb_top_uvm_pkg__03a__03auvm_typeid_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string __PVT__m_typename;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> __PVT__m_tw_cb_q;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22> __PVT__m_t_inst;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_m_cb_find(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> q, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::IData/*31:0*/ &m_cb_find__Vfuncrtn);
    void __VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22> &m_initialize__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22 : public Vtb_top_uvm_pkg__03a__03auvm_callbacks_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typed_callbacks__pi1d217e22"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::IData/*31:0*/ ordering);
    virtual void __VnoInFunc_m_am_i_a(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::CData/*0:0*/ &m_am_i_a__Vfuncrtn);
    virtual void __VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn);
    virtual void __VnoInFunc_m_get_tw_cb_q(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> &m_get_tw_cb_q__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
    Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi1d217e22();
};


#endif  // guard
