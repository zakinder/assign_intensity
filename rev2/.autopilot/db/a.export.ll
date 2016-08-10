; ModuleID = 'C:/Users/sakin/Desktop/pj_r_0001/assign_intensity/rev2/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@llvm_global_ctors_1 = appending global [2 x void ()*] [void ()* @_GLOBAL__I_a, void ()* @_GLOBAL__I_a38]
@llvm_global_ctors_0 = appending global [2 x i32] [i32 65535, i32 65535]
@p_str4 = private unnamed_addr constant [24 x i8] c"assign_intensity_label1\00", align 1
@p_str3 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str2 = private unnamed_addr constant [24 x i8] c"assign_intensity_label4\00", align 1

declare i52 @llvm.part.select.i52(i52, i32, i32) nounwind readnone

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare i110 @llvm.part.select.i110(i110, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define i32 @assign_intensity([16 x i32]* %alphabuf, i16 zeroext %intensity, [16 x i32]* %node_output, [16 x i32]* %node_count) nounwind uwtable {
_ZlsILi48ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit_ifconv:
  %intensity_read = call i16 @_ssdm_op_Read.ap_auto.i16(i16 %intensity) nounwind
  %alphabuf_addr = getelementptr [16 x i32]* %alphabuf, i64 0, i64 0
  %alphabuf_addr_1 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 1
  %alphabuf_addr_2 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 2
  %alphabuf_addr_3 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 3
  %alphabuf_addr_4 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 4
  %alphabuf_addr_5 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 5
  %alphabuf_addr_6 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 6
  %alphabuf_addr_7 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 7
  %alphabuf_addr_8 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 8
  %alphabuf_addr_9 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 9
  %alphabuf_addr_10 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 10
  %alphabuf_addr_11 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 11
  %alphabuf_addr_12 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 12
  %alphabuf_addr_13 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 13
  %alphabuf_addr_14 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 14
  %alphabuf_addr_15 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 15
  call void (...)* @_ssdm_op_SpecBitsMap([16 x i32]* %alphabuf) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap(i16 %intensity) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecBitsMap([16 x i32]* %node_output) nounwind, !map !19
  call void (...)* @_ssdm_op_SpecBitsMap([16 x i32]* %node_count) nounwind, !map !23
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !27
  call void (...)* @_ssdm_op_SpecTopModule() nounwind
  %alphabuf_load = load i32* %alphabuf_addr, align 4
  %alphabuf_load_1 = load i32* %alphabuf_addr_1, align 4
  %alphabuf_load_2 = load i32* %alphabuf_addr_2, align 4
  %alphabuf_load_3 = load i32* %alphabuf_addr_3, align 4
  %tmp1 = add i32 %alphabuf_load, %alphabuf_load_1
  %tmp2 = add i32 %alphabuf_load_3, %alphabuf_load_2
  %val_assign = add i32 %tmp1, %tmp2
  %cumsum_V_cast = zext i32 %val_assign to i33
  %alphabuf_load_4 = load i32* %alphabuf_addr_4, align 4
  %alphabuf_load_5 = load i32* %alphabuf_addr_5, align 4
  %alphabuf_load_6 = load i32* %alphabuf_addr_6, align 4
  %alphabuf_load_7 = load i32* %alphabuf_addr_7, align 4
  %tmp3 = add i32 %alphabuf_load_4, %alphabuf_load_5
  %tmp4 = add i32 %alphabuf_load_7, %alphabuf_load_6
  %val_assign_1 = add i32 %tmp3, %tmp4
  %tmp_7_cast = zext i32 %val_assign_1 to i33
  %alphabuf_load_8 = load i32* %alphabuf_addr_8, align 4
  %alphabuf_load_9 = load i32* %alphabuf_addr_9, align 4
  %alphabuf_load_10 = load i32* %alphabuf_addr_10, align 4
  %alphabuf_load_11 = load i32* %alphabuf_addr_11, align 4
  %tmp5 = add i32 %alphabuf_load_8, %alphabuf_load_9
  %tmp6 = add i32 %alphabuf_load_11, %alphabuf_load_10
  %val_assign_2 = add i32 %tmp5, %tmp6
  %tmp_10_cast = zext i32 %val_assign_2 to i33
  %alphabuf_load_12 = load i32* %alphabuf_addr_12, align 4
  %alphabuf_load_13 = load i32* %alphabuf_addr_13, align 4
  %alphabuf_load_14 = load i32* %alphabuf_addr_14, align 4
  %alphabuf_load_15 = load i32* %alphabuf_addr_15, align 4
  %tmp7 = add i32 %alphabuf_load_12, %alphabuf_load_13
  %tmp8 = add i32 %alphabuf_load_15, %alphabuf_load_14
  %val_assign_3 = add i32 %tmp7, %tmp8
  %tmp_13_cast = zext i32 %val_assign_3 to i33
  %tmp = add i33 %tmp_10_cast, %cumsum_V_cast
  %tmp10_cast = zext i33 %tmp to i34
  %tmp9 = add i33 %tmp_13_cast, %tmp_7_cast
  %tmp11_cast = zext i33 %tmp9 to i34
  %cumsum_V = add i34 %tmp10_cast, %tmp11_cast
  %tmp_i = icmp eq i34 %cumsum_V, 0
  %tmp_1_i1 = zext i34 %cumsum_V to i64
  %tmp_1_i = uitofp i64 %tmp_1_i1 to float
  %tmp_i_8 = call float @_ssdm_op_FRecip.f32(float %tmp_1_i) nounwind
  %tmp_2_i = fmul float %tmp_i_8, 1.048576e+06
  %val_assign_6 = fadd float %tmp_2_i, 5.000000e-01
  %p_Val2_s = bitcast float %val_assign_6 to i32
  %loc_V = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %p_Val2_s, i32 23, i32 30) nounwind
  %loc_V_1 = trunc i32 %p_Val2_s to i23
  %p_Result_s = call i24 @_ssdm_op_BitConcatenate.i24.i1.i23(i1 true, i23 %loc_V_1) nounwind
  %tmp_2_i_i_i = zext i24 %p_Result_s to i110
  %tmp_i_i_i_i_cast = zext i8 %loc_V to i9
  %sh_assign = add i9 -127, %tmp_i_i_i_i_cast
  %isNeg = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %sh_assign, i32 8)
  %tmp_4_i_i_i = sub i8 127, %loc_V
  %tmp_4_i_i_i_cast = sext i8 %tmp_4_i_i_i to i9
  %sh_assign_1 = select i1 %isNeg, i9 %tmp_4_i_i_i_cast, i9 %sh_assign
  %sh_assign_1_cast = sext i9 %sh_assign_1 to i32
  %sh_assign_1_cast_cast = sext i9 %sh_assign_1 to i24
  %tmp_6_i_i_i = zext i32 %sh_assign_1_cast to i110
  %tmp_7_i_i_i = lshr i24 %p_Result_s, %sh_assign_1_cast_cast
  %tmp_9_i_i_i = shl i110 %tmp_2_i_i_i, %tmp_6_i_i_i
  %tmp_17 = call i1 @_ssdm_op_BitSelect.i1.i24.i32(i24 %tmp_7_i_i_i, i32 23)
  %tmp_6 = zext i1 %tmp_17 to i48
  %tmp_8 = call i48 @_ssdm_op_PartSelect.i48.i110.i32.i32(i110 %tmp_9_i_i_i, i32 23, i32 70)
  %tmp_14 = select i1 %isNeg, i48 %tmp_6, i48 %tmp_8
  %rec_V = select i1 %tmp_i, i48 -1, i48 %tmp_14
  %r_V_4 = call i36 @_ssdm_op_BitConcatenate.i36.i16.i20(i16 %intensity_read, i20 0)
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([24 x i8]* @p_str2) nounwind
  br label %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.0

