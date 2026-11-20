// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf, VlProcessRef vlProcess);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.tb_top__DOT__mon_en = (1U & VL_TESTPLUSARGS_I("MON"s));
        if (VL_UNLIKELY((vlSelfRef.tb_top__DOT__mon_en))) {
            vlSelfRef.tb_top__DOT____VlemExpr_0 = VL_VALUEPLUSARGS_INN(64, "UVM_TESTNAME=%s"s, 
                                                                       vlSelfRef.__Vnontrivs.tb_top__DOT__unnamedblk1__DOT__tn);
            if ((1U & (~ (0U != vlSelfRef.tb_top__DOT____VlemExpr_0)))) {
                vlSelfRef.__Vnontrivs.tb_top__DOT__unnamedblk1__DOT__tn = "mlp_iris_test"s;
            }
            vlSelfRef.tb_top__DOT__mon_fd = VL_FOPEN_NN(
                                                        VL_CONCATN_NNN(vlSelfRef.__Vnontrivs.tb_top__DOT__unnamedblk1__DOT__tn, "_pins.log"s)
                                                        , "w"s);
            ;
        }
        if ((0U != VL_TESTPLUSARGS_I("VPD"s))) {
            vlSymsp->_vm_contextp__->dumpfile("mlp.vcd"s);
            VL_PRINTF_MT("-Info: tb_top.sv:74: $dumpvar ignored, as Verilated without --trace\n");
        }
    }
    Vtb_top___024root___eval_initial__TOP__Vtiming__0(vlSelf, std::make_shared<VlProcess>());
    Vtb_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_top___024root___eval_sample(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_sample\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->vlInst.TOP__tb_top__DOT__vif.__Vsampled_rst_n_0 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n;
    vlSymsp->vlInst.TOP__tb_top__DOT__vif.__Vsampled_out_valid_1 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_valid;
    vlSymsp->vlInst.TOP__tb_top__DOT__vif.__Vsampled_out_data_2 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_data;
    vlSymsp->vlInst.TOP__tb_top__DOT__vif.__Vsampled_wr_en_3 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en;
    vlSymsp->vlInst.TOP__tb_top__DOT__vif.__Vsampled_in_ready_4 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_ready;
    vlSymsp->vlInst.TOP__tb_top__DOT__vif.__Vsampled_busy_5 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.busy;
    vlSymsp->vlInst.TOP__tb_top__DOT__vif.__Vsampled_out_ready_6 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready;
    vlSymsp->vlInst.TOP__tb_top__DOT__vif.__Vsampled_in_valid_7 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vtb_top___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Vtb_top___024root___ico_comb__TOP__0(Vtb_top___024root* vlSelf);

bool Vtb_top___024root___eval_ico(Vtb_top___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffff7fULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((::QData)((::IData)(
                                                                ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en) 
                                                                 != (::IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wr_en)))) 
                                            << 7U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wr_en 
            = vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en;
        vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffbfULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((::QData)((::IData)(
                                                                ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data) 
                                                                 != (::IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wr_data)))) 
                                            << 6U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wr_data 
            = vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data;
        vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffdfULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((::QData)((::IData)(
                                                                ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr) 
                                                                 != (::IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wr_addr)))) 
                                            << 5U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wr_addr 
            = vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr;
        vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffefULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((::QData)((::IData)(
                                                                ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n) 
                                                                 != (::IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__rst_n)))) 
                                            << 4U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__rst_n 
            = vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n;
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffff7ULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((::QData)((::IData)(
                                                                ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready) 
                                                                 != (::IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__out_ready)))) 
                                            << 3U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__out_ready 
            = vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready;
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffbULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((::QData)((::IData)(
                                                                ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid) 
                                                                 != (::IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__in_valid)))) 
                                            << 2U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__in_valid 
            = vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid;
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffdULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((::QData)((::IData)(
                                                                (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                                 != vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__in_data))) 
                                            << 1U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__in_data 
            = vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtb_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((((2ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                Vtb_top___024root___ico_comb__TOP__0(vlSelf);
            }
            if ((((8ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.tb_top__DOT__dut__DOT__s2_ready 
                        = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__out_valid)) 
                                 | (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready)));
                    vlSelfRef.tb_top__DOT__dut__DOT__s1_ready 
                        = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s1_valid)) 
                                 | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s2_ready)));
                }
            }
            if ((((0x0000000000000088ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _ico_comb__TOP__2
                    vlSelfRef.tb_top__DOT__dut__DOT__in_ready 
                        = ((~ (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en)) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s1_ready));
                    vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_ready 
                        = vlSelfRef.tb_top__DOT__dut__DOT__in_ready;
                }
            }
            if ((((0x000000000000008cULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _ico_comb__TOP__3
                    vlSelfRef.tb_top__DOT__dut__DOT__in_fire 
                        = ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__in_ready));
                }
            }
        }
    }
    return (__VicoExecute);
}

