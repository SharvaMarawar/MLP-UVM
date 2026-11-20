// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

extern const ::VlWide<128>/*4095:0*/ Vtb_top__ConstPool__CONST_1;

void Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg::__VnoInFunc_to_string(Vtb_top__Syms* __restrict vlSymsp, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix, ::std::string radix_str, ::std::string &to_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg::__VnoInFunc_to_string\n"); );
    // Locals
    ::VlWide<128>/*4095:0*/ __Vtemp_2;
    ::VlWide<128>/*4095:0*/ __Vtemp_3;
    // Body
    {
        to_string__Vfuncrtn = ""s;
        if (((0x02000000U == radix) & (value[(0x0000007fU 
                                              & ((size 
                                                  - (::IData)(1U)) 
                                                 >> 5U))] 
                                       >> (0x0000001fU 
                                           & (size 
                                              - (::IData)(1U)))))) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0d",1
                          , '~',4096,value.data());
            goto __Vlabel0;
        }
        VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, Vtb_top__ConstPool__CONST_1, size);
        VL_SUB_W(128, __Vtemp_3, __Vtemp_2, Vtb_top__ConstPool__CONST_1);
        value[0U] = (value[0U] & __Vtemp_3[0U]);
        value[1U] = (value[1U] & __Vtemp_3[1U]);
        value[2U] = (value[2U] & __Vtemp_3[2U]);
        value[3U] = (value[3U] & __Vtemp_3[3U]);
        value[4U] = (value[4U] & __Vtemp_3[4U]);
        value[5U] = (value[5U] & __Vtemp_3[5U]);
        value[6U] = (value[6U] & __Vtemp_3[6U]);
        value[7U] = (value[7U] & __Vtemp_3[7U]);
        value[8U] = (value[8U] & __Vtemp_3[8U]);
        value[9U] = (value[9U] & __Vtemp_3[9U]);
        value[10U] = (value[10U] & __Vtemp_3[10U]);
        value[11U] = (value[11U] & __Vtemp_3[11U]);
        value[12U] = (value[12U] & __Vtemp_3[12U]);
        value[13U] = (value[13U] & __Vtemp_3[13U]);
        value[14U] = (value[14U] & __Vtemp_3[14U]);
        value[15U] = (value[15U] & __Vtemp_3[15U]);
        value[16U] = (value[16U] & __Vtemp_3[16U]);
        value[17U] = (value[17U] & __Vtemp_3[17U]);
        value[18U] = (value[18U] & __Vtemp_3[18U]);
        value[19U] = (value[19U] & __Vtemp_3[19U]);
        value[20U] = (value[20U] & __Vtemp_3[20U]);
        value[21U] = (value[21U] & __Vtemp_3[21U]);
        value[22U] = (value[22U] & __Vtemp_3[22U]);
        value[23U] = (value[23U] & __Vtemp_3[23U]);
        value[24U] = (value[24U] & __Vtemp_3[24U]);
        value[25U] = (value[25U] & __Vtemp_3[25U]);
        value[26U] = (value[26U] & __Vtemp_3[26U]);
        value[27U] = (value[27U] & __Vtemp_3[27U]);
        value[28U] = (value[28U] & __Vtemp_3[28U]);
        value[29U] = (value[29U] & __Vtemp_3[29U]);
        value[30U] = (value[30U] & __Vtemp_3[30U]);
        value[31U] = (value[31U] & __Vtemp_3[31U]);
        value[32U] = (value[32U] & __Vtemp_3[32U]);
        value[33U] = (value[33U] & __Vtemp_3[33U]);
        value[34U] = (value[34U] & __Vtemp_3[34U]);
        value[35U] = (value[35U] & __Vtemp_3[35U]);
        value[36U] = (value[36U] & __Vtemp_3[36U]);
        value[37U] = (value[37U] & __Vtemp_3[37U]);
        value[38U] = (value[38U] & __Vtemp_3[38U]);
        value[39U] = (value[39U] & __Vtemp_3[39U]);
        value[40U] = (value[40U] & __Vtemp_3[40U]);
        value[41U] = (value[41U] & __Vtemp_3[41U]);
        value[42U] = (value[42U] & __Vtemp_3[42U]);
        value[43U] = (value[43U] & __Vtemp_3[43U]);
        value[44U] = (value[44U] & __Vtemp_3[44U]);
        value[45U] = (value[45U] & __Vtemp_3[45U]);
        value[46U] = (value[46U] & __Vtemp_3[46U]);
        value[47U] = (value[47U] & __Vtemp_3[47U]);
        value[48U] = (value[48U] & __Vtemp_3[48U]);
        value[49U] = (value[49U] & __Vtemp_3[49U]);
        value[50U] = (value[50U] & __Vtemp_3[50U]);
        value[51U] = (value[51U] & __Vtemp_3[51U]);
        value[52U] = (value[52U] & __Vtemp_3[52U]);
        value[53U] = (value[53U] & __Vtemp_3[53U]);
        value[54U] = (value[54U] & __Vtemp_3[54U]);
        value[55U] = (value[55U] & __Vtemp_3[55U]);
        value[56U] = (value[56U] & __Vtemp_3[56U]);
        value[57U] = (value[57U] & __Vtemp_3[57U]);
        value[58U] = (value[58U] & __Vtemp_3[58U]);
        value[59U] = (value[59U] & __Vtemp_3[59U]);
        value[60U] = (value[60U] & __Vtemp_3[60U]);
        value[61U] = (value[61U] & __Vtemp_3[61U]);
        value[62U] = (value[62U] & __Vtemp_3[62U]);
        value[63U] = (value[63U] & __Vtemp_3[63U]);
        value[64U] = (value[64U] & __Vtemp_3[64U]);
        value[65U] = (value[65U] & __Vtemp_3[65U]);
        value[66U] = (value[66U] & __Vtemp_3[66U]);
        value[67U] = (value[67U] & __Vtemp_3[67U]);
        value[68U] = (value[68U] & __Vtemp_3[68U]);
        value[69U] = (value[69U] & __Vtemp_3[69U]);
        value[70U] = (value[70U] & __Vtemp_3[70U]);
        value[71U] = (value[71U] & __Vtemp_3[71U]);
        value[72U] = (value[72U] & __Vtemp_3[72U]);
        value[73U] = (value[73U] & __Vtemp_3[73U]);
        value[74U] = (value[74U] & __Vtemp_3[74U]);
        value[75U] = (value[75U] & __Vtemp_3[75U]);
        value[76U] = (value[76U] & __Vtemp_3[76U]);
        value[77U] = (value[77U] & __Vtemp_3[77U]);
        value[78U] = (value[78U] & __Vtemp_3[78U]);
        value[79U] = (value[79U] & __Vtemp_3[79U]);
        value[80U] = (value[80U] & __Vtemp_3[80U]);
        value[81U] = (value[81U] & __Vtemp_3[81U]);
        value[82U] = (value[82U] & __Vtemp_3[82U]);
        value[83U] = (value[83U] & __Vtemp_3[83U]);
        value[84U] = (value[84U] & __Vtemp_3[84U]);
        value[85U] = (value[85U] & __Vtemp_3[85U]);
        value[86U] = (value[86U] & __Vtemp_3[86U]);
        value[87U] = (value[87U] & __Vtemp_3[87U]);
        value[88U] = (value[88U] & __Vtemp_3[88U]);
        value[89U] = (value[89U] & __Vtemp_3[89U]);
        value[90U] = (value[90U] & __Vtemp_3[90U]);
        value[91U] = (value[91U] & __Vtemp_3[91U]);
        value[92U] = (value[92U] & __Vtemp_3[92U]);
        value[93U] = (value[93U] & __Vtemp_3[93U]);
        value[94U] = (value[94U] & __Vtemp_3[94U]);
        value[95U] = (value[95U] & __Vtemp_3[95U]);
        value[96U] = (value[96U] & __Vtemp_3[96U]);
        value[97U] = (value[97U] & __Vtemp_3[97U]);
        value[98U] = (value[98U] & __Vtemp_3[98U]);
        value[99U] = (value[99U] & __Vtemp_3[99U]);
        value[100U] = (value[100U] & __Vtemp_3[100U]);
        value[101U] = (value[101U] & __Vtemp_3[101U]);
        value[102U] = (value[102U] & __Vtemp_3[102U]);
        value[103U] = (value[103U] & __Vtemp_3[103U]);
        value[104U] = (value[104U] & __Vtemp_3[104U]);
        value[105U] = (value[105U] & __Vtemp_3[105U]);
        value[106U] = (value[106U] & __Vtemp_3[106U]);
        value[107U] = (value[107U] & __Vtemp_3[107U]);
        value[108U] = (value[108U] & __Vtemp_3[108U]);
        value[109U] = (value[109U] & __Vtemp_3[109U]);
        value[110U] = (value[110U] & __Vtemp_3[110U]);
        value[111U] = (value[111U] & __Vtemp_3[111U]);
        value[112U] = (value[112U] & __Vtemp_3[112U]);
        value[113U] = (value[113U] & __Vtemp_3[113U]);
        value[114U] = (value[114U] & __Vtemp_3[114U]);
        value[115U] = (value[115U] & __Vtemp_3[115U]);
        value[116U] = (value[116U] & __Vtemp_3[116U]);
        value[117U] = (value[117U] & __Vtemp_3[117U]);
        value[118U] = (value[118U] & __Vtemp_3[118U]);
        value[119U] = (value[119U] & __Vtemp_3[119U]);
        value[120U] = (value[120U] & __Vtemp_3[120U]);
        value[121U] = (value[121U] & __Vtemp_3[121U]);
        value[122U] = (value[122U] & __Vtemp_3[122U]);
        value[123U] = (value[123U] & __Vtemp_3[123U]);
        value[124U] = (value[124U] & __Vtemp_3[124U]);
        value[125U] = (value[125U] & __Vtemp_3[125U]);
        value[126U] = (value[126U] & __Vtemp_3[126U]);
        value[127U] = (value[127U] & __Vtemp_3[127U]);
        if ((0x01000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0b",2
                          , 'S',&(radix_str), '~',4096,value.data());
        } else if ((0x06000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0o",2
                          , 'S',&(radix_str), '~',4096,value.data());
        } else if ((0x03000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0d",2
                          , 'S',&(radix_str), '~',4096,value.data());
        } else if ((0x08000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0s",2
                          , 'S',&(radix_str), '~',4096,value.data());
        } else if ((0x09000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0t",3, 'T',-9
                          , 'S',&(radix_str), '~',4096,value.data());
        } else if ((0x02000000U == radix)) {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0d",2
                          , 'S',&(radix_str), '~',4096,value.data());
        } else {
            VL_SFORMAT_NX(to_string__Vfuncrtn,"%0s%0x",2
                          , 'S',&(radix_str), '~',4096,value.data());
        }
        __Vlabel0: ;
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg::__VnoInFunc_from_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string val_str, ::VlWide<128>/*4095:0*/ &val, ::IData/*31:0*/ &from_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_top_uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg::__VnoInFunc_from_string\n"); );
    // Locals
    ::VlWide<128>/*4095:0*/ __Vtemp_1;
    ::IData/*31:0*/ __Vilp1;
    // Body
    ::CData/*7:0*/ unnamedblk3__DOT__char;
    ::std::string base;
    ::std::string extval;
    ::std::string tmp;
    ::IData/*31:0*/ success;
    ::CData/*0:0*/ is_negative;
    VL_ZERO_W(4096, val);
    base = ""s;
    extval = ""s;
    tmp = ""s;
    success = 0U;
    is_negative = 0U;
    if (VL_LTS_III(32, 1U, VL_LEN_IN(val_str))) {
        unnamedblk3__DOT__char = VL_GETC_N(val_str,0U);
        if ((0x2dU == (::IData)(unnamedblk3__DOT__char))) {
            is_negative = 1U;
            tmp = VL_SUBSTR_N(val_str,1U,(VL_LEN_IN(val_str) 
                                          - (::IData)(1U)));
        } else {
            tmp = ((0x2bU == (::IData)(unnamedblk3__DOT__char))
                    ? VL_SUBSTR_N(val_str,1U,(VL_LEN_IN(val_str) 
                                              - (::IData)(1U)))
                    : val_str);
        }
    } else {
        tmp = val_str;
    }
    if (VL_LTS_III(32, 2U, VL_LEN_IN(tmp))) {
        base = VL_SUBSTR_N(tmp,0U,1U);
        extval = VL_SUBSTR_N(tmp,2U,(VL_LEN_IN(tmp) 
                                     - (::IData)(1U)));
        if (("'b"s == base)) {
            success = VL_SSCANF_INNX(64,extval,"%b",1
                                     , '#',4096,&(val)) ;
        } else if (("0b"s == base)) {
            success = VL_SSCANF_INNX(64,extval,"%b",1
                                     , '#',4096,&(val)) ;
        } else if (("'o"s == base)) {
            success = VL_SSCANF_INNX(64,extval,"%o",1
                                     , '#',4096,&(val)) ;
        } else if (("'d"s == base)) {
            success = VL_SSCANF_INNX(64,extval,"%d",1
                                     , '#',4096,&(val)) ;
        } else if (("'h"s == base)) {
            success = VL_SSCANF_INNX(64,extval,"%x",1
                                     , '#',4096,&(val)) ;
        } else if (("'x"s == base)) {
            success = VL_SSCANF_INNX(64,extval,"%x",1
                                     , '#',4096,&(val)) ;
        } else if (("0x"s == base)) {
            success = VL_SSCANF_INNX(64,extval,"%x",1
                                     , '#',4096,&(val)) ;
        } else {
            success = VL_SSCANF_INNX(64,val_str,"%d",1
                                     , '#',4096,&(val)) ;
        }
    } else {
        success = VL_SSCANF_INNX(64,tmp,"%d",1, '#',4096,&(val)) ;
    }
    if (((1U == success) & (::IData)(is_negative))) {
        VL_NEGATE_W(128, __Vtemp_1, val);
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000007fU)) {
            val[__Vilp1] = __Vtemp_1[__Vilp1];
            __Vilp1 = ((::IData)(1U) + __Vilp1);
        }
    }
    from_string__Vfuncrtn = success;
}
