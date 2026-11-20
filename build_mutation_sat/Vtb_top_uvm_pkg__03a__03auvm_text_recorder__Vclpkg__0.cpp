// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_object_type(Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_object_type\n"); );
    // Locals
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object_registry__pia5e93c1c> __Vfunc_get__Vfuncout_929;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_object_registry__pia5e93c1c__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__Vfuncout_929);
    get_object_type__Vfuncrtn = __Vfunc_get__Vfuncout_929;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_text_recorder> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_text_recorder, vlProcess, vlSymsp, "unnamed-uvm_text_recorder"s);
    } else {
        tmp = VL_NEW(Vtb_top_uvm_pkg__03a__03auvm_text_recorder, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_type_name(Vtb_top__Syms* __restrict vlSymsp, ::std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_recorder"s;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::init(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name) {
    Vtb_top_uvm_pkg__03a__03auvm_recorder::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_open(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_stream> stream, ::QData/*63:0*/ open_time, ::std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_open\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::std::string __VlefCall_5__get_name;
    ::IData/*31:0*/ __VlefCall_4__get_handle;
    ::IData/*31:0*/ __VlefCall_3__get_handle;
    ::CData/*0:0*/ __VlefCall_2__open_db;
    ::IData/*31:0*/ __VlefExpr_1;
    ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_tr_database> __VlefCall_0__get_db;
    VL_NULL_CHECK(stream, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 745)->__VnoInFunc_get_db(vlProcess, vlSymsp, __VlefCall_0__get_db);
    __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__get_db, this->__PVT__m_text_db);
    if (VL_UNLIKELY(((1U & (~ (0U != __VlefExpr_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_recorder.svh:745: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_recorder.do_open", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 745, "");
    }
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 746)->__VnoInFunc_open_db(vlSymsp, __VlefCall_2__open_db);
    if (VL_UNLIKELY((__VlefCall_2__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_3__get_handle);
        VL_NULL_CHECK(stream, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 752)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 748)
                      ->__PVT__m_file,"    OPEN_RECORDER @%0t {TXH:%0d STREAM:%0d NAME:%s TIME:%0t TYPE=\"%0s\"}\n",7, 'T',-9
                      , 'D',VL_TIME_UNITED_D(1000), '~',32,__VlefCall_3__get_handle
                      , '~',32,__VlefCall_4__get_handle
                      , 'S',&(__VlefCall_5__get_name)
                      , '#',64,open_time, 'S',&(type_name));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_close(Vtb_top__Syms* __restrict vlSymsp, ::QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_close\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_1__get_handle;
    ::CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 765)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 766)
                      ->__PVT__m_file,"    CLOSE_RECORDER @%0t {TXH:%0d TIME=%0t}\n",4, 'T',-9
                      , 'D',VL_TIME_UNITED_D(1000), '~',32,__VlefCall_1__get_handle
                      , '#',64,close_time);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_free(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_free\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_1__get_handle;
    ::CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 780)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 781)
                      ->__PVT__m_file,"    FREE_RECORDER @%0t {TXH:%0d}\n",3, 'T',-9
                      , 'D',VL_TIME_UNITED_D(1000), '~',32,__VlefCall_1__get_handle);
    }
    this->__PVT__m_text_db = VlNull{};
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlWide<128>/*4095:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field\n"); );
    // Body
    ::std::string __VlefCall_0__m_current_context;
    if ((0U == radix)) {
        this->__VnoInFunc_get_default_radix(vlSymsp, radix);
    }
    this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_0__m_current_context);
    this->__VnoInFunc_write_attribute(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__m_current_context), value, radix, size);
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_int(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::QData/*63:0*/ value, ::IData/*31:0*/ size, ::IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_int\n"); );
    // Body
    ::std::string __VlefCall_0__m_current_context;
    if ((0U == radix)) {
        this->__VnoInFunc_get_default_radix(vlSymsp, radix);
    }
    this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_0__m_current_context);
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_0__m_current_context), value, radix, size);
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_current_context(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string &m_current_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_current_context\n"); );
    // Body
    ::std::string unnamedblk1__DOT__full_name;
    ::IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    m_current_context__Vfuncrtn = ""s;
    if ((0U == this->__PVT__m_object_names.size())) {
        m_current_context__Vfuncrtn = name;
    } else if (((1U == this->__PVT__m_object_names.size()) 
                & (""s == name))) {
        m_current_context__Vfuncrtn = this->__PVT__m_object_names.at(0U);
    } else {
        unnamedblk1__DOT__full_name = ""s;
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, this->__PVT__m_object_names.size())) {
            unnamedblk1__DOT__full_name = ((unnamedblk1__DOT__unnamedblk2__DOT__i 
                                            == (this->__PVT__m_object_names.size() 
                                                - (::IData)(1U)))
                                            ? VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i))
                                            : VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i)), "."s));
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((::IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
        m_current_context__Vfuncrtn = ((""s != name)
                                        ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(unnamedblk1__DOT__full_name, "."s), name)
                                        : unnamedblk1__DOT__full_name);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_object(VlProcessRef vlProcess, Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::VlClassRef<Vtb_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_object\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    ::IData/*31:0*/ __VlefCall_2__get_active_object_depth;
    ::IData/*31:0*/ __VlefCall_1__get_active_object_depth;
    ::CData/*0:0*/ __VlefCall_0__get_id_enabled;
    ::IData/*31:0*/ v;
    v = 0U;
    this->__VnoInFunc_get_id_enabled(vlSymsp, __VlefCall_0__get_id_enabled);
    if (__VlefCall_0__get_id_enabled) {
        if ((VlNull{} != value)) {
            VL_NULL_CHECK(value, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 903)->__VnoInFunc_get_inst_id(vlSymsp, v);
        }
        this->__VnoInFunc_write_attribute_int(vlSymsp, "inst_id"s, 
                                              VL_EXTENDS_QI(64,32, v), 0x02000000U, 0x00000020U);
    }
    this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_1__get_active_object_depth);
    if ((1U < __VlefCall_1__get_active_object_depth)) {
        this->__PVT__m_object_names.push_back(name);
    }
    Vtb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
    this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_2__get_active_object_depth);
    if ((1U < __VlefCall_2__get_active_object_depth)) {
        std::ignore = this->__PVT__m_object_names.pop_back();
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_string(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_string\n"); );
    // Body
    ::std::string __VlefCall_2__m_current_context;
    ::IData/*31:0*/ __VlefCall_1__get_handle;
    ::CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 930)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_2__m_current_context);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 931)
                      ->__PVT__m_file,"      SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s   RADIX:UVM_STRING BITS=%0d}\n",6, 'T',-9
                      , 'D',VL_TIME_UNITED_D(1000), '~',32,__VlefCall_1__get_handle
                      , 'S',&(__VlefCall_2__m_current_context)
                      , 'S',&(value), '~',32,((::IData)(8U) 
                                              + VL_LEN_IN(value)));
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_generic(Vtb_top__Syms* __restrict vlSymsp, ::std::string name, ::std::string value, ::std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_generic\n"); );
    // Locals
    ::VlWide<128>/*4095:0*/ __Vtemp_1;
    ::IData/*31:0*/ __Vilp1;
    // Body
    ::VlWide<3600>/*115199:0*/ __VlefCall_1__uvm_string_to_bits;
    ::std::string __VlefCall_0__m_current_context;
    this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_0__m_current_context);
    this->__Vfunc_uvm_string_to_bits__str_930 = value;
    VL_SFORMAT_NX(115200,__VlefCall_1__uvm_string_to_bits.data()
                  ,"%0s",1, 'S',&(this->__Vfunc_uvm_string_to_bits__str_930));
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_1[__Vilp1] = __VlefCall_1__uvm_string_to_bits
            [__Vilp1];
        __Vilp1 = ((::IData)(1U) + __Vilp1);
    }
    this->__VnoInFunc_write_attribute(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__m_current_context), __Vtemp_1, 0x08000000U, 
                                      ((::IData)(8U) 
                                       + VL_LEN_IN(value)));
}

