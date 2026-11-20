// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_mlp_if___ctor_var_reset(Vtb_top_mlp_if* vlSelf);

void Vtb_top_mlp_if__ctor(Vtb_top_mlp_if* vlSelf, Vtb_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(Verilated::catName(symsp->name(), namep));
    // Construct members
    // Reset structure values
    Vtb_top_mlp_if___ctor_var_reset(vlSelf);
}

Vtb_top_mlp_if::Vtb_top_mlp_if(Vtb_top__Syms* symsp, const char* namep) {
    Vtb_top_mlp_if__ctor(this, symsp, namep);
}

void Vtb_top_mlp_if__dtor(Vtb_top_mlp_if* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_top_mlp_if::~Vtb_top_mlp_if() {
    Vtb_top_mlp_if__dtor(this);
}
