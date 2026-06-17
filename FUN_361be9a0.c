
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_361be9a0(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float in_stack_00000014;
  float local_8c;
  float local_88;
  float local_84 [3];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c [4];
  undefined4 local_5c [4];
  undefined4 local_4c [4];
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c977;
  local_c = ExceptionList;
  local_84[1] = 0.0;
  fVar1 = _DAT_36223384 - in_stack_00000014;
  local_84[0] = fVar1 * fVar1;
  local_88 = fVar1 * in_stack_00000014 + fVar1 * in_stack_00000014;
  local_8c = in_stack_00000014 * in_stack_00000014;
  ExceptionList = &local_c;
  FUN_361bc160(local_84 + 2);
  local_4 = 1;
  iVar2 = FUN_361bc430(local_1c,&local_8c);
  local_4._0_1_ = 2;
  iVar3 = FUN_361bc430(local_2c,&local_88);
  local_4._0_1_ = 3;
  iVar4 = FUN_361bc430(local_3c,local_84);
  local_4._0_1_ = 4;
  iVar3 = FUN_361bc1b0(local_4c,iVar4,iVar3);
  local_4._0_1_ = 5;
  iVar2 = FUN_361bc1b0(local_5c,iVar3,iVar2);
  local_4._0_1_ = 6;
  FUN_361bc580(local_84 + 2,local_6c,iVar2);
  FUN_361bc1a0(local_6c);
  local_4._0_1_ = 5;
  FUN_361bc1a0(local_5c);
  local_4._0_1_ = 4;
  FUN_361bc1a0(local_4c);
  local_4._0_1_ = 3;
  FUN_361bc1a0(local_3c);
  local_4._0_1_ = 2;
  FUN_361bc1a0(local_2c);
  local_4._0_1_ = 1;
  FUN_361bc1a0(local_1c);
  param_1[1] = local_78;
  param_1[2] = local_74;
  param_1[3] = local_70;
  param_1[1] = local_78;
  param_1[2] = local_74;
  param_1[3] = local_70;
  *param_1 = &PTR_FUN_3623dc04;
  local_84[1] = 1.4013e-45;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bc1a0(local_84 + 2);
  ExceptionList = local_c;
  return param_1;
}

