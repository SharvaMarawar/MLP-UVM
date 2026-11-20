// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi8bed8a65::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pi5566fb0c> __Vfunc_get__Vfuncout_769;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pi5566fb0c__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_769);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_769;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00, vlProcess, vlSymsp, "uvm_config_db_default_implementation"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::VlWide<128>/*4095:0*/ &value, ::CData/*0:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_get\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1155;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> __Vfunc_get_highest_precedence__Vfuncout_770;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_3__is_tracing;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> __VlefCall_2__get_type;
    ::std::string __VlefCall_1__get_full_name;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> r;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> rq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        get__Vfuncrtn = 0U;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        if ((VlNull{} == cntxt)) {
            VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 196)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1155);
            cntxt = __Vtask_get_root__Vfuncout_1155;
        }
        if ((""s == inst_name)) {
            VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 201)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
        } else {
            VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 204)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            if ((""s != __VlefCall_0__get_full_name)) {
                VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 206)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
            }
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource__Tz39e91f07__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __VlefCall_2__get_type);
        VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 210)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, inst_name, field_name, __VlefCall_2__get_type, 0U, rq);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource__Tz39e91f07__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, rq, __Vfunc_get_highest_precedence__Vfuncout_770);
        r = __Vfunc_get_highest_precedence__Vfuncout_770;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db_options__Vclpkg.__VnoInFunc_is_tracing(vlProcess, vlSymsp, __VlefCall_3__is_tracing);
        if (__VlefCall_3__is_tracing) {
            this->__VnoInFunc_show_msg(vlProcess, vlSymsp, "CFGDB/GET"s, "Configuration"s, "read"s, inst_name, field_name, cntxt, r);
        }
        if ((VlNull{} == r)) {
            get__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 225)->__VnoInFunc_read(vlProcess, vlSymsp, cntxt, value);
        get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_trigger_modified(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string inst_name, ::std::string field_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_trigger_modified\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_773;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_773 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_774;
    __Vfunc_uvm_re_match__Vfuncout_774 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_778;
    __Vfunc_uvm_re_match____Vincrement1_778 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_1__uvm_is_match;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03am_uvm_waiter> unnamedblk2__DOT__w;
    ::IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__i;
    if ((0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00__Vclpkg.__Vnontrivs.__PVT__m_waiters.exists(field_name))) {
        unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00__Vclpkg.__Vnontrivs.__PVT__m_waiters
                          .at(field_name), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 310)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00__Vclpkg.__Vnontrivs.__PVT__m_waiters
                          .at(field_name), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 312)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__i, unnamedblk2__DOT__w);
            this->__Vfunc_uvm_is_match__str_772 = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk2__DOT__w, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 313)
                                                                     ->__PVT__inst_name);
            this->__Vfunc_uvm_is_match__expr_771 = inst_name;
            this->__Vfunc_uvm_re_match__str_776 = this->__Vfunc_uvm_is_match__str_772;
            this->__Vfunc_uvm_re_match__re_775 = this->__Vfunc_uvm_is_match__expr_771;
            __Vfunc_uvm_re_match____Vincrement1_778 = 0U;
            {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_775))) {
                    __Vfunc_uvm_re_match__Vfuncout_774 = 0U;
                    goto __Vlabel0;
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_775,0U))) {
                    this->__Vfunc_uvm_re_match__re_775 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_775,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_775) 
                                       - (::IData)(1U)));
                }
                while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_776)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_775,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_775,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__str_776,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_775,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__Vfuncout_774 = 1U;
                        goto __Vlabel0;
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                }
                while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_776))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_775,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_775))) {
                            __Vfunc_uvm_re_match__Vfuncout_774 = 0U;
                            goto __Vlabel0;
                        }
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_775,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__str_776,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_775,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match____Vincrement1_778 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match____Vincrement1_778;
                    }
                }
                while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__re_775)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_775,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                }
                __Vfunc_uvm_re_match__Vfuncout_774 
                    = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_775))
                        ? 0U : 1U);
                __Vlabel0: ;
            }
            __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_773 
                = __Vfunc_uvm_re_match__Vfuncout_774;
            __VlefCall_1__uvm_is_match = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_773);
            if (__VlefCall_1__uvm_is_match) {
                vlSymsp->fireEvent(VL_NULL_CHECK(unnamedblk2__DOT__w, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 315)
                                   ->__PVT__trigger);
            }
            unnamedblk2__DOT__unnamedblk3__DOT__i = 
                ((::IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__i);
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string cntxt_name, ::std::string inst_name, ::std::string field_name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ cntxt_depth, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pool__pie77358bf> pool, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_set\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_7__is_tracing;
    ::IData/*31:0*/ __VlefCall_6__get_depth;
    ::IData/*31:0*/ __VlefCall_5__get_resource_pool_default_precedence;
    ::CData/*0:0*/ __VlefLogAnd_4;
    ::std::string __VlefCall_3__get_name;
    ::IData/*31:0*/ __VlefCall_2__exists;
    ::std::string __VlefCall_1__get_full_name;
    ::std::string __VlefCall_0__get_full_name;
    ::std::string unnamedblk4__DOT__slash_or_blank;
    ::std::string unnamedblk4__DOT__close_or_blank;
    ::std::string unnamedblk4__DOT__separator;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> top;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> curr_phase;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> r;
    ::std::string lookup;
    ::std::string rstate;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    ::IData/*31:0*/ precedence;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> p;
    lookup = ""s;
    rstate = ""s;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 342)->__VnoInFunc_get_resource_pool(vlProcess, vlSymsp, rp);
    precedence = 0U;
    vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 349)->__VnoInFunc_get_randstate(vlSymsp, rstate);
    }
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 353)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
    curr_phase = VL_NULL_CHECK(top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 354)
        ->__PVT__m_current_phase;
    if ((VlNull{} == cntxt)) {
        cntxt = top;
    }
    if ((""s == inst_name)) {
        VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 363)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
    } else {
        VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 366)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        if ((""s != __VlefCall_0__get_full_name)) {
            unnamedblk4__DOT__slash_or_blank = ""s;
            unnamedblk4__DOT__close_or_blank = ""s;
            unnamedblk4__DOT__separator = "."s;
            if ((((0x2fU == VL_GETC_N(inst_name,0U)) 
                  & VL_LTS_III(32, 2U, VL_LEN_IN(inst_name))) 
                 & (0x2fU == VL_GETC_N(inst_name,(VL_LEN_IN(inst_name) 
                                                  - (::IData)(1U)))))) {
                unnamedblk4__DOT__slash_or_blank = "/"s;
                unnamedblk4__DOT__close_or_blank = ")/"s;
                unnamedblk4__DOT__separator = ".("s;
                inst_name = VL_SUBSTR_N(inst_name,1U,
                                        (VL_LEN_IN(inst_name) 
                                         - (::IData)(2U)));
            }
            VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 379)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(unnamedblk4__DOT__slash_or_blank, __VlefCall_1__get_full_name), unnamedblk4__DOT__separator), inst_name), unnamedblk4__DOT__close_or_blank);
        }
    }
    lookup = VL_CONCATN_NNN(VL_CONCATN_NNN(inst_name, "__M_UVM__"s), field_name);
    VL_NULL_CHECK(pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 391)->__VnoInFunc_exists(vlSymsp, lookup, __VlefCall_2__exists);
    if ((0U != __VlefCall_2__exists)) {
        VL_NULL_CHECK(pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 399)->__VnoInFunc_get(vlSymsp, lookup, r);
    } else {
        r = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07, vlProcess, vlSymsp, field_name, "<not provided>"s);
        VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 394)->__VnoInFunc_set_scope(vlProcess, vlSymsp, r, inst_name);
        VL_NULL_CHECK(pool, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 395)->__VnoInFunc_add(vlSymsp, lookup, r);
    }
    __VlefLogAnd_4 = (VlNull{} != curr_phase);
    if (__VlefLogAnd_4) {
        VL_NULL_CHECK(curr_phase, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 402)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
        __VlefLogAnd_4 = ("build"s == __VlefCall_3__get_name);
    }
    if (__VlefLogAnd_4) {
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 404)->__VnoInFunc_get_resource_pool_default_precedence(vlSymsp, __VlefCall_5__get_resource_pool_default_precedence);
        VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 404)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_6__get_depth);
        precedence = (__VlefCall_5__get_resource_pool_default_precedence 
                      - __VlefCall_6__get_depth);
    } else {
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 409)->__VnoInFunc_get_resource_pool_default_precedence(vlSymsp, precedence);
    }
    VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 413)->__VnoInFunc_set_precedence(vlProcess, vlSymsp, r, precedence);
    VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 414)->__VnoInFunc_write(vlProcess, vlSymsp, value, cntxt);
    VL_NULL_CHECK(rp, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 416)->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, r, 0U);
    this->__VnoInFunc_trigger_modified(vlProcess, vlSymsp, inst_name, field_name);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 422)->__VnoInFunc_set_randstate(vlSymsp, rstate);
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db_options__Vclpkg.__VnoInFunc_is_tracing(vlProcess, vlSymsp, __VlefCall_7__is_tracing);
    if (__VlefCall_7__is_tracing) {
        this->__VnoInFunc_show_msg(vlProcess, vlSymsp, "CFGDB/SET"s, "Configuration"s, "set"s, inst_name, field_name, cntxt, r);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_exists(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_component> cntxt, ::std::string inst_name, ::std::string field_name, ::CData/*0:0*/ rpterr, ::CData/*0:0*/ &exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_exists\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1156;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> __VlefCall_2__get_by_name;
    ::std::string __VlefCall_1__get_full_name;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    exists__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    if ((VlNull{} == cntxt)) {
        VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 448)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1156);
        cntxt = __Vtask_get_root__Vfuncout_1156;
    }
    if ((""s == inst_name)) {
        VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 453)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
    } else {
        VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 456)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        if ((""s != __VlefCall_0__get_full_name)) {
            VL_NULL_CHECK(cntxt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 458)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
        }
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_db__Tz39e91f07__Vclpkg.__VnoInFunc_get_by_name(vlSymsp, inst_name, field_name, (::IData)(rpterr), __VlefCall_2__get_by_name);
    exists__Vfuncrtn = (VlNull{} != __VlefCall_2__get_by_name);
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_show_msg(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string id, ::std::string rtype, ::std::string action, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> accessor, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tz39e91f07> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_show_msg\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_779;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1157;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_1160;
    __Vtask_uvm_report_info__verbosity_1160 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_1162;
    __Vtask_uvm_report_info__line_1162 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_1164;
    __Vtask_uvm_report_info__report_enabled_checked_1164 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_780;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1165;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogAnd_5;
    ::IData/*31:0*/ __VlefCall_4__get_report_action;
    ::IData/*31:0*/ __VlefCall_3__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_2__uvm_get_report_object;
    ::std::string __VlefCall_1__convert2string;
    ::std::string __VlefCall_0__get_full_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk5__DOT___local_report_object_;
    ::std::string msg;
    msg = "logic signed[4095:0]"s;
    if ((VlNull{} != accessor)) {
        VL_NULL_CHECK(accessor, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 482)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    } else {
        __VlefCall_0__get_full_name = "<unknown>"s;
    }
    if ((VlNull{} == rsrc)) {
        __VlefCall_1__convert2string = "null (failed lookup)"s;
    } else {
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 483)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    }
    VL_SFORMAT_NX(msg,"%s scope='%s' name='%s' (type %s) %s accessor=%s = %s",7
                  , 'S',&(rtype), 'S',&(scope), 'S',&(name)
                  , 'S',&(msg), 'S',&(action), 'S',&(__VlefCall_0__get_full_name)
                  , 'S',&(__VlefCall_1__convert2string));
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_779);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
        = __Vfunc_get__Vfuncout_779;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1157);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
        = __Vtask_get_root__Vfuncout_1157;
    __VlefCall_2__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
    VL_NULL_CHECK(__VlefCall_2__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 485)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk5__DOT___local_report_object_);
    VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 485)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, id, __VlefCall_3__get_report_verbosity_level);
    __VlefLogAnd_5 = VL_LTES_III(32, 0x00000064U, __VlefCall_3__get_report_verbosity_level);
    if (__VlefLogAnd_5) {
        VL_NULL_CHECK(unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh", 485)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, id, __VlefCall_4__get_report_action);
        __VlefLogAnd_5 = (0U != __VlefCall_4__get_report_action);
    }
    if (VL_UNLIKELY((__VlefLogAnd_5))) {
        __Vtask_uvm_report_info__report_enabled_checked_1164 = 1U;
        this->__Vtask_uvm_report_info__context_name_1163 = ""s;
        __Vtask_uvm_report_info__line_1162 = 0x000001e5U;
        this->__Vtask_uvm_report_info__filename_1161 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_config_db_implementation.svh"s;
        __Vtask_uvm_report_info__verbosity_1160 = 0x00000064U;
        this->__Vtask_uvm_report_info__message_1159 
            = msg;
        this->__Vtask_uvm_report_info__id_1158 = id;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_780);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__Vfuncout_780;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1165);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__Vfuncout_1165;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__id_1158, this->__Vtask_uvm_report_info__message_1159, __Vtask_uvm_report_info__verbosity_1160, this->__Vtask_uvm_report_info__filename_1161, __Vtask_uvm_report_info__line_1162, this->__Vtask_uvm_report_info__context_name_1163, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_1164));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::~Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_top_uvm_pkg__03a__03auvm_config_db_default_implementation_t__pi2255cd00::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_config_db_implementation_t__pi8bed8a65::to_string_middle();
    return (out);
}
