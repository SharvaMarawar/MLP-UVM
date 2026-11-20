// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_common_domain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_common_domain\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__Vfuncout_2139;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__Vfuncout_2140;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__Vfuncout_2141;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__Vfuncout_2142;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__Vfuncout_2143;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__Vfuncout_2144;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__Vfuncout_2145;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__Vfuncout_2146;
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> __VlefCall_18__find;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_run_phase> __VlefCall_17__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_phase> __VlefCall_16__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_check_phase> __VlefCall_15__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_extract_phase> __VlefCall_14__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_run_phase> __VlefCall_13__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_start_of_simulation_phase> __VlefCall_12__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_end_of_elaboration_phase> __VlefCall_11__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_connect_phase> __VlefCall_10__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_build_phase> __VlefCall_9__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_final_phase> __VlefCall_8__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_phase> __VlefCall_7__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_check_phase> __VlefCall_6__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_extract_phase> __VlefCall_5__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_run_phase> __VlefCall_4__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_start_of_simulation_phase> __VlefCall_3__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_end_of_elaboration_phase> __VlefCall_2__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_connect_phase> __VlefCall_1__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_build_phase> __VlefCall_0__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> domain;
    {
        if ((0U != this->__Vnontrivs.__PVT__m_domains.exists("common"s))) {
            domain = this->__Vnontrivs.__PVT__m_domains
                .at("common"s);
        }
        if ((VlNull{} != domain)) {
            get_common_domain__Vfuncrtn = domain;
            goto __Vlabel0;
        }
        domain = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_domain, vlProcess, vlSymsp, "common"s);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 127)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_0__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_connect_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 128)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_1__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_2__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 129)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_2__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_3__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 130)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_3__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_4__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 131)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_4__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_extract_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_5__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 132)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_5__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_check_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_6__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 133)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_6__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_7__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 134)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_7__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_final_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_8__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 135)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_8__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_9__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 139)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_9__get, 1U, __Vtask_find__Vfuncout_2139);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_connect_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_10__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 140)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_10__get, 1U, __Vtask_find__Vfuncout_2140);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_11__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 141)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_11__get, 1U, __Vtask_find__Vfuncout_2141);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__end_of_elaboration_ph 
            = __Vtask_find__Vfuncout_2141;
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_12__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 142)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_12__get, 1U, __Vtask_find__Vfuncout_2142);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_13__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 143)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_13__get, 1U, __Vtask_find__Vfuncout_2143);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_extract_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_14__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 144)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_14__get, 1U, __Vtask_find__Vfuncout_2144);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_check_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_15__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 145)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_15__get, 1U, __Vtask_find__Vfuncout_2145);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_report_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_16__get);
        VL_NULL_CHECK(domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 146)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_16__get, 1U, __Vtask_find__Vfuncout_2146);
        this->__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, domain);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_17__get);
        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_domains
                      .at("common"s), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 150)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_17__get, 1U, __VlefCall_18__find);
        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_domains
                      .at("common"s), "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 149)->__VnoInFunc_add(vlProcess, vlSymsp, domain, __VlefCall_18__find, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        get_common_domain__Vfuncrtn = this->__Vnontrivs.__PVT__m_domains
            .at("common"s);
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_phase> schedule) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_add_uvm_phases\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_post_shutdown_phase> __VlefCall_11__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_shutdown_phase> __VlefCall_10__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pre_shutdown_phase> __VlefCall_9__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_post_main_phase> __VlefCall_8__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_main_phase> __VlefCall_7__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pre_main_phase> __VlefCall_6__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_post_configure_phase> __VlefCall_5__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_configure_phase> __VlefCall_4__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pre_configure_phase> __VlefCall_3__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_post_reset_phase> __VlefCall_2__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_reset_phase> __VlefCall_1__get;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_pre_reset_phase> __VlefCall_0__get;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 162)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_0__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_reset_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 163)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_1__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_post_reset_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_2__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 164)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_2__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_3__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 165)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_3__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_configure_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_4__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 166)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_4__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_post_configure_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_5__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 167)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_5__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_pre_main_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_6__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 168)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_6__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_main_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_7__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 169)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_7__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_post_main_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_8__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 170)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_8__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_pre_shutdown_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_9__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 171)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_9__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_shutdown_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_10__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 172)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_10__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_post_shutdown_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_11__get);
    VL_NULL_CHECK(schedule, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 173)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_11__get, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
}

void Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_domain\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__Vnontrivs.__PVT__m_uvm_domain)) {
        this->__Vnontrivs.__PVT__m_uvm_domain = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_domain, vlProcess, vlSymsp, "uvm"s);
        this->__Vnontrivs.__PVT__m_uvm_schedule = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, "uvm_sched"s, 3U, VlNull{});
        this->__VnoInFunc_add_uvm_phases(vlProcess, vlSymsp, this->__Vnontrivs.__PVT__m_uvm_schedule);
        VL_NULL_CHECK(this->__Vnontrivs.__PVT__m_uvm_domain, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 189)->__VnoInFunc_add(vlProcess, vlSymsp, this->__Vnontrivs.__PVT__m_uvm_schedule, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    }
    get_uvm_domain__Vfuncrtn = this->__Vnontrivs.__PVT__m_uvm_domain;
}

void Vtb_top_uvm_pkg__03a__03auvm_domain::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_phase::init(vlProcess, vlSymsp, name, 4U, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_domain::new\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1153;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2130;
    ::IData/*31:0*/ __Vtask_uvm_report_error__verbosity_2133;
    __Vtask_uvm_report_error__verbosity_2133 = 0;
    ::IData/*31:0*/ __Vtask_uvm_report_error__line_2135;
    __Vtask_uvm_report_error__line_2135 = 0;
    ::CData/*0:0*/ __Vtask_uvm_report_error__report_enabled_checked_2137;
    __Vtask_uvm_report_error__report_enabled_checked_2137 = 0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_1154;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_2138;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    ::CData/*0:0*/ __VlefLogAnd_3;
    ::IData/*31:0*/ __VlefCall_2__get_report_action;
    ::IData/*31:0*/ __VlefCall_1__get_report_verbosity_level;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> __VlefCall_0__uvm_get_report_object;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_report_object> unnamedblk1__DOT___local_report_object_;
    /*super.new*/;
    if ((0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__Vnontrivs.__PVT__m_domains.exists(name))) {
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1153);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs 
            = __Vfunc_get__Vfuncout_1153;
        VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 77)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2130);
        vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top 
            = __Vtask_get_root__Vfuncout_2130;
        __VlefCall_0__uvm_get_report_object = vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_get_report_object__Vstatic__top;
        VL_NULL_CHECK(__VlefCall_0__uvm_get_report_object, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 201)->__VnoInFunc_uvm_get_report_object(vlSymsp, unnamedblk1__DOT___local_report_object_);
        VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 201)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 2U, "UNIQDOMNAM"s, __VlefCall_1__get_report_verbosity_level);
        __VlefLogAnd_3 = VL_LTES_III(32, 0U, __VlefCall_1__get_report_verbosity_level);
        if (__VlefLogAnd_3) {
            VL_NULL_CHECK(unnamedblk1__DOT___local_report_object_, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh", 201)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 2U, "UNIQDOMNAM"s, __VlefCall_2__get_report_action);
            __VlefLogAnd_3 = (0U != __VlefCall_2__get_report_action);
        }
        if (VL_UNLIKELY((__VlefLogAnd_3))) {
            __Vtask_uvm_report_error__report_enabled_checked_2137 = 1U;
            this->__Vtask_uvm_report_error__context_name_2136 = ""s;
            __Vtask_uvm_report_error__line_2135 = 0x000000c9U;
            this->__Vtask_uvm_report_error__filename_2134 = "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_domain.svh"s;
            __Vtask_uvm_report_error__verbosity_2133 = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__message_2132
                          ,"Domain created with non-unique name '%s'",1
                          , 'S',&(name));
            this->__Vtask_uvm_report_error__id_2131 = "UNIQDOMNAM"s;
            vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_1154);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__Vfuncout_1154;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 185)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_2138);
            vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__Vfuncout_2138;
            VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.__PVT__uvm_report_error__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 186)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__id_2131, this->__Vtask_uvm_report_error__message_2132, __Vtask_uvm_report_error__verbosity_2133, this->__Vtask_uvm_report_error__filename_2134, __Vtask_uvm_report_error__line_2135, this->__Vtask_uvm_report_error__context_name_2136, (::IData)(__Vtask_uvm_report_error__report_enabled_checked_2137));
        }
    }
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__Vnontrivs.__PVT__m_domains.atWrite(name) 
        = ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_domain>{this};
}

void Vtb_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_domain::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_domain::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_top_uvm_pkg__03a__03auvm_domain::~Vtb_top_uvm_pkg__03a__03auvm_domain() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_domain::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_domain::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_domain::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_domain::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_domain::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_top_uvm_pkg__03a__03auvm_phase::to_string_middle();
    return (out);
}