void Vtb_top___024root___eval_triggers_vec__act(Vtb_top___024root* vlSelf);
void Vtb_top___024root___timing_ready(Vtb_top___024root* vlSelf);
void Vtb_top___024root___trigger_orInto__act_vec_ext(::VlUnpacked<::QData/*63:0*/, 4> &out, const ::VlUnpacked<::QData/*63:0*/, 3> &in);
void Vtb_top___024root___eval_triggers_ext__act(Vtb_top___024root* vlSelf, const ::VlUnpacked<::QData/*63:0*/, 3> &latched);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act_ext(const ::VlUnpacked<::QData/*63:0*/, 4> &ext, const ::std::string &tag);
#endif  // VL_DEBUG
void Vtb_top___024root___trigger_orInto__act_ext_vec(::VlUnpacked<::QData/*63:0*/, 3> &out, const ::VlUnpacked<::QData/*63:0*/, 4> &in);
bool Vtb_top___024root___trigger_anySet__act_ext(const ::VlUnpacked<::QData/*63:0*/, 4> &in);
void Vtb_top___024root___timing_resume(Vtb_top___024root* vlSelf);
void Vtb_top___024root___eval_body__act(Vtb_top___024root* vlSelf);

bool Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top___024root___eval_triggers_vec__act(vlSelf);
    Vtb_top___024root___timing_ready(vlSelf);
    Vtb_top___024root___trigger_orInto__act_vec_ext(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
    Vtb_top___024root___eval_triggers_ext__act(vlSelf, vlSelfRef.__VnbaTriggered);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_top___024root___trigger_orInto__act_ext_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_top___024root___trigger_anySet__act_ext(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_top___024root___timing_resume(vlSelf);
        Vtb_top___024root___eval_body__act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_top___024root___eval_inact(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_inact\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        vlSelfRef.__Vnontrivs.__VdlySched.resumeZeroDelay();
    }
    return (__VinactExecute);
}

bool Vtb_top___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 3> &in);
void Vtb_top___024root___eval_body__nba(Vtb_top___024root* vlSelf);
void Vtb_top___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 3> &out);

bool Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_top___024root___eval_body__nba(vlSelf);
        Vtb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__Vnontrivs.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

bool Vtb_top___024root___eval_obs(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_obs\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_top___024root___eval_react(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_react\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_top___024root___eval_postponed(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_postponed\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__Vfuncout_0;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__Vfuncout_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::ignore = VL_VALUEPLUSARGS_INN(64, "UVM_TESTNAME=%s"s, 
                                       vlSelfRef.__Vnontrivs.tb_top__DOT__unnamedblk3__DOT__tname);
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_config_db__Tz54780af0__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "vif"s, (&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    vlSelfRef.__Vnontrivs.__Vtask_run_test__test_name_0 
        = vlSelfRef.__Vnontrivs.tb_top__DOT__unnamedblk3__DOT__tname;
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_0);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.run_test__Vstatic__cs 
        = __Vfunc_get__Vfuncout_0;
    VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.run_test__Vstatic__cs, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 60)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__Vfuncout_1);
    vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.run_test__Vstatic__top 
        = __Vtask_get_root__Vfuncout_1;
    co_await VL_NULL_CHECK(vlSymsp->vlInst.TOP__uvm_pkg.__Vnontrivs.run_test__Vstatic__top, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_globals.svh", 61)->__VnoInFunc_run_test(vlProcess, vlSymsp, vlSelfRef.__Vnontrivs.__Vtask_run_test__test_name_0);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000001388ULL, 
                                                         nullptr, 
                                                         "tb_top.sv", 
                                                         14);
        vlSelfRef.tb_top__DOT__clk = (1U & (~ (::IData)(vlSelfRef.tb_top__DOT__clk)));
    }
    co_return;
}

bool Vtb_top___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__ico\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_top___024root___ico_comb__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ico_comb__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*19:0*/ tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum;
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum = 0;
    // Body
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__bias[0U]));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[0U][0U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[0U][1U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                             >> 8U)))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[0U][2U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                             >> 0x10U)))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[0U][3U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                          >> 0x18U))))));
    vlSelfRef.tb_top__DOT__dut__DOT__acc_comb__BRA__0__KET__ 
        = tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum;
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__bias[1U]));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[1U][0U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[1U][1U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                             >> 8U)))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[1U][2U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                             >> 0x10U)))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[1U][3U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                          >> 0x18U))))));
    vlSelfRef.tb_top__DOT__dut__DOT__acc_comb__BRA__1__KET__ 
        = tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum;
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__bias[2U]));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[2U][0U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[2U][1U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                             >> 8U)))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[2U][2U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                             >> 0x10U)))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[2U][3U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                          >> 0x18U))))));
    vlSelfRef.tb_top__DOT__dut__DOT__acc_comb__BRA__2__KET__ 
        = tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum;
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__bias[3U]));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[3U][0U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[3U][1U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                             >> 8U)))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[3U][2U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (0x000000ffU 
                                                          & (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                             >> 0x10U)))))));
    tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
        = (0x000fffffU & (tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum 
                          + VL_MULS_III(20, (0x000fffffU 
                                             & VL_EXTENDS_II(20,8, vlSelfRef.tb_top__DOT__dut__DOT__weight[3U][3U])), 
                                        (0x000fffffU 
                                         & VL_EXTENDS_II(20,8, 
                                                         (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                          >> 0x18U))))));
    vlSelfRef.tb_top__DOT__dut__DOT__acc_comb__BRA__3__KET__ 
        = tb_top__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sum;
}