; <label>:0                                       ; preds = %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.0
  %empty = call i32 (...)* @_ssdm_op_SpecRegionEnd([24 x i8]* @p_str2, i32 %tmp_1) nounwind
  %tmp_2 = call i32 (...)* @_ssdm_op_SpecRegionBegin([24 x i8]* @p_str2) nounwind
  br label %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.1

_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.0: ; preds = %_ZlsILi48ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit_ifconv, %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.0
  %j4 = phi i2 [ 0, %_ZlsILi48ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit_ifconv ], [ %j_1, %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.0 ]
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([24 x i8]* @p_str4) nounwind
  %tmp_3 = call i32 (...)* @_ssdm_op_SpecRegionBegin([24 x i8]* @p_str4) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str3) nounwind
  %tmp_s = zext i2 %j4 to i64
  %alphabuf_addr_16 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 %tmp_s
  %node_output_addr = getelementptr [16 x i32]* %node_output, i64 0, i64 %tmp_s
  %node_count_addr = getelementptr [16 x i32]* %node_count, i64 0, i64 %tmp_s
  %alphabuf_load_16 = load i32* %alphabuf_addr_16, align 4
  %tmp_5 = zext i32 %alphabuf_load_16 to i48
  %alpha_norm_V = mul i48 %rec_V, %tmp_5
  %tmp_19 = trunc i48 %alpha_norm_V to i32
  %node_count_load = load i32* %node_count_addr, align 4
  %tmp_7 = add i32 %node_count_load, %tmp_19
  store i32 %tmp_7, i32* %node_count_addr, align 4
  %lhs_V_cast = zext i48 %alpha_norm_V to i52
  %rhs_V_cast = zext i36 %r_V_4 to i52
  %r_V = mul i52 %rhs_V_cast, %lhs_V_cast
  %phitmp = call i32 @_ssdm_op_PartSelect.i32.i52.i32.i32(i52 %r_V, i32 20, i32 51)
  %node_output_load = load i32* %node_output_addr, align 4
  %tmp_9 = add i32 %node_output_load, %phitmp
  store i32 %tmp_9, i32* %node_output_addr, align 4
  %empty_10 = call i32 (...)* @_ssdm_op_SpecRegionEnd([24 x i8]* @p_str4, i32 %tmp_3) nounwind
  %j_1 = add i2 1, %j4
  %exitcond = icmp eq i2 %j4, -1
  br i1 %exitcond, label %0, label %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.0

