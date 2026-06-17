
void __cdecl FUN_361bcf80(void *param_1)

{
  float local_50;
  undefined4 local_4c [4];
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c4b8;
  local_c = ExceptionList;
  local_50 = 9.81;
  ExceptionList = &local_c;
  FUN_361bc180(local_2c,0,0xbf800000,0);
  local_4 = 0;
  FUN_361bc430(local_3c,&local_50);
  local_4._0_1_ = 1;
  FUN_361bc430(local_4c,(float *)&stack0x00000008);
  local_4._0_1_ = 4;
  FUN_361bc1a0(local_3c);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_361bc1a0(local_2c);
  FUN_361bc370(local_4c,local_1c,(float *)&stack0x0000000c);
  FUN_361bc1a0(local_1c);
  FUN_361bc2b0(param_1,local_1c,(int)local_4c);
  FUN_361bc1a0(local_1c);
  local_4 = 0xffffffff;
  FUN_361bc1a0(local_4c);
  ExceptionList = local_c;
  return;
}

