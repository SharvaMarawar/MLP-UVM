// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__PI7ABF7A1E__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__PI7ABF7A1E__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_callback;
class Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tzf2b06a11;
class Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e;
class Vtb_top_uvm_pkg__03a__03auvm_heartbeat_callback;
class Vtb_top_uvm_pkg__03a__03auvm_object;
class Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pia943749f;
class Vtb_top_uvm_pkg__03a__03auvm_typeid_base;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string __PVT__m_typename;
            ::std::string __PVT__m_cb_typename;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e> __PVT__m_inst;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_callbacks__Tzf2b06a11> __PVT__m_base_inst;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pia943749f__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e : public Vtb_top_uvm_pkg__03a__03auvm_typed_callbacks__pia943749f {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__pi7abf7a1e"; }
    VlClass* clone() const { Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e* const clonep = new Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e(*this); clonep->__VnoInFunc___VupdateRandVars();
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
    Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_callbacks__pi7abf7a1e();
};


#endif  // guard
