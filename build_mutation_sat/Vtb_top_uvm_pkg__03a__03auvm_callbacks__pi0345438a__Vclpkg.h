// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__PI0345438A__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__PI0345438A__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_callback;
class Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz70055dd5;
class Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a;
class Vtb_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pi870010e8;
class Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi05374238;
class Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz4eb997f4;
class Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz70055dd5;
class Vtb_top_uvm_pkg__03a__03auvm_typeid__Tz7b6d9c4d;
class Vtb_top_uvm_pkg__03a__03auvm_typeid_base;
class Vtb_top_uvm_pkg__03a__03auvm_vreg_field;
class Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string __PVT__m_typename;
            ::std::string __PVT__m_cb_typename;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a> __PVT__m_inst;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tz70055dd5> __PVT__m_base_inst;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a> &get__Vfuncrtn);
    void __VnoInFunc_get_first(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &itr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_first__Vfuncrtn);
    void __VnoInFunc_get_next(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &itr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_next__Vfuncrtn);
    void __VnoInFunc_m_get_q(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz4eb997f4> &q, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_vreg_field> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string tname, ::std::string cbname, ::CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi05374238__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a : public Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pi05374238 {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__pi0345438a"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a(*this); clonep->__VnoInFunc___VupdateRandVars();
        return clonep; }
    virtual void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VupdateRandVars();
    virtual void __VnoInFunc_m_is_for_me(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> obj, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callback> cb, ::CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi0345438a();
};


#endif  // guard