; <label>:1                                       ; preds = %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.1
  %empty_11 = call i32 (...)* @_ssdm_op_SpecRegionEnd([24 x i8]* @p_str2, i32 %tmp_2) nounwind
  %tmp_4 = call i32 (...)* @_ssdm_op_SpecRegionBegin([24 x i8]* @p_str2) nounwind
  br label %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.2

_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.1: ; preds = %0, %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.1
  %j_3 = phi i2 [ 0, %0 ], [ %j_1_1, %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.1 ]
  %empty_12 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([24 x i8]* @p_str4) nounwind
  %tmp_10 = call i32 (...)* @_ssdm_op_SpecRegionBegin([24 x i8]* @p_str4) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str3) nounwind
  %tmp_15 = call i3 @_ssdm_op_BitConcatenate.i3.i1.i2(i1 true, i2 %j_3)
  %tmp_17_cast = zext i3 %tmp_15 to i64
  %alphabuf_addr_17 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 %tmp_17_cast
  %node_output_addr_1 = getelementptr [16 x i32]* %node_output, i64 0, i64 %tmp_17_cast
  %node_count_addr_1 = getelementptr [16 x i32]* %node_count, i64 0, i64 %tmp_17_cast
  %alphabuf_load_17 = load i32* %alphabuf_addr_17, align 4
  %tmp_31_1 = zext i32 %alphabuf_load_17 to i48
  %alpha_norm_V_1 = mul i48 %rec_V, %tmp_31_1
  %tmp_20 = trunc i48 %alpha_norm_V_1 to i32
  %node_count_load_1 = load i32* %node_count_addr_1, align 4
  %tmp_33_1 = add i32 %node_count_load_1, %tmp_20
  store i32 %tmp_33_1, i32* %node_count_addr_1, align 4
  %lhs_V_1_cast = zext i48 %alpha_norm_V_1 to i52
  %r_V_1 = mul i52 %rhs_V_cast, %lhs_V_1_cast
  %phitmp_1 = call i32 @_ssdm_op_PartSelect.i32.i52.i32.i32(i52 %r_V_1, i32 20, i32 51)
  %node_output_load_1 = load i32* %node_output_addr_1, align 4
  %tmp_35_1 = add i32 %node_output_load_1, %phitmp_1
  store i32 %tmp_35_1, i32* %node_output_addr_1, align 4
  %empty_13 = call i32 (...)* @_ssdm_op_SpecRegionEnd([24 x i8]* @p_str4, i32 %tmp_10) nounwind
  %j_1_1 = add i2 1, %j_3
  %exitcond_1 = icmp eq i2 %j_3, -1
  br i1 %exitcond_1, label %1, label %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.1

