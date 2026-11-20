// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

std::string VL_TO_STRING(const Vtb_top_access_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{read_time:" + VL_TO_STRING(obj.__PVT__read_time);
    out += ", write_time:" + VL_TO_STRING(obj.__PVT__write_time);
    out += ", read_count:" + VL_TO_STRING(obj.__PVT__read_count);
    out += ", write_count:" + VL_TO_STRING(obj.__PVT__write_count);
    out += "}";
    return (out);
}
