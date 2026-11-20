// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_uvm_seeding(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::CData/*0:0*/ &get_uvm_seeding__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_uvm_seeding\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    get_uvm_seeding__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 799)->__VnoInFunc_get_uvm_seeding(vlSymsp, get_uvm_seeding__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "<unknown>"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    create__Vfuncrtn = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_object::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    ::IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    /*super.new*/;
    __Vincrement1 = vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count 
        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count);
    this->__PVT__m_inst_id = __Vincrement1;
    this->__PVT__m_leaf_name = name;
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_117;
    __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_117 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed____VlefCall_0__new_119;
    ::IData/*31:0*/ __Vfunc_uvm_instance_scope____Vincrement2_121;
    __Vfunc_uvm_instance_scope____Vincrement2_121 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_49;
    __Vtask_uvm_report_error__verbosity_49 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_51;
    __Vtask_uvm_report_error__line_51 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_53;
    __Vtask_uvm_report_error__report_enabled_checked_53 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_122;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_54;
    ::IData/*31:0*/ __Vfunc_uvm_oneway_hash__Vfuncout_123;
    __Vfunc_uvm_oneway_hash__Vfuncout_123 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_oneway_hash__seed_125;
    __Vfunc_uvm_oneway_hash__seed_125 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_126;
    __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_126 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_3__uvm_create_random_seed;
    ::std::string __VlefCall_2__get_full_name;
    ::std::string __VlefCall_1__get_type_name;
    ::CData/*0:0*/ __VlefCall_0__get_uvm_seeding;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__VnoInFunc_get_uvm_seeding(vlProcess, vlSymsp, __VlefCall_0__get_uvm_seeding);
    if (__VlefCall_0__get_uvm_seeding) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        this->__Vfunc_uvm_create_random_seed__inst_id_116 
            = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        this->__Vfunc_uvm_create_random_seed__type_id_115 
            = VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name);
        if ((""s == this->__Vfunc_uvm_create_random_seed__inst_id_116)) {
            this->__Vfunc_uvm_create_random_seed__inst_id_116 = "__global__"s;
        }
        if ((1U & (~ (0U != vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__inst_id_116))))) {
            __Vfunc_uvm_create_random_seed____VlefCall_0__new_119 
                = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_random_seed_table_lookup.atWrite(this->__Vfunc_uvm_create_random_seed__inst_id_116) 
                = __Vfunc_uvm_create_random_seed____VlefCall_0__new_119;
        }
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map 
            = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_random_seed_table_lookup
            .at(this->__Vfunc_uvm_create_random_seed__inst_id_116);
        __Vfunc_uvm_instance_scope____Vincrement2_121 = 0U;
        {
            if ((""s != this->__Vfunc_uvm_instance_scope__Vfuncout_120)) {
                goto __Vlabel0;
            }
            VL_SFORMAT_NX(this->__Vfunc_uvm_instance_scope__Vfuncout_120
                          ,"%m",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_instance_scope");
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                = (VL_LEN_IN(this->__Vfunc_uvm_instance_scope__Vfuncout_120) 
                   - (::IData)(1U));
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(this->__Vfunc_uvm_instance_scope__Vfuncout_120,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
            while ((((0U != vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                     & (0x2eU != (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                    & (0x3aU != (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                    = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                       - (::IData)(1U));
                __Vfunc_uvm_instance_scope____Vincrement2_121 
                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                    = VL_GETC_N(this->__Vfunc_uvm_instance_scope__Vfuncout_120,__Vfunc_uvm_instance_scope____Vincrement2_121);
            }
            if (VL_UNLIKELY(((0U == vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)))) {
                __Vtask_uvm_report_error__report_enabled_checked_53 = 0U;
                this->__Vtask_uvm_report_error__context_name_52 = ""s;
                __Vtask_uvm_report_error__line_51 = 0U;
                this->__Vtask_uvm_report_error__filename_50 = ""s;
                __Vtask_uvm_report_error__verbosity_49 = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_48
                              ,"Illegal name %s in scope string",1
                              , 'S',&(this->__Vfunc_uvm_instance_scope__Vfuncout_120));
                this->__Vtask_uvm_report_error__id_47 = "SCPSTR"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_122);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_122;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_54);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_54;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_47, this->__Vtask_uvm_report_error__message_48, __Vtask_uvm_report_error__verbosity_49, this->__Vtask_uvm_report_error__filename_50, __Vtask_uvm_report_error__line_51, this->__Vtask_uvm_report_error__context_name_52, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_53));
            }
            this->__Vfunc_uvm_instance_scope__Vfuncout_120 
                = VL_SUBSTR_N(this->__Vfunc_uvm_instance_scope__Vfuncout_120,0U,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
            __Vlabel0: ;
        }
        this->__Vfunc_uvm_create_random_seed____VlefCall_1__uvm_instance_scope_118 
            = this->__Vfunc_uvm_instance_scope__Vfuncout_120;
        this->__Vfunc_uvm_create_random_seed__type_id_115 
            = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed____VlefCall_1__uvm_instance_scope_118, this->__Vfunc_uvm_create_random_seed__type_id_115);
        if ((1U & (~ (0U != VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 207)
                      ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__type_id_115))))) {
            __Vfunc_uvm_oneway_hash__seed_125 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_global_random_seed;
            this->__Vfunc_uvm_oneway_hash__string_in_124 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__type_id_115, "::"s), this->__Vfunc_uvm_create_random_seed__inst_id_116));
            if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__seed_125)))) {
                __Vfunc_uvm_oneway_hash__seed_125 = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_global_random_seed;
            }
            __Vfunc_uvm_oneway_hash__Vfuncout_123 = __Vfunc_uvm_oneway_hash__seed_125;
            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
            __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_126 = 0U;
            __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_126 = 0U;
            {
                while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_126, 
                                  VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__string_in_124))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                        = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__string_in_124,__Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_126);
                    if ((0U == (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                        goto __Vlabel1;
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           << 1U);
                    if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ (::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           << 1U);
                    if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 1U)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           << 1U);
                    if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 2U)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           << 1U);
                    if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 3U)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           << 1U);
                    if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 4U)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           << 1U);
                    if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 5U)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           << 1U);
                    if ((1U & ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 6U)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           << 1U);
                    if (((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                         ^ ((::IData)(vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                            >> 7U))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    }
                    __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_126 
                        = ((::IData)(1U) + __Vfunc_uvm_oneway_hash__unnamedblk1__DOT___byte_126);
                }
                __Vlabel1: ;
            }
            __Vfunc_uvm_oneway_hash__Vfuncout_123 = 
                (__Vfunc_uvm_oneway_hash__Vfuncout_123 
                 + (~ ((((0x0000ff00U & (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                         << 8U)) | 
                         (0x000000ffU & (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                         >> 8U))) << 0x00000010U) 
                       | ((0x0000ff00U & (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                          >> 8U)) | 
                          (vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x18U)))));
            __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_117 
                = __Vfunc_uvm_oneway_hash__Vfuncout_123;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 208)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_115) 
                = __Vfunc_uvm_create_random_seed____VlefCall_2__uvm_oneway_hash_117;
        }
        if ((1U & (~ (0U != VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 210)
                      ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__type_id_115))))) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 211)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_115) = 0U;
        }
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 217)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_115) 
            = (VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 217)
               ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__type_id_115) 
               + VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 217)
               ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__type_id_115));
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 218)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__type_id_115) 
            = ((::IData)(1U) + VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 218)
               ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__type_id_115));
        __VlefCall_3__uvm_create_random_seed = VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_misc.svh", 220)
            ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__type_id_115);
        this->__VnoInFunc_srandom(vlSymsp, __VlefCall_3__uvm_create_random_seed);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_inst_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id\n"); );
    // Body
    get_inst_id__Vfuncrtn = this->__PVT__m_inst_id;
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_type_name;
    ::std::string __VlefCall_0__get_type_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_factory> factory;
    {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 844)->__VnoInFunc_get_factory(vlProcess, vlSymsp, factory);
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        if (("<unknown>"s == __VlefCall_0__get_type_name)) {
            get_object_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(factory, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 849)->__VnoInFunc_find_wrapper_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), get_object_type__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_leaf_name;
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_full_name__Vfuncrtn = ""s;
    this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_leaf_name = name;
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__get_file;
    ::std::string __VlefCall_0__sprint;
    if ((VlNull{} == printer)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, printer);
    }
    this->__VnoInFunc_sprint(vlProcess, vlSymsp, printer, __VlefCall_0__sprint);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 893)->__VnoInFunc_get_file(vlSymsp, __VlefCall_1__get_file);
    VL_FWRITEF_NX(__VlefCall_1__get_file,"%s",1, 'S',&(__VlefCall_0__sprint));
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer, ::std::string &sprint__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_2__get_full_name;
    ::CData/*0:0*/ __VlefCall_1__get_root_enabled;
    ::IData/*31:0*/ __VlefCall_0__get_active_object_depth;
    ::std::string name;
    sprint__Vfuncrtn = ""s;
    name = ""s;
    if ((VlNull{} == printer)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, printer);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 907)->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_0__get_active_object_depth);
    if ((0U == __VlefCall_0__get_active_object_depth)) {
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 908)->__VnoInFunc_flush(vlProcess, vlSymsp);
        VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 909)->__VnoInFunc_get_root_enabled(vlSymsp, __VlefCall_1__get_root_enabled);
        if (__VlefCall_1__get_root_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        } else {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_full_name);
        }
        name = __VlefCall_2__get_full_name;
    } else {
        this->__VnoInFunc_get_name(vlSymsp, name);
    }
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 915)->__VnoInFunc_print_object(vlProcess, vlSymsp, name, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>{this}, 0x2eU);
    VL_NULL_CHECK(printer, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 917)->__VnoInFunc_emit(vlProcess, vlSymsp, sprint__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = ""s;
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_local(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_local\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> unnamedblk10__DOT__op;
    if ((VlNull{} != rsrc)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, unnamedblk10__DOT__op);
        VL_NULL_CHECK(unnamedblk10__DOT__op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 940)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000800U, VlNull{}, rsrc);
        this->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, unnamedblk10__DOT__op);
        VL_NULL_CHECK(unnamedblk10__DOT__op, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 942)->__VnoInFunc_m_recycle(vlSymsp);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_57;
    __Vtask_uvm_report_warning__verbosity_57 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_59;
    __Vtask_uvm_report_warning__line_59 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_61;
    __Vtask_uvm_report_warning__report_enabled_checked_61 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_128;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_62;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_1__get_name;
    ::std::string __VlefCall_0__get_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> tmp;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_create(vlProcess, vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), tmp);
    if (VL_UNLIKELY(((VlNull{} == tmp)))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        __Vtask_uvm_report_warning__report_enabled_checked_61 = 0U;
        this->__Vtask_uvm_report_warning__context_name_60 = ""s;
        __Vtask_uvm_report_warning__line_59 = 0U;
        this->__Vtask_uvm_report_warning__filename_58 = ""s;
        __Vtask_uvm_report_warning__verbosity_57 = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_56
                      ,"The create method failed for %s,  object cannot be cloned",1
                      , 'S',&(__VlefCall_1__get_name));
        this->__Vtask_uvm_report_warning__id_55 = "CRFLD"s;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_128);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__Vfuncout_128;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_62);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__Vfuncout_62;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_55, this->__Vtask_uvm_report_warning__message_56, __Vtask_uvm_report_warning__verbosity_57, this->__Vtask_uvm_report_warning__filename_58, __Vtask_uvm_report_warning__line_59, this->__Vtask_uvm_report_warning__context_name_60, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_61));
    } else {
        VL_NULL_CHECK(tmp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 971)->__VnoInFunc_copy(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>{this}, VlNull{});
    }
    clone__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_copier> copier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_129;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_63;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_66;
    __Vtask_uvm_report_error__verbosity_66 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_68;
    __Vtask_uvm_report_error__line_68 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_70;
    __Vtask_uvm_report_error__report_enabled_checked_70 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_130;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_71;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_4__get_active_object_depth;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk11__DOT___local_report_object_;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_copier> m_copier;
    {
        if ((VlNull{} == rhs)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_129);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_129;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_63);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_63;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 986)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk11__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 986)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "OBJ/COPY"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk11__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 986)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "OBJ/COPY"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_error__report_enabled_checked_70 = 1U;
                this->__Vtask_uvm_report_error__context_name_69 = ""s;
                __Vtask_uvm_report_error__line_68 = 0x000003daU;
                this->__Vtask_uvm_report_error__filename_67 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh"s;
                __Vtask_uvm_report_error__verbosity_66 = 0U;
                this->__Vtask_uvm_report_error__message_65 = "Passing a null object to be copied"s;
                this->__Vtask_uvm_report_error__id_64 = "OBJ/COPY"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_130);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_130;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_71);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_71;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_64, this->__Vtask_uvm_report_error__message_65, __Vtask_uvm_report_error__verbosity_66, this->__Vtask_uvm_report_error__filename_67, __Vtask_uvm_report_error__line_68, this->__Vtask_uvm_report_error__context_name_69, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_70));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == copier)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, coreservice);
            VL_NULL_CHECK(coreservice, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 992)->__VnoInFunc_get_default_copier(vlProcess, vlSymsp, m_copier);
        } else {
            m_copier = copier;
        }
        VL_NULL_CHECK(m_copier, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1000)->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_4__get_active_object_depth);
        if ((0U == __VlefCall_4__get_active_object_depth)) {
            VL_NULL_CHECK(m_copier, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1002)->__VnoInFunc_flush(vlProcess, vlSymsp);
        }
        VL_NULL_CHECK(m_copier, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1006)->__VnoInFunc_copy_object(vlProcess, vlSymsp, 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>{this}, rhs);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> rhs, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_comparer> comparer, ::CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_131;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_72;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_75;
    __Vtask_uvm_report_error__verbosity_75 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_77;
    __Vtask_uvm_report_error__line_77 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_79;
    __Vtask_uvm_report_error__report_enabled_checked_79 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_132;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_80;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk12__DOT___local_report_object_;
    if ((VlNull{} == packer)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_131);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_131;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_72);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_72;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1131)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk12__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk12__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1131)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/OBJ/PACK/NULL"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk12__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1131)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/OBJ/PACK/NULL"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_79 = 1U;
            this->__Vtask_uvm_report_error__context_name_78 = ""s;
            __Vtask_uvm_report_error__line_77 = 0x0000046bU;
            this->__Vtask_uvm_report_error__filename_76 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh"s;
            __Vtask_uvm_report_error__verbosity_75 = 0U;
            this->__Vtask_uvm_report_error__message_74 = "uvm_object::do_pack called with null packer!"s;
            this->__Vtask_uvm_report_error__id_73 = "UVM/OBJ/PACK/NULL"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_132);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_132;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_80);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_80;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_73, this->__Vtask_uvm_report_error__message_74, __Vtask_uvm_report_error__verbosity_75, this->__Vtask_uvm_report_error__filename_76, __Vtask_uvm_report_error__line_77, this->__Vtask_uvm_report_error__context_name_78, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_79));
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_133;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_81;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_84;
    __Vtask_uvm_report_error__verbosity_84 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_86;
    __Vtask_uvm_report_error__line_86 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_88;
    __Vtask_uvm_report_error__report_enabled_checked_88 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_134;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_89;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk13__DOT___local_report_object_;
    if ((VlNull{} == packer)) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_133);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_133;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_81);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_81;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1218)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk13__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk13__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1218)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UVM/OBJ/UNPACK/NULL"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk13__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1218)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UVM/OBJ/UNPACK/NULL"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_88 = 1U;
            this->__Vtask_uvm_report_error__context_name_87 = ""s;
            __Vtask_uvm_report_error__line_86 = 0x000004c2U;
            this->__Vtask_uvm_report_error__filename_85 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh"s;
            __Vtask_uvm_report_error__verbosity_84 = 0U;
            this->__Vtask_uvm_report_error__message_83 = "uvm_object::do_unpack called with null packer!"s;
            this->__Vtask_uvm_report_error__id_82 = "UVM/OBJ/UNPACK/NULL"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_134);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_134;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_89);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_89;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_82, this->__Vtask_uvm_report_error__message_83, __Vtask_uvm_report_error__verbosity_84, this->__Vtask_uvm_report_error__filename_85, __Vtask_uvm_report_error__line_86, this->__Vtask_uvm_report_error__context_name_87, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_88));
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_record(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_name;
    {
        if ((VlNull{} == recorder)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        VL_NULL_CHECK(recorder, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_object.svh", 1235)->__VnoInFunc_record_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object>{this});
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_object::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_inst_id = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_object::~Vtb_top_uvm_pkg__03a__03auvm_object() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_leaf_name:" + VL_TO_STRING(__PVT__m_leaf_name);
    out += ", m_inst_id:" + VL_TO_STRING(__PVT__m_inst_id);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_void::to_string_middle();
    return (out);
}
