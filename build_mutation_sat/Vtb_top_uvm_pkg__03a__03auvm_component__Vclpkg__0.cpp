// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_get_print_config_matches(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_print_config_matches__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_get_print_config_matches\n"); );
    // Body
    get_print_config_matches__Vfuncrtn = this->__PVT__print_config_matches;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_objection> objection, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> source_obj, ::std::string description, ::IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_abort(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_abort\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_component"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_top_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::new\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_read__Vfuncout_2498;
    __Vtask_read__Vfuncout_2498 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__print_enabled = 1U;
    this->__PVT__recording_detail = 0U;
    this->__PVT__m_unsupported_resource_base = VlNull{};
    ::IData/*31:0*/ __VlefCall_37__get_report_verbosity_level;
    ::std::string __VlefCall_36__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_35;
    ::IData/*31:0*/ __VlefCall_34__size;
    ::IData/*31:0*/ __VlefExpr_33;
    ::IData/*31:0*/ __VlefExpr_32;
    ::VlWide<128>/*4095:0*/ __VlefCall_31__read;
    ::IData/*31:0*/ __VlefExpr_30;
    ::QData/*63:0*/ __VlefCall_29__read;
    ::IData/*31:0*/ __VlefExpr_28;
    ::IData/*31:0*/ __VlefCall_27__size;
    ::std::string __VlefCall_26__get_full_name;
    ::CData/*0:0*/ __VlefCall_25__m_add_child;
    ::std::string __VlefCall_24__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_23;
    ::IData/*31:0*/ __VlefCall_22__get_report_action;
    ::IData/*31:0*/ __VlefCall_21__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_20__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_19;
    ::IData/*31:0*/ __VlefCall_18__get_report_action;
    ::IData/*31:0*/ __VlefCall_17__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_16__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_15;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> __VlefCall_14__get_child;
    ::IData/*31:0*/ __VlefCall_13__has_child;
    ::std::string __VlefCall_12__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_11;
    ::IData/*31:0*/ __VlefCall_10__get_report_action;
    ::IData/*31:0*/ __VlefCall_9__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_8__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    ::CData/*0:0*/ __VlefLogAnd_6;
    ::IData/*31:0*/ __VlefCall_5__get_report_action;
    ::IData/*31:0*/ __VlefCall_4__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_3__uvm_get_report_object;
    ::std::string __VlefCall_2__get_full_name;
    ::IData/*31:0*/ __VlefCall_1__get_state;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_build_phase> __VlefCall_0__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> unnamedblk262__DOT__bld;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> unnamedblk262__DOT__common;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk263__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk264__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk265__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk266__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> unnamedblk267__DOT__rsrc;
    ::CData/*0:0*/ unnamedblk267__DOT__found;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzb939a3ab> unnamedblk267__DOT__unnamedblk268__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> unnamedblk267__DOT__unnamedblk269__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_> unnamedblk267__DOT__unnamedblk270__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tza70e6849> unnamedblk267__DOT__unnamedblk271__DOT_____05Ftmp_rsrc___05F;
    ::std::string error_str;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> top;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> rq;
    {
        error_str = ""s;
        /*super.new*/;
        if (((VlNull{} == parent) & ("__top__"s == name))) {
            this->__VnoInFunc_set_name(vlProcess, vlSymsp, ""s);
            this->__PVT__event_pool = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc, vlProcess, vlSymsp, "event_pool"s);
            goto __Vlabel0;
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1706)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, unnamedblk262__DOT__common);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
        VL_NULL_CHECK(unnamedblk262__DOT__common, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1713)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_0__get, 1U, unnamedblk262__DOT__bld);
        if (VL_UNLIKELY(((VlNull{} == unnamedblk262__DOT__bld)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "COMP/INTERNAL"s, "attempt to find build phase object failed"s, 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(unnamedblk262__DOT__bld, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1720)->__VnoInFunc_get_state(vlSymsp, __VlefCall_1__get_state);
        if (VL_UNLIKELY(((0x00000100U == __VlefCall_1__get_state)))) {
            if ((VlNull{} == parent)) {
                VL_NULL_CHECK(top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1723)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            } else {
                VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1723)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "ILLCRT"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("It is illegal to create a component ('"s, name), "' under '"s), __VlefCall_2__get_full_name), "') after the build phase has ended."s)), 0U, ""s, 0U, ""s, 0U);
        }
        if ((""s == name)) {
            VL_SFORMAT_NX(name,"%0d",1, '~',32,vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count);
            name = VL_CONCATN_NNN("COMP_"s, name);
        }
        if ((parent == ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this})) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_3__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_3__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1735)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk263__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk263__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1735)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "THISPARENT"s, __VlefCall_4__get_report_verbosity_level);
            __VlefLogAnd_6 = VL_LTES_III(32, 0U, __VlefCall_4__get_report_verbosity_level);
            if (__VlefLogAnd_6) {
                VL_NULL_CHECK(unnamedblk263__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1735)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "THISPARENT"s, __VlefCall_5__get_report_action);
                __VlefLogAnd_6 = (0U != __VlefCall_5__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_6))) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "THISPARENT"s, "cannot set the parent of a component to itself"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x000006c7U, ""s, 1U);
            }
        }
        if ((VlNull{} == parent)) {
            parent = top;
        }
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c9U, 0U, "NEWCOMP"s, __VlefCall_7__uvm_report_enabled);
        if ((0U != __VlefCall_7__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_8__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_8__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1746)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk264__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk264__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1746)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "NEWCOMP"s, __VlefCall_9__get_report_verbosity_level);
            __VlefLogAnd_11 = VL_LTES_III(32, 0x000000c9U, __VlefCall_9__get_report_verbosity_level);
            if (__VlefLogAnd_11) {
                VL_NULL_CHECK(unnamedblk264__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1746)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "NEWCOMP"s, __VlefCall_10__get_report_action);
                __VlefLogAnd_11 = (0U != __VlefCall_10__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_11))) {
                if ((parent == top)) {
                    __VlefCall_12__get_full_name = "uvm_top"s;
                } else {
                    VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1746)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NEWCOMP"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Creating "s, __VlefCall_12__get_full_name), "."s), name)), 0x000000c9U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x000006d2U, ""s, 1U);
            }
        }
        VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1749)->__VnoInFunc_has_child(vlSymsp, name, __VlefCall_13__has_child);
        __VlefLogAnd_15 = (0U != __VlefCall_13__has_child);
        if (__VlefLogAnd_15) {
            VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1749)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_14__get_child);
            __VlefLogAnd_15 = (::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this} 
                               != __VlefCall_14__get_child);
        }
        if (__VlefLogAnd_15) {
            if ((parent == top)) {
                error_str = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(
                                                                         VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Name '"s, name), "' is not unique to other top-level "s), "instances. If parent is a module, build a unique name by combining the "s), "the module name and component name: $sformatf(\"%m.%s\",\""s), name), "\")."s);
                this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_16__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_16__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1754)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk265__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk265__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1754)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "CLDEXT"s, __VlefCall_17__get_report_verbosity_level);
                __VlefLogAnd_19 = VL_LTES_III(32, 0U, __VlefCall_17__get_report_verbosity_level);
                if (__VlefLogAnd_19) {
                    VL_NULL_CHECK(unnamedblk265__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1754)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "CLDEXT"s, __VlefCall_18__get_report_action);
                    __VlefLogAnd_19 = (0U != __VlefCall_18__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_19))) {
                    this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, error_str, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x000006daU, ""s, 1U);
                }
            } else {
                this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_20__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_20__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1760)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk266__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk266__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1760)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 3U, "CLDEXT"s, __VlefCall_21__get_report_verbosity_level);
                __VlefLogAnd_23 = VL_LTES_III(32, 0U, __VlefCall_21__get_report_verbosity_level);
                if (__VlefLogAnd_23) {
                    VL_NULL_CHECK(unnamedblk266__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1760)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 3U, "CLDEXT"s, __VlefCall_22__get_report_action);
                    __VlefLogAnd_23 = (0U != __VlefCall_22__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_23))) {
                    VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1760)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                    this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, VL_SFORMATF_N_NX("Cannot set '%s' as a child of '%s', which already has a child by that name.",2
                                                                                , 'S',&(name)
                                                                                , 'S',&(__VlefCall_24__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x000006e0U, ""s, 1U);
                }
            }
            goto __Vlabel0;
        }
        this->__PVT__m_parent = parent;
        this->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1769)->__VnoInFunc_m_add_child(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_25__m_add_child);
        if ((1U & (~ (::IData)(__VlefCall_25__m_add_child)))) {
            this->__PVT__m_parent = VlNull{};
        }
        this->__PVT__event_pool = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_object_string_pool__pi5f4a92bc, vlProcess, vlSymsp, "event_pool"s);
        this->__PVT__m_domain = VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1777)
            ->__PVT__m_domain;
        this->__VnoInFunc_reseed(vlProcess, vlSymsp);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1783)->__VnoInFunc_get_resource_pool(vlProcess, vlSymsp, rp);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
        VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1784)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_26__get_full_name), "recording_detail"s, VlNull{}, 0U, rq);
        VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1788)->__VnoInFunc_size(vlSymsp, __VlefCall_27__size);
        if (VL_LTS_III(32, 0U, __VlefCall_27__size)) {
            unnamedblk267__DOT__found = 0U;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
            do {
                VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1794)->__VnoInFunc_pop_front(vlSymsp, unnamedblk267__DOT__rsrc);
                __VlefExpr_28 = VL_CAST_DYNAMIC(unnamedblk267__DOT__rsrc, unnamedblk267__DOT__unnamedblk268__DOT_____05Ftmp_rsrc___05F);
                unnamedblk267__DOT__found = (1U & __VlefExpr_28);
                if (unnamedblk267__DOT__found) {
                    VL_NULL_CHECK(unnamedblk267__DOT__unnamedblk268__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1795)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_29__read);
                    this->__PVT__recording_detail = (::IData)(__VlefCall_29__read);
                }
                if ((1U & (~ (::IData)(unnamedblk267__DOT__found)))) {
                    __VlefExpr_30 = VL_CAST_DYNAMIC(unnamedblk267__DOT__rsrc, unnamedblk267__DOT__unnamedblk269__DOT_____05Ftmp_rsrc___05F);
                    unnamedblk267__DOT__found = (1U 
                                                 & __VlefExpr_30);
                    if (unnamedblk267__DOT__found) {
                        VL_NULL_CHECK(unnamedblk267__DOT__unnamedblk269__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1795)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_31__read);
                        this->__PVT__recording_detail 
                            = __VlefCall_31__read[0U];
                    }
                }
                if ((1U & (~ (::IData)(unnamedblk267__DOT__found)))) {
                    __VlefExpr_32 = VL_CAST_DYNAMIC(unnamedblk267__DOT__rsrc, unnamedblk267__DOT__unnamedblk270__DOT_____05Ftmp_rsrc___05F);
                    unnamedblk267__DOT__found = (1U 
                                                 & __VlefExpr_32);
                    if (unnamedblk267__DOT__found) {
                        VL_NULL_CHECK(unnamedblk267__DOT__unnamedblk270__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1795)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}, __Vtask_read__Vfuncout_2498);
                        this->__PVT__recording_detail 
                            = __Vtask_read__Vfuncout_2498;
                    }
                }
                if ((1U & (~ (::IData)(unnamedblk267__DOT__found)))) {
                    __VlefExpr_33 = VL_CAST_DYNAMIC(unnamedblk267__DOT__rsrc, unnamedblk267__DOT__unnamedblk271__DOT_____05Ftmp_rsrc___05F);
                    unnamedblk267__DOT__found = (1U 
                                                 & __VlefExpr_33);
                    if (unnamedblk267__DOT__found) {
                        VL_NULL_CHECK(unnamedblk267__DOT__unnamedblk271__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1795)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}, this->__PVT__recording_detail);
                    }
                }
                __VlefLogAnd_35 = (1U & (~ (::IData)(unnamedblk267__DOT__found)));
                if (__VlefLogAnd_35) {
                    VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1797)->__VnoInFunc_size(vlSymsp, __VlefCall_34__size);
                    __VlefLogAnd_35 = VL_LTS_III(32, 0U, __VlefCall_34__size);
                }
            } while (__VlefLogAnd_35);
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_36__get_full_name);
        VL_NULL_CHECK(Vtb_top_uvm_pkg__03a__03auvm_report_object::__PVT__m_rh, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1800)->__VnoInFunc_set_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_36__get_full_name));
        VL_NULL_CHECK(parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1801)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, ""s, __VlefCall_37__get_report_verbosity_level);
        this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, __VlefCall_37__get_report_verbosity_level);
        {
            // Inlined CFunc: __VnoInFunc_m_set_cl_msg_args
            ::CData/*0:0*/ __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefLogAnd_3;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefCall_2__get_report_action;
            ::IData/*31:0*/ __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefCall_1__get_report_verbosity_level;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefCall_0__uvm_get_report_object;
            ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __Vinline_0___VnoInFunc_m_set_cl_msg_args_unnamedblk329__DOT___local_report_object_;
            ::std::string __Vinline_0___VnoInFunc_m_set_cl_msg_args_s_;
            ::VlClassRef<Vtb_top_std__03a__03aprocess> __Vinline_0___VnoInFunc_m_set_cl_msg_args_p_;
            __Vinline_0___VnoInFunc_m_set_cl_msg_args_s_ = ""s;
            vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_set_cl_msg_args_p_);
            if ((VlNull{} != __Vinline_0___VnoInFunc_m_set_cl_msg_args_p_)) {
                VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_set_cl_msg_args_p_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3566)->__VnoInFunc_get_randstate(vlSymsp, __Vinline_0___VnoInFunc_m_set_cl_msg_args_s_);
            } else {
                this->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefCall_0__uvm_get_report_object);
                VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3570)->__VnoInFunc_uvm_get_report_object(vlSymsp, __Vinline_0___VnoInFunc_m_set_cl_msg_args_unnamedblk329__DOT___local_report_object_);
                VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_set_cl_msg_args_unnamedblk329__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3570)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM"s, __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefCall_1__get_report_verbosity_level);
                __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefLogAnd_3 
                    = VL_LTES_III(32, 0U, __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefCall_1__get_report_verbosity_level);
                if (__Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefLogAnd_3) {
                    VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_set_cl_msg_args_unnamedblk329__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3570)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM"s, __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefCall_2__get_report_action);
                    __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefLogAnd_3 
                        = (0U != __Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefCall_2__get_report_action);
                }
                if (VL_UNLIKELY((__Vinline_0___VnoInFunc_m_set_cl_msg_args___VlefLogAnd_3))) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM"s, "run_test() invoked from a non process context"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x00000df2U, ""s, 1U);
                }
            }
            this->__VnoInFunc_m_set_cl_verb(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_action(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_sev(vlProcess, vlSymsp);
            if ((VlNull{} != __Vinline_0___VnoInFunc_m_set_cl_msg_args_p_)) {
                VL_NULL_CHECK(__Vinline_0___VnoInFunc_m_set_cl_msg_args_p_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3579)->__VnoInFunc_set_randstate(vlSymsp, __Vinline_0___VnoInFunc_m_set_cl_msg_args_s_);
            }
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> child, ::CData/*0:0*/ &m_add_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_16__get_name;
    ::std::string __VlefCall_15__get_name;
    ::std::string __VlefCall_14__get_name;
    ::CData/*0:0*/ __VlefLogAnd_13;
    ::IData/*31:0*/ __VlefCall_12__get_report_action;
    ::IData/*31:0*/ __VlefCall_11__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_10__uvm_get_report_object;
    ::std::string __VlefCall_9__get_type_name;
    ::std::string __VlefCall_8__get_name;
    ::std::string __VlefCall_7__get_name;
    ::CData/*0:0*/ __VlefLogAnd_6;
    ::IData/*31:0*/ __VlefCall_5__get_report_action;
    ::IData/*31:0*/ __VlefCall_4__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_3__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_2;
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk272__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk273__DOT___local_report_object_;
    {
        m_add_child__Vfuncrtn = 0U;
        VL_NULL_CHECK(child, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1813)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __VlefLogAnd_2 = (0U != this->__PVT__m_children.exists(__VlefCall_0__get_name));
        if (__VlefLogAnd_2) {
            VL_NULL_CHECK(child, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1814)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __VlefLogAnd_2 = (this->__PVT__m_children
                              .at(__VlefCall_1__get_name) 
                              != child);
        }
        if (__VlefLogAnd_2) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_3__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_3__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1817)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk272__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk272__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1817)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "BDCLD"s, __VlefCall_4__get_report_verbosity_level);
            __VlefLogAnd_6 = VL_LTES_III(32, 0U, __VlefCall_4__get_report_verbosity_level);
            if (__VlefLogAnd_6) {
                VL_NULL_CHECK(unnamedblk272__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1817)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "BDCLD"s, __VlefCall_5__get_report_action);
                __VlefLogAnd_6 = (0U != __VlefCall_5__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_6))) {
                VL_NULL_CHECK(child, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1817)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                VL_NULL_CHECK(child, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1817)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                VL_NULL_CHECK(this->__PVT__m_children
                              .at(__VlefCall_8__get_name), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1817)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCLD"s, VL_SFORMATF_N_NX("A child with the name '%0s' (type=%0s) already exists.",2
                                                                                , 'S',&(__VlefCall_7__get_name)
                                                                                , 'S',&(__VlefCall_9__get_type_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x00000719U, ""s, 1U);
            }
            m_add_child__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_children_by_handle.exists(child))) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_10__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_10__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1826)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk273__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk273__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1826)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "BDCHLD"s, __VlefCall_11__get_report_verbosity_level);
            __VlefLogAnd_13 = VL_LTES_III(32, 0U, __VlefCall_11__get_report_verbosity_level);
            if (__VlefLogAnd_13) {
                VL_NULL_CHECK(unnamedblk273__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1826)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "BDCHLD"s, __VlefCall_12__get_report_action);
                __VlefLogAnd_13 = (0U != __VlefCall_12__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_13))) {
                VL_NULL_CHECK(child, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1826)->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
                VL_NULL_CHECK(this->__PVT__m_children_by_handle
                              .at(child), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1826)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCHLD"s, VL_SFORMATF_N_NX("A child with the name '%0s' already exists in parent under name ' %0s'",2
                                                                                , 'S',&(__VlefCall_14__get_name)
                                                                                , 'S',&(__VlefCall_15__get_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x00000722U, ""s, 1U);
            }
            m_add_child__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(child, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1830)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
        this->__PVT__m_children.atWrite(__VlefCall_16__get_name) 
            = child;
        this->__PVT__m_children_by_handle.atWrite(child) 
            = child;
        m_add_child__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>> &children) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children\n"); );
    // Body
    ::std::string unnamedblk274__DOT__i;
    ::std::string unnamedblk274__DOT__i__Vnext;
    ::CData/*0:0*/ unnamedblk274__DOT__i__Vmore;
    unnamedblk274__DOT__i__Vmore = 0;
    unnamedblk274__DOT__i__Vmore = (0U != this->__PVT__m_children.first(unnamedblk274__DOT__i__Vnext));
    while (unnamedblk274__DOT__i__Vmore) {
        unnamedblk274__DOT__i = unnamedblk274__DOT__i__Vnext;
        unnamedblk274__DOT__i__Vmore = (0U != this->__PVT__m_children.next(unnamedblk274__DOT__i__Vnext));
        children.push_back(this->__PVT__m_children.at(unnamedblk274__DOT__i));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child(Vtb_top__Syms* __restrict vlSymsp, ::std::string &name, ::IData/*31:0*/ &get_first_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child\n"); );
    // Body
    get_first_child__Vfuncrtn = 0U;
    get_first_child__Vfuncrtn = this->__PVT__m_children.first(name);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child(Vtb_top__Syms* __restrict vlSymsp, ::std::string &name, ::IData/*31:0*/ &get_next_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child\n"); );
    // Body
    get_next_child__Vfuncrtn = 0U;
    get_next_child__Vfuncrtn = this->__PVT__m_children.next(name);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk275__DOT___local_report_object_;
    {
        if ((0U != this->__PVT__m_children.exists(name))) {
            get_child__Vfuncrtn = this->__PVT__m_children
                .at(name);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1882)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk275__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk275__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1882)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "NOCHILD"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk275__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1882)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "NOCHILD"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOCHILD"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Component with name '"s, name), "' is not a child of component '"s), __VlefCall_4__get_full_name), "'"s)), 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x0000075aU, ""s, 1U);
        }
        get_child__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::IData/*31:0*/ &has_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child\n"); );
    // Body
    has_child__Vfuncrtn = this->__PVT__m_children.exists(name);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_full_name__Vfuncrtn = ""s;
    if ((""s == this->__PVT__m_name)) {
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
    } else {
        get_full_name__Vfuncrtn = this->__PVT__m_name;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk276__DOT___local_report_object_;
    {
        if ((""s != this->__PVT__m_name)) {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1935)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk276__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk276__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1935)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "INVSTNM"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk276__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1935)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "INVSTNM"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "INVSTNM"s, VL_SFORMATF_N_NX("It is illegal to change the name of a component. The component name will not be changed to \"%s\"",1
                                                                                , 'S',&(name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x0000078fU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(vlProcess, vlSymsp, name);
        this->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_2__get_name;
    ::std::string __VlefCall_1__get_full_name;
    ::IData/*31:0*/ __VlefExpr_0;
    ::std::string unnamedblk277__DOT__c;
    ::std::string unnamedblk277__DOT__c__Vnext;
    ::CData/*0:0*/ unnamedblk277__DOT__c__Vmore;
    unnamedblk277__DOT__c__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> unnamedblk277__DOT__unnamedblk278__DOT__tmp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> top;
    __VlefExpr_0 = VL_CAST_DYNAMIC(this->__PVT__m_parent, top);
    if (((0U != __VlefExpr_0) || (VlNull{} == this->__PVT__m_parent))) {
        this->__VnoInFunc_get_name(vlSymsp, this->__PVT__m_name);
    } else {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1956)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
        this->__PVT__m_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), __VlefCall_2__get_name);
    }
    unnamedblk277__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk277__DOT__c__Vnext));
    while (unnamedblk277__DOT__c__Vmore) {
        unnamedblk277__DOT__c = unnamedblk277__DOT__c__Vnext;
        unnamedblk277__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk277__DOT__c__Vnext));
        unnamedblk277__DOT__unnamedblk278__DOT__tmp 
            = this->__PVT__m_children.at(unnamedblk277__DOT__c);
        VL_NULL_CHECK(unnamedblk277__DOT__unnamedblk278__DOT__tmp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 1963)->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk282__DOT__i;
    unnamedblk282__DOT__i = 0;
    {
        get_depth__Vfuncrtn = 0U;
        if ((""s == this->__PVT__m_name)) {
            get_depth__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_depth__Vfuncrtn = 1U;
        unnamedblk282__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk282__DOT__i, 
                          VL_LEN_IN(this->__PVT__m_name))) {
            if ((0x2eU == VL_GETC_N(this->__PVT__m_name,unnamedblk282__DOT__i))) {
                get_depth__Vfuncrtn = ((::IData)(1U) 
                                       + get_depth__Vfuncrtn);
            }
            unnamedblk282__DOT__i = ((::IData)(1U) 
                                     + unnamedblk282__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_flush(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_flush\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk284__DOT___local_report_object_;
    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2100)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk284__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk284__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2100)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "ILLCRT"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk284__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2100)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "ILLCRT"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCRT"s, "create cannot be called on a uvm_component. Use create_component instead."s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x00000834U, ""s, 1U);
    }
    create__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk285__DOT___local_report_object_;
    this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2109)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk285__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk285__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2109)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "ILLCLN"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk285__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2109)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "ILLCLN"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCLN"s, VL_SFORMATF_N_NX("Attempting to clone '%s'.  Clone cannot be called on a uvm_component.  The clone target variable will be set to null.",1
                                                                                , 'S',&(__VlefCall_4__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x0000083dU, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string unnamedblk295__DOT__c;
    ::std::string unnamedblk295__DOT__c__Vnext;
    ::CData/*0:0*/ unnamedblk295__DOT__c__Vmore;
    unnamedblk295__DOT__c__Vmore = 0;
    this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, verbosity);
    unnamedblk295__DOT__c__Vmore = (0U != this->__PVT__m_children.first(unnamedblk295__DOT__c__Vnext));
    while (unnamedblk295__DOT__c__Vmore) {
        unnamedblk295__DOT__c = unnamedblk295__DOT__c__Vnext;
        unnamedblk295__DOT__c__Vmore = (0U != this->__PVT__m_children.next(unnamedblk295__DOT__c__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk295__DOT__c), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2366)->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, verbosity);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_build(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_connect(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase\n"); );
    // Body
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase\n"); );
    // Body
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_report(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain\n"); );
    // Body
    get_domain__Vfuncrtn = this->__PVT__m_domain;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_resolve_bindings\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string unnamedblk303__DOT__s;
    ::std::string unnamedblk303__DOT__s__Vnext;
    ::CData/*0:0*/ unnamedblk303__DOT__s__Vmore;
    unnamedblk303__DOT__s__Vmore = 0;
    unnamedblk303__DOT__s__Vmore = (0U != this->__PVT__m_children.first(unnamedblk303__DOT__s__Vnext));
    while (unnamedblk303__DOT__s__Vmore) {
        unnamedblk303__DOT__s = unnamedblk303__DOT__s__Vnext;
        unnamedblk303__DOT__s__Vmore = (0U != this->__PVT__m_children.next(unnamedblk303__DOT__s__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk303__DOT__s), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2595)->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
    }
    this->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::std::string stream_name, ::std::string label, ::std::string desc, ::QData/*63:0*/ begin_time, ::IData/*31:0*/ parent_handle, ::IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    begin_tr__Vfuncrtn = 0U;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, tr, parent_handle, stream_name, label, desc, begin_time, begin_tr__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_database(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> &get_tr_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_database\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk308__DOT__cs;
    if ((VlNull{} == this->__PVT__tr_database)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk308__DOT__cs);
        VL_NULL_CHECK(unnamedblk308__DOT__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2760)->__VnoInFunc_get_default_tr_database(vlProcess, vlSymsp, this->__PVT__tr_database);
    }
    get_tr_database__Vfuncrtn = this->__PVT__tr_database;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_stream(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string stream_type_name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> &get_tr_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_stream\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_1__open_stream;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> db;
    this->__VnoInFunc_get_tr_database(vlProcess, vlSymsp, db);
    if ((1U & ((~ (0U != this->__PVT__m_streams.exists(name))) 
               | (~ (0U != this->__PVT__m_streams.at(name).exists(stream_type_name)))))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        VL_NULL_CHECK(db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2779)->__VnoInFunc_open_stream(vlProcess, vlSymsp, name, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), stream_type_name, __VlefCall_1__open_stream);
        this->__PVT__m_streams.atWrite(name).atWrite(stream_type_name) 
            = __VlefCall_1__open_stream;
    }
    get_tr_stream__Vfuncrtn = this->__PVT__m_streams
        .at(name).at(stream_type_name);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::IData/*31:0*/ parent_handle, ::std::string stream_name, ::std::string label, ::std::string desc, ::QData/*63:0*/ begin_time, ::IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr\n"); );
    // Locals
    ::VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCond_11;
    ::IData/*31:0*/ __VlefCall_10__get_handle;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_related_link> __VlefCall_9__get_link;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_parent_child_link> __VlefCall_8__get_link;
    ::CData/*0:0*/ __VlefCall_7__get_recording_enabled;
    ::std::string __VlefCall_6__get_name;
    ::IData/*31:0*/ __VlefCall_5__get_handle;
    ::IData/*31:0*/ __VlefExpr_4;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk309__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk310__DOT__seq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk310__DOT__unnamedblk311__DOT__parent_seq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> e;
    ::std::string name;
    ::std::string kind;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> db;
    ::IData/*31:0*/ handle;
    ::IData/*31:0*/ link_handle;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> stream;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> parent_recorder;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> link_recorder;
    {
        m_begin_tr__Vfuncrtn = 0U;
        name = ""s;
        kind = ""s;
        handle = 0U;
        link_handle = 0U;
        if ((VlNull{} == tr)) {
            m_begin_tr__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_tr_database(vlProcess, vlSymsp, db);
        if ((0U != parent_handle)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, parent_handle, parent_recorder);
            if ((VlNull{} == parent_recorder)) {
                this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
                VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2852)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk309__DOT___local_report_object_);
                VL_NULL_CHECK(unnamedblk309__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2852)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "ILLHNDL"s, __VlefCall_1__get_report_verbosity_level);
                __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
                if (__VlefLogAnd_3) {
                    VL_NULL_CHECK(unnamedblk309__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2852)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "ILLHNDL"s, __VlefCall_2__get_report_action);
                    __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
                }
                if (VL_UNLIKELY((__VlefLogAnd_3))) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLHNDL"s, "begin_tr was passed a non-0 parent handle that corresponds to a null recorder"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x00000b24U, ""s, 1U);
                }
            }
        } else {
            __VlefExpr_4 = VL_CAST_DYNAMIC(tr, unnamedblk310__DOT__seq);
            if ((0U != __VlefExpr_4)) {
                VL_NULL_CHECK(unnamedblk310__DOT__seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2859)->__VnoInFunc_get_parent_sequence(vlSymsp, unnamedblk310__DOT__unnamedblk311__DOT__parent_seq);
                if ((VlNull{} != unnamedblk310__DOT__unnamedblk311__DOT__parent_seq)) {
                    parent_recorder = VL_NULL_CHECK(unnamedblk310__DOT__unnamedblk311__DOT__parent_seq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2861)
                        ->__PVT__m_tr_recorder;
                }
            }
        }
        if ((VlNull{} != parent_recorder)) {
            VL_NULL_CHECK(parent_recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2867)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_5__get_handle);
            VL_NULL_CHECK(tr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2867)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, begin_time, __VlefCall_5__get_handle, link_handle);
        } else {
            VL_NULL_CHECK(tr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2870)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, begin_time, 0U, link_handle);
        }
        if ((0U != link_handle)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, link_handle, link_recorder);
        }
        VL_NULL_CHECK(tr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2880)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
        if ((""s != __VlefCall_6__get_name)) {
            VL_NULL_CHECK(tr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2882)->__VnoInFunc_get_name(vlSymsp, name);
        } else {
            VL_NULL_CHECK(tr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2887)->__VnoInFunc_get_type_name(vlSymsp, name);
        }
        this->__VnoInFunc_get_recording_enabled(vlSymsp, __VlefCall_7__get_recording_enabled);
        if (__VlefCall_7__get_recording_enabled) {
            if ((""s == stream_name)) {
                stream_name = "main"s;
            }
            this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, "TVM"s, stream);
            if ((VlNull{} != stream)) {
                if ((VlNull{} == parent_recorder)) {
                    __Vtemp_1[0U] = 0x4c696e6bU;
                    __Vtemp_1[1U] = 0x6e742c20U;
                    __Vtemp_1[2U] = 0x50617265U;
                    __Vtemp_1[3U] = 0x5f4e6f5fU;
                    __Vtemp_1[4U] = 0x6567696eU;
                    __Vtemp_1[5U] = 0x00000042U;
                } else {
                    __Vtemp_1[0U] = 0x4c696e6bU;
                    __Vtemp_1[1U] = 0x6e642c20U;
                    __Vtemp_1[2U] = 0x696e5f45U;
                    __Vtemp_1[3U] = 0x00426567U;
                    __Vtemp_1[4U] = 0U;
                    __Vtemp_1[5U] = 0U;
                }
                kind = VL_CVT_PACK_STR_NW(6, __Vtemp_1);
                VL_NULL_CHECK(stream, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2903)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, name, begin_time, kind, recorder);
                if ((VlNull{} != recorder)) {
                    if ((""s != label)) {
                        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2908)->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                    }
                    if ((""s != desc)) {
                        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2913)->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                    }
                    if ((VlNull{} != parent_recorder)) {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_parent_child_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, parent_recorder, recorder, "pc_link"s, __VlefCall_8__get_link);
                        VL_NULL_CHECK(this->__PVT__tr_database, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2918)->__VnoInFunc_establish_link(vlProcess, vlSymsp, __VlefCall_8__get_link);
                    }
                    if ((VlNull{} != link_recorder)) {
                        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_related_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, recorder, link_recorder, "ce_link"s, __VlefCall_9__get_link);
                        VL_NULL_CHECK(this->__PVT__tr_database, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2923)->__VnoInFunc_establish_link(vlProcess, vlSymsp, __VlefCall_9__get_link);
                    }
                    this->__PVT__m_tr_h.atWrite(tr) 
                        = recorder;
                }
            }
            if ((VlNull{} == recorder)) {
                __VlefCond_11 = 0U;
            } else {
                VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2930)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_10__get_handle);
                __VlefCond_11 = __VlefCall_10__get_handle;
            }
            handle = __VlefCond_11;
        }
        this->__VnoInFunc_do_begin_tr(vlSymsp, tr, stream_name, handle);
        VL_NULL_CHECK(this->__PVT__event_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2935)->__VnoInFunc_get(vlProcess, vlSymsp, "begin_tr"s, e);
        if ((VlNull{} != e)) {
            VL_NULL_CHECK(e, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2938)->__VnoInFunc_trigger(vlProcess, vlSymsp, tr);
        }
        m_begin_tr__Vfuncrtn = handle;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::QData/*63:0*/ end_time, ::CData/*0:0*/ free_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCond_2;
    ::IData/*31:0*/ __VlefCall_1__get_handle;
    ::CData/*0:0*/ __VlefCall_0__get_recording_enabled;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_event_> e;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder;
    {
        if ((VlNull{} == tr)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(tr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2962)->__VnoInFunc_end_tr(vlProcess, vlSymsp, end_time, (::IData)(free_handle));
        this->__VnoInFunc_get_recording_enabled(vlSymsp, __VlefCall_0__get_recording_enabled);
        if (__VlefCall_0__get_recording_enabled) {
            if ((0U != this->__PVT__m_tr_h.exists(tr))) {
                recorder = this->__PVT__m_tr_h.at(tr);
            }
        }
        if ((VlNull{} == recorder)) {
            __VlefCond_2 = 0U;
        } else {
            VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2970)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
            __VlefCond_2 = __VlefCall_1__get_handle;
        }
        this->__VnoInFunc_do_end_tr(vlSymsp, tr, __VlefCond_2);
        if ((VlNull{} != recorder)) {
            this->__PVT__m_tr_h.erase(tr);
            VL_NULL_CHECK(tr, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2975)->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
            VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2977)->__VnoInFunc_close(vlSymsp, end_time);
            if (free_handle) {
                VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2981)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
            }
        }
        VL_NULL_CHECK(this->__PVT__event_pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2986)->__VnoInFunc_get(vlProcess, vlSymsp, "end_tr"s, e);
        if ((VlNull{} != e)) {
            VL_NULL_CHECK(e, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 2989)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::std::string stream_name, ::IData/*31:0*/ tr_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_transaction> tr, ::IData/*31:0*/ tr_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings_mode(Vtb_top__Syms* __restrict vlSymsp, ::CData/*1:0*/ &apply_config_settings_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings_mode\n"); );
    // Body
    apply_config_settings_mode__Vfuncrtn = 2U;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_use_automatic_config(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &use_automatic_config__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_use_automatic_config\n"); );
    // Body
    use_automatic_config__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ verbose) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings\n"); );
    // Locals
    ::std::string __Vtemp_1;
    ::std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_21__get_name;
    ::IData/*31:0*/ __VlefCall_20__size;
    ::IData/*31:0*/ __VlefCall_19__get_precedence;
    ::std::string __VlefCall_18__get_name;
    ::IData/*31:0*/ __VlefCall_17__get_precedence;
    ::std::string __VlefCall_16__get_name;
    ::IData/*31:0*/ __VlefCall_15__get_precedence;
    ::std::string __VlefCall_14__get_name;
    ::IData/*31:0*/ __VlefCall_13__get_precedence;
    ::IData/*31:0*/ __VlefCall_12__get_precedence;
    ::IData/*31:0*/ __VlefCall_11__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> __VlefCall_10__new;
    ::IData/*31:0*/ __VlefCall_9__size;
    ::std::string __VlefCall_8__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> __VlefCall_7__new;
    ::IData/*31:0*/ __VlefCall_6__size;
    ::IData/*31:0*/ __VlefCall_5__size;
    ::std::string __VlefCall_4__get_full_name;
    ::IData/*31:0*/ __VlefCall_3__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> __VlefCall_2__lookup_name;
    ::std::string __VlefCall_1__get_full_name;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tz613e3271> unnamedblk312__DOT__names;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> unnamedblk312__DOT__op;
    Vtb_top_uvm_acs_name_struct__struct__0 unnamedblk312__DOT__unnamedblk313__DOT__s;
    ::IData/*31:0*/ unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__iter;
    ::std::string unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__r_name;
    ::std::string unnamedblk316__DOT__name;
    ::IData/*31:0*/ unnamedblk317__DOT__iter;
    unnamedblk317__DOT__iter = 0;
    ::IData/*31:0*/ unnamedblk317__DOT__iter__Vloopsize;
    unnamedblk317__DOT__iter__Vloopsize = 0;
    ::VlAssocArray<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base>, ::IData/*31:0*/> unnamedblk317__DOT__unnamedblk318__DOT__precedence_by_handle;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> unnamedblk317__DOT__unnamedblk318__DOT__type_handle;
    ::IData/*31:0*/ unnamedblk317__DOT__unnamedblk318__DOT__idx;
    ::IData/*31:0*/ unnamedblk317__DOT__unnamedblk319__DOT__i;
    ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b>> all;
    ::VlQueue<::std::string> name_order;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> rq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> r;
    ::CData/*1:0*/ mode;
    all.clear();
    name_order.clear();
    name_order.atDefault().clear();
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    mode = 0U;
    this->__VnoInFunc_apply_config_settings_mode(vlSymsp, mode);
    if ((0U != (2U & (::IData)(mode)))) {
        unnamedblk312__DOT__names = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tz613e3271, vlProcess, vlSymsp, "names"s);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, unnamedblk312__DOT__op);
        VL_NULL_CHECK(unnamedblk312__DOT__op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3259)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00080002U, VlNull{}, unnamedblk312__DOT__names);
        this->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, unnamedblk312__DOT__op);
        VL_NULL_CHECK(unnamedblk312__DOT__op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3261)->__VnoInFunc_m_recycle(vlSymsp);
        while (true) {
            VL_NULL_CHECK(unnamedblk312__DOT__names, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3263)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!((0U != __VlefCall_0__size))) break;
            unnamedblk312__DOT__unnamedblk313__DOT__s.__PVT__name.clear();
            unnamedblk312__DOT__unnamedblk313__DOT__s.__PVT__regex.clear();
            VL_NULL_CHECK(unnamedblk312__DOT__names, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3265)->__VnoInFunc_pop_front(vlSymsp, unnamedblk312__DOT__unnamedblk313__DOT__s);
            if ((""s != unnamedblk312__DOT__unnamedblk313__DOT__s
                 .__PVT__name)) {
                name_order.push_back(unnamedblk312__DOT__unnamedblk313__DOT__s
                                     .__PVT__name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3276)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk312__DOT__unnamedblk313__DOT__s
                                                                                .__PVT__name), VlNull{}, 0U, __VlefCall_2__lookup_name);
                all.atWrite(unnamedblk312__DOT__unnamedblk313__DOT__s
                            .__PVT__name) = __VlefCall_2__lookup_name;
                if (VL_UNLIKELY((verbose))) {
                    VL_NULL_CHECK(all.at(unnamedblk312__DOT__unnamedblk313__DOT__s
                                         .__PVT__name), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3282)->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
                    __Vtemp_1 = unnamedblk312__DOT__unnamedblk313__DOT__s
                        .__PVT__name;
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("looking up configuration for field %s (%0d resources)",2
                                                                                , 'S',&(__Vtemp_1)
                                                                                , '~',32,__VlefCall_3__size) , 0U, ""s, 0U, ""s, 0U);
                }
            }
            if ((""s != unnamedblk312__DOT__unnamedblk313__DOT__s
                 .__PVT__regex)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3288)->__VnoInFunc_lookup_regex(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk312__DOT__unnamedblk313__DOT__s
                                                                                .__PVT__regex), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rq);
                if (VL_UNLIKELY((verbose))) {
                    VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3292)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
                    __Vtemp_2 = unnamedblk312__DOT__unnamedblk313__DOT__s
                        .__PVT__regex;
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("looking up configuration for regex field %s (%0d resources)",2
                                                                                , 'S',&(__Vtemp_2)
                                                                                , '~',32,__VlefCall_5__size) , 0U, ""s, 0U, ""s, 0U);
                }
                unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__iter = 0U;
                unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__iter = 0U;
                while (true) {
                    VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3298)->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
                    if (!(VL_LTS_III(32, unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__iter, __VlefCall_6__size))) break;
                    unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__r_name = ""s;
                    VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3300)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__iter, r);
                    VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3301)->__VnoInFunc_get_name(vlSymsp, unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__r_name);
                    if ((1U & (~ (0U != all.exists(unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__r_name))))) {
                        __VlefCall_7__new = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b, vlProcess, vlSymsp, unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__r_name);
                        all.atWrite(unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__r_name) 
                            = __VlefCall_7__new;
                        name_order.push_back(unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__r_name);
                    }
                    VL_NULL_CHECK(all.at(unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__unnamedblk315__DOT__r_name), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3306)->__VnoInFunc_push_back(vlSymsp, r);
                    unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__iter 
                        = ((::IData)(1U) + unnamedblk312__DOT__unnamedblk313__DOT__unnamedblk314__DOT__iter);
                }
            }
        }
    } else {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
        VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3313)->__VnoInFunc_lookup_scope(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_8__get_full_name), rq);
        while (true) {
            VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3314)->__VnoInFunc_size(vlSymsp, __VlefCall_9__size);
            if (!((0U != __VlefCall_9__size))) break;
            unnamedblk316__DOT__name = ""s;
            VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3316)->__VnoInFunc_pop_front(vlSymsp, r);
            VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3317)->__VnoInFunc_get_name(vlSymsp, unnamedblk316__DOT__name);
            if ((1U & (~ (0U != all.exists(unnamedblk316__DOT__name))))) {
                name_order.push_back(unnamedblk316__DOT__name);
                __VlefCall_10__new = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b, vlProcess, vlSymsp, unnamedblk316__DOT__name);
                all.atWrite(unnamedblk316__DOT__name) 
                    = __VlefCall_10__new;
            }
            VL_NULL_CHECK(all.at(unnamedblk316__DOT__name), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3322)->__VnoInFunc_push_back(vlSymsp, r);
        }
    }
    unnamedblk317__DOT__iter = 0U;
    while (VL_LTS_III(32, unnamedblk317__DOT__iter, name_order.size())) {
        unnamedblk317__DOT__iter__Vloopsize = name_order.size();
        rq = all.at(name_order.at(unnamedblk317__DOT__iter));
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
        if ((0U != (1U & (::IData)(mode)))) {
            unnamedblk317__DOT__unnamedblk318__DOT__precedence_by_handle.clear();
            unnamedblk317__DOT__unnamedblk318__DOT__precedence_by_handle.atDefault() = 0;
            unnamedblk317__DOT__unnamedblk318__DOT__idx = 0U;
            while (true) {
                VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3344)->__VnoInFunc_size(vlSymsp, __VlefCall_11__size);
                if (!(VL_LTS_III(32, unnamedblk317__DOT__unnamedblk318__DOT__idx, __VlefCall_11__size))) break;
                VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3345)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk317__DOT__unnamedblk318__DOT__idx, r);
                VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3346)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, unnamedblk317__DOT__unnamedblk318__DOT__type_handle);
                if ((VlNull{} == unnamedblk317__DOT__unnamedblk318__DOT__type_handle)) {
                    unnamedblk317__DOT__unnamedblk318__DOT__idx 
                        = ((::IData)(1U) + unnamedblk317__DOT__unnamedblk318__DOT__idx);
                } else if ((0U != unnamedblk317__DOT__unnamedblk318__DOT__precedence_by_handle.exists(unnamedblk317__DOT__unnamedblk318__DOT__type_handle))) {
                    VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3362)->__VnoInFunc_get_precedence(vlProcess, vlSymsp, r, __VlefCall_12__get_precedence);
                    if ((__VlefCall_12__get_precedence 
                         < unnamedblk317__DOT__unnamedblk318__DOT__precedence_by_handle
                         .at(unnamedblk317__DOT__unnamedblk318__DOT__type_handle))) {
                        if (VL_UNLIKELY((verbose))) {
                            VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3365)->__VnoInFunc_get_precedence(vlProcess, vlSymsp, r, __VlefCall_13__get_precedence);
                            VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3365)->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("skipping low precedence (%0d<%0d) configuration to field %s",3
                                                                                , '#',32,__VlefCall_13__get_precedence
                                                                                , '#',32,unnamedblk317__DOT__unnamedblk318__DOT__precedence_by_handle
                                                                                .at(unnamedblk317__DOT__unnamedblk318__DOT__type_handle)
                                                                                , 'S',&(__VlefCall_14__get_name)) , 0U, ""s, 0U, ""s, 0U);
                        }
                        VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3368)->__VnoInFunc_delete(vlProcess, vlSymsp, unnamedblk317__DOT__unnamedblk318__DOT__idx);
                    } else {
                        if (VL_UNLIKELY((verbose))) {
                            VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3373)->__VnoInFunc_get_precedence(vlProcess, vlSymsp, r, __VlefCall_15__get_precedence);
                            VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3373)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("found matching high precedence (%0d) configuration to field %s",2
                                                                                , '#',32,__VlefCall_15__get_precedence
                                                                                , 'S',&(__VlefCall_16__get_name)) , 0U, ""s, 0U, ""s, 0U);
                        }
                        unnamedblk317__DOT__unnamedblk318__DOT__idx 
                            = ((::IData)(1U) + unnamedblk317__DOT__unnamedblk318__DOT__idx);
                    }
                } else {
                    if (VL_UNLIKELY((verbose))) {
                        VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3355)->__VnoInFunc_get_precedence(vlProcess, vlSymsp, r, __VlefCall_17__get_precedence);
                        VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3355)->__VnoInFunc_get_name(vlSymsp, __VlefCall_18__get_name);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("found high precedence (%0d) configuration to field %s",2
                                                                                , '#',32,__VlefCall_17__get_precedence
                                                                                , 'S',&(__VlefCall_18__get_name)) , 0U, ""s, 0U, ""s, 0U);
                    }
                    VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3358)->__VnoInFunc_get_precedence(vlProcess, vlSymsp, r, __VlefCall_19__get_precedence);
                    unnamedblk317__DOT__unnamedblk318__DOT__precedence_by_handle.atWrite(unnamedblk317__DOT__unnamedblk318__DOT__type_handle) 
                        = __VlefCall_19__get_precedence;
                    unnamedblk317__DOT__unnamedblk318__DOT__idx 
                        = ((::IData)(1U) + unnamedblk317__DOT__unnamedblk318__DOT__idx);
                }
            }
        }
        unnamedblk317__DOT__unnamedblk319__DOT__i = 0U;
        VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3383)->__VnoInFunc_size(vlSymsp, __VlefCall_20__size);
        unnamedblk317__DOT__unnamedblk319__DOT__i = 
            (__VlefCall_20__size - (::IData)(1U));
        while (VL_LTES_III(32, 0U, unnamedblk317__DOT__unnamedblk319__DOT__i)) {
            VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3384)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk317__DOT__unnamedblk319__DOT__i, r);
            if (VL_UNLIKELY((verbose))) {
                VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3388)->__VnoInFunc_get_name(vlSymsp, __VlefCall_21__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("applying configuration to field %s",1
                                                                                , 'S',&(__VlefCall_21__get_name)) , 0U, ""s, 0U, ""s, 0U);
            }
            this->__VnoInFunc_set_local(vlProcess, vlSymsp, r);
            unnamedblk317__DOT__unnamedblk319__DOT__i 
                = (unnamedblk317__DOT__unnamedblk319__DOT__i 
                   - (::IData)(1U));
        }
        if ((unnamedblk317__DOT__iter__Vloopsize <= name_order.size())) {
            unnamedblk317__DOT__iter = ((::IData)(1U) 
                                        + unnamedblk317__DOT__iter);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_recording_enabled(Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_recording_enabled\n"); );
    // Body
    get_recording_enabled__Vfuncrtn = (0U != this->__PVT__recording_detail);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if ((0U != this->__PVT__recording_detail)) {
        if ((0x00000064U == this->__PVT__recording_detail)) {
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3463)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_LOW"s, 0x2eU);
        } else if ((0x000000c8U == this->__PVT__recording_detail)) {
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3468)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_MEDIUM"s, 0x2eU);
        } else if ((0x0000012cU == this->__PVT__recording_detail)) {
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3473)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_HIGH"s, 0x2eU);
        } else if ((0x00000190U == this->__PVT__recording_detail)) {
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3478)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_FULL"s, 0x2eU);
        } else {
            VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3483)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "recording_detail"s, (::QData)((::IData)(this->__PVT__recording_detail)), 0x00000020U, 0x02000000U, 0x2eU, "integral"s);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_execute_op\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_get_first_child__Vfuncout_1248;
    __Vfunc_get_first_child__Vfuncout_1248 = 0;
    ::IData/*31:0*/ __Vfunc_get_next_child__Vfuncout_1249;
    __Vfunc_get_next_child__Vfuncout_1249 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_8;
    ::IData/*31:0*/ __VlefCall_7__get_report_action;
    ::IData/*31:0*/ __VlefCall_6__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_5__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_4__get_next_child;
    ::IData/*31:0*/ __VlefCall_3__get_first_child;
    ::IData/*31:0*/ __VlefExpr_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_policy> __VlefCall_1__get_policy;
    ::IData/*27:0*/ __VlefCall_0__get_op_type;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> unnamedblk323__DOT__child_comp;
    ::std::string unnamedblk323__DOT__name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> unnamedblk323__DOT__printer;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk323__DOT__unnamedblk324__DOT___local_report_object_;
    VL_NULL_CHECK(op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3494)->__VnoInFunc_get_op_type(vlProcess, vlSymsp, __VlefCall_0__get_op_type);
    if ((0x00000010U == __VlefCall_0__get_op_type)) {
        unnamedblk323__DOT__name = ""s;
        VL_NULL_CHECK(op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3499)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_1__get_policy);
        __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get_policy, unnamedblk323__DOT__printer);
        if ((0U != __VlefExpr_2)) {
            this->__VnoInFunc_get_first_child(vlSymsp, unnamedblk323__DOT__name, __Vfunc_get_first_child__Vfuncout_1248);
            __VlefCall_3__get_first_child = __Vfunc_get_first_child__Vfuncout_1248;
            if ((0U != __VlefCall_3__get_first_child)) {
                do {
                    this->__VnoInFunc_get_child(vlProcess, vlSymsp, unnamedblk323__DOT__name, unnamedblk323__DOT__child_comp);
                    if (VL_NULL_CHECK(unnamedblk323__DOT__child_comp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3506)
                        ->__PVT__print_enabled) {
                        VL_NULL_CHECK(unnamedblk323__DOT__printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3508)->__VnoInFunc_print_object(vlProcess, vlSymsp, unnamedblk323__DOT__name, unnamedblk323__DOT__child_comp, 0x2eU);
                    }
                    this->__VnoInFunc_get_next_child(vlSymsp, unnamedblk323__DOT__name, __Vfunc_get_next_child__Vfuncout_1249);
                    __VlefCall_4__get_next_child = __Vfunc_get_next_child__Vfuncout_1249;
                } while ((0U != __VlefCall_4__get_next_child));
            }
        } else {
            this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_5__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_5__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3500)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk323__DOT__unnamedblk324__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk323__DOT__unnamedblk324__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3500)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "INVPRINTOP"s, __VlefCall_6__get_report_verbosity_level);
            __VlefLogAnd_8 = VL_LTES_III(32, 0U, __VlefCall_6__get_report_verbosity_level);
            if (__VlefLogAnd_8) {
                VL_NULL_CHECK(unnamedblk323__DOT__unnamedblk324__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3500)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "INVPRINTOP"s, __VlefCall_7__get_report_action);
                __VlefLogAnd_8 = (0U != __VlefCall_7__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_8))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "INVPRINTOP"s, "do_execute_op() called with a field_op that has op_type UVM_PRINT but a policy that does not derive from uvm_printer"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x00000dacU, ""s, 1U);
            }
        }
    }
    Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(vlProcess, vlSymsp, op);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_local(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_local\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_read__Vfuncout_2499;
    __Vtask_read__Vfuncout_2499 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefExpr_7;
    ::IData/*31:0*/ __VlefExpr_6;
    ::VlWide<128>/*4095:0*/ __VlefCall_5__read;
    ::IData/*31:0*/ __VlefExpr_4;
    ::QData/*63:0*/ __VlefCall_3__read;
    ::IData/*31:0*/ __VlefExpr_2;
    ::CData/*0:0*/ __VlefLogAnd_1;
    ::std::string __VlefCall_0__get_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzb939a3ab> unnamedblk325__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> unnamedblk326__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_> unnamedblk327__DOT_____05Ftmp_rsrc___05F;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tza70e6849> unnamedblk328__DOT_____05Ftmp_rsrc___05F;
    ::CData/*0:0*/ success;
    success = 0U;
    __VlefLogAnd_1 = (VlNull{} != rsrc);
    if (__VlefLogAnd_1) {
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3526)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __VlefLogAnd_1 = ("recording_detail"s == __VlefCall_0__get_name);
    }
    if (__VlefLogAnd_1) {
        __VlefExpr_2 = VL_CAST_DYNAMIC(rsrc, unnamedblk325__DOT_____05Ftmp_rsrc___05F);
        success = (1U & __VlefExpr_2);
        if (success) {
            VL_NULL_CHECK(unnamedblk325__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3530)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_3__read);
            this->__PVT__recording_detail = (::IData)(__VlefCall_3__read);
        }
        if ((1U & (~ (::IData)(success)))) {
            __VlefExpr_4 = VL_CAST_DYNAMIC(rsrc, unnamedblk326__DOT_____05Ftmp_rsrc___05F);
            success = (1U & __VlefExpr_4);
            if (success) {
                VL_NULL_CHECK(unnamedblk326__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3530)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_5__read);
                this->__PVT__recording_detail = __VlefCall_5__read[0U];
            }
        }
        if ((1U & (~ (::IData)(success)))) {
            __VlefExpr_6 = VL_CAST_DYNAMIC(rsrc, unnamedblk327__DOT_____05Ftmp_rsrc___05F);
            success = (1U & __VlefExpr_6);
            if (success) {
                VL_NULL_CHECK(unnamedblk327__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3530)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}, __Vtask_read__Vfuncout_2499);
                this->__PVT__recording_detail = __Vtask_read__Vfuncout_2499;
            }
        }
        if ((1U & (~ (::IData)(success)))) {
            __VlefExpr_7 = VL_CAST_DYNAMIC(rsrc, unnamedblk328__DOT_____05Ftmp_rsrc___05F);
            success = (1U & __VlefExpr_7);
            if (success) {
                VL_NULL_CHECK(unnamedblk328__DOT_____05Ftmp_rsrc___05F, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3530)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}, this->__PVT__recording_detail);
            }
        }
    }
    if ((1U & (~ (::IData)(success)))) {
        Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_local(vlProcess, vlSymsp, rsrc);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk329__DOT___local_report_object_;
    ::std::string s_;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> p_;
    s_ = ""s;
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p_);
    if ((VlNull{} != p_)) {
        VL_NULL_CHECK(p_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3566)->__VnoInFunc_get_randstate(vlSymsp, s_);
    } else {
        this->__VnoInFunc_uvm_get_report_object(vlSymsp, __VlefCall_0__uvm_get_report_object);
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3570)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk329__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk329__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3570)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 1U, "UVM"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk329__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3570)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 1U, "UVM"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM"s, "run_test() invoked from a non process context"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh"s, 0x00000df2U, ""s, 1U);
        }
    }
    this->__VnoInFunc_m_set_cl_verb(vlProcess, vlSymsp);
    this->__VnoInFunc_m_set_cl_action(vlProcess, vlSymsp);
    this->__VnoInFunc_m_set_cl_sev(vlProcess, vlSymsp);
    if ((VlNull{} != p_)) {
        VL_NULL_CHECK(p_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3579)->__VnoInFunc_set_randstate(vlSymsp, s_);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1252;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1252 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_1253;
    __Vfunc_uvm_re_match__Vfuncout_1253 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_1257;
    __Vfunc_uvm_re_match____Vincrement1_1257 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_1__uvm_is_match;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk330__DOT__i;
    unnamedblk330__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk330__DOT__i__Vloopsize;
    unnamedblk330__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity> unnamedblk330__DOT__unnamedblk331__DOT__setting;
    unnamedblk330__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk330__DOT__i, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.size())) {
        unnamedblk330__DOT__i__Vloopsize = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.size();
        unnamedblk330__DOT__unnamedblk331__DOT__setting 
            = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.at(unnamedblk330__DOT__i);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__Vfunc_uvm_is_match__str_1251 = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
        this->__Vfunc_uvm_is_match__expr_1250 = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3598)
                                                                   ->__PVT__comp);
        this->__Vfunc_uvm_re_match__str_1255 = this->__Vfunc_uvm_is_match__str_1251;
        this->__Vfunc_uvm_re_match__re_1254 = this->__Vfunc_uvm_is_match__expr_1250;
        __Vfunc_uvm_re_match____Vincrement1_1257 = 0U;
        {
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
            if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1254))) {
                __Vfunc_uvm_re_match__Vfuncout_1253 = 0U;
                goto __Vlabel0;
            }
            if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1254,0U))) {
                this->__Vfunc_uvm_re_match__re_1254 
                    = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_1254,1U,
                                  (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1254) 
                                   - (::IData)(1U)));
            }
            while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                     != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1255)) 
                    & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1254,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1254,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                      != VL_GETC_N(this->__Vfunc_uvm_re_match__str_1255,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1254,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    __Vfunc_uvm_re_match__Vfuncout_1253 = 1U;
                    goto __Vlabel0;
                }
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
            }
            while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1255))) {
                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1254,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                         == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1254))) {
                        __Vfunc_uvm_re_match__Vfuncout_1253 = 0U;
                        goto __Vlabel0;
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1254,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                             == VL_GETC_N(this->__Vfunc_uvm_re_match__str_1255,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                            | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1254,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                } else {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                    __Vfunc_uvm_re_match____Vincrement1_1257 
                        = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = __Vfunc_uvm_re_match____Vincrement1_1257;
                }
            }
            while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                               VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1254)) 
                    & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1254,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
            }
            __Vfunc_uvm_re_match__Vfuncout_1253 = (
                                                   (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    == 
                                                    VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1254))
                                                    ? 0U
                                                    : 1U);
            __Vlabel0: ;
        }
        __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1252 
            = __Vfunc_uvm_re_match__Vfuncout_1253;
        __VlefCall_1__uvm_is_match = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1252);
        if (__VlefCall_1__uvm_is_match) {
            if ((((""s == VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3599)
                   ->__PVT__phase) || ("build"s == VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3599)
                                       ->__PVT__phase)) 
                 || (("time"s == VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3600)
                      ->__PVT__phase) && (0ULL == VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3600)
                                          ->__PVT__offset)))) {
                VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3602)->__PVT__used.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}) = 1U;
                if (("_ALL_"s == VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3603)
                     ->__PVT__id)) {
                    this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3605)
                                                                 ->__PVT__verbosity);
                } else {
                    this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                              VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3610)
                                                                                ->__PVT__id), VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3610)
                                                              ->__PVT__verbosity);
                }
            } else {
                VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3615)->__PVT__used.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}) = 0U;
                if (("time"s != VL_NULL_CHECK(unnamedblk330__DOT__unnamedblk331__DOT__setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3616)
                     ->__PVT__phase)) {
                    this->__PVT__m_verbosity_settings.push_back(unnamedblk330__DOT__unnamedblk331__DOT__setting);
                }
            }
        }
        if ((unnamedblk330__DOT__i__Vloopsize <= vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_verbosity__Vclpkg.__Vnontrivs.__PVT__settings.size())) {
            unnamedblk330__DOT__i = ((::IData)(1U) 
                                     + unnamedblk330__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1260;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1260 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_1261;
    __Vfunc_uvm_re_match__Vfuncout_1261 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_1265;
    __Vfunc_uvm_re_match____Vincrement1_1265 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_1__uvm_is_match;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk332__DOT__i;
    unnamedblk332__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk332__DOT__i__Vloopsize;
    unnamedblk332__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_action> setting;
    unnamedblk332__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk332__DOT__i, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__Vnontrivs.__PVT__settings.size())) {
        unnamedblk332__DOT__i__Vloopsize = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__Vnontrivs.__PVT__settings.size();
        {
            setting = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__Vnontrivs.__PVT__settings.at(unnamedblk332__DOT__i);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__Vfunc_uvm_is_match__str_1259 = 
                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
            this->__Vfunc_uvm_is_match__expr_1258 = 
                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3637)
                                   ->__PVT__comp);
            this->__Vfunc_uvm_re_match__str_1263 = this->__Vfunc_uvm_is_match__str_1259;
            this->__Vfunc_uvm_re_match__re_1262 = this->__Vfunc_uvm_is_match__expr_1258;
            __Vfunc_uvm_re_match____Vincrement1_1265 = 0U;
            {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1262))) {
                    __Vfunc_uvm_re_match__Vfuncout_1261 = 0U;
                    goto __Vlabel1;
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1262,0U))) {
                    this->__Vfunc_uvm_re_match__re_1262 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_1262,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1262) 
                                       - (::IData)(1U)));
                }
                while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1263)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1262,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1262,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__str_1263,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1262,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__Vfuncout_1261 = 1U;
                        goto __Vlabel1;
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                }
                while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1263))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1262,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1262))) {
                            __Vfunc_uvm_re_match__Vfuncout_1261 = 0U;
                            goto __Vlabel1;
                        }
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1262,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__str_1263,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1262,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match____Vincrement1_1265 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match____Vincrement1_1265;
                    }
                }
                while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1262)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1262,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                }
                __Vfunc_uvm_re_match__Vfuncout_1261 
                    = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1262))
                        ? 0U : 1U);
                __Vlabel1: ;
            }
            __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1260 
                = __Vfunc_uvm_re_match__Vfuncout_1261;
            __VlefCall_1__uvm_is_match = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1260);
            if ((1U & (~ (::IData)(__VlefCall_1__uvm_is_match)))) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3642)->__PVT__used.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}) = 1U;
            if (("_ALL_"s == VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3643)
                 ->__PVT__id)) {
                if (VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3644)
                    ->__PVT__all_sev) {
                    this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 0U, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3645)
                                                                 ->__PVT__action);
                    this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 1U, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3646)
                                                                 ->__PVT__action);
                    this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 2U, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3647)
                                                                 ->__PVT__action);
                    this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 3U, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3648)
                                                                 ->__PVT__action);
                } else {
                    this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3651)
                                                                 ->__PVT__sev, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3651)
                                                                 ->__PVT__action);
                }
            } else if (VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3655)
                       ->__PVT__all_sev) {
                this->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, 
                                                       VL_CVT_PACK_STR_NN(VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3656)
                                                                          ->__PVT__id), VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3656)
                                                       ->__PVT__action);
            } else {
                this->__VnoInFunc_set_report_severity_id_action(vlProcess, vlSymsp, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3659)
                                                                ->__PVT__sev, 
                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3659)
                                                                                ->__PVT__id), VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3659)
                                                                ->__PVT__action);
            }
            __Vlabel0: ;
        }
        if ((unnamedblk332__DOT__i__Vloopsize <= vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_action__Vclpkg.__Vnontrivs.__PVT__settings.size())) {
            unnamedblk332__DOT__i = ((::IData)(1U) 
                                     + unnamedblk332__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1268;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1268 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_1269;
    __Vfunc_uvm_re_match__Vfuncout_1269 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_1273;
    __Vfunc_uvm_re_match____Vincrement1_1273 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_1__uvm_is_match;
    ::std::string __VlefCall_0__get_full_name;
    ::IData/*31:0*/ unnamedblk333__DOT__i;
    unnamedblk333__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk333__DOT__i__Vloopsize;
    unnamedblk333__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_severity> setting;
    unnamedblk333__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk333__DOT__i, vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__Vnontrivs.__PVT__settings.size())) {
        unnamedblk333__DOT__i__Vloopsize = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__Vnontrivs.__PVT__settings.size();
        {
            setting = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__Vnontrivs.__PVT__settings.at(unnamedblk333__DOT__i);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__Vfunc_uvm_is_match__str_1267 = 
                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
            this->__Vfunc_uvm_is_match__expr_1266 = 
                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3680)
                                   ->__PVT__comp);
            this->__Vfunc_uvm_re_match__str_1271 = this->__Vfunc_uvm_is_match__str_1267;
            this->__Vfunc_uvm_re_match__re_1270 = this->__Vfunc_uvm_is_match__expr_1266;
            __Vfunc_uvm_re_match____Vincrement1_1273 = 0U;
            {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1270))) {
                    __Vfunc_uvm_re_match__Vfuncout_1269 = 0U;
                    goto __Vlabel1;
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1270,0U))) {
                    this->__Vfunc_uvm_re_match__re_1270 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_1270,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1270) 
                                       - (::IData)(1U)));
                }
                while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1271)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1270,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1270,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__str_1271,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_1270,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__Vfuncout_1269 = 1U;
                        goto __Vlabel1;
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                }
                while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_1271))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1270,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1270))) {
                            __Vfunc_uvm_re_match__Vfuncout_1269 = 0U;
                            goto __Vlabel1;
                        }
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_1270,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__str_1271,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1270,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match____Vincrement1_1273 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match____Vincrement1_1273;
                    }
                }
                while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1270)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_1270,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                }
                __Vfunc_uvm_re_match__Vfuncout_1269 
                    = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_1270))
                        ? 0U : 1U);
                __Vlabel1: ;
            }
            __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1268 
                = __Vfunc_uvm_re_match__Vfuncout_1269;
            __VlefCall_1__uvm_is_match = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_1268);
            if ((1U & (~ (::IData)(__VlefCall_1__uvm_is_match)))) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3685)->__PVT__used.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}) = 1U;
            if ((("_ALL_"s == VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3687)
                  ->__PVT__id) && VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3687)
                 ->__PVT__all_sev)) {
                this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 0U, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3688)
                                                               ->__PVT__sev);
                this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 1U, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3689)
                                                               ->__PVT__sev);
                this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 2U, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3690)
                                                               ->__PVT__sev);
                this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 3U, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3691)
                                                               ->__PVT__sev);
            } else if (("_ALL_"s == VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3693)
                        ->__PVT__id)) {
                this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3694)
                                                               ->__PVT__orig_sev, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3694)
                                                               ->__PVT__sev);
            } else if (VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3696)
                       ->__PVT__all_sev) {
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 0U, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3697)
                                                                                ->__PVT__id), VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3697)
                                                                  ->__PVT__sev);
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 1U, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3698)
                                                                                ->__PVT__id), VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3698)
                                                                  ->__PVT__sev);
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 2U, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3699)
                                                                                ->__PVT__id), VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3699)
                                                                  ->__PVT__sev);
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 3U, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3700)
                                                                                ->__PVT__id), VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3700)
                                                                  ->__PVT__sev);
            } else {
                this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3703)
                                                                  ->__PVT__orig_sev, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3703)
                                                                                ->__PVT__id), VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3703)
                                                                  ->__PVT__sev);
            }
            __Vlabel0: ;
        }
        if ((unnamedblk333__DOT__i__Vloopsize <= vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_cmdline_set_severity__Vclpkg.__Vnontrivs.__PVT__settings.size())) {
            unnamedblk333__DOT__i = ((::IData)(1U) 
                                     + unnamedblk333__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_name;
    ::IData/*31:0*/ unnamedblk334__DOT__i;
    unnamedblk334__DOT__i = 0;
    ::IData/*31:0*/ unnamedblk334__DOT__i__Vloopsize;
    unnamedblk334__DOT__i__Vloopsize = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity> setting;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_cmdline_set_verbosity>> remaining_settings;
    remaining_settings.clear();
    unnamedblk334__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk334__DOT__i, this->__PVT__m_verbosity_settings.size())) {
        unnamedblk334__DOT__i__Vloopsize = this->__PVT__m_verbosity_settings.size();
        setting = this->__PVT__m_verbosity_settings.at(unnamedblk334__DOT__i);
        VL_NULL_CHECK(phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3718)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        if ((__VlefCall_0__get_name == VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3718)
             ->__PVT__phase)) {
            VL_NULL_CHECK(setting, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3719)->__PVT__used.atWrite(
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component>{this}) = 1U;
            if (("_ALL_"s == VL_NULL_CHECK(this->__PVT__m_verbosity_settings.at(unnamedblk334__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3720)
                 ->__PVT__id)) {
                this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_verbosity_settings.at(unnamedblk334__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3722)
                                                             ->__PVT__verbosity);
            } else {
                this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(VL_NULL_CHECK(this->__PVT__m_verbosity_settings.at(unnamedblk334__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3727)
                                                                             ->__PVT__id), VL_NULL_CHECK(this->__PVT__m_verbosity_settings.at(unnamedblk334__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3727)
                                                          ->__PVT__verbosity);
            }
        } else {
            remaining_settings.push_back(setting);
        }
        if ((unnamedblk334__DOT__i__Vloopsize <= this->__PVT__m_verbosity_settings.size())) {
            unnamedblk334__DOT__i = ((::IData)(1U) 
                                     + unnamedblk334__DOT__i);
        }
    }
    this->__PVT__m_verbosity_settings = remaining_settings;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort\n"); );
    // Body
    ::std::string unnamedblk335__DOT__i;
    ::std::string unnamedblk335__DOT__i__Vnext;
    ::CData/*0:0*/ unnamedblk335__DOT__i__Vmore;
    unnamedblk335__DOT__i__Vmore = 0;
    unnamedblk335__DOT__i__Vmore = (0U != this->__PVT__m_children.first(unnamedblk335__DOT__i__Vnext));
    while (unnamedblk335__DOT__i__Vmore) {
        unnamedblk335__DOT__i = unnamedblk335__DOT__i__Vnext;
        unnamedblk335__DOT__i__Vmore = (0U != this->__PVT__m_children.next(unnamedblk335__DOT__i__Vnext));
        VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk335__DOT__i), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_component.svh", 3745)->__VnoInFunc_m_do_pre_abort(vlSymsp);
    }
    this->__VnoInFunc_pre_abort(vlSymsp);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_1__get_print_config_matches;
    ::CData/*0:0*/ __VlefCall_0__use_automatic_config;
    this->__PVT__m_build_done = 1U;
    this->__VnoInFunc_use_automatic_config(vlSymsp, __VlefCall_0__use_automatic_config);
    if (__VlefCall_0__use_automatic_config) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__VnoInFunc_get_print_config_matches(vlSymsp, __VlefCall_1__get_print_config_matches);
        this->__VnoInFunc_apply_config_settings(vlProcess, vlSymsp, __VlefCall_1__get_print_config_matches);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_report(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_report\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_component::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_build_done = 0;
    __PVT__m_phasing_active = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_component::~Vtb_top_uvm_pkg__03a__03auvm_component() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_component::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_component::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_component::to_string_middle\n"); );
    // Body
    std::string out;
    out += "print_enabled:" + VL_TO_STRING(__PVT__print_enabled);
    out += ", tr_database:" + VL_TO_STRING(__PVT__tr_database);
    out += ", m_domain:" + VL_TO_STRING(__PVT__m_domain);
    out += ", m_phase_imps:" + VL_TO_STRING(__PVT__m_phase_imps);
    out += ", m_current_phase:" + VL_TO_STRING(__PVT__m_current_phase);
    out += ", m_phase_process:" + VL_TO_STRING(__PVT__m_phase_process);
    out += ", m_build_done:" + VL_TO_STRING(__PVT__m_build_done);
    out += ", m_phasing_active:" + VL_TO_STRING(__PVT__m_phasing_active);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_children:" + VL_TO_STRING(__PVT__m_children);
    out += ", m_children_by_handle:" + VL_TO_STRING(__PVT__m_children_by_handle);
    out += ", m_streams:" + VL_TO_STRING(__PVT__m_streams);
    out += ", m_tr_h:" + VL_TO_STRING(__PVT__m_tr_h);
    out += ", m_name:" + VL_TO_STRING(__PVT__m_name);
    out += ", event_pool:" + VL_TO_STRING(__PVT__event_pool);
    out += ", recording_detail:" + VL_TO_STRING(__PVT__recording_detail);
    out += ", m_verbosity_settings:" + VL_TO_STRING(__PVT__m_verbosity_settings);
    out += ", m_unsupported_resource_base:" + VL_TO_STRING(__PVT__m_unsupported_resource_base);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_report_object::to_string_middle();
    return (out);
}
