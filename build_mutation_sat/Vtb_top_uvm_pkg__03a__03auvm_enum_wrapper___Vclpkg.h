// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlAssocArray<::std::string, ::CData/*0:0*/> __PVT__map;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_from_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::CData/*0:0*/ &value, ::CData/*0:0*/ &from_name__Vfuncrtn);
    void __VnoInFunc_m_init_map(Vtb_top__Syms* __restrict vlSymsp);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper_ : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_enum_wrapper_"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper_(*this); }
    Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper_() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_enum_wrapper_();
};


#endif  // guard
