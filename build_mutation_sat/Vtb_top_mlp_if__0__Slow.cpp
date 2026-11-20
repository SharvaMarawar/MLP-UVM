// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_mlp_if___eval_static__TOP__tb_top__DOT__vif(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___eval_static__TOP__tb_top__DOT__vif\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_n = 0U;
    vlSelfRef.wr_en = 0U;
    vlSelfRef.wr_addr = 0U;
    vlSelfRef.wr_data = 0U;
    vlSelfRef.in_valid = 0U;
    vlSelfRef.in_data = 0U;
    vlSelfRef.out_ready = 1U;
    vlSelfRef.__PVT__assert_errors = 0U;
    vlSelfRef._Vpast_1_1 = 0U;
    vlSelfRef._Vpast_8_1 = 0U;
}

VL_ATTR_COLD void Vtb_top_mlp_if___ctor_var_reset(Vtb_top_mlp_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_top_mlp_if___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1122049356863891575ull);
    vlSelf->out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2886291494070200219ull);
    vlSelf->out_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10144880484820144978ull);
    vlSelf->busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386567572483775230ull);
    vlSelf->dbg_stage = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9088324943503886685ull);
    vlSelf->__Vnfa___0__kill = 0;
    vlSelf->__Vnfa___0__s2 = 0;
    vlSelf->__Vnfa___1__kill = 0;
    vlSelf->__Vnfa___1__d2_ring = 0;
    vlSelf->__Vnfa___1__d2_head = 0;
    vlSelf->__Vnfa___1__d2_idx = 0;
    vlSelf->__Vnfa___1__d2_liveCount = 0;
    vlSelf->__Vnfa___1__d2_wrapped = 0;
    vlSelf->_Vpast_1_1 = 0;
    vlSelf->_Vpast_8_1 = 0;
    vlSelf->__Vdly____Vnfa___0__s2_9 = 0;
    vlSelf->__Vdly____Vnfa___0__kill_10 = 0;
    vlSelf->__Vdly____Vnfa___1__d2_liveCount_11 = 0;
    vlSelf->__Vdly____Vnfa___1__d2_wrapped_12 = 0;
    vlSelf->__Vdly____Vnfa___1__d2_idx_13 = 0;
    vlSelf->__Vdly____Vnfa___1__d2_head_14 = 0;
    vlSelf->__Vdly____Vnfa___1__kill_15 = 0;
    vlSelf->__Vdly___Vpast_1_1_16 = 0;
    vlSelf->__Vdly___Vpast_8_1_17 = 0;
    vlSelf->__Vsampled_rst_n_0 = 0;
    vlSelf->__Vsampled_out_valid_1 = 0;
    vlSelf->__Vsampled_out_data_2 = 0;
    vlSelf->__Vsampled_wr_en_3 = 0;
    vlSelf->__Vsampled_in_ready_4 = 0;
    vlSelf->__Vsampled_busy_5 = 0;
    vlSelf->__Vsampled_out_ready_6 = 0;
    vlSelf->__Vsampled_in_valid_7 = 0;
}