void Vtb_top___024root___eval_triggers_ext__act(Vtb_top___024root* vlSelf, const ::VlUnpacked<::QData/*63:0*/, 3> &latched) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers_ext__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __VactTrigPreLoopCounter;
    // Body
    __VactTrigPreLoopCounter = 0U;
    do {
        vlSelfRef.__VactTriggered[((::IData)(3U) + __VactTrigPreLoopCounter)] 
            = (vlSelfRef.__VactTriggered[__VactTrigPreLoopCounter] 
               & (~ latched[__VactTrigPreLoopCounter]));
        __VactTrigPreLoopCounter = ((::IData)(1U) + __VactTrigPreLoopCounter);
    } while ((1U > __VactTrigPreLoopCounter));
}

void Vtb_top___024root___eval_triggers_vec__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers_vec__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vtrigprevexpr_h640b92b2__0;
    __Vtrigprevexpr_h640b92b2__0 = 0;
    ::CData/*0:0*/ __Vtrigprevexpr_h2087a6b9__0;
    __Vtrigprevexpr_h2087a6b9__0 = 0;
    // Body
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((::QData)((::IData)(
                                                            ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en) 
                                                             != (::IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wr_en)))) 
                                        << 6U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wr_en 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((::QData)((::IData)(
                                                            ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data) 
                                                             != (::IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wr_data)))) 
                                        << 5U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wr_data 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((::QData)((::IData)(
                                                            ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr) 
                                                             != (::IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wr_addr)))) 
                                        << 4U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wr_addr 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((::QData)((::IData)(
                                                            ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n) 
                                                             != (::IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__rst_n)))) 
                                        << 3U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__rst_n 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((::QData)((::IData)(
                                                            ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready) 
                                                             != (::IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__out_ready)))) 
                                        << 2U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__out_ready 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((::QData)((::IData)(
                                                            ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid) 
                                                             != (::IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__in_valid)))) 
                                        << 1U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__in_valid 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | (::IData)((::IData)(
                                                           (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                                                            != vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__in_data))));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__in_data 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data;
    __Vtrigprevexpr_h640b92b2__0 = (0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.size());
    __Vtrigprevexpr_h2087a6b9__0 = (0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_process_guard_base__Vclpkg.__Vnontrivs.__PVT__m_pending_guards.size());
    vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                        ((((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.clk) 
                                                           & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__clk__0))) 
                                                          << 2U) 
                                                         | ((((::IData)(vlSelfRef.tb_top__DOT__clk) 
                                                              & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0))) 
                                                             << 1U) 
                                                            | ((~ (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n)) 
                                                               & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__rst_n__0))))));
    vlSelfRef.__VactTriggered[1U] = VL_EXTEND_QI(64,4, 
                                                 (((((::IData)(__Vtrigprevexpr_h2087a6b9__0) 
                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr_h2087a6b9__1)) 
                                                    << 3U) 
                                                   | (vlSelfRef.__Vnontrivs.__VdynSched.evaluate() 
                                                      << 2U)) 
                                                  | ((((::IData)(__Vtrigprevexpr_h640b92b2__0) 
                                                       != (::IData)(vlSelfRef.__Vtrigprevexpr_h640b92b2__1)) 
                                                      << 1U) 
                                                     | vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime())));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__rst_n__0 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__clk__0 
        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.clk;
    vlSelfRef.__Vtrigprevexpr_h640b92b2__1 = __Vtrigprevexpr_h640b92b2__0;
    vlSelfRef.__Vtrigprevexpr_h2087a6b9__1 = __Vtrigprevexpr_h2087a6b9__0;
    vlSelfRef.__Vnontrivs.__VdynSched.doPostUpdates();
}

bool Vtb_top___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((3U > n));
    return (0U);
}