; <label>:2                                       ; preds = %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.2
  %empty_14 = call i32 (...)* @_ssdm_op_SpecRegionEnd([24 x i8]* @p_str2, i32 %tmp_4) nounwind
  %tmp_11 = call i32 (...)* @_ssdm_op_SpecRegionBegin([24 x i8]* @p_str2) nounwind
  br label %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.3

_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.2: ; preds = %1, %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.2
  %j_s = phi i2 [ 0, %1 ], [ %j_1_2, %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.2 ]
  %j_22_cast = zext i2 %j_s to i3
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([24 x i8]* @p_str4) nounwind
  %tmp_12 = call i32 (...)* @_ssdm_op_SpecRegionBegin([24 x i8]* @p_str4) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str3) nounwind
  %tmp_16 = call i64 @_ssdm_op_BitConcatenate.i64.i61.i3(i61 1, i3 %j_22_cast)
  %alphabuf_addr_18 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 %tmp_16
  %node_output_addr_2 = getelementptr [16 x i32]* %node_output, i64 0, i64 %tmp_16
  %node_count_addr_2 = getelementptr [16 x i32]* %node_count, i64 0, i64 %tmp_16
  %alphabuf_load_18 = load i32* %alphabuf_addr_18, align 4
  %tmp_31_2 = zext i32 %alphabuf_load_18 to i48
  %alpha_norm_V_2 = mul i48 %rec_V, %tmp_31_2
  %tmp_21 = trunc i48 %alpha_norm_V_2 to i32
  %node_count_load_2 = load i32* %node_count_addr_2, align 4
  %tmp_33_2 = add i32 %node_count_load_2, %tmp_21
  store i32 %tmp_33_2, i32* %node_count_addr_2, align 4
  %lhs_V_2_cast = zext i48 %alpha_norm_V_2 to i52
  %r_V_s = mul i52 %rhs_V_cast, %lhs_V_2_cast
  %phitmp_2 = call i32 @_ssdm_op_PartSelect.i32.i52.i32.i32(i52 %r_V_s, i32 20, i32 51)
  %node_output_load_2 = load i32* %node_output_addr_2, align 4
  %tmp_35_2 = add i32 %node_output_load_2, %phitmp_2
  store i32 %tmp_35_2, i32* %node_output_addr_2, align 4
  %empty_16 = call i32 (...)* @_ssdm_op_SpecRegionEnd([24 x i8]* @p_str4, i32 %tmp_12) nounwind
  %j_1_2 = add i2 1, %j_s
  %exitcond_2 = icmp eq i2 %j_s, -1
  br i1 %exitcond_2, label %2, label %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.2

; <label>:3                                       ; preds = %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.3
  %empty_17 = call i32 (...)* @_ssdm_op_SpecRegionEnd([24 x i8]* @p_str2, i32 %tmp_11) nounwind
  ret i32 0

