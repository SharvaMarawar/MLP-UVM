// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_pool> t_rp;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 166)->__VnoInFunc_get_resource_pool(vlProcess, vlSymsp, t_rp);
    get__Vfuncrtn = t_rp;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &q, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_1__size;
    ::IData/*31:0*/ __VlefCall_0__size;
    ::IData/*31:0*/ unnamedblk9__DOT__i;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> r;
    ::IData/*31:0*/ prec;
    ::IData/*31:0*/ c_prec;
    {
        prec = 0U;
        c_prec = 0U;
        VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 625)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 632)->__VnoInFunc_get(vlProcess, vlSymsp, 0U, rsrc);
        prec = ((VlNull{} != rsrc) ? VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 633)
                ->__PVT__precedence : 0U);
        unnamedblk9__DOT__i = 0U;
        unnamedblk9__DOT__i = 1U;
        while (true) {
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 636)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            if (!(VL_LTS_III(32, unnamedblk9__DOT__i, __VlefCall_1__size))) break;
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 637)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk9__DOT__i, r);
            c_prec = ((VlNull{} != r) ? VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 638)
                      ->__PVT__precedence : 0U);
            if ((c_prec > prec)) {
                rsrc = r;
                prec = c_prec;
            }
            unnamedblk9__DOT__i = ((::IData)(1U) + unnamedblk9__DOT__i);
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__size;
    ::IData/*31:0*/ unnamedblk10__DOT__i;
    ::IData/*31:0*/ unnamedblk11__DOT__aa_iter;
    unnamedblk11__DOT__aa_iter = 0;
    ::IData/*31:0*/ unnamedblk11__DOT__aa_iter__Vnext;
    unnamedblk11__DOT__aa_iter__Vnext = 0;
    ::CData/*0:0*/ unnamedblk11__DOT__aa_iter__Vmore;
    unnamedblk11__DOT__aa_iter__Vmore = 0;
    ::IData/*31:0*/ unnamedblk11__DOT__q_iter;
    unnamedblk11__DOT__q_iter = 0;
    ::IData/*31:0*/ unnamedblk11__DOT__q_iter__Vloopsize;
    unnamedblk11__DOT__q_iter__Vloopsize = 0;
    ::VlAssocArray<::IData/*31:0*/, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base>>> all;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> r;
    ::IData/*31:0*/ prec;
    all.clear();
    all.atDefault().clear();
    prec = 0U;
    unnamedblk10__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 663)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk10__DOT__i, __VlefCall_0__size))) break;
        VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 664)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk10__DOT__i, r);
        prec = ((VlNull{} != r) ? VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 665)
                ->__PVT__precedence : 0U);
        all.atWrite(prec).push_front(r);
        unnamedblk10__DOT__i = ((::IData)(1U) + unnamedblk10__DOT__i);
    }
    VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 668)->__VnoInFunc_delete(vlProcess, vlSymsp, 0xffffffffU);
    unnamedblk11__DOT__aa_iter__Vmore = (0U != all.first(unnamedblk11__DOT__aa_iter__Vnext));
    while (unnamedblk11__DOT__aa_iter__Vmore) {
        unnamedblk11__DOT__aa_iter = unnamedblk11__DOT__aa_iter__Vnext;
        unnamedblk11__DOT__aa_iter__Vmore = (0U != all.next(unnamedblk11__DOT__aa_iter__Vnext));
        unnamedblk11__DOT__q_iter = 0U;
        while (VL_LTS_III(32, unnamedblk11__DOT__q_iter, all.at(unnamedblk11__DOT__aa_iter).size())) {
            unnamedblk11__DOT__q_iter__Vloopsize = all.at(unnamedblk11__DOT__aa_iter).size();
            VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 670)->__VnoInFunc_push_front(vlSymsp, all
                                                                                .at(unnamedblk11__DOT__aa_iter).at(unnamedblk11__DOT__q_iter));
            if ((unnamedblk11__DOT__q_iter__Vloopsize 
                 <= all.at(unnamedblk11__DOT__aa_iter).size())) {
                unnamedblk11__DOT__q_iter = ((::IData)(1U) 
                                             + unnamedblk11__DOT__q_iter);
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence_q(Vtb_top__Syms* __restrict vlSymsp, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base>> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence_q\n"); );
    // Body
    ::IData/*31:0*/ unnamedblk12__DOT__i;
    ::IData/*31:0*/ unnamedblk13__DOT__iter;
    unnamedblk13__DOT__iter = 0;
    ::IData/*31:0*/ unnamedblk13__DOT__iter__Vnext;
    unnamedblk13__DOT__iter__Vnext = 0;
    ::CData/*0:0*/ unnamedblk13__DOT__iter__Vmore;
    unnamedblk13__DOT__iter__Vmore = 0;
    ::VlAssocArray<::IData/*31:0*/, ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base>>> all;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> r;
    ::IData/*31:0*/ prec;
    all.clear();
    all.atDefault().clear();
    prec = 0U;
    unnamedblk12__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk12__DOT__i, q.size())) {
        r = q.at(unnamedblk12__DOT__i);
        prec = ((VlNull{} != r) ? VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 685)
                ->__PVT__precedence : 0U);
        all.atWrite(prec).push_back(r);
        unnamedblk12__DOT__i = ((::IData)(1U) + unnamedblk12__DOT__i);
    }
    q.clear();
    unnamedblk13__DOT__iter__Vmore = (0U != all.first(unnamedblk13__DOT__iter__Vnext));
    while (unnamedblk13__DOT__iter__Vmore) {
        unnamedblk13__DOT__iter = unnamedblk13__DOT__iter__Vnext;
        unnamedblk13__DOT__iter__Vmore = (0U != all.next(unnamedblk13__DOT__iter__Vnext));
        q = ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base>>{
            q,
            all.at(unnamedblk13__DOT__iter)
        };
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_default_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &get_default_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_default_precedence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    get_default_precedence__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1070)->__VnoInFunc_get_resource_pool_default_precedence(vlSymsp, get_default_precedence__Vfuncrtn);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp) {
    Vtb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string s, ::CData/*0:0*/ &spell_check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check\n"); );
    // Locals
    ::CData/*0:0*/ __Vfunc_check__Vfuncout_500;
    __Vfunc_check__Vfuncout_500 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    spell_check__Vfuncrtn = 0U;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_spell_chkr__Tz805a4ac6__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, this->__PVT__rtab, s, __Vfunc_check__Vfuncout_500);
    spell_check__Vfuncrtn = __Vfunc_check__Vfuncout_500;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_scope(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::std::string scope) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_scope\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_718;
    __Vtask_uvm_report_warning__verbosity_718 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_720;
    __Vtask_uvm_report_warning__line_720 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_722;
    __Vtask_uvm_report_warning__report_enabled_checked_722 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_501;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_723;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_0__get_default_precedence;
    ::IData/*31:0*/ unnamedblk1__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq;
    ::std::string name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> type_handle;
    {
        name = ""s;
        if (VL_UNLIKELY(((VlNull{} == rsrc)))) {
            __Vtask_uvm_report_warning__report_enabled_checked_722 = 0U;
            this->__Vtask_uvm_report_warning__context_name_721 = ""s;
            __Vtask_uvm_report_warning__line_720 = 0U;
            this->__Vtask_uvm_report_warning__filename_719 = ""s;
            __Vtask_uvm_report_warning__verbosity_718 = 0x000000c8U;
            this->__Vtask_uvm_report_warning__message_717 = "attempting to set scope of a null resource"s;
            this->__Vtask_uvm_report_warning__id_716 = "NULLRASRC"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_501);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_501;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_723);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_723;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_716, this->__Vtask_uvm_report_warning__message_717, __Vtask_uvm_report_warning__verbosity_718, this->__Vtask_uvm_report_warning__filename_719, __Vtask_uvm_report_warning__line_720, this->__Vtask_uvm_report_warning__context_name_721, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_722));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 243)->__VnoInFunc_get_name(vlSymsp, name);
        if (((""s != name) & (0U != this->__PVT__rtab.exists(name)))) {
            rq = this->__PVT__rtab.at(name);
            unnamedblk1__DOT__iter = 0U;
            unnamedblk1__DOT__iter = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 247)
                              ->__PVT__value.size())) {
                if ((VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 248)
                     ->__PVT__value.at(unnamedblk1__DOT__iter) 
                     == rsrc)) {
                    VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 250)->__VnoInFunc_m_set_scope(vlSymsp, scope);
                    goto __Vlabel0;
                }
                unnamedblk1__DOT__iter = ((::IData)(1U) 
                                          + unnamedblk1__DOT__iter);
            }
        }
        if ((VlNull{} == rq)) {
            rq = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc, vlProcess, vlSymsp);
            this->__PVT__rtab.atWrite(name) = rq;
        }
        VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 265)->__PVT__value.push_back(rsrc);
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 268)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if ((0U != this->__PVT__ttab.exists(type_handle))) {
            rq = this->__PVT__ttab.at(type_handle);
        } else {
            rq = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc, vlProcess, vlSymsp);
            this->__PVT__ttab.atWrite(type_handle) 
                = rq;
        }
        VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 279)->__PVT__value.push_back(rsrc);
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 282)->__VnoInFunc_m_set_scope(vlSymsp, scope);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_default_precedence(vlProcess, vlSymsp, __VlefCall_0__get_default_precedence);
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 283)->__PVT__precedence 
            = __VlefCall_0__get_default_precedence;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_delete(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_delete\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> type_handle;
    ::IData/*31:0*/ iter;
    name = ""s;
    iter = 0U;
    if ((VlNull{} != rsrc)) {
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 435)->__VnoInFunc_get_name(vlSymsp, name);
        if ((""s != name)) {
            if ((0U != this->__PVT__rtab.exists(name))) {
                rq = this->__PVT__rtab.at(name);
                iter = 0U;
                {
                    while (VL_LTS_III(32, iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 441)
                                      ->__PVT__value.size())) {
                        if ((VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 442)
                             ->__PVT__value.at(iter) 
                             == rsrc)) {
                            VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 443)->__PVT__value.erase(iter);
                            goto __Vlabel0;
                        }
                        iter = ((::IData)(1U) + iter);
                    }
                    __Vlabel0: ;
                }
            }
        }
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 451)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if ((0U != this->__PVT__ttab.exists(type_handle))) {
            rq = this->__PVT__ttab.at(type_handle);
            iter = 0U;
            {
                while (VL_LTS_III(32, iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 456)
                                  ->__PVT__value.size())) {
                    if ((VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 457)
                         ->__PVT__value.at(iter) == rsrc)) {
                        VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 458)->__PVT__value.erase(iter);
                        goto __Vlabel1;
                    }
                    iter = ((::IData)(1U) + iter);
                }
                __Vlabel1: ;
            }
        }
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record\n"); );
    // Body
    ::CData/*0:0*/ __VlefCall_0__is_auditing;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03aget_t> impt;
    {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
        if ((1U & (~ (::IData)(__VlefCall_0__is_auditing)))) {
            goto __Vlabel0;
        }
        impt = VL_NEW(Vtb_top_uvm_pkg__03a__03aget_t, vlSymsp);
        VL_NULL_CHECK(impt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 488)->__PVT__name 
            = name;
        VL_NULL_CHECK(impt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 489)->__PVT__scope 
            = scope;
        VL_NULL_CHECK(impt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 490)->__PVT__rsrc 
            = rsrc;
        VL_NULL_CHECK(impt, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 491)->__PVT__t 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        this->__PVT__get_record.push_back(impt);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, ::CData/*0:0*/ rpterr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &lookup_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name\n"); );
    // Locals
    ::CData/*0:0*/ __Vtask_spell_check__Vfuncout_724;
    __Vtask_spell_check__Vfuncout_724 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_504;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_504 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_505;
    __Vfunc_uvm_re_match__Vfuncout_505 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_509;
    __Vfunc_uvm_re_match____Vincrement1_509 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefLogOr_2;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> __VlefCall_1__get_type_handle;
    ::std::string __VlefCall_0__get_scope;
    ::VlClassRef<Vtb_top_std__03a__03aprocess> unnamedblk6__DOT__p;
    ::std::string unnamedblk6__DOT__s;
    ::IData/*31:0*/ unnamedblk7__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> unnamedblk7__DOT__unnamedblk8__DOT__rsrc_iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> q;
    ::std::string rsrcs;
    {
        rsrcs = ""s;
        vlSymsp->vlInst.TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk6__DOT__p);
        unnamedblk6__DOT__s = ""s;
        if ((VlNull{} != unnamedblk6__DOT__p)) {
            VL_NULL_CHECK(unnamedblk6__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 563)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk6__DOT__s);
        }
        q = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b, vlProcess, vlSymsp, ""s);
        if ((VlNull{} != unnamedblk6__DOT__p)) {
            VL_NULL_CHECK(unnamedblk6__DOT__p, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 568)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk6__DOT__s);
        }
        if ((""s == name)) {
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        }
        if ((1U & (~ (0U != this->__PVT__rtab.exists(name))))) {
            if (rpterr) {
                this->__VnoInFunc_spell_check(vlProcess, vlSymsp, name, __Vtask_spell_check__Vfuncout_724);
            }
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        }
        rq = this->__PVT__rtab.at(name);
        unnamedblk7__DOT__iter = 0U;
        unnamedblk7__DOT__iter = 0U;
        while (VL_LTS_III(32, unnamedblk7__DOT__iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 593)
                          ->__PVT__value.size())) {
            unnamedblk7__DOT__unnamedblk8__DOT__rsrc_iter 
                = VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 595)
                ->__PVT__value.at(unnamedblk7__DOT__iter);
            if ((VlNull{} != unnamedblk7__DOT__unnamedblk8__DOT__rsrc_iter)) {
                VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__rsrc_iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 596)->__VnoInFunc_get_scope(vlSymsp, __VlefCall_0__get_scope);
            } else {
                __VlefCall_0__get_scope = ""s;
            }
            rsrcs = __VlefCall_0__get_scope;
            __VlefLogOr_2 = (VlNull{} == type_handle);
            if ((1U & (~ (::IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk8__DOT__rsrc_iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 598)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __VlefCall_1__get_type_handle);
                __VlefLogOr_2 = (__VlefCall_1__get_type_handle 
                                 == type_handle);
            }
            if (__VlefLogOr_2) {
                this->__Vfunc_uvm_is_match__str_503 
                    = scope;
                this->__Vfunc_uvm_is_match__expr_502 
                    = rsrcs;
                this->__Vfunc_uvm_re_match__str_507 
                    = this->__Vfunc_uvm_is_match__str_503;
                this->__Vfunc_uvm_re_match__re_506 
                    = this->__Vfunc_uvm_is_match__expr_502;
                __Vfunc_uvm_re_match____Vincrement1_509 = 0U;
                {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_506))) {
                        __Vfunc_uvm_re_match__Vfuncout_505 = 0U;
                        goto __Vlabel1;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_506,0U))) {
                        this->__Vfunc_uvm_re_match__re_506 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_506,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_506) 
                                           - (::IData)(1U)));
                    }
                    while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_507)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_506,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_506,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__str_507,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_506,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__Vfuncout_505 = 1U;
                            goto __Vlabel1;
                        }
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_507))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_506,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_506))) {
                                __Vfunc_uvm_re_match__Vfuncout_505 = 0U;
                                goto __Vlabel1;
                            }
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_506,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__str_507,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_506,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match____Vincrement1_509 
                                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match____Vincrement1_509;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__re_506)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_506,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__Vfuncout_505 
                        = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_506))
                            ? 0U : 1U);
                    __Vlabel1: ;
                }
                __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_504 
                    = __Vfunc_uvm_re_match__Vfuncout_505;
                __VlefLogOr_2 = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_504);
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 601)->__VnoInFunc_push_back(vlSymsp, unnamedblk7__DOT__unnamedblk8__DOT__rsrc_iter);
            }
            unnamedblk7__DOT__iter = ((::IData)(1U) 
                                      + unnamedblk7__DOT__iter);
        }
        lookup_name__Vfuncrtn = q;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, ::CData/*0:0*/ rpterr, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name\n"); );
    // Locals
    ::CData/*0:0*/ __Vtask_spell_check__Vfuncout_725;
    __Vtask_spell_check__Vfuncout_725 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_512;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_512 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_513;
    __Vfunc_uvm_re_match__Vfuncout_513 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_517;
    __Vfunc_uvm_re_match____Vincrement1_517 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_3__uvm_is_match;
    ::std::string __VlefCall_2__get_scope;
    ::CData/*0:0*/ __VlefLogOr_1;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> __VlefCall_0__get_type_handle;
    ::IData/*31:0*/ unnamedblk14__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> unnamedblk14__DOT__unnamedblk15__DOT__rsrc_iter;
    ::IData/*31:0*/ unnamedblk16__DOT__iter;
    unnamedblk16__DOT__iter = 0;
    ::IData/*31:0*/ unnamedblk16__DOT__iter__Vloopsize;
    unnamedblk16__DOT__iter__Vloopsize = 0;
    ::VlQueue<::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base>> svq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc;
    ::std::string rsrcs;
    {
        svq.clear();
        rsrcs = ""s;
        if ((""s == name)) {
            this->__VnoInFunc_push_get_record(vlSymsp, name, scope, VlNull{});
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U & (~ (0U != this->__PVT__rtab.exists(name))))) {
            if (rpterr) {
                this->__VnoInFunc_spell_check(vlProcess, vlSymsp, name, __Vtask_spell_check__Vfuncout_725);
            }
            this->__VnoInFunc_push_get_record(vlSymsp, name, scope, VlNull{});
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        rq = this->__PVT__rtab.at(name);
        unnamedblk14__DOT__iter = 0U;
        unnamedblk14__DOT__iter = 0U;
        while (VL_LTS_III(32, unnamedblk14__DOT__iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 736)
                          ->__PVT__value.size())) {
            unnamedblk14__DOT__unnamedblk15__DOT__rsrc_iter 
                = VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 738)
                ->__PVT__value.at(unnamedblk14__DOT__iter);
            __VlefLogOr_1 = (VlNull{} == type_handle);
            if ((1U & (~ (::IData)(__VlefLogOr_1)))) {
                VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk15__DOT__rsrc_iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 739)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __VlefCall_0__get_type_handle);
                __VlefLogOr_1 = (type_handle == __VlefCall_0__get_type_handle);
            }
            if (__VlefLogOr_1) {
                svq.push_back(unnamedblk14__DOT__unnamedblk15__DOT__rsrc_iter);
            }
            unnamedblk14__DOT__iter = ((::IData)(1U) 
                                       + unnamedblk14__DOT__iter);
        }
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence_q(vlSymsp, svq);
        {
            unnamedblk16__DOT__iter = 0U;
            while (VL_LTS_III(32, unnamedblk16__DOT__iter, svq.size())) {
                unnamedblk16__DOT__iter__Vloopsize 
                    = svq.size();
                rsrc = svq.at(unnamedblk16__DOT__iter);
                if ((VlNull{} != rsrc)) {
                    VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 750)->__VnoInFunc_get_scope(vlSymsp, __VlefCall_2__get_scope);
                } else {
                    __VlefCall_2__get_scope = ""s;
                }
                rsrcs = __VlefCall_2__get_scope;
                this->__Vfunc_uvm_is_match__str_511 
                    = scope;
                this->__Vfunc_uvm_is_match__expr_510 
                    = rsrcs;
                this->__Vfunc_uvm_re_match__str_515 
                    = this->__Vfunc_uvm_is_match__str_511;
                this->__Vfunc_uvm_re_match__re_514 
                    = this->__Vfunc_uvm_is_match__expr_510;
                __Vfunc_uvm_re_match____Vincrement1_517 = 0U;
                {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_514))) {
                        __Vfunc_uvm_re_match__Vfuncout_513 = 0U;
                        goto __Vlabel2;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_514,0U))) {
                        this->__Vfunc_uvm_re_match__re_514 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_514,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_514) 
                                           - (::IData)(1U)));
                    }
                    while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_515)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_514,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_514,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__str_515,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_514,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__Vfuncout_513 = 1U;
                            goto __Vlabel2;
                        }
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_515))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_514,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_514))) {
                                __Vfunc_uvm_re_match__Vfuncout_513 = 0U;
                                goto __Vlabel2;
                            }
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_514,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__str_515,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_514,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match____Vincrement1_517 
                                = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match____Vincrement1_517;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__re_514)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_514,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__Vfuncout_513 
                        = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_514))
                            ? 0U : 1U);
                    __Vlabel2: ;
                }
                __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_512 
                    = __Vfunc_uvm_re_match__Vfuncout_513;
                __VlefCall_3__uvm_is_match = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_512);
                if (__VlefCall_3__uvm_is_match) {
                    goto __Vlabel1;
                } else {
                    rsrc = VlNull{};
                }
                if ((unnamedblk16__DOT__iter__Vloopsize 
                     <= svq.size())) {
                    unnamedblk16__DOT__iter = ((::IData)(1U) 
                                               + unnamedblk16__DOT__iter);
                }
            }
            __Vlabel1: ;
        }
        this->__VnoInFunc_push_get_record(vlSymsp, name, scope, rsrc);
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string re, ::std::string scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &lookup_regex__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_520;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_520 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_521;
    __Vfunc_uvm_re_match__Vfuncout_521 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_525;
    __Vfunc_uvm_re_match____Vincrement1_525 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_528;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_528 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_529;
    __Vfunc_uvm_re_match__Vfuncout_529 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_533;
    __Vfunc_uvm_re_match____Vincrement1_533 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefCall_2__uvm_is_match;
    ::std::string __VlefCall_1__get_scope;
    ::CData/*0:0*/ __VlefCall_0__uvm_is_match;
    ::std::string unnamedblk21__DOT__name;
    ::std::string unnamedblk21__DOT__name__Vnext;
    ::CData/*0:0*/ unnamedblk21__DOT__name__Vmore;
    unnamedblk21__DOT__name__Vmore = 0;
    ::IData/*31:0*/ unnamedblk21__DOT__unnamedblk22__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__rsrc_iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> result_q;
    result_q = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b, vlProcess, vlSymsp, ""s);
    unnamedblk21__DOT__name__Vmore = (0U != this->__PVT__rtab.first(unnamedblk21__DOT__name__Vnext));
    while (unnamedblk21__DOT__name__Vmore) {
        unnamedblk21__DOT__name = unnamedblk21__DOT__name__Vnext;
        unnamedblk21__DOT__name__Vmore = (0U != this->__PVT__rtab.next(unnamedblk21__DOT__name__Vnext));
        {
            this->__Vfunc_uvm_is_match__str_519 = unnamedblk21__DOT__name;
            this->__Vfunc_uvm_is_match__expr_518 = re;
            this->__Vfunc_uvm_re_match__str_523 = this->__Vfunc_uvm_is_match__str_519;
            this->__Vfunc_uvm_re_match__re_522 = this->__Vfunc_uvm_is_match__expr_518;
            __Vfunc_uvm_re_match____Vincrement1_525 = 0U;
            {
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_522))) {
                    __Vfunc_uvm_re_match__Vfuncout_521 = 0U;
                    goto __Vlabel1;
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_522,0U))) {
                    this->__Vfunc_uvm_re_match__re_522 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_522,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_522) 
                                       - (::IData)(1U)));
                }
                while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_523)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_522,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_522,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__str_523,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_522,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__Vfuncout_521 = 1U;
                        goto __Vlabel1;
                    }
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                }
                while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_523))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_522,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_522))) {
                            __Vfunc_uvm_re_match__Vfuncout_521 = 0U;
                            goto __Vlabel1;
                        }
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_522,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__str_523,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_522,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match____Vincrement1_525 
                            = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match____Vincrement1_525;
                    }
                }
                while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__re_522)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_522,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                }
                __Vfunc_uvm_re_match__Vfuncout_521 
                    = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_522))
                        ? 0U : 1U);
                __Vlabel1: ;
            }
            __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_520 
                = __Vfunc_uvm_re_match__Vfuncout_521;
            __VlefCall_0__uvm_is_match = (0U == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_520);
            if ((1U & (~ (::IData)(__VlefCall_0__uvm_is_match)))) {
                goto __Vlabel0;
            }
            rq = this->__PVT__rtab.at(unnamedblk21__DOT__name);
            unnamedblk21__DOT__unnamedblk22__DOT__iter = 0U;
            unnamedblk21__DOT__unnamedblk22__DOT__iter = 0U;
            while (VL_LTS_III(32, unnamedblk21__DOT__unnamedblk22__DOT__iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 874)
                              ->__PVT__value.size())) {
                unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__rsrc_iter 
                    = VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 876)
                    ->__PVT__value.at(unnamedblk21__DOT__unnamedblk22__DOT__iter);
                __VlefCall_2__uvm_is_match = (VlNull{} 
                                              != unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__rsrc_iter);
                if (__VlefCall_2__uvm_is_match) {
                    VL_NULL_CHECK(unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__rsrc_iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 877)->__VnoInFunc_get_scope(vlSymsp, __VlefCall_1__get_scope);
                    this->__Vfunc_uvm_is_match__str_527 
                        = scope;
                    this->__Vfunc_uvm_is_match__expr_526 
                        = VL_CVT_PACK_STR_NN(__VlefCall_1__get_scope);
                    this->__Vfunc_uvm_re_match__str_531 
                        = this->__Vfunc_uvm_is_match__str_527;
                    this->__Vfunc_uvm_re_match__re_530 
                        = this->__Vfunc_uvm_is_match__expr_526;
                    __Vfunc_uvm_re_match____Vincrement1_533 = 0U;
                    {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_530))) {
                            __Vfunc_uvm_re_match__Vfuncout_529 = 0U;
                            goto __Vlabel2;
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_530,0U))) {
                            this->__Vfunc_uvm_re_match__re_530 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_530,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_530) 
                                               - (::IData)(1U)));
                        }
                        while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_531)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_530,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_530,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__str_531,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_530,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__Vfuncout_529 = 1U;
                                goto __Vlabel2;
                            }
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        }
                        while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_531))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_530,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_530))) {
                                    __Vfunc_uvm_re_match__Vfuncout_529 = 0U;
                                    goto __Vlabel2;
                                }
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_530,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__str_531,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                        | (0x3fU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__re_530,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match____Vincrement1_533 
                                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match____Vincrement1_533;
                            }
                        }
                        while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__re_530)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_530,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        }
                        __Vfunc_uvm_re_match__Vfuncout_529 
                            = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_530))
                                ? 0U : 1U);
                        __Vlabel2: ;
                    }
                    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_528 
                        = __Vfunc_uvm_re_match__Vfuncout_529;
                    __VlefCall_2__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_528);
                }
                if (__VlefCall_2__uvm_is_match) {
                    VL_NULL_CHECK(result_q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 879)->__VnoInFunc_push_back(vlSymsp, unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__rsrc_iter);
                }
                unnamedblk21__DOT__unnamedblk22__DOT__iter 
                    = ((::IData)(1U) + unnamedblk21__DOT__unnamedblk22__DOT__iter);
            }
            __Vlabel0: ;
        }
    }
    lookup_regex__Vfuncrtn = result_q;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string scope, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> &lookup_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope\n"); );
    // Locals
    ::IData/*31:0*/ __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_536;
    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_536 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match__Vfuncout_537;
    __Vfunc_uvm_re_match__Vfuncout_537 = 0;
    ::IData/*31:0*/ __Vfunc_uvm_re_match____Vincrement1_541;
    __Vfunc_uvm_re_match____Vincrement1_541 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::CData/*0:0*/ __VlefExpr_3;
    ::CData/*0:0*/ __VlefCall_2__uvm_is_match;
    ::std::string __VlefCall_1__get_scope;
    ::CData/*0:0*/ __VlefExpr_0;
    ::IData/*31:0*/ unnamedblk24__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> unnamedblk24__DOT__unnamedblk25__DOT__rsrc_iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b> q;
    ::std::string name;
    q = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_queue__Tzf640760b, vlProcess, vlSymsp, ""s);
    name = ""s;
    __VlefExpr_0 = (0U != this->__PVT__rtab.last(name));
    if (__VlefExpr_0) {
        do {
            rq = this->__PVT__rtab.at(name);
            unnamedblk24__DOT__iter = 0U;
            unnamedblk24__DOT__iter = 0U;
            while (VL_LTS_III(32, unnamedblk24__DOT__iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 915)
                              ->__PVT__value.size())) {
                unnamedblk24__DOT__unnamedblk25__DOT__rsrc_iter 
                    = VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 917)
                    ->__PVT__value.at(unnamedblk24__DOT__iter);
                __VlefCall_2__uvm_is_match = (VlNull{} 
                                              != unnamedblk24__DOT__unnamedblk25__DOT__rsrc_iter);
                if (__VlefCall_2__uvm_is_match) {
                    VL_NULL_CHECK(unnamedblk24__DOT__unnamedblk25__DOT__rsrc_iter, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 918)->__VnoInFunc_get_scope(vlSymsp, __VlefCall_1__get_scope);
                    this->__Vfunc_uvm_is_match__str_535 
                        = scope;
                    this->__Vfunc_uvm_is_match__expr_534 
                        = VL_CVT_PACK_STR_NN(__VlefCall_1__get_scope);
                    this->__Vfunc_uvm_re_match__str_539 
                        = this->__Vfunc_uvm_is_match__str_535;
                    this->__Vfunc_uvm_re_match__re_538 
                        = this->__Vfunc_uvm_is_match__expr_534;
                    __Vfunc_uvm_re_match____Vincrement1_541 = 0U;
                    {
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_538))) {
                            __Vfunc_uvm_re_match__Vfuncout_537 = 0U;
                            goto __Vlabel0;
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_538,0U))) {
                            this->__Vfunc_uvm_re_match__re_538 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__re_538,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__re_538) 
                                               - (::IData)(1U)));
                        }
                        while (((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_539)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_538,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_538,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__str_539,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__re_538,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__Vfuncout_537 = 1U;
                                goto __Vlabel0;
                            }
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        }
                        while ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__str_539))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_538,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_538))) {
                                    __Vfunc_uvm_re_match__Vfuncout_537 = 0U;
                                    goto __Vlabel0;
                                }
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__re_538,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__str_539,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                        | (0x3fU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__re_538,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else {
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match____Vincrement1_541 
                                    = vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((::IData)(1U) 
                                       + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match____Vincrement1_541;
                            }
                        }
                        while ((VL_LTS_III(32, vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__re_538)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__re_538,vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((::IData)(1U) + vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        }
                        __Vfunc_uvm_re_match__Vfuncout_537 
                            = ((vlSymsp->vlInst.TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__re_538))
                                ? 0U : 1U);
                        __Vlabel0: ;
                    }
                    __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_536 
                        = __Vfunc_uvm_re_match__Vfuncout_537;
                    __VlefCall_2__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match____VlefCall_0__uvm_re_match_536);
                }
                if (__VlefCall_2__uvm_is_match) {
                    VL_NULL_CHECK(q, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 919)->__VnoInFunc_push_back(vlSymsp, unnamedblk24__DOT__unnamedblk25__DOT__rsrc_iter);
                }
                unnamedblk24__DOT__iter = ((::IData)(1U) 
                                           + unnamedblk24__DOT__iter);
            }
            __VlefExpr_3 = (0U != this->__PVT__rtab.prev(name));
        } while (__VlefExpr_3);
    }
    lookup_scope__Vfuncrtn = q;
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq, ::IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_728;
    __Vtask_uvm_report_error__verbosity_728 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_730;
    __Vtask_uvm_report_error__line_730 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_732;
    __Vtask_uvm_report_error__report_enabled_checked_732 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_542;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_733;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk26__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> r;
    ::IData/*31:0*/ i;
    ::std::string msg;
    ::std::string name;
    {
        i = 0U;
        msg = ""s;
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 956)->__VnoInFunc_get_name(vlSymsp, name);
        unnamedblk26__DOT__iter = 0U;
        unnamedblk26__DOT__iter = 0U;
        {
            while (VL_LTS_III(32, unnamedblk26__DOT__iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 958)
                              ->__PVT__value.size())) {
                r = VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 959)
                    ->__PVT__value.at(unnamedblk26__DOT__iter);
                if ((r == rsrc)) {
                    i = unnamedblk26__DOT__iter;
                    goto __Vlabel1;
                }
                unnamedblk26__DOT__iter = ((::IData)(1U) 
                                           + unnamedblk26__DOT__iter);
            }
            __Vlabel1: ;
        }
        if (VL_UNLIKELY(((r != rsrc)))) {
            VL_SFORMAT_NX(msg,"Handle for resource named %s is not in the name table; cannot change its priority",1
                          , 'S',&(name));
            __Vtask_uvm_report_error__report_enabled_checked_732 = 0U;
            this->__Vtask_uvm_report_error__context_name_731 = ""s;
            __Vtask_uvm_report_error__line_730 = 0U;
            this->__Vtask_uvm_report_error__filename_729 = ""s;
            __Vtask_uvm_report_error__verbosity_728 = 0U;
            this->__Vtask_uvm_report_error__message_727 
                = msg;
            this->__Vtask_uvm_report_error__id_726 = "NORSRC"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_542);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_542;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_733);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_733;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_726, this->__Vtask_uvm_report_error__message_727, __Vtask_uvm_report_error__verbosity_728, this->__Vtask_uvm_report_error__filename_729, __Vtask_uvm_report_error__line_730, this->__Vtask_uvm_report_error__context_name_731, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_732));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 972)->__PVT__value.erase(i);
        if ((0U == pri)) {
            VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 976)->__PVT__value.push_front(rsrc);
        } else if ((1U == pri)) {
            VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 979)->__PVT__value.push_back(rsrc);
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_736;
    __Vtask_uvm_report_warning__verbosity_736 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_738;
    __Vtask_uvm_report_warning__line_738 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_740;
    __Vtask_uvm_report_warning__report_enabled_checked_740 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_543;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_741;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_744;
    __Vtask_uvm_report_error__verbosity_744 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_746;
    __Vtask_uvm_report_error__line_746 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_748;
    __Vtask_uvm_report_error__report_enabled_checked_748 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_544;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_749;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_0__get_name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> type_handle;
    ::std::string msg;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq;
    {
        msg = ""s;
        if (VL_UNLIKELY(((VlNull{} == rsrc)))) {
            __Vtask_uvm_report_warning__report_enabled_checked_740 = 0U;
            this->__Vtask_uvm_report_warning__context_name_739 = ""s;
            __Vtask_uvm_report_warning__line_738 = 0U;
            this->__Vtask_uvm_report_warning__filename_737 = ""s;
            __Vtask_uvm_report_warning__verbosity_736 = 0x000000c8U;
            this->__Vtask_uvm_report_warning__message_735 = "attempting to change the search priority of a null resource"s;
            this->__Vtask_uvm_report_warning__id_734 = "NULLRASRC"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_543);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_543;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_741);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_741;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_734, this->__Vtask_uvm_report_warning__message_735, __Vtask_uvm_report_warning__verbosity_736, this->__Vtask_uvm_report_warning__filename_737, __Vtask_uvm_report_warning__line_738, this->__Vtask_uvm_report_warning__context_name_739, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_740));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1005)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if (VL_UNLIKELY(((1U & (~ (0U != this->__PVT__ttab.exists(type_handle))))))) {
            VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1007)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            VL_SFORMAT_NX(msg,"Type handle for resrouce named %s not found in type map; cannot change its search priority",1
                          , 'S',&(__VlefCall_0__get_name));
            __Vtask_uvm_report_error__report_enabled_checked_748 = 0U;
            this->__Vtask_uvm_report_error__context_name_747 = ""s;
            __Vtask_uvm_report_error__line_746 = 0U;
            this->__Vtask_uvm_report_error__filename_745 = ""s;
            __Vtask_uvm_report_error__verbosity_744 = 0U;
            this->__Vtask_uvm_report_error__message_743 
                = msg;
            this->__Vtask_uvm_report_error__id_742 = "RNFTYPE"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_544);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_544;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_749);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_749;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_742, this->__Vtask_uvm_report_error__message_743, __Vtask_uvm_report_error__verbosity_744, this->__Vtask_uvm_report_error__filename_745, __Vtask_uvm_report_error__line_746, this->__Vtask_uvm_report_error__context_name_747, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_748));
            goto __Vlabel0;
        }
        rq = this->__PVT__ttab.at(type_handle);
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, rq, pri);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_752;
    __Vtask_uvm_report_warning__verbosity_752 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_754;
    __Vtask_uvm_report_warning__line_754 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_756;
    __Vtask_uvm_report_warning__report_enabled_checked_756 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_545;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_757;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_760;
    __Vtask_uvm_report_error__verbosity_760 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_762;
    __Vtask_uvm_report_error__line_762 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_764;
    __Vtask_uvm_report_error__report_enabled_checked_764 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_546;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_765;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string name;
    ::std::string msg;
    {
        name = ""s;
        msg = ""s;
        if (VL_UNLIKELY(((VlNull{} == rsrc)))) {
            __Vtask_uvm_report_warning__report_enabled_checked_756 = 0U;
            this->__Vtask_uvm_report_warning__context_name_755 = ""s;
            __Vtask_uvm_report_warning__line_754 = 0U;
            this->__Vtask_uvm_report_warning__filename_753 = ""s;
            __Vtask_uvm_report_warning__verbosity_752 = 0x000000c8U;
            this->__Vtask_uvm_report_warning__message_751 = "attempting to change the search priority of a null resource"s;
            this->__Vtask_uvm_report_warning__id_750 = "NULLRASRC"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_545);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_545;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_757);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_757;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_750, this->__Vtask_uvm_report_warning__message_751, __Vtask_uvm_report_warning__verbosity_752, this->__Vtask_uvm_report_warning__filename_753, __Vtask_uvm_report_warning__line_754, this->__Vtask_uvm_report_warning__context_name_755, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_756));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1035)->__VnoInFunc_get_name(vlSymsp, name);
        if (VL_UNLIKELY(((1U & (~ (0U != this->__PVT__rtab.exists(name))))))) {
            VL_SFORMAT_NX(msg,"Resrouce named %s not found in name map; cannot change its search priority",1
                          , 'S',&(name));
            __Vtask_uvm_report_error__report_enabled_checked_764 = 0U;
            this->__Vtask_uvm_report_error__context_name_763 = ""s;
            __Vtask_uvm_report_error__line_762 = 0U;
            this->__Vtask_uvm_report_error__filename_761 = ""s;
            __Vtask_uvm_report_error__verbosity_760 = 0U;
            this->__Vtask_uvm_report_error__message_759 
                = msg;
            this->__Vtask_uvm_report_error__id_758 = "RNFNAME"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_546);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_546;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_765);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_765;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_758, this->__Vtask_uvm_report_error__message_759, __Vtask_uvm_report_error__verbosity_760, this->__Vtask_uvm_report_error__filename_761, __Vtask_uvm_report_error__line_762, this->__Vtask_uvm_report_error__context_name_763, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_764));
            goto __Vlabel0;
        }
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, this->__PVT__rtab
                                             .at(name), pri);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc, ::IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set_priority_type(vlSymsp, rsrc, pri);
    this->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, rsrc, pri);
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> r, ::IData/*31:0*/ p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_precedence\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_768;
    __Vtask_uvm_report_warning__verbosity_768 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_770;
    __Vtask_uvm_report_warning__line_770 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_772;
    __Vtask_uvm_report_warning__report_enabled_checked_772 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_547;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_773;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_776;
    __Vtask_uvm_report_warning__verbosity_776 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_778;
    __Vtask_uvm_report_warning__line_778 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_780;
    __Vtask_uvm_report_warning__report_enabled_checked_780 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_548;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_781;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk27__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq;
    ::std::string name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        name = ""s;
        if (VL_UNLIKELY(((VlNull{} == r)))) {
            __Vtask_uvm_report_warning__report_enabled_checked_772 = 0U;
            this->__Vtask_uvm_report_warning__context_name_771 = ""s;
            __Vtask_uvm_report_warning__line_770 = 0U;
            this->__Vtask_uvm_report_warning__filename_769 = ""s;
            __Vtask_uvm_report_warning__verbosity_768 = 0x000000c8U;
            this->__Vtask_uvm_report_warning__message_767 = "attempting to set precedence of a null resource"s;
            this->__Vtask_uvm_report_warning__id_766 = "NULLRASRC"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_547);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_547;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_773);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_773;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_766, this->__Vtask_uvm_report_warning__message_767, __Vtask_uvm_report_warning__verbosity_768, this->__Vtask_uvm_report_warning__filename_769, __Vtask_uvm_report_warning__line_770, this->__Vtask_uvm_report_warning__context_name_771, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_772));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1088)->__VnoInFunc_get_name(vlSymsp, name);
        if ((0U != this->__PVT__rtab.exists(name))) {
            rq = this->__PVT__rtab.at(name);
            unnamedblk27__DOT__iter = 0U;
            unnamedblk27__DOT__iter = 0U;
            {
                while (VL_LTS_III(32, unnamedblk27__DOT__iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1091)
                                  ->__PVT__value.size())) {
                    rsrc = VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1092)
                        ->__PVT__value.at(unnamedblk27__DOT__iter);
                    if ((rsrc == r)) {
                        goto __Vlabel1;
                    }
                    unnamedblk27__DOT__iter = ((::IData)(1U) 
                                               + unnamedblk27__DOT__iter);
                }
                __Vlabel1: ;
            }
        }
        if (VL_UNLIKELY(((r != rsrc)))) {
            __Vtask_uvm_report_warning__report_enabled_checked_780 = 0U;
            this->__Vtask_uvm_report_warning__context_name_779 = ""s;
            __Vtask_uvm_report_warning__line_778 = 0U;
            this->__Vtask_uvm_report_warning__filename_777 = ""s;
            __Vtask_uvm_report_warning__verbosity_776 = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_775
                          ,"resource named %s is not placed within the pool",1
                          , 'S',&(name));
            this->__Vtask_uvm_report_warning__id_774 = "NORSRC"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_548);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_548;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_781);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_781;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_774, this->__Vtask_uvm_report_warning__message_775, __Vtask_uvm_report_warning__verbosity_776, this->__Vtask_uvm_report_warning__filename_777, __Vtask_uvm_report_warning__line_778, this->__Vtask_uvm_report_warning__context_name_779, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_780));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1105)->__PVT__precedence 
            = p;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_precedence(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> r, ::IData/*31:0*/ &get_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_precedence\n"); );
    // Locals
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_784;
    __Vtask_uvm_report_warning__verbosity_784 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_786;
    __Vtask_uvm_report_warning__line_786 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_788;
    __Vtask_uvm_report_warning__report_enabled_checked_788 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_549;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_789;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__verbosity_792;
    __Vtask_uvm_report_warning__verbosity_792 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_warning__line_794;
    __Vtask_uvm_report_warning__line_794 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_warning__report_enabled_checked_796;
    __Vtask_uvm_report_warning__report_enabled_checked_796 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_550;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_797;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ unnamedblk28__DOT__iter;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shared__Tzdc5d07fc> rq;
    ::std::string name;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        get_precedence__Vfuncrtn = 0U;
        name = ""s;
        if (VL_UNLIKELY(((VlNull{} == r)))) {
            __Vtask_uvm_report_warning__report_enabled_checked_788 = 0U;
            this->__Vtask_uvm_report_warning__context_name_787 = ""s;
            __Vtask_uvm_report_warning__line_786 = 0U;
            this->__Vtask_uvm_report_warning__filename_785 = ""s;
            __Vtask_uvm_report_warning__verbosity_784 = 0x000000c8U;
            this->__Vtask_uvm_report_warning__message_783 = "attempting to get precedence of a null resource"s;
            this->__Vtask_uvm_report_warning__id_782 = "NULLRASRC"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_549);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_549;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_789);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_789;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_782, this->__Vtask_uvm_report_warning__message_783, __Vtask_uvm_report_warning__verbosity_784, this->__Vtask_uvm_report_warning__filename_785, __Vtask_uvm_report_warning__line_786, this->__Vtask_uvm_report_warning__context_name_787, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_788));
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_default_precedence(vlProcess, vlSymsp, get_precedence__Vfuncrtn);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1122)->__VnoInFunc_get_name(vlSymsp, name);
        if ((0U != this->__PVT__rtab.exists(name))) {
            rq = this->__PVT__rtab.at(name);
            unnamedblk28__DOT__iter = 0U;
            unnamedblk28__DOT__iter = 0U;
            {
                while (VL_LTS_III(32, unnamedblk28__DOT__iter, VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1126)
                                  ->__PVT__value.size())) {
                    rsrc = VL_NULL_CHECK(rq, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1127)
                        ->__PVT__value.at(unnamedblk28__DOT__iter);
                    if ((rsrc == r)) {
                        goto __Vlabel1;
                    }
                    unnamedblk28__DOT__iter = ((::IData)(1U) 
                                               + unnamedblk28__DOT__iter);
                }
                __Vlabel1: ;
            }
        }
        if (VL_UNLIKELY(((r != rsrc)))) {
            __Vtask_uvm_report_warning__report_enabled_checked_796 = 0U;
            this->__Vtask_uvm_report_warning__context_name_795 = ""s;
            __Vtask_uvm_report_warning__line_794 = 0U;
            this->__Vtask_uvm_report_warning__filename_793 = ""s;
            __Vtask_uvm_report_warning__verbosity_792 = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__message_791
                          ,"resource named %s is not placed within the pool",1
                          , 'S',&(name));
            this->__Vtask_uvm_report_warning__id_790 = "NORSRC"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_550);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__Vfuncout_550;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 166)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_797);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__Vfuncout_797;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_warning__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 167)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__id_790, this->__Vtask_uvm_report_warning__message_791, __Vtask_uvm_report_warning__verbosity_792, this->__Vtask_uvm_report_warning__filename_793, __Vtask_uvm_report_warning__line_794, this->__Vtask_uvm_report_warning__context_name_795, (::IData)(__Vtask_uvm_report_warning__report_enabled_checked_796));
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_default_precedence(vlProcess, vlSymsp, get_precedence__Vfuncrtn);
            goto __Vlabel0;
        }
        get_precedence__Vfuncrtn = VL_NULL_CHECK(r, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_resource_pool.svh", 1140)
            ->__PVT__precedence;
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_resource_pool::~Vtb_top_uvm_pkg__03a__03auvm_resource_pool() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_resource_pool::~\n"); );
}
