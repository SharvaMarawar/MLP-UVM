// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__piab1191e4> __Vfunc_get__Vfuncout_1953;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__piab1191e4__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1953);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_1953;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, "uvm_reg_single_bit_bash_seq"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_single_bit_bash_seq"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_get_lsb_pos__Vfuncout_5221;
    __Vtask_get_lsb_pos__Vfuncout_5221 = 0;
    ::IData/*31:0*/ __Vtask_get_n_bits__Vfuncout_5222;
    __Vtask_get_n_bits__Vfuncout_5222 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_16__get_full_name;
    ::std::string __VlefCall_15__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_14;
    ::IData/*31:0*/ __VlefCall_13__get_report_action;
    ::IData/*31:0*/ __VlefCall_12__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_11__uvm_get_report_object;
    ::IData/*31:0*/ __VlefCall_10__get_compare;
    ::IData/*31:0*/ __VlefCall_9__get_n_bytes;
    ::CData/*0:0*/ __VlefLogOr_8;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_7__get_by_name;
    ::std::string __VlefCall_6__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz7d09f080> __VlefCall_5__get_by_name;
    ::std::string __VlefCall_4__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk2__DOT__j;
    unnamedblk2__DOT__j = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__j__Vloopsize;
    unnamedblk2__DOT__j__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__next_lsb;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k__Vloopsize;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k__Vloopsize = 0;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lsb;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT__k;
    ::IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    ::IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_field>> fields;
    ::VlUnpacked<::std::string, 64> mode;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    ::QData/*63:0*/ dc_mask;
    ::IData/*31:0*/ n_bits;
    ::std::string field_access;
    {
        fields.clear();
        for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
            mode[__Vi0].clear();
        }
        maps.clear();
        dc_mask = 0ULL;
        n_bits = 0U;
        field_access = ""s;
        if ((VlNull{} == this->__PVT__rg)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 92)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 92)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 92)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, "No register specified to run sequence on"s, 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x0000005cU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 97)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_4__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_5__get_by_name);
        __VlefLogOr_8 = (VlNull{} != __VlefCall_5__get_by_name);
        if ((1U & (~ (::IData)(__VlefLogOr_8)))) {
            VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 99)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz7d09f080__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_REG_BIT_BASH_TEST"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_8 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if (__VlefLogOr_8) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 106)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_9__get_n_bytes);
        n_bits = (__VlefCall_9__get_n_bytes << 3U);
        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 109)->__VnoInFunc_get_fields(vlSymsp, fields);
        VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 112)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk2__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__j, maps.size())) {
            unnamedblk2__DOT__j__Vloopsize = maps.size();
            unnamedblk2__DOT__unnamedblk3__DOT__next_lsb = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__next_lsb = 0U;
            dc_mask = 0ULL;
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k, fields.size())) {
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k__Vloopsize 
                    = fields.size();
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lsb = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc = 0U;
                VL_NULL_CHECK(fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 125)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk2__DOT__j), field_access);
                VL_NULL_CHECK(fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 126)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_10__get_compare);
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc 
                    = (0U == __VlefCall_10__get_compare);
                VL_NULL_CHECK(fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 127)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__Vfuncout_5221);
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lsb 
                    = __Vtask_get_lsb_pos__Vfuncout_5221;
                VL_NULL_CHECK(fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 128)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__Vfuncout_5222);
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w 
                    = __Vtask_get_n_bits__Vfuncout_5222;
                if (((((("WO"s == field_access) || 
                        ("WOC"s == field_access)) || 
                       ("WOS"s == field_access)) || 
                      ("WO1"s == field_access)) || 
                     ("NOACCESS"s == field_access))) {
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc = 1U;
                }
                while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__next_lsb, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lsb)) {
                    __Vincrement1 = unnamedblk2__DOT__unnamedblk3__DOT__next_lsb;
                    unnamedblk2__DOT__unnamedblk3__DOT__next_lsb 
                        = ((::IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__next_lsb);
                    mode[(0x0000003fU & __Vincrement1)] = "RO"s;
                }
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    mode[(0x0000003fU & unnamedblk2__DOT__unnamedblk3__DOT__next_lsb)] 
                        = field_access;
                    dc_mask = (((~ (1ULL << (0x0000003fU 
                                             & unnamedblk2__DOT__unnamedblk3__DOT__next_lsb))) 
                                & dc_mask) | ((::QData)((::IData)(
                                                                  (1U 
                                                                   & unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc))) 
                                              << (0x0000003fU 
                                                  & unnamedblk2__DOT__unnamedblk3__DOT__next_lsb)));
                    unnamedblk2__DOT__unnamedblk3__DOT__next_lsb 
                        = ((::IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__next_lsb);
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (::IData)(1U));
                }
                if ((unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k__Vloopsize 
                     <= fields.size())) {
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                        = ((::IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
                }
            }
            while (VL_GTS_III(32, 0x00000040U, unnamedblk2__DOT__unnamedblk3__DOT__next_lsb)) {
                __Vincrement2 = unnamedblk2__DOT__unnamedblk3__DOT__next_lsb;
                unnamedblk2__DOT__unnamedblk3__DOT__next_lsb 
                    = ((::IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__next_lsb);
                mode[(0x0000003fU & __Vincrement2)] = "RO"s;
            }
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_11__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_11__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 157)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 157)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_reg_bit_bash_seq"s, __VlefCall_12__get_report_verbosity_level);
            __VlefLogAnd_14 = VL_LTES_III(32, 0x00000064U, __VlefCall_12__get_report_verbosity_level);
            if (__VlefLogAnd_14) {
                VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 157)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_reg_bit_bash_seq"s, __VlefCall_13__get_report_action);
                __VlefLogAnd_14 = (0U != __VlefCall_13__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_14))) {
                VL_NULL_CHECK(this->__PVT__rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 157)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 157)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Verifying bits in register %s in map \"%s\"...",2
                                                                                , 'S',&(__VlefCall_15__get_full_name)
                                                                                , 'S',&(__VlefCall_16__get_full_name)) , 0x00000064U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x0000009dU, ""s, 1U);
            }
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT__k = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT__k, n_bits)) {
                {
                    if ((1U & (::IData)((dc_mask >> 
                                         (0x0000003fU 
                                          & unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT__k))))) {
                        goto __Vlabel1;
                    }
                    co_await this->__VnoInFunc_bash_kth_bit(vlProcess, vlSymsp, this->__PVT__rg, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT__k, 
                                                            VL_CVT_PACK_STR_NN(mode
                                                                               [
                                                                               (0x0000003fU 
                                                                                & unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT__k)]), maps.at(unnamedblk2__DOT__j), dc_mask);
                    __Vlabel1: ;
                }
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT__k 
                    = ((::IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk7__DOT__k);
            }
            if ((unnamedblk2__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk2__DOT__j = ((::IData)(1U) 
                                       + unnamedblk2__DOT__j);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

extern const ::VlUnpacked<::std::string, 4> Vtb_top__ConstPool__CONSARRAY_10;

VlCoroutine Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg> rg, ::IData/*31:0*/ k, ::std::string mode, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_map> map, ::QData/*63:0*/ dc_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_write__status_5223;
    __Vtask_write__status_5223 = 0;
    ::IData/*31:0*/ __Vtask_read__status_5224;
    __Vtask_read__status_5224 = 0;
    ::QData/*63:0*/ __Vtask_read__value_5225;
    __Vtask_read__value_5225 = 0;
    ::std::string __Vtemp_2;
    ::std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    ::std::string __VlefCall_21__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_20;
    ::IData/*31:0*/ __VlefCall_19__get_report_action;
    ::IData/*31:0*/ __VlefCall_18__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_17__uvm_get_report_object;
    ::std::string __VlefCall_16__get_full_name;
    ::std::string __VlefCall_15__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_14;
    ::IData/*31:0*/ __VlefCall_13__get_report_action;
    ::IData/*31:0*/ __VlefCall_12__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_11__uvm_get_report_object;
    ::QData/*63:0*/ __VlefCall_10__get;
    ::std::string __VlefCall_9__get_full_name;
    ::std::string __VlefCall_8__get_full_name;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk8__DOT___local_report_object_;
    ::IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1_2__DOT__unnamedblk9__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1_2__DOT__unnamedblk10__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1_2__DOT__unnamedblk11__DOT___local_report_object_;
    ::IData/*31:0*/ status;
    ::QData/*63:0*/ val;
    ::QData/*63:0*/ exp;
    ::QData/*63:0*/ v;
    ::CData/*0:0*/ bit_val;
    status = 0U;
    val = 0ULL;
    exp = 0ULL;
    v = 0ULL;
    bit_val = 0U;
    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_0__uvm_get_report_object);
    VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 183)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk8__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 183)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "uvm_reg_bit_bash_seq"s, __VlefCall_1__get_report_verbosity_level);
    __VlefLogAnd_3 = VL_LTES_III(32, 0x0000012cU, __VlefCall_1__get_report_verbosity_level);
    if (__VlefLogAnd_3) {
        VL_NULL_CHECK(unnamedblk8__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 183)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "uvm_reg_bit_bash_seq"s, __VlefCall_2__get_report_action);
        __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_3))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("...Bashing %s bit #%0d",2
                                                                                , 'S',&(mode)
                                                                                , '~',32,k) , 0x0000012cU, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000b7U, ""s, 1U);
    }
    unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 186)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, val);
        v = val;
        exp = val;
        val = (((~ (1ULL << (0x0000003fU & k))) & val) 
               | ((::QData)((::IData)((1U & (~ (::IData)(
                                                         (val 
                                                          >> 
                                                          (0x0000003fU 
                                                           & k))))))) 
                  << (0x0000003fU & k)));
        bit_val = (1U & (::IData)((val >> (0x0000003fU 
                                           & k))));
        co_await VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 192)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__status_5223, val, 0U, map, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_write__status_5223;
        if ((0U != status)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_4__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 195)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1_2__DOT__unnamedblk9__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1_2__DOT__unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 195)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_5__get_report_verbosity_level);
            __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
            if (__VlefLogAnd_7) {
                VL_NULL_CHECK(unnamedblk1_2__DOT__unnamedblk9__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 195)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_6__get_report_action);
                __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_7))) {
                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 195)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 195)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtemp_2 = ((2U < status) ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                             [(3U & status)]);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Status was %s when writing to register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_8__get_full_name)
                                                                                , 'S',&(__VlefCall_9__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000c3U, ""s, 1U);
            }
        }
        VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 198)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_10__get);
        exp = (__VlefCall_10__get & (~ dc_mask));
        co_await VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 199)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__status_5224, __Vtask_read__value_5225, 0U, map, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_read__status_5224;
        val = __Vtask_read__value_5225;
        if ((0U != status)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_11__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_11__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 202)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1_2__DOT__unnamedblk10__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1_2__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 202)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_12__get_report_verbosity_level);
            __VlefLogAnd_14 = VL_LTES_III(32, 0U, __VlefCall_12__get_report_verbosity_level);
            if (__VlefLogAnd_14) {
                VL_NULL_CHECK(unnamedblk1_2__DOT__unnamedblk10__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 202)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_13__get_report_action);
                __VlefLogAnd_14 = (0U != __VlefCall_13__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_14))) {
                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 202)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                VL_NULL_CHECK(map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 202)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                __Vtemp_3 = ((2U < status) ? ""s : Vtb_top__ConstPool__CONSARRAY_10
                             [(3U & status)]);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Status was %s when reading register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(__VlefCall_15__get_full_name)
                                                                                , 'S',&(__VlefCall_16__get_full_name)) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000caU, ""s, 1U);
            }
        }
        val = (val & (~ dc_mask));
        if ((val != exp)) {
            this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __VlefCall_17__uvm_get_report_object);
            VL_NULL_CHECK(__VlefCall_17__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 208)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1_2__DOT__unnamedblk11__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk1_2__DOT__unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 208)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_18__get_report_verbosity_level);
            __VlefLogAnd_20 = VL_LTES_III(32, 0U, __VlefCall_18__get_report_verbosity_level);
            if (__VlefLogAnd_20) {
                VL_NULL_CHECK(unnamedblk1_2__DOT__unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 208)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_19__get_report_action);
                __VlefLogAnd_20 = (0U != __VlefCall_19__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_20))) {
                VL_NULL_CHECK(rg, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 208)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Writing a %b in bit #%0d of register \"%s\" with initial value 'h%h yielded 'h%h instead of 'h%h",6
                                                                                , '#',1,bit_val
                                                                                , '~',32,k
                                                                                , 'S',&(__VlefCall_21__get_full_name)
                                                                                , '#',64,v
                                                                                , '#',64,val
                                                                                , '#',64,exp) , 0U, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000d0U, ""s, 1U);
            }
        }
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (::IData)(1U));
    }
    co_return;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::~Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_reg_sequence_::to_string_middle();
    return (out);
}
