// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_BIT_VECTOR_UTILS__PIE19BC520__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_BIT_VECTOR_UTILS__PIE19BC520__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_from_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string val_str, ::VlWide<128>/*4095:0*/ &val, ::IData/*31:0*/ &from_string__Vfuncrtn);
    void __VnoInFunc_to_string(Vtb_top__Syms* __restrict vlSymsp, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::std::string radix_str, ::std::string &to_string__Vfuncrtn);
};


class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_bit_vector_utils__pie19bc520"; }
    Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp) {}
    ~Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520() {}
};


#endif  // guard
