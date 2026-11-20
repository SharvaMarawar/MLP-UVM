// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_uvm_pkg__03a__03auvm_resource__Tzb939a3ab__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tzb939a3ab__Vclpkg(Vtb_top_uvm_pkg__03a__03auvm_resource__Tzb939a3ab__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource__Tzb939a3ab__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tzb939a3ab__Vclpkg\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_resource__Tzb939a3ab> __Vfunc_get_type__Vfuncout_564;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__Vfuncout_564);
    vlSelfRef.__Vnontrivs.__PVT__my_type = __Vfunc_get_type__Vfuncout_564;
}