_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.3: ; preds = %2, %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.3
  %j_2 = phi i2 [ 0, %2 ], [ %j_1_3, %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.3 ]
  %empty_18 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([24 x i8]* @p_str4) nounwind
  %tmp_13 = call i32 (...)* @_ssdm_op_SpecRegionBegin([24 x i8]* @p_str4) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str3) nounwind
  %tmp_18 = call i3 @_ssdm_op_BitConcatenate.i3.i1.i2(i1 true, i2 %j_2)
  %tmp_19_cast5 = sext i3 %tmp_18 to i4
  %tmp_19_cast = zext i4 %tmp_19_cast5 to i64
  %alphabuf_addr_19 = getelementptr [16 x i32]* %alphabuf, i64 0, i64 %tmp_19_cast
  %node_output_addr_3 = getelementptr [16 x i32]* %node_output, i64 0, i64 %tmp_19_cast
  %node_count_addr_3 = getelementptr [16 x i32]* %node_count, i64 0, i64 %tmp_19_cast
  %alphabuf_load_19 = load i32* %alphabuf_addr_19, align 4
  %tmp_31_3 = zext i32 %alphabuf_load_19 to i48
  %alpha_norm_V_3 = mul i48 %tmp_31_3, %rec_V
  %tmp_22 = trunc i48 %alpha_norm_V_3 to i32
  %node_count_load_3 = load i32* %node_count_addr_3, align 4
  %tmp_33_3 = add i32 %tmp_22, %node_count_load_3
  store i32 %tmp_33_3, i32* %node_count_addr_3, align 4
  %lhs_V_3_cast = zext i48 %alpha_norm_V_3 to i52
  %r_V_3 = mul i52 %lhs_V_3_cast, %rhs_V_cast
  %phitmp_3 = call i32 @_ssdm_op_PartSelect.i32.i52.i32.i32(i52 %r_V_3, i32 20, i32 51)
  %node_output_load_3 = load i32* %node_output_addr_3, align 4
  %tmp_35_3 = add i32 %phitmp_3, %node_output_load_3
  store i32 %tmp_35_3, i32* %node_output_addr_3, align 4
  %empty_19 = call i32 (...)* @_ssdm_op_SpecRegionEnd([24 x i8]* @p_str4, i32 %tmp_13) nounwind
  %j_1_3 = add i2 1, %j_2
  %exitcond_3 = icmp eq i2 %j_2, -1
  br i1 %exitcond_3, label %3, label %_ZrsILi96ELb0EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit.3
}

define weak void @_ssdm_op_SpecTopModule(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i16 @_ssdm_op_Read.ap_auto.i16(i16) {
entry:
  ret i16 %0
}

define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_20 = trunc i32 %empty to i8
  ret i8 %empty_20
}

define weak i48 @_ssdm_op_PartSelect.i48.i110.i32.i32(i110, i32, i32) nounwind readnone {
entry:
  %empty = call i110 @llvm.part.select.i110(i110 %0, i32 %1, i32 %2)
  %empty_21 = trunc i110 %empty to i48
  ret i48 %empty_21
}

define weak i32 @_ssdm_op_PartSelect.i32.i52.i32.i32(i52, i32, i32) nounwind readnone {
entry:
  %empty = call i52 @llvm.part.select.i52(i52 %0, i32 %1, i32 %2)
  %empty_22 = trunc i52 %empty to i32
  ret i32 %empty_22
}

declare i32 @_ssdm_op_PartSelect.i32.i48.i32.i32(i48, i32, i32) nounwind readnone

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak float @_ssdm_op_FRecip.f32(float) nounwind readnone {
entry:
  %empty = fdiv float 1.000000e+00, %0
  ret float %empty
}

define weak i1 @_ssdm_op_BitSelect.i1.i9.i32(i9, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i9
  %empty_23 = shl i9 1, %empty
  %empty_24 = and i9 %0, %empty_23
  %empty_25 = icmp ne i9 %empty_24, 0
  ret i1 %empty_25
}

