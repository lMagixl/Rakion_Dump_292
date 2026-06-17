
void __cdecl FUN_361bd190(void *param_1)

{
  undefined4 local_4c [4];
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3621c538;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_361bc230(local_3c,(int)&stack0x00000008,(int)&stack0x00000018);
  local_4._0_1_ = 2;
  FUN_361bc620(local_2c);
  local_4._0_1_ = 3;
  FUN_361bc430(local_4c,(float *)&stack0x00000028);
  local_4._0_1_ = 5;
  FUN_361bc1a0(local_2c);
  FUN_361bc2b0(param_1,local_1c,(int)local_4c);
  FUN_361bc1a0(local_1c);
  local_4._0_1_ = 2;
  FUN_361bc1a0(local_4c);
  local_4._0_1_ = 1;
  FUN_361bc1a0(local_3c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bc1a0((undefined4 *)&stack0x00000008);
  local_4 = 0xffffffff;
  FUN_361bc1a0((undefined4 *)&stack0x00000018);
  ExceptionList = local_c;
  return;
}

