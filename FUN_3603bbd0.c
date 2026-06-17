
undefined4 * __fastcall FUN_3603bbd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_36210696;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 2;
  uStack_3 = 0;
  *param_1 = 0x22;
  puVar1 = (undefined4 *)thunk_FUN_361bf99c(0x2c0);
  local_4 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x23;
    _eh_vector_constructor_iterator_
              (puVar2,0x14,0x23,FUN_3603c620,(_func_void_void_ptr *)&LAB_3603c3c0);
  }
  param_1[1] = puVar2;
  local_4 = 2;
  param_1[2] = 0x12;
  puVar1 = (undefined4 *)thunk_FUN_361bf99c(0x2fc);
  local_4 = 4;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x13;
    _eh_vector_constructor_iterator_
              (puVar2,0x28,0x13,FUN_3603c6e0,(_func_void_void_ptr *)&LAB_3603c3d0);
  }
  _local_4 = CONCAT31(uStack_3,2);
  param_1[3] = puVar2;
  FUN_3603b930(param_1,0,0x65,s__c00DF00tris___0f_36226a60,0x3eaaa64c);
  FUN_3603b930(param_1,1,0x65,s_tpas___0f_36226a74,0x3eaaa64c);
  FUN_3603b930(param_1,2,0x65,s_secs___0f_36226a80,0x3f800000);
  FUN_3603b930(param_1,3,0x65,s_plys___0f__36226a8c,0x3f800000);
  FUN_3603b930(param_1,4,0x65,&DAT_36226a98,0x3f800000);
  FUN_3603b930(param_1,5,0x65,s_pled___0f_36226aa0,0x3f800000);
  FUN_3603b930(param_1,6,0x65,s_edtr___0f_36226aac,0x3f800000);
  FUN_3603b930(param_1,7,0x65,s__cDFDFAF_snds___0f_36226ab8,0x3f800000);
  FUN_3603b930(param_1,8,0x65,s____0f_36226acc,0x3f800000);
  FUN_3603b930(param_1,9,0x65,s__cDFDF00_csh__3_0f__36226ad4,0x3f800000);
  FUN_3603b930(param_1,10,0x65,s__2_0f_36226aec,0x3f800000);
  FUN_3603b930(param_1,0xb,0x65,s____0fK_36226af4,0x3a800000);
  FUN_3603b930(param_1,0xc,0x65,s_dyn__3_0f_36226afc,0x3f800000);
  FUN_3603b930(param_1,0xd,0x65,s____0fK_36226b08,0x3a800000);
  FUN_3603b930(param_1,0xe,0x65,s__cEFEF00_shd__3_0f_36226b10,0x3f800000);
  FUN_3603b930(param_1,0xf,0x65,s____0fK_36226b24,0x3a800000);
  FUN_3603b930(param_1,0x10,0x65,s_tex__3_0f_36226b2c,0x3f800000);
  FUN_3603b930(param_1,0x11,0x65,s____0fK_36226b38,0x3a800000);
  FUN_3603b930(param_1,0x12,0x65,s_upl__3_0f_36226b40,0x3f800000);
  FUN_3603b930(param_1,0x13,0x65,s____0fK_36226b4c,0x3a800000);
  FUN_3603b930(param_1,0x14,0x65,s__c00EFEF_partic___0f_36226b54,0x3f800000);
  FUN_3603b930(param_1,0x15,0x65,s__c00DFDF_oldmdl___0f_36226b6c,0x3f800000);
  FUN_3603b930(param_1,0x16,0x65,s____0f_36226b84,0x3f800000);
  FUN_3603b930(param_1,0x17,0x65,s_skamdl___0f_36226b8c,0x3f800000);
  FUN_3603b930(param_1,0x18,0x65,s____0f_36226b9c,0x3f800000);
  FUN_3603b930(param_1,0x19,0x65,s____0f__36226ba4,0x3f800000);
  FUN_3603b930(param_1,0x1a,0x65,s_skelet___0f_36226bac,0x3f800000);
  FUN_3603b930(param_1,0x1b,0x65,s____0f__36226bbc,0x3f800000);
  FUN_3603b930(param_1,0x1c,0x65,s_shadws___0f_36226bc4,0x3f800000);
  FUN_3603b930(param_1,0x1d,0x65,s_mdltri___0f_36226bd4,0x3f800000);
  FUN_3603b930(param_1,0x1e,0x65,s____0f_36226be4,0x3f800000);
  FUN_3603b930(param_1,0x1f,0x65,s_skatri___0f_36226bec,0x3f800000);
  FUN_3603b930(param_1,0x20,0x65,s____0f_36226bfc,0x3f800000);
  FUN_3603b930(param_1,0x21,0x65,s__cFFFFFF_gfxtri___0f_36226c04,0x3eaaa64c);
  FUN_3603b980(param_1,0,0x65,s__C_wldtra__2_0f_ms_36226c1c,0x447a0000);
  FUN_3603b980(param_1,1,0x65,s_wldvis__2_0f_ms_36226c30,0x447a0000);
  FUN_3603b980(param_1,2,0x65,s_wldren__2_0f_ms_36226c44,0x447a0000);
  FUN_3603b980(param_1,3,0x65,s__c00FFFF_mdlset__2_0f_ms_36226c58,0x447a0000);
  FUN_3603b980(param_1,4,0x65,s_mdlren__2_0f_ms_36226c74,0x447a0000);
  FUN_3603b980(param_1,5,0x65,s_partic__2_0f_ms_36226c88,0x447a0000);
  FUN_3603b980(param_1,6,0x65,s_flares__2_0f_ms_36226c9c,0x447a0000);
  FUN_3603b980(param_1,7,0x65,s__cFFFFCF_sndupd__2_0f_ms_36226cb0,0x447a0000);
  FUN_3603b980(param_1,8,0x65,s_sndmix__2_0f_ms_36226ccc,0x447a0000);
  FUN_3603b980(param_1,9,0x65,s_timer___2_0f_ms_36226ce0,0x447a0000);
  FUN_3603b980(param_1,10,0x65,s_mainlp__2_0f_ms_36226cf4,0x447a0000);
  FUN_3603b980(param_1,0xb,0x65,s_raycst__2_0f_ms_36226d08,0x447a0000);
  FUN_3603b980(param_1,0xc,0x65,s__cFFFF00_shdupd__2_0f_ms_36226d1c,0x447a0000);
  FUN_3603b980(param_1,0xd,0x65,s_efftex__2_0f_ms_36226d38,0x447a0000);
  FUN_3603b980(param_1,0xe,0x65,s_bindtx__2_0f_ms_36226d4c,0x447a0000);
  FUN_3603b980(param_1,0xf,0x65,s__cFFFFFF_gfxapi__2_0f_ms_36226d60,0x447a0000);
  FUN_3603b980(param_1,0x10,0x65,s_swpbuf__2_0f_ms_C_36226d7c,0x447a0000);
  FUN_3603b980(param_1,0x11,0x65,s_UserInterface__2_0f_ms_C_36226d90,0x447a0000);
  ExceptionList = local_c;
  return param_1;
}