define weak i1 @_ssdm_op_BitSelect.i1.i24.i32(i24, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i24
  %empty_26 = shl i24 1, %empty
  %empty_27 = and i24 %0, %empty_26
  %empty_28 = icmp ne i24 %empty_27, 0
  ret i1 %empty_28
}

define weak i64 @_ssdm_op_BitConcatenate.i64.i61.i3(i61, i3) nounwind readnone {
entry:
  %empty = zext i61 %0 to i64
  %empty_29 = zext i3 %1 to i64
  %empty_30 = shl i64 %empty, 3
  %empty_31 = or i64 %empty_30, %empty_29
  ret i64 %empty_31
}

define weak i36 @_ssdm_op_BitConcatenate.i36.i16.i20(i16, i20) nounwind readnone {
entry:
  %empty = zext i16 %0 to i36
  %empty_32 = zext i20 %1 to i36
  %empty_33 = shl i36 %empty, 20
  %empty_34 = or i36 %empty_33, %empty_32
  ret i36 %empty_34
}

define weak i3 @_ssdm_op_BitConcatenate.i3.i1.i2(i1, i2) nounwind readnone {
entry:
  %empty = zext i1 %0 to i3
  %empty_35 = zext i2 %1 to i3
  %empty_36 = shl i3 %empty, 2
  %empty_37 = or i3 %empty_36, %empty_35
  ret i3 %empty_37
}

define weak i24 @_ssdm_op_BitConcatenate.i24.i1.i23(i1, i23) nounwind readnone {
entry:
  %empty = zext i1 %0 to i24
  %empty_38 = zext i23 %1 to i24
  %empty_39 = shl i24 %empty, 23
  %empty_40 = or i24 %empty_39, %empty_38
  ret i24 %empty_40
}

declare void @_ssdm_SpecLoopRewind(...) nounwind

declare void @_GLOBAL__I_a38() nounwind

declare void @_GLOBAL__I_a() nounwind

!hls.encrypted.func = !{}
!llvm.map.gv = !{!0}

!0 = metadata !{metadata !1, [2 x i32]* @llvm_global_ctors_0}
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0, i32 31, metadata !3}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !"llvm.global_ctors.0", metadata !5, metadata !"", i32 0, i32 31}
!5 = metadata !{metadata !6}
!6 = metadata !{i32 0, i32 1, i32 1}
!7 = metadata !{metadata !8}
!8 = metadata !{i32 0, i32 31, metadata !9}
!9 = metadata !{metadata !10}
!10 = metadata !{metadata !"alphabuf", metadata !11, metadata !"unsigned int", i32 0, i32 31}
!11 = metadata !{metadata !12, metadata !12}
!12 = metadata !{i32 0, i32 3, i32 1}
!13 = metadata !{metadata !14}
!14 = metadata !{i32 0, i32 15, metadata !15}
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !"intensity", metadata !17, metadata !"unsigned short", i32 0, i32 15}
!17 = metadata !{metadata !18}
!18 = metadata !{i32 0, i32 0, i32 0}
!19 = metadata !{metadata !20}
!20 = metadata !{i32 0, i32 31, metadata !21}
!21 = metadata !{metadata !22}
!22 = metadata !{metadata !"node_output", metadata !11, metadata !"unsigned int", i32 0, i32 31}
!23 = metadata !{metadata !24}
!24 = metadata !{i32 0, i32 31, metadata !25}
!25 = metadata !{metadata !26}
!26 = metadata !{metadata !"node_count", metadata !11, metadata !"unsigned int", i32 0, i32 31}
!27 = metadata !{metadata !28}
!28 = metadata !{i32 0, i32 31, metadata !29}
!29 = metadata !{metadata !30}
!30 = metadata !{metadata !"return", metadata !31, metadata !"int", i32 0, i32 31}
!31 = metadata !{metadata !32}
!32 = metadata !{i32 0, i32 1, i32 0}
