// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__0(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly____Vnfa___1__d2_idx_13 = vlSelfRef.__Vnfa___1__d2_idx;
    vlSelfRef.__Vdly____Vnfa___1__d2_wrapped_12 = vlSelfRef.__Vnfa___1__d2_wrapped;
    vlSelfRef.__Vdly____Vnfa___1__d2_liveCount_11 = vlSelfRef.__Vnfa___1__d2_liveCount;
}

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__1(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((~ (::IData)(vlSelfRef.__Vsampled_rst_n_0)) 
                                           & (~ (::IData)(vlSelfRef._Vpast_8_1)))) 
                                       | ((~ (::IData)(vlSelfRef.__Vsampled_out_valid_1)) 
                                          & (~ (::IData)(vlSelfRef.__Vsampled_busy_5))))))))) {
                vlSelfRef.__PVT__assert_errors = ((::IData)(1U) 
                                                  + vlSelfRef.__PVT__assert_errors);
                VL_WRITEF_NX("[%0t] %%Error: mlp_if.sv:64: Assertion failed in %m: [MLP_IF] a_reset_idle: DUT not idle while in reset\n",3, 'M',vlSymsp->name(),"tb_top.vif.a_reset_idle", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("mlp_if.sv", 64, "");
            }
            if (vlSelfRef.rst_n) {
                if (VL_UNLIKELY(((1U & (~ ((~ (::IData)(vlSelfRef.__Vsampled_wr_en_3)) 
                                           | (~ (::IData)(vlSelfRef.__Vsampled_in_ready_4)))))))) {
                    vlSelfRef.__PVT__assert_errors 
                        = ((::IData)(1U) + vlSelfRef.__PVT__assert_errors);
                    VL_WRITEF_NX("[%0t] %%Error: mlp_if.sv:44: Assertion failed in %m: [MLP_IF] a_in_ready_wr: in_ready high during a config write\n",3, 'M',vlSymsp->name(),"tb_top.vif.a_in_ready_wr", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("mlp_if.sv", 44, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (::IData)(vlSelfRef.__Vsampled_out_valid_1)) 
                                           | (::IData)(vlSelfRef.__Vsampled_busy_5))))))) {
                    vlSelfRef.__PVT__assert_errors 
                        = ((::IData)(1U) + vlSelfRef.__PVT__assert_errors);
                    VL_WRITEF_NX("[%0t] %%Error: mlp_if.sv:48: Assertion failed in %m: [MLP_IF] a_out_busy: out_valid without busy\n",3, 'M',vlSymsp->name(),"tb_top.vif.a_out_busy", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("mlp_if.sv", 48, "");
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.__Vnfa___0__s2) 
                                    & (vlSelfRef.__Vnfa___0__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_rst_n_0)) 
                                  & (~ ((::IData)(vlSelfRef.__Vsampled_out_valid_1) 
                                        & (vlSelfRef._Vpast_1_1 
                                           == vlSelfRef.__Vsampled_out_data_2))))))) {
                    vlSelfRef.__PVT__assert_errors 
                        = ((::IData)(1U) + vlSelfRef.__PVT__assert_errors);
                    VL_WRITEF_NX("[%0t] %%Error: mlp_if.sv:40: Assertion failed in %m: [MLP_IF] a_out_hold: output dropped or changed while stalled\n",3, 'M',vlSymsp->name(),"tb_top.vif.a_out_hold", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("mlp_if.sv", 40, "");
                }
                if (VL_UNLIKELY((((((0U != ((::IData)(vlSelfRef.__Vnfa___1__d2_wrapped)
                                             ? (::IData)(vlSelfRef.__Vnfa___1__d2_head)
                                             : 0U)) 
                                    & (vlSelfRef.__Vnfa___1__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_rst_n_0)) 
                                  & (~ (::IData)(vlSelfRef.__Vsampled_out_valid_1)))))) {
                    vlSelfRef.__PVT__assert_errors 
                        = ((::IData)(1U) + vlSelfRef.__PVT__assert_errors);
                    VL_WRITEF_NX("[%0t] %%Error: mlp_if.sv:52: Assertion failed in %m: [MLP_IF] a_latency2: sample into an empty pipe did not appear 2 cycles later\n",3, 'M',vlSymsp->name(),"tb_top.vif.a_latency2", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("mlp_if.sv", 52, "");
                }
            }
        }
    }
    if ((1U & ((vlSelfRef.__Vnfa___1__kill != vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)) 
               | (~ (::IData)(vlSelfRef.rst_n))))) {
        vlSelfRef.__Vdly____Vnfa___1__d2_idx_13 = 0U;
        vlSelfRef.__Vdly____Vnfa___1__d2_liveCount_11 = 0U;
    } else {
        vlSelfRef.__Vdly____Vnfa___1__d2_idx_13 = (
                                                   (1U 
                                                    == vlSelfRef.__Vnfa___1__d2_idx)
                                                    ? 0U
                                                    : 
                                                   ((::IData)(1U) 
                                                    + vlSelfRef.__Vnfa___1__d2_idx));
        vlSelfRef.__Vdly____Vnfa___1__d2_liveCount_11 
            = ((vlSelfRef.__Vnfa___1__d2_liveCount 
                - ((::IData)(vlSelfRef.__Vnfa___1__d2_wrapped)
                    ? (::IData)(vlSelfRef.__Vnfa___1__d2_head)
                    : 0U)) + (0U != ((::IData)(vlSelfRef.rst_n)
                                      ? (vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
                                         & (((::IData)(vlSelfRef.__Vsampled_in_valid_7) 
                                             & (::IData)(vlSelfRef.__Vsampled_in_ready_4)) 
                                            & (~ (::IData)(vlSelfRef.__Vsampled_busy_5))))
                                      : 0U)));
    }
    vlSelfRef.__Vdly____Vnfa___1__d2_wrapped_12 = (
                                                   (1U 
                                                    & (~ 
                                                       ((vlSelfRef.__Vnfa___1__kill 
                                                         != 
                                                         vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)) 
                                                        | (~ (::IData)(vlSelfRef.rst_n))))) 
                                                   && ((::IData)(vlSelfRef.__Vnfa___1__d2_wrapped) 
                                                       | (1U 
                                                          == vlSelfRef.__Vnfa___1__d2_idx)));
}

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__2(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly____Vnfa___1__d2_idx_13 = 0U;
    vlSelfRef.__Vdly____Vnfa___1__d2_wrapped_12 = 0U;
    vlSelfRef.__Vdly____Vnfa___1__d2_liveCount_11 = 0U;
}

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__3(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly___Vpast_8_1_17 = vlSelfRef._Vpast_8_1;
    vlSelfRef.__Vdly___Vpast_1_1_16 = vlSelfRef._Vpast_1_1;
    vlSelfRef.__Vdly____Vnfa___1__d2_head_14 = vlSelfRef.__Vnfa___1__d2_head;
}

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__4(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly____Vnfa___0__s2_9 = vlSelfRef.__Vnfa___0__s2;
}

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__5(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__5\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly___Vpast_8_1_17 = vlSelfRef.__Vsampled_rst_n_0;
    vlSelfRef.__Vdly___Vpast_1_1_16 = vlSelfRef.__Vsampled_out_data_2;
    if ((1U & (~ ((vlSelfRef.__Vnfa___1__kill != vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)) 
                  | (~ (::IData)(vlSelfRef.rst_n)))))) {
        if ((1U >= vlSelfRef.__Vnfa___1__d2_idx)) {
            vlSelfRef.__Vnfa___1__d2_ring = (((~ ((::IData)(1U) 
                                                  << vlSelfRef.__Vnfa___1__d2_idx)) 
                                              & (::IData)(vlSelfRef.__Vnfa___1__d2_ring)) 
                                             | (3U 
                                                & ((0U 
                                                    != 
                                                    ((::IData)(vlSelfRef.rst_n)
                                                      ? 
                                                     (vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
                                                      & (((::IData)(vlSelfRef.__Vsampled_in_valid_7) 
                                                          & (::IData)(vlSelfRef.__Vsampled_in_ready_4)) 
                                                         & (~ (::IData)(vlSelfRef.__Vsampled_busy_5))))
                                                      : 0U)) 
                                                   << vlSelfRef.__Vnfa___1__d2_idx)));
        }
        vlSelfRef.__Vdly____Vnfa___1__d2_head_14 = 
            ((1U >= ((1U == vlSelfRef.__Vnfa___1__d2_idx)
                      ? 0U : ((::IData)(1U) + vlSelfRef.__Vnfa___1__d2_idx))) 
             && (1U & ((::IData)(vlSelfRef.__Vnfa___1__d2_ring) 
                       >> ((1U == vlSelfRef.__Vnfa___1__d2_idx)
                            ? 0U : ((::IData)(1U) + vlSelfRef.__Vnfa___1__d2_idx)))));
    }
    vlSelfRef.__Vdly____Vnfa___0__s2_9 = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
                                            & ((::IData)(vlSelfRef.__Vsampled_out_valid_1) 
                                               & (~ (::IData)(vlSelfRef.__Vsampled_out_ready_6)))) 
                                           & (::IData)(vlSelfRef.rst_n)) 
                                          & (vlSelfRef.__Vnfa___0__kill 
                                             == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
}

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__6(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__6\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly____Vnfa___0__s2_9 = 0U;
}

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__7(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__7\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly____Vnfa___1__kill_15 = vlSelfRef.__Vnfa___1__kill;
    vlSelfRef.__Vdly____Vnfa___0__kill_10 = vlSelfRef.__Vnfa___0__kill;
}

void Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__8(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___act_sequent__TOP__tb_top__DOT__vif__8\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly____Vnfa___1__kill_15 = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.__Vdly____Vnfa___0__kill_10 = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
}

void Vtb_top_mlp_if___nba_sequent__TOP__tb_top__DOT__vif__0(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___nba_sequent__TOP__tb_top__DOT__vif__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vnfa___0__s2 = vlSelfRef.__Vdly____Vnfa___0__s2_9;
    vlSelfRef.__Vnfa___1__d2_liveCount = vlSelfRef.__Vdly____Vnfa___1__d2_liveCount_11;
    vlSelfRef.__Vnfa___1__d2_wrapped = vlSelfRef.__Vdly____Vnfa___1__d2_wrapped_12;
    vlSelfRef.__Vnfa___1__d2_idx = vlSelfRef.__Vdly____Vnfa___1__d2_idx_13;
}

void Vtb_top_mlp_if___nba_sequent__TOP__tb_top__DOT__vif__1(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___nba_sequent__TOP__tb_top__DOT__vif__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vnfa___0__kill = vlSelfRef.__Vdly____Vnfa___0__kill_10;
    vlSelfRef.__Vnfa___1__d2_head = vlSelfRef.__Vdly____Vnfa___1__d2_head_14;
    vlSelfRef.__Vnfa___1__kill = vlSelfRef.__Vdly____Vnfa___1__kill_15;
    vlSelfRef._Vpast_1_1 = vlSelfRef.__Vdly___Vpast_1_1_16;
    vlSelfRef._Vpast_8_1 = vlSelfRef.__Vdly___Vpast_8_1_17;
}

std::string VL_TO_STRING(const Vtb_top_mlp_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
