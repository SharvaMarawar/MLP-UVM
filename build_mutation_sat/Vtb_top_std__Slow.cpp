// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_std__ctor(Vtb_top_std* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(Verilated::catName(symsp->name(), namep));
    // Construct members
    // Reset structure values
}

Vtb_top_std::Vtb_top_std(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top_std__ctor(this, symsp, namep);
}

void Vtb_top_std__dtor(Vtb_top_std* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top_std::~Vtb_top_std() {
    Vtb_top_std__dtor(this);
}
