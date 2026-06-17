
undefined4 * __cdecl FUN_361bd300(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3621c5b7;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_361bc230(local_3c,(int)&stack0x00000008,(int)&stack0x00000018);
  local_4._0_1_ = 3;
  FUN_361bc690(local_3c,local_1c);
  local_4._0_1_ = 4;
  iVar1 = FUN_361bc430(local_2c,(float *)&stack0x00000028);
  local_4._0_1_ = 5;
  FUN_361bc1b0(&local_4c,(int)&stack0x00000008,iVar1);
  local_4._0_1_ = 8;
  FUN_361bc1a0(local_2c);
  local_4._0_1_ = 7;
  FUN_361bc1a0(local_1c);
  param_1[1] = local_48;
  param_1[2] = local_44;
  param_1[3] = local_40;
  param_1[1] = local_48;
  param_1[2] = local_44;
  param_1[3] = local_40;
  *param_1 = &PTR_FUN_3623dc04;
  local_4._0_1_ = 3;
  FUN_361bc1a0(&local_4c);
  local_4._0_1_ = 2;
  FUN_361bc1a0(local_3c);
  local_4._0_1_ = 1;
  FUN_361bc1a0((undefined4 *)&stack0x00000008);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bc1a0((undefined4 *)&stack0x00000018);
  ExceptionList = local_c;
  return param_1;
}

