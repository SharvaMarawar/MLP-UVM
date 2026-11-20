// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg::__VnoInFunc_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlAssocArray<::std::string, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc>> &strtab, ::std::string s, ::CData/*0:0*/ &check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg::__VnoInFunc_check\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_592;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_893;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_896;
    __Vtask_uvm_report_info__verbosity_896 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_898;
    __Vtask_uvm_report_info__line_898 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_900;
    __Vtask_uvm_report_info__report_enabled_checked_900 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_593;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_901;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_594;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_902;
    ::IData/*31:0*/ __Vtask_uvm_report_info__verbosity_905;
    __Vtask_uvm_report_info__verbosity_905 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_info__line_907;
    __Vtask_uvm_report_info__line_907 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_info__report_enabled_checked_909;
    __Vtask_uvm_report_info__report_enabled_checked_909 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_596;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_910;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_8__m_uvm_string_queue_join;
    ::CData/*0:0*/ __VlefLogAnd_7;
    ::IData/*31:0*/ __VlefCall_6__get_report_action;
    ::IData/*31:0*/ __VlefCall_5__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_4__uvm_get_report_object;
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::std::string unnamedblk1__DOT__key;
    ::std::string unnamedblk1__DOT__key__Vnext;
    ::CData/*0:0*/ unnamedblk1__DOT__key__Vmore;
    unnamedblk1__DOT__key__Vmore = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT___local_report_object_;
    ::VlQueue<::std::string> unnamedblk3__DOT__q;
    ::IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__i;
    unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk3__DOT__unnamedblk5__DOT___local_report_object_;
    ::IData/*31:0*/ distance;
    ::IData/*31:0*/ min;
    ::VlQueue<::std::string> min_key;
    {
        check__Vfuncrtn = 0U;
        distance = 0U;
        min = 0U;
        min_key.clear();
        min_key.atDefault().clear();
        if ((0U != strtab.exists(s))) {
            check__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        min = 0xffffffffU;
        unnamedblk1__DOT__key__Vmore = (0U != strtab.first(unnamedblk1__DOT__key__Vnext));
        while (unnamedblk1__DOT__key__Vmore) {
            unnamedblk1__DOT__key = unnamedblk1__DOT__key__Vnext;
            unnamedblk1__DOT__key__Vmore = (0U != strtab.next(unnamedblk1__DOT__key__Vnext));
            {
                this->__VnoInFunc_levenshtein_distance(vlSymsp, unnamedblk1__DOT__key, s, distance);
                if (VL_GTS_III(32, 0U, distance)) {
                    goto __Vlabel1;
                }
                if ((distance < min)) {
                    min = distance;
                    min_key.clear();
                    min_key.push_back(unnamedblk1__DOT__key);
                    goto __Vlabel1;
                }
                if ((distance == min)) {
                    min_key.push_back(unnamedblk1__DOT__key);
                }
                __Vlabel1: ;
            }
        }
        if ((0xffffffffU == min)) {
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_592);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_592;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_893);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_893;
            __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_spell_chkr.svh", 123)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk2__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_spell_chkr.svh", 123)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/CONFIGDB/SPELLCHK"s, __VlefCall_1__get_report_verbosity_level);
            __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(unnamedblk2__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_spell_chkr.svh", 123)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/CONFIGDB/SPELLCHK"s, __VlefCall_2__get_report_action);
                __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_3))) {
                __Vtask_uvm_report_info__report_enabled_checked_900 = 1U;
                this->__Vnontrivs.__Vtask_uvm_report_info__context_name_899 = ""s;
                __Vtask_uvm_report_info__line_898 = 0x0000007bU;
                this->__Vnontrivs.__Vtask_uvm_report_info__filename_897 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_spell_chkr.svh"s;
                __Vtask_uvm_report_info__verbosity_896 = 0U;
                VL_SFORMAT_NX(this->__Vnontrivs.__Vtask_uvm_report_info__message_895
                              ,"%s not located, no alternatives to suggest",1
                              , 'S',&(s));
                this->__Vnontrivs.__Vtask_uvm_report_info__id_894 = "UVM/CONFIGDB/SPELLCHK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_593);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_593;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_901);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_901;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_info__id_894, this->__Vnontrivs.__Vtask_uvm_report_info__message_895, __Vtask_uvm_report_info__verbosity_896, this->__Vnontrivs.__Vtask_uvm_report_info__filename_897, __Vtask_uvm_report_info__line_898, this->__Vnontrivs.__Vtask_uvm_report_info__context_name_899, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_900));
            }
        } else {
            unnamedblk3__DOT__q.clear();
            unnamedblk3__DOT__q.atDefault().clear();
            unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__i, min_key.size())) {
                unnamedblk3__DOT__q.push_back(min_key.at(unnamedblk3__DOT__unnamedblk4__DOT__i));
                unnamedblk3__DOT__q.push_back("|"s);
                unnamedblk3__DOT__unnamedblk4__DOT__i 
                    = ((::IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__i);
            }
            if ((0U != unnamedblk3__DOT__q.size())) {
                std::ignore = unnamedblk3__DOT__q.pop_back();
            }
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_594);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
                = __Vfunc_get__Vfuncout_594;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_902);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
                = __Vtask_get_root__Vfuncout_902;
            __VlefCall_4__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
            VL_NULL_CHECK(__VlefCall_4__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_spell_chkr.svh", 140)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk3__DOT__unnamedblk5__DOT___local_report_object_);
            VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_spell_chkr.svh", 140)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, "UVM/CONFIGDB/SPELLCHK"s, __VlefCall_5__get_report_verbosity_level);
            __VlefLogAnd_7 = VL_LTES_III(32, 0U, __VlefCall_5__get_report_verbosity_level);
            if (__VlefLogAnd_7) {
                VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk5__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_spell_chkr.svh", 140)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 0U, "UVM/CONFIGDB/SPELLCHK"s, __VlefCall_6__get_report_action);
                __VlefLogAnd_7 = (0U != __VlefCall_6__get_report_action);
            }
            if (VL_UNLIKELY((__VlefLogAnd_7))) {
                this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_595 = ""s;
                this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_595 
                    = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, unnamedblk3__DOT__q, 1U));
                __VlefCall_8__m_uvm_string_queue_join 
                    = this->__Vnontrivs.__Vfunc_m_uvm_string_queue_join__Vfuncout_595;
                __Vtask_uvm_report_info__report_enabled_checked_909 = 1U;
                this->__Vnontrivs.__Vtask_uvm_report_info__context_name_908 = ""s;
                __Vtask_uvm_report_info__line_907 = 0x0000008cU;
                this->__Vnontrivs.__Vtask_uvm_report_info__filename_906 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_spell_chkr.svh"s;
                __Vtask_uvm_report_info__verbosity_905 = 0U;
                VL_SFORMAT_NX(this->__Vnontrivs.__Vtask_uvm_report_info__message_904
                              ,"%s not located, did you mean %s",2
                              , 'S',&(s), 'S',&(__VlefCall_8__m_uvm_string_queue_join));
                this->__Vnontrivs.__Vtask_uvm_report_info__id_903 = "UVM/CONFIGDB/SPELLCHK"s;
                vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_596);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__Vfuncout_596;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 147)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_910);
                vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__Vfuncout_910;
                VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_info__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 148)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vnontrivs.__Vtask_uvm_report_info__id_903, this->__Vnontrivs.__Vtask_uvm_report_info__message_904, __Vtask_uvm_report_info__verbosity_905, this->__Vnontrivs.__Vtask_uvm_report_info__filename_906, __Vtask_uvm_report_info__line_907, this->__Vnontrivs.__Vtask_uvm_report_info__context_name_908, (::IData)(__Vtask_uvm_report_info__report_enabled_checked_909));
            }
        }
        check__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg::__VnoInFunc_levenshtein_distance(Vtb_top__Syms* __restrict vlSymsp, ::std::string s, ::std::string t, ::IData/*31:0*/ &levenshtein_distance__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg::__VnoInFunc_levenshtein_distance\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0__minimum;
    ::IData/*31:0*/ k;
    ::IData/*31:0*/ i;
    ::IData/*31:0*/ j;
    ::IData/*31:0*/ n;
    ::IData/*31:0*/ m;
    ::IData/*31:0*/ cost;
    ::IData/*31:0*/ distance;
    ::VlQueue<::IData/*31:0*/> d;
    {
        levenshtein_distance__Vfuncrtn = 0U;
        k = 0U;
        i = 0U;
        j = 0U;
        n = 0U;
        m = 0U;
        cost = 0U;
        distance = 0U;
        d.clear();
        d.atDefault() = 0;
        n = ((::IData)(1U) + VL_LEN_IN(s));
        m = ((::IData)(1U) + VL_LEN_IN(t));
        if (((1U == n) | (1U == m))) {
            levenshtein_distance__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        d.renew(VL_MULS_III(32, m, n));
        k = 0U;
        while (VL_LTS_III(32, k, n)) {
            d.atWrite(k) = k;
            k = ((::IData)(1U) + k);
        }
        k = 0U;
        while (VL_LTS_III(32, k, m)) {
            d.atWrite((k * n)) = k;
            k = ((::IData)(1U) + k);
        }
        i = 1U;
        while (VL_LTS_III(32, i, n)) {
            j = 1U;
            while (VL_LTS_III(32, j, m)) {
                cost = (VL_GETC_N(s,(i - (::IData)(1U))) 
                        != VL_GETC_N(t,(j - (::IData)(1U))));
                this->__VnoInFunc_minimum(vlSymsp, 
                                          ((::IData)(1U) 
                                           + d.at((
                                                   ((j 
                                                     - (::IData)(1U)) 
                                                    * n) 
                                                   + i))), 
                                          ((::IData)(1U) 
                                           + d.at((
                                                   ((j 
                                                     * n) 
                                                    + i) 
                                                   - (::IData)(1U)))), 
                                          (d.at((((
                                                   (j 
                                                    - (::IData)(1U)) 
                                                   * n) 
                                                  + i) 
                                                 - (::IData)(1U))) 
                                           + cost), __VlefCall_0__minimum);
                d.atWrite(((j * n) + i)) = __VlefCall_0__minimum;
                j = ((::IData)(1U) + j);
            }
            i = ((::IData)(1U) + i);
        }
        distance = d.at(((n * m) - (::IData)(1U)));
        levenshtein_distance__Vfuncrtn = distance;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg::__VnoInFunc_minimum(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ a, ::IData/*31:0*/ b, ::IData/*31:0*/ c, ::IData/*31:0*/ &minimum__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg::__VnoInFunc_minimum\n"); );
    // Body
    ::IData/*31:0*/ min;
    min = a;
    if (VL_LTS_III(32, b, min)) {
        min = b;
    }
    if (VL_LTS_III(32, c, min)) {
        min = c;
    }
    minimum__Vfuncrtn = min;
}