void Vtb_top___024root___act_sequent__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___act_sequent__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*19:0*/ __Vfunc_tb_top__DOT__dut__DOT__requant__a_1;
    __Vfunc_tb_top__DOT__dut__DOT__requant__a_1 = 0;
    ::CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__requant__sh_2;
    __Vfunc_tb_top__DOT__dut__DOT__requant__sh_2 = 0;
    ::CData/*2:0*/ __Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3;
    __Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3 = 0;
    ::IData/*19:0*/ __Vfunc_tb_top__DOT__dut__DOT__requant__s_4;
    __Vfunc_tb_top__DOT__dut__DOT__requant__s_4 = 0;
    // Body
    if (vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n) {
        if (((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en) 
             & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__busy)))) {
            if ((0x10U <= (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr))) {
                if ((0x14U > (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr))) {
                    vlSelfRef.__Vdly_Val__tb_top__DOT__dut__DOT__bias_23 
                        = vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data;
                    vlSelfRef.__Vdly_Dim0__tb_top__DOT__dut__DOT__bias_24 
                        = (3U & (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr));
                    vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__bias_25 = 1U;
                }
            }
            if ((0x10U > (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr))) {
                vlSelfRef.__Vdly_Val__tb_top__DOT__dut__DOT__weight_18 
                    = vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data;
                vlSelfRef.__Vdly_Dim0__tb_top__DOT__dut__DOT__weight_19 
                    = (3U & (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr));
                vlSelfRef.__Vdly_Dim1__tb_top__DOT__dut__DOT__weight_20 
                    = (3U & ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr) 
                             >> 2U));
                vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__weight_21 = 1U;
            }
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__s2_ready) {
            if (vlSelfRef.tb_top__DOT__dut__DOT__s1_valid) {
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_valid_7 = 1U;
                __Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3 
                    = vlSelfRef.tb_top__DOT__dut__DOT__leak_shift_r;
                __Vfunc_tb_top__DOT__dut__DOT__requant__sh_2 
                    = vlSelfRef.tb_top__DOT__dut__DOT__shift_r;
                __Vfunc_tb_top__DOT__dut__DOT__requant__a_1 
                    = vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__0__KET__;
                __Vfunc_tb_top__DOT__dut__DOT__requant__s_4 
                    = (0x000fffffU & VL_SHIFTRS_III(20,20,4, __Vfunc_tb_top__DOT__dut__DOT__requant__a_1, (::IData)(__Vfunc_tb_top__DOT__dut__DOT__requant__sh_2)));
                if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))) {
                    __Vfunc_tb_top__DOT__dut__DOT__requant__s_4 
                        = (0x000fffffU & VL_SHIFTRS_III(20,20,3, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4, (::IData)(__Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3)));
                }
                vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_0__requant 
                    = (VL_LTS_III(32, 0x0000007fU, 
                                  VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))
                        ? 0x0000007eU : (VL_GTS_III(32, 0xffffff80U, 
                                                    VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))
                                          ? 0x00000080U
                                          : (0x000000ffU 
                                             & __Vfunc_tb_top__DOT__dut__DOT__requant__s_4)));
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8 
                    = ((0xffffff00U & vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8) 
                       | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_0__requant));
                __Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3 
                    = vlSelfRef.tb_top__DOT__dut__DOT__leak_shift_r;
                __Vfunc_tb_top__DOT__dut__DOT__requant__sh_2 
                    = vlSelfRef.tb_top__DOT__dut__DOT__shift_r;
                __Vfunc_tb_top__DOT__dut__DOT__requant__a_1 
                    = vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__1__KET__;
                __Vfunc_tb_top__DOT__dut__DOT__requant__s_4 
                    = (0x000fffffU & VL_SHIFTRS_III(20,20,4, __Vfunc_tb_top__DOT__dut__DOT__requant__a_1, (::IData)(__Vfunc_tb_top__DOT__dut__DOT__requant__sh_2)));
                if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))) {
                    __Vfunc_tb_top__DOT__dut__DOT__requant__s_4 
                        = (0x000fffffU & VL_SHIFTRS_III(20,20,3, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4, (::IData)(__Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3)));
                }
                vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_0__requant 
                    = (VL_LTS_III(32, 0x0000007fU, 
                                  VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))
                        ? 0x0000007eU : (VL_GTS_III(32, 0xffffff80U, 
                                                    VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))
                                          ? 0x00000080U
                                          : (0x000000ffU 
                                             & __Vfunc_tb_top__DOT__dut__DOT__requant__s_4)));
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8 
                    = ((0xffff00ffU & vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8) 
                       | ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_0__requant) 
                          << 8U));
                __Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3 
                    = vlSelfRef.tb_top__DOT__dut__DOT__leak_shift_r;
                __Vfunc_tb_top__DOT__dut__DOT__requant__sh_2 
                    = vlSelfRef.tb_top__DOT__dut__DOT__shift_r;
                __Vfunc_tb_top__DOT__dut__DOT__requant__a_1 
                    = vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__2__KET__;
                __Vfunc_tb_top__DOT__dut__DOT__requant__s_4 
                    = (0x000fffffU & VL_SHIFTRS_III(20,20,4, __Vfunc_tb_top__DOT__dut__DOT__requant__a_1, (::IData)(__Vfunc_tb_top__DOT__dut__DOT__requant__sh_2)));
                if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))) {
                    __Vfunc_tb_top__DOT__dut__DOT__requant__s_4 
                        = (0x000fffffU & VL_SHIFTRS_III(20,20,3, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4, (::IData)(__Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3)));
                }
                vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_0__requant 
                    = (VL_LTS_III(32, 0x0000007fU, 
                                  VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))
                        ? 0x0000007eU : (VL_GTS_III(32, 0xffffff80U, 
                                                    VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))
                                          ? 0x00000080U
                                          : (0x000000ffU 
                                             & __Vfunc_tb_top__DOT__dut__DOT__requant__s_4)));
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8 
                    = ((0xff00ffffU & vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8) 
                       | ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_0__requant) 
                          << 0x00000010U));
                __Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3 
                    = vlSelfRef.tb_top__DOT__dut__DOT__leak_shift_r;
                __Vfunc_tb_top__DOT__dut__DOT__requant__sh_2 
                    = vlSelfRef.tb_top__DOT__dut__DOT__shift_r;
                __Vfunc_tb_top__DOT__dut__DOT__requant__a_1 
                    = vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__3__KET__;
                __Vfunc_tb_top__DOT__dut__DOT__requant__s_4 
                    = (0x000fffffU & VL_SHIFTRS_III(20,20,4, __Vfunc_tb_top__DOT__dut__DOT__requant__a_1, (::IData)(__Vfunc_tb_top__DOT__dut__DOT__requant__sh_2)));
                if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))) {
                    __Vfunc_tb_top__DOT__dut__DOT__requant__s_4 
                        = (0x000fffffU & VL_SHIFTRS_III(20,20,3, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4, (::IData)(__Vfunc_tb_top__DOT__dut__DOT__requant__leak_sh_3)));
                }
                vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_0__requant 
                    = (VL_LTS_III(32, 0x0000007fU, 
                                  VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))
                        ? 0x0000007eU : (VL_GTS_III(32, 0xffffff80U, 
                                                    VL_EXTENDS_II(32,20, __Vfunc_tb_top__DOT__dut__DOT__requant__s_4))
                                          ? 0x00000080U
                                          : (0x000000ffU 
                                             & __Vfunc_tb_top__DOT__dut__DOT__requant__s_4)));
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8 
                    = ((0x00ffffffU & vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8) 
                       | ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_0__requant) 
                          << 0x00000018U));
            } else {
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_valid_7 = 0U;
            }
        }
    } else {
        vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__bias_26 = 1U;
        vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__weight_22 = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_valid_7 = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8 = 0U;
    }
}

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__0(Vtb_top_mlp_if* vlSelf);
void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__1(Vtb_top_mlp_if* vlSelf);
void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__2(Vtb_top_mlp_if* vlSelf);
void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__3(Vtb_top_mlp_if* vlSelf);
void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__4(Vtb_top_mlp_if* vlSelf);
void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__5(Vtb_top_mlp_if* vlSelf);
void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__6(Vtb_top_mlp_if* vlSelf);
void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__7(Vtb_top_mlp_if* vlSelf);
void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__8(Vtb_top_mlp_if* vlSelf);

