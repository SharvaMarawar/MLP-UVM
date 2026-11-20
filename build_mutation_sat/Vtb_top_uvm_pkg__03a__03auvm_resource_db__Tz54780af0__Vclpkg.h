// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ54780AF0__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ54780AF0__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_resource__Tz54780af0;
class Vtb_top_uvm_pkg__03a__03auvm_resource_db_implementation_t__pi7b33ce7d;
class Vtb_top_uvm_pkg__03a__03auvm_void;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0__Vclpkg);

    // INTERNAL METHODS
    void __VnoInFunc_get_by_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::CData/*0:0*/ rpterr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz54780af0> &get_by_name__Vfuncrtn);
};

#include "Vtb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0 : public Vtb_top_uvm_pkg__03a__03auvm_void {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db__Tz54780af0"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0(*this); }
    Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_resource_db__Tz54780af0();
};


#endif  // guard
