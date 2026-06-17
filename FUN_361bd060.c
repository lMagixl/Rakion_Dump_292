
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361bd060(void *param_1)

{
  float10 fVar1;
  float in_stack_0000002c;
  float local_60;
  undefined4 local_5c [4];
  undefined4 local_4c [4];
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3621c500;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_361bc230(local_5c,(int)&stack0x00000008,(int)&stack0x00000018);
  local_4._0_1_ = 2;
  fVar1 = FUN_361bc720((int)local_5c);
  if (fVar1 <= (float10)_DAT_3623281c) {
    local_60 = 0.0;
  }
  else {
    local_60 = (float)((fVar1 - (float10)in_stack_0000002c) / fVar1);
  }
  FUN_361bc620(local_2c);
  local_4._0_1_ = 3;
  FUN_361bc430(local_3c,&local_60);
  local_4._0_1_ = 4;
  FUN_361bc430(local_4c,(float *)&stack0x00000028);
  local_4._0_1_ = 7;
  FUN_361bc1a0(local_3c);
  local_4._0_1_ = 6;
  FUN_361bc1a0(local_2c);
  FUN_361bc2b0(param_1,local_1c,(int)local_4c);
  FUN_361bc1a0(local_1c);
  local_4._0_1_ = 2;
  FUN_361bc1a0(local_4c);
  local_4._0_1_ = 1;
  FUN_361bc1a0(local_5c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bc1a0((undefined4 *)&stack0x00000008);
  local_4 = 0xffffffff;
  FUN_361bc1a0((undefined4 *)&stack0x00000018);
  ExceptionList = local_c;
  return;
}

