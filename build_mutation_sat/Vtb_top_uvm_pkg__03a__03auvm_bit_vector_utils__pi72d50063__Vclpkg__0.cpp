// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pi72d50063__Vclpkg::__VnoInFunc_to_string(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::std::string radix_str, ::std::string &to_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pi72d50063__Vclpkg::__VnoInFunc_to_string\n"); );
    // Body
    {
        to_string__Vfuncrtn = ""s;
        if (((0x02000000U == radix) & (::IData)((value 
                                                 >> 
                                                 (0x0000003fU 
                                                  & (size 
                                                     - (::IData)(1U))))))) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0d",1
                          , '~',64,value);
            goto __Vlabel0;
        }
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, size) 
                          - 1ULL));
        if ((0x01000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0b",2
                          , 'S',&(radix_str), '~',64,value);
        } else if ((0x06000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0o",2
                          , 'S',&(radix_str), '~',64,value);
        } else if ((0x03000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0d",2
                          , 'S',&(radix_str), '~',64,value);
        } else if ((0x08000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0s",2
                          , 'S',&(radix_str), '~',64,value);
        } else if ((0x09000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0t",3, 'T',-9
                          , 'S',&(radix_str), '~',64,value);
        } else if ((0x02000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0d",2
                          , 'S',&(radix_str), '~',64,value);
        } else {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0x",2
                          , 'S',&(radix_str), '~',64,value);
        }
        __Vlabel0: ;
    }
}