extern const ::VlAssocArray<::IData/*27:0*/, ::std::string> Vtb_top__ConstPool__CONSASSOC_1;

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute(Vtb_top__Syms* __restrict vlSymsp, ::std::string nm, ::VlWide<128>/*4095:0*/ value, ::IData/*27:0*/ radix, ::IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    ::std::string __VlefCall_2__to_string;
    ::IData/*31:0*/ __VlefCall_1__get_handle;
    ::CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 983)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_bit_vector_utils__pie19bc520__Vclpkg.__VnoInFunc_to_string(vlSymsp, value, numbits, radix, ""s, __VlefCall_2__to_string);
        __Vtemp_1 = Vtb_top__ConstPool__CONSASSOC_1
            .at(radix);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 984)
                      ->__PVT__m_file,"      SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s   RADIX:%s BITS=%0d}\n",7, 'T',-9
                      , 'D',VL_TIME_UNITED_D(1000), '~',32,__VlefCall_1__get_handle
                      , 'S',&(nm), 'S',&(__VlefCall_2__to_string)
                      , 'S',&(__Vtemp_1), '~',32,numbits);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute_int(Vtb_top__Syms* __restrict vlSymsp, ::std::string nm, ::QData/*63:0*/ value, ::IData/*27:0*/ radix, ::IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute_int\n"); );
    // Locals
    ::std::string __Vtemp_1;
    // Body
    ::std::string __VlefCall_2__to_string;
    ::IData/*31:0*/ __VlefCall_1__get_handle;
    ::CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 1009)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        vlSymsp->vlInst.TOP__uvm_pkg__03a__03auvm_bit_vector_utils__pi72d50063__Vclpkg.__VnoInFunc_to_string(vlSymsp, value, numbits, radix, ""s, __VlefCall_2__to_string);
        __Vtemp_1 = Vtb_top__ConstPool__CONSASSOC_1
            .at(radix);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/dell/uvm_workspace/verilator-uvm-example/1800.2-2020.3.1/src/base/uvm_recorder.svh", 1010)
                      ->__PVT__m_file,"      SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s   RADIX:%s BITS=%0d}\n",7, 'T',-9
                      , 'D',VL_TIME_UNITED_D(1000), '~',32,__VlefCall_1__get_handle
                      , 'S',&(nm), 'S',&(__VlefCall_2__to_string)
                      , 'S',&(__Vtemp_1), '~',32,numbits);
    }
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_randomize\n"); );
    // Body
    ::IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VupdateRandVars() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VupdateRandVars\n"); );
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, ::IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_top_uvm_pkg__03a__03auvm_text_recorder::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__filename_set = 0;
}

Vtb_top_uvm_pkg__03a__03auvm_text_recorder::~Vtb_top_uvm_pkg__03a__03auvm_text_recorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::~\n"); );
}

std::string Vtb_top_uvm_pkg__03a__03auvm_text_recorder::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top_uvm_pkg__03a__03auvm_text_recorder::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_uvm_pkg__03a__03auvm_text_recorder::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_text_db:" + VL_TO_STRING(__PVT__m_text_db);
    out += ", m_object_names:" + VL_TO_STRING(__PVT__m_object_names);
    out += ", filename:" + VL_TO_STRING(__PVT__filename);
    out += ", filename_set:" + VL_TO_STRING(__PVT__filename_set);
    out += ", " + Vtb_top_uvm_pkg__03a__03auvm_recorder::to_string_middle();
    return (out);
}
