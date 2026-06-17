
undefined4 * __cdecl
FUN_361bebe0(undefined4 *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34 [5];
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3621c9bf;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_361bc790(&local_48,param_4,param_5,param_6,0x3f800000);
  local_4._0_1_ = 2;
  puVar1 = FUN_361bf5f0(local_20,param_2,&local_48);
  local_4._0_1_ = 3;
  FUN_361bcab0(&local_48,local_34,(int)puVar1);
  FUN_361bc7c0(local_34);
  local_4._0_1_ = 2;
  FUN_361bc7c0(local_20);
  FUN_361bc180(&local_58,local_44,local_40,local_3c);
  param_1[1] = local_54;
  param_1[2] = local_50;
  param_1[3] = local_4c;
  param_1[1] = local_54;
  param_1[2] = local_50;
  param_1[3] = local_4c;
  *param_1 = &PTR_FUN_3623dc04;
  FUN_361bc1a0(&local_58);
  local_4._0_1_ = 1;
  FUN_361bc7c0(&local_48);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bc1a0(&param_3);
  ExceptionList = local_c;
  return param_1;
}