void Vtb_top___024root___eval_body__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_body__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((5ULL & vlSelfRef.__VactTriggered[3U])) != 0ULL)) {
        Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__0((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((3ULL & vlSelfRef.__VactTriggered[3U])) != 0ULL)) {
        {
            // Inlined CFunc: _act_sequent__TOP__0
            vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__bias_25 = 0U;
            vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__bias_26 = 0U;
            vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__weight_21 = 0U;
            vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__weight_22 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_valid_7 
                = vlSelfRef.tb_top__DOT__dut__DOT__out_valid;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8 
                = vlSelfRef.tb_top__DOT__dut__DOT__out_data;
        }
    }
    if ((((1ULL & vlSelfRef.__VactTriggered[1U])) != 0ULL)) {
        {
            // Inlined CFunc: _act_comb__TOP__0
            vlSymsp->vlInst.TOP__tb_top__DOT__vif.clk 
                = vlSelfRef.tb_top__DOT__clk;
        }
    }
    if ((((4ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__1((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((2ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        {
            // Inlined CFunc: _act_sequent__TOP__1
            ::VlWide<4>/*127:0*/ __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap;
            VL_ZERO_W(128, __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap);
            vlSelfRef.tb_top__DOT__cyc = (1ULL + vlSelfRef.tb_top__DOT__cyc);
            __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[0U] 
                = (::IData)((((::QData)((::IData)((
                                                   ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_valid) 
                                                    << 1U) 
                                                   | (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready)))) 
                              << 0x00000021U) | (((::QData)((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_data)) 
                                                  << 1U) 
                                                 | (::QData)((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.busy)))));
            __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[1U] 
                = ((vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                    << 3U) | (::IData)(((((::QData)((::IData)(
                                                              (((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_valid) 
                                                                << 1U) 
                                                               | (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready)))) 
                                          << 0x00000021U) 
                                         | (((::QData)((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_data)) 
                                             << 1U) 
                                            | (::QData)((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.busy)))) 
                                        >> 0x00000020U)));
            __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[2U] 
                = ((0xfffffff8U & __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[2U]) 
                   | (vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data 
                      >> 0x0000001dU));
            __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[2U] 
                = ((0xfff00007U & __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[2U]) 
                   | (((((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n) 
                         << 0x00000010U) | (((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en) 
                                             << 0x0000000fU) 
                                            | ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr) 
                                               << 0x0000000aU))) 
                       | (((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data) 
                           << 2U) | (((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid) 
                                      << 1U) | (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_ready)))) 
                      << 3U));
            __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[2U] 
                = (0x000fffffU & __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[2U]);
            __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[3U] = 0U;
            if (VL_UNLIKELY((((::IData)(vlSelfRef.tb_top__DOT__mon_en) 
                              & (0U != ((((__Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[0U] 
                                           ^ vlSelfRef.tb_top__DOT__prev_snap[0U]) 
                                          | (__Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[1U] 
                                             ^ vlSelfRef.tb_top__DOT__prev_snap[1U])) 
                                         | (__Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[2U] 
                                            ^ vlSelfRef.tb_top__DOT__prev_snap[2U])) 
                                        | (__Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[3U] 
                                           ^ vlSelfRef.tb_top__DOT__prev_snap[3U]))))))) {
                VL_FWRITEF_NX(vlSelfRef.tb_top__DOT__mon_fd,"cycle %0d  (%0t)\n",3, 'T',-9
                              , '#',64,vlSelfRef.tb_top__DOT__cyc
                              , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_top__DOT__prev_snap[0U] 
                    = __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[0U];
                vlSelfRef.tb_top__DOT__prev_snap[1U] 
                    = __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[1U];
                vlSelfRef.tb_top__DOT__prev_snap[2U] 
                    = __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[2U];
                vlSelfRef.tb_top__DOT__prev_snap[3U] 
                    = __Vinline_0__act_sequent__TOP__1_tb_top__DOT__unnamedblk2__DOT__snap[3U];
                VL_FWRITEF_NX(vlSelfRef.tb_top__DOT__mon_fd,"   in : rst_n=%b wr_en=%b wr_addr=%0d wr_data=%0d in_valid=%b in_data=%h out_ready=%b\n   out: in_ready=%b out_valid=%b out_data=%h busy=%b   (buses in hex)\n",11
                              , '#',1,vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n
                              , '#',1,(::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en)
                              , '#',5,vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr
                              , '~',8,(::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data)
                              , '#',1,(::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid)
                              , '#',32,vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_data
                              , '#',1,(::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready)
                              , '#',1,vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_ready
                              , '#',1,(::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_valid)
                              , '#',32,vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_data
                              , '#',1,(::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.busy));
            }
        }
    }
    if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__2((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((3ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        Vtb_top___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((((4ULL & vlSelfRef.__VactTriggered[3U])) != 0ULL)) {
        Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__3((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((5ULL & vlSelfRef.__VactTriggered[3U])) != 0ULL)) {
        Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__4((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((4ULL & vlSelfRef.__VactTriggered[2U])) != 0ULL)) {
        {
            // Inlined CFunc: _act_comb__TOP__1
            vlSelfRef.tb_top__DOT__dut__DOT__s2_ready 
                = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__out_valid)) 
                         | (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready)));
        }
    }
    if ((((3ULL & vlSelfRef.__VactTriggered[3U])) != 0ULL)) {
        {
            // Inlined CFunc: _act_sequent__TOP__3
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_valid_2 
                = vlSelfRef.tb_top__DOT__dut__DOT__s1_valid;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__leak_shift_r_1 
                = vlSelfRef.tb_top__DOT__dut__DOT__leak_shift_r;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__shift_r_0 
                = vlSelfRef.tb_top__DOT__dut__DOT__shift_r;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__0__KET___3 
                = vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__0__KET__;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__1__KET___4 
                = vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__1__KET__;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__2__KET___5 
                = vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__2__KET__;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__3__KET___6 
                = vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__3__KET__;
        }
    }
    if ((((4ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__5((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__6((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((3ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        {
            // Inlined CFunc: _act_sequent__TOP__4
            if (vlSymsp->vlInst.TOP__tb_top__DOT__vif.rst_n) {
                if (vlSelfRef.tb_top__DOT__dut__DOT__s1_ready) {
                    if (vlSelfRef.tb_top__DOT__dut__DOT__in_fire) {
                        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_valid_2 = 1U;
                        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__0__KET___3 
                            = vlSelfRef.tb_top__DOT__dut__DOT__acc_comb__BRA__0__KET__;
                        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__1__KET___4 
                            = vlSelfRef.tb_top__DOT__dut__DOT__acc_comb__BRA__1__KET__;
                        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__2__KET___5 
                            = vlSelfRef.tb_top__DOT__dut__DOT__acc_comb__BRA__2__KET__;
                        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__3__KET___6 
                            = vlSelfRef.tb_top__DOT__dut__DOT__acc_comb__BRA__3__KET__;
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_valid_2 = 0U;
                    }
                }
                if (((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en) 
                     & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__busy)))) {
                    if ((0x10U <= (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr))) {
                        if ((0x14U <= (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr))) {
                            if ((0x14U != (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr))) {
                                if ((0x15U == (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr))) {
                                    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__leak_shift_r_1 
                                        = (7U & (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data));
                                }
                            }
                            if ((0x14U == (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_addr))) {
                                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__shift_r_0 
                                    = (0x0000000fU 
                                       & (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_data));
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_valid_2 = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__leak_shift_r_1 = 3U;
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__shift_r_0 = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__0__KET___3 = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__1__KET___4 = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__2__KET___5 = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__3__KET___6 = 0U;
            }
        }
    }
    if ((((4ULL & vlSelfRef.__VactTriggered[3U])) != 0ULL)) {
        Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__7((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((1ULL & vlSelfRef.__VactTriggered[2U])) != 0ULL)) {
        Vtb_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((((4ULL & vlSelfRef.__VactTriggered[2U])) != 0ULL)) {
        {
            // Inlined CFunc: _act_comb__TOP__3
            vlSelfRef.tb_top__DOT__dut__DOT__s1_ready 
                = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s1_valid)) 
                         | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s2_ready)));
        }
    }
    if ((((4ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__8((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((0x0000000000000044ULL & vlSelfRef.__VactTriggered[2U])) != 0ULL)) {
        {
            // Inlined CFunc: _ico_comb__TOP__2
            vlSelfRef.tb_top__DOT__dut__DOT__in_ready 
                = ((~ (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en)) 
                   & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s1_ready));
            vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_ready 
                = vlSelfRef.tb_top__DOT__dut__DOT__in_ready;
        }
    }
    if ((((0x0000000000000046ULL & vlSelfRef.__VactTriggered[2U])) != 0ULL)) {
        {
            // Inlined CFunc: _ico_comb__TOP__3
            vlSelfRef.tb_top__DOT__dut__DOT__in_fire 
                = ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid) 
                   & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__in_ready));
        }
    }
}

void Vtb_top_mlp_if___nba_sequent__TOP__tb_top__DOT__vif__0(Vtb_top_mlp_if* vlSelf);
void Vtb_top_mlp_if___nba_sequent__TOP__tb_top__DOT__vif__1(Vtb_top_mlp_if* vlSelf);

void Vtb_top___024root___eval_body__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_body__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            vlSelfRef.tb_top__DOT__dut__DOT__shift_r 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__shift_r_0;
            vlSelfRef.tb_top__DOT__dut__DOT__leak_shift_r 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__leak_shift_r_1;
            vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__0__KET__ 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__0__KET___3;
            vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__1__KET__ 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__1__KET___4;
            vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__2__KET__ 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__2__KET___5;
            vlSelfRef.tb_top__DOT__dut__DOT__s1_acc__BRA__3__KET__ 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_acc__BRA__3__KET___6;
            vlSelfRef.tb_top__DOT__dut__DOT__out_data 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_data_8;
            if (vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__bias_25) {
                vlSelfRef.tb_top__DOT__dut__DOT__bias[vlSelfRef.__Vdly_Dim0__tb_top__DOT__dut__DOT__bias_24] 
                    = vlSelfRef.__Vdly_Val__tb_top__DOT__dut__DOT__bias_23;
            }
            if (vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__bias_26) {
                vlSelfRef.tb_top__DOT__dut__DOT__bias[0U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__bias[1U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__bias[2U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__bias[3U] = 0U;
            }
            if (vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__weight_21) {
                vlSelfRef.tb_top__DOT__dut__DOT__weight[vlSelfRef.__Vdly_Dim1__tb_top__DOT__dut__DOT__weight_20][vlSelfRef.__Vdly_Dim0__tb_top__DOT__dut__DOT__weight_19] 
                    = vlSelfRef.__Vdly_Val__tb_top__DOT__dut__DOT__weight_18;
            }
            if (vlSelfRef.__Vdly_Set__tb_top__DOT__dut__DOT__weight_22) {
                vlSelfRef.tb_top__DOT__dut__DOT__weight[0U][0U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[0U][1U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[0U][2U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[0U][3U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[1U][0U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[1U][1U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[1U][2U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[1U][3U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[2U][0U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[2U][1U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[2U][2U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[2U][3U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[3U][0U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[3U][1U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[3U][2U] = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__weight[3U][3U] = 0U;
            }
            vlSelfRef.tb_top__DOT__dut__DOT__s1_valid 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__s1_valid_2;
            vlSelfRef.tb_top__DOT__dut__DOT__out_valid 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__out_valid_7;
            vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_data 
                = vlSelfRef.tb_top__DOT__dut__DOT__out_data;
            vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_valid 
                = vlSelfRef.tb_top__DOT__dut__DOT__out_valid;
            vlSymsp->vlInst.TOP__tb_top__DOT__vif.dbg_stage 
                = (((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s1_valid) 
                    << 1U) | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__out_valid));
            vlSelfRef.tb_top__DOT__dut__DOT__busy = 
                ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__out_valid) 
                 | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s1_valid));
            vlSymsp->vlInst.TOP__tb_top__DOT__vif.busy 
                = vlSelfRef.tb_top__DOT__dut__DOT__busy;
        }
    }
    if ((((5ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_top_mlp_if___nba_sequent__TOP__tb_top__DOT__vif__0((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((4ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtb_top_mlp_if___nba_sequent__TOP__tb_top__DOT__vif__1((&vlSymsp->vlInst.TOP__tb_top__DOT__vif));
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (1ULL & vlSelfRef.__VnbaTriggered[2U])) != 0ULL)) {
        Vtb_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (4ULL & vlSelfRef.__VnbaTriggered[2U])) != 0ULL)) {
        {
            // Inlined CFunc: _ico_comb__TOP__1
            vlSelfRef.tb_top__DOT__dut__DOT__s2_ready 
                = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__out_valid)) 
                         | (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.out_ready)));
            vlSelfRef.tb_top__DOT__dut__DOT__s1_ready 
                = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s1_valid)) 
                         | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s2_ready)));
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000044ULL & vlSelfRef.__VnbaTriggered[2U])) != 0ULL)) {
        {
            // Inlined CFunc: _ico_comb__TOP__2
            vlSelfRef.tb_top__DOT__dut__DOT__in_ready 
                = ((~ (::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.wr_en)) 
                   & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s1_ready));
            vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_ready 
                = vlSelfRef.tb_top__DOT__dut__DOT__in_ready;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000046ULL & vlSelfRef.__VnbaTriggered[2U])) != 0ULL)) {
        {
            // Inlined CFunc: _ico_comb__TOP__3
            vlSelfRef.tb_top__DOT__dut__DOT__in_fire 
                = ((::IData)(vlSymsp->vlInst.TOP__tb_top__DOT__vif.in_valid) 
                   & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__in_ready));
        }
    }
}

void Vtb_top___024root___timing_ready(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_ready\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((2ULL & vlSelfRef.__VactTriggered[1U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h27d73e2b__0.ready(
                                                              "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
    if ((((8ULL & vlSelfRef.__VactTriggered[1U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h64ab4232__0.ready(
                                                              "@( (32'sh0 != uvm_pkg::uvm_process_guard_base__Vclpkg.m_pending_guards.size()))");
    }
}

void Vtb_top___024root___timing_resume(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_resume\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vnontrivs.__VtrigSched_h27d73e2b__0.moveToResumeQueue(
                                                                      "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    vlSelfRef.__Vnontrivs.__VtrigSched_h64ab4232__0.moveToResumeQueue(
                                                                      "@( (32'sh0 != uvm_pkg::uvm_process_guard_base__Vclpkg.m_pending_guards.size()))");
    vlSelfRef.__Vnontrivs.__VtrigSched_h27d73e2b__0.resume(
                                                           "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    vlSelfRef.__Vnontrivs.__VdynSched.resume();
    vlSelfRef.__Vnontrivs.__VtrigSched_h64ab4232__0.resume(
                                                           "@( (32'sh0 != uvm_pkg::uvm_process_guard_base__Vclpkg.m_pending_guards.size()))");
    if ((((1ULL & vlSelfRef.__VactTriggered[1U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VdlySched.resume();
    }
}

void Vtb_top___024root___trigger_orInto__act_vec_ext(::VlUnpacked<::QData/*63:0*/, 4> &out, const ::VlUnpacked<::QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act_vec_ext\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((2U >= n));
}

void Vtb_top___024root___trigger_orInto__act_ext_vec(::VlUnpacked<::QData/*63:0*/, 3> &out, const ::VlUnpacked<::QData/*63:0*/, 4> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act_ext_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((2U >= n));
}

bool Vtb_top___024root___trigger_anySet__act_ext(const ::VlUnpacked<::QData/*63:0*/, 4> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__act_ext\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((4U > n));
    return (0U);
}

void Vtb_top___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 3> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((3U > n));
}

void Vtb_top___024root____VbeforeTrig_h27d73e2b__0(Vtb_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____VbeforeTrig_h27d73e2b__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 3> __VTmp;
    ::CData/*0:0*/ __Vtrigprevexpr_h640b92b2__0;
    __Vtrigprevexpr_h640b92b2__0 = 0;
    // Body
    __Vtrigprevexpr_h640b92b2__0 = (0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__Vnontrivs.__PVT__m_scheduled_list.size());
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (::QData)((::IData)((((::IData)(__Vtrigprevexpr_h640b92b2__0) 
                                       != (::IData)(vlSelfRef.__Vtrigprevexpr_h640b92b2__1)) 
                                      << 1U)));
    vlSelfRef.__Vtrigprevexpr_h640b92b2__1 = __Vtrigprevexpr_h640b92b2__0;
    if ((2ULL & __VTmp[1U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h27d73e2b__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_top___024root____VbeforeTrig_h64ab4232__0(Vtb_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____VbeforeTrig_h64ab4232__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 3> __VTmp;
    ::CData/*0:0*/ __Vtrigprevexpr_h2087a6b9__0;
    __Vtrigprevexpr_h2087a6b9__0 = 0;
    // Body
    __Vtrigprevexpr_h2087a6b9__0 = (0U != vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_process_guard_base__Vclpkg.__Vnontrivs.__PVT__m_pending_guards.size());
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (::QData)((::IData)((((::IData)(__Vtrigprevexpr_h2087a6b9__0) 
                                       != (::IData)(vlSelfRef.__Vtrigprevexpr_h2087a6b9__1)) 
                                      << 3U)));
    vlSelfRef.__Vtrigprevexpr_h2087a6b9__1 = __Vtrigprevexpr_h2087a6b9__0;
    if ((8ULL & __VTmp[1U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h64ab4232__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
