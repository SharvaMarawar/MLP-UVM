// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ973CBB7F__VCLPKG_H_
#define VERILATED_VTB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ973CBB7F__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_top_uvm_pkg__03a__03auvm_component;
class Vtb_top_uvm_pkg__03a__03auvm_pool__pid285c596;
class Vtb_top_uvm_pkg__03a__03auvm_resource_db_;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz973cbb7f__Vclpkg final {
  public:

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pid285c596>> __PVT__m_rsc;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz973cbb7f__Vclpkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz973cbb7f__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz973cbb7f__Vclpkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz973cbb7f__Vclpkg);

    // INTERNAL METHODS
};

#include "Vtb_top_uvm_pkg__03a__03auvm_resource_db___Vclpkg.h"

class Vtb_top__Syms;

class Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz973cbb7f : public Vtb_top_uvm_pkg__03a__03auvm_resource_db_ {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db__Tz973cbb7f"; }
    VlClass* clone() const { return new Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz973cbb7f(*this); }
    Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz973cbb7f() = default;
    void init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp);
    virtual ~Vtb_top_uvm_pkg__03a__03auvm_config_db__Tz973cbb7f();
};


#endif  // guard
