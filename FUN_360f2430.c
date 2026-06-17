
void __fastcall FUN_360f2430(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_362164e4;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_360f1ce0(param_1);
  local_4._0_1_ = 3;
  FUN_360ff140(param_1 + 0x30);
  local_4._0_1_ = 2;
  FUN_360ff140(param_1 + 0x22);
  local_4._0_1_ = 1;
  FUN_360ff140(param_1 + 0x14);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_360ff140(param_1 + 6);
  local_4 = 0xffffffff;
  StringFree((char *)param_1[1]);
  ExceptionList = local_c;
  return;
}

