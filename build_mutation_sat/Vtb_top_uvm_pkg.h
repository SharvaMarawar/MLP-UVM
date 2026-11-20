// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_UVM_PKG_H_
#define VERILATED_VTB_TOP_UVM_PKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_top_uvm_pkg.h"
class Vtb_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t;
class Vtb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_top_uvm_pkg__03a__03auvm_phase;
class Vtb_top_uvm_pkg__03a__03auvm_printer;
class Vtb_top_uvm_pkg__03a__03auvm_report_object;
class Vtb_top_uvm_pkg__03a__03auvm_root;
class Vtb_top_uvm_pkg__03a__03auvm_seed_map;
class Vtb_top_uvm_pkg__03a__03auvm_table_printer;


class Vtb_top__Syms;
struct Vtb_top_uvm_acs_name_struct__struct__0 {
    ::std::string __PVT__name;
    ::std::string __PVT__regex;

    bool operator==(const Vtb_top_uvm_acs_name_struct__struct__0& rhs) const {
        return __PVT__name == rhs.__PVT__name
            && __PVT__regex == rhs.__PVT__regex;
    }
    bool operator!=(const Vtb_top_uvm_acs_name_struct__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_uvm_acs_name_struct__struct__0& rhs) const {
        if (__PVT__name < rhs.__PVT__name) return true;
        if (rhs.__PVT__name < __PVT__name) return false;
        if (__PVT__regex < rhs.__PVT__regex) return true;
        if (rhs.__PVT__regex < __PVT__regex) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_uvm_acs_name_struct__struct__0> : public std::true_type {};
struct Vtb_top_m_uvm_factory_type_pair_t__struct__0 {
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> __PVT__m_type;
    ::std::string __PVT__m_type_name;

    bool operator==(const Vtb_top_m_uvm_factory_type_pair_t__struct__0& rhs) const {
        return __PVT__m_type == rhs.__PVT__m_type
            && __PVT__m_type_name == rhs.__PVT__m_type_name;
    }
    bool operator!=(const Vtb_top_m_uvm_factory_type_pair_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_m_uvm_factory_type_pair_t__struct__0& rhs) const {
        if (__PVT__m_type < rhs.__PVT__m_type) return true;
        if (rhs.__PVT__m_type < __PVT__m_type) return false;
        if (__PVT__m_type_name < rhs.__PVT__m_type_name) return true;
        if (rhs.__PVT__m_type_name < __PVT__m_type_name) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_m_uvm_factory_type_pair_t__struct__0> : public std::true_type {};
struct Vtb_top_uvm_printer_row_info__struct__0 {
    ::IData/*31:0*/ __PVT__level;
    ::std::string __PVT__name;
    ::std::string __PVT__type_name;
    ::std::string __PVT__size;
    ::std::string __PVT__val;

    bool operator==(const Vtb_top_uvm_printer_row_info__struct__0& rhs) const {
        return __PVT__level == rhs.__PVT__level
            && __PVT__name == rhs.__PVT__name
            && __PVT__type_name == rhs.__PVT__type_name
            && __PVT__size == rhs.__PVT__size
            && __PVT__val == rhs.__PVT__val;
    }
    bool operator!=(const Vtb_top_uvm_printer_row_info__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_uvm_printer_row_info__struct__0& rhs) const {
        if (__PVT__level < rhs.__PVT__level) return true;
        if (rhs.__PVT__level < __PVT__level) return false;
        if (__PVT__name < rhs.__PVT__name) return true;
        if (rhs.__PVT__name < __PVT__name) return false;
        if (__PVT__type_name < rhs.__PVT__type_name) return true;
        if (rhs.__PVT__type_name < __PVT__type_name) return false;
        if (__PVT__size < rhs.__PVT__size) return true;
        if (rhs.__PVT__size < __PVT__size) return false;
        if (__PVT__val < rhs.__PVT__val) return true;
        if (rhs.__PVT__val < __PVT__val) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_uvm_printer_row_info__struct__0> : public std::true_type {};
struct Vtb_top_uvm_hdl_path_slice__struct__0 {
    ::std::string __PVT__path;
    ::IData/*31:0*/ __PVT__offset;
    ::IData/*31:0*/ __PVT__size;

    bool operator==(const Vtb_top_uvm_hdl_path_slice__struct__0& rhs) const {
        return __PVT__path == rhs.__PVT__path
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__size == rhs.__PVT__size;
    }
    bool operator!=(const Vtb_top_uvm_hdl_path_slice__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_uvm_hdl_path_slice__struct__0& rhs) const {
        if (__PVT__path < rhs.__PVT__path) return true;
        if (rhs.__PVT__path < __PVT__path) return false;
        if (__PVT__offset < rhs.__PVT__offset) return true;
        if (rhs.__PVT__offset < __PVT__offset) return false;
        if (__PVT__size < rhs.__PVT__size) return true;
        if (rhs.__PVT__size < __PVT__size) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_uvm_hdl_path_slice__struct__0> : public std::true_type {};
struct Vtb_top_uvm_reg_bus_op__struct__0 {
    ::IData/*31:0*/ __PVT__kind;
    ::QData/*63:0*/ __PVT__addr;
    ::QData/*63:0*/ __PVT__data;
    ::IData/*31:0*/ __PVT__n_bits;
    ::CData/*7:0*/ __PVT__byte_en;
    ::IData/*31:0*/ __PVT__status;

    bool operator==(const Vtb_top_uvm_reg_bus_op__struct__0& rhs) const {
        return __PVT__kind == rhs.__PVT__kind
            && __PVT__addr == rhs.__PVT__addr
            && __PVT__data == rhs.__PVT__data
            && __PVT__n_bits == rhs.__PVT__n_bits
            && __PVT__byte_en == rhs.__PVT__byte_en
            && __PVT__status == rhs.__PVT__status;
    }
    bool operator!=(const Vtb_top_uvm_reg_bus_op__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_uvm_reg_bus_op__struct__0& rhs) const {
        if (__PVT__kind < rhs.__PVT__kind) return true;
        if (rhs.__PVT__kind < __PVT__kind) return false;
        if (__PVT__addr < rhs.__PVT__addr) return true;
        if (rhs.__PVT__addr < __PVT__addr) return false;
        if (__PVT__data < rhs.__PVT__data) return true;
        if (rhs.__PVT__data < __PVT__data) return false;
        if (__PVT__n_bits < rhs.__PVT__n_bits) return true;
        if (rhs.__PVT__n_bits < __PVT__n_bits) return false;
        if (__PVT__byte_en < rhs.__PVT__byte_en) return true;
        if (rhs.__PVT__byte_en < __PVT__byte_en) return false;
        if (__PVT__status < rhs.__PVT__status) return true;
        if (rhs.__PVT__status < __PVT__status) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_uvm_reg_bus_op__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_uvm_pkg final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*7:0*/ __PVT__uvm_instance_scope__Vstatic__c;
    ::CData/*0:0*/ __PVT__uvm_oneway_hash__Vstatic__msb;
    ::CData/*7:0*/ __PVT__uvm_oneway_hash__Vstatic__current_byte;
    ::CData/*7:0*/ __PVT__uvm_leaf_scope__Vstatic__bracket_match;
    ::IData/*31:0*/ __PVT__uvm_re_match__Vstatic__e;
    ::IData/*31:0*/ __PVT__uvm_re_match__Vstatic__es;
    ::IData/*31:0*/ __PVT__uvm_re_match__Vstatic__s;
    ::IData/*31:0*/ __PVT__uvm_re_match__Vstatic__ss;
    ::IData/*31:0*/ __PVT__uvm_global_random_seed;
    ::IData/*31:0*/ __PVT__uvm_instance_scope__Vstatic__pos;
    ::IData/*31:0*/ __PVT__uvm_oneway_hash__Vstatic__crc1;
    ::IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__pos;
    ::IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__bmatches;
    ::IData/*31:0*/ __PVT__uvm_wait_for_nba_region__Vstatic__nba;
    ::IData/*31:0*/ __PVT__uvm_wait_for_nba_region__Vstatic__next_nba;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlQueue<::IData/*31:0*/> __PVT__m_uvm_core_state;
            ::std::string __Vtask_uvm_report__id_3;
            ::std::string __Vtask_uvm_report__message_4;
            ::std::string __Vtask_uvm_report__filename_6;
            ::std::string __Vtask_uvm_report__context_name_8;
            ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper>> __PVT__uvm_deferred_init;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_table_printer> __PVT__uvm_default_table_printer;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> __PVT__uvm_default_printer;
            ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_seed_map>> __PVT__uvm_random_seed_table_lookup;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_seed_map> __PVT__uvm_create_random_seed__Vstatic__seed_map;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> run_test__Vstatic__top;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> run_test__Vstatic__cs;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_get_report_object__Vstatic__top;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_get_report_object__Vstatic__cs;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_enabled__Vstatic__top;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_enabled__Vstatic__cs;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report__Vstatic__top;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report__Vstatic__cs;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_info__Vstatic__top;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_info__Vstatic__cs;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_warning__Vstatic__top;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_warning__Vstatic__cs;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_error__Vstatic__top;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_error__Vstatic__cs;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_fatal__Vstatic__top;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_fatal__Vstatic__cs;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_default_coreservice_t> __PVT__uvm_init__Vstatic__dcs;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __PVT__uvm_init__Vstatic__unnamedblk5__DOT___local_report_object_;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_init__Vstatic__unnamedblk6__DOT__actual;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __PVT__uvm_init__Vstatic__unnamedblk6__DOT__unnamedblk7__DOT___local_report_object_;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_init__Vstatic__unnamedblk9__DOT__top;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __PVT__end_of_elaboration_ph;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_top;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_uvm_pkg(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top_uvm_pkg();
    VL_UNCOPYABLE(Vtb_top_uvm_pkg);
    VL_UNMOVABLE(Vtb_top_uvm_pkg);

    // INTERNAL METHODS
    void __VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string message, ::IData/*31:0*/ verbosity, ::std::string filename, ::IData/*31:0*/ line, ::std::string context_name, ::CData/*0:0*/ report_enabled_checked);
};

std::string VL_TO_STRING(const Vtb_top_uvm_acs_name_struct__struct__0& obj);

#endif  // guard
