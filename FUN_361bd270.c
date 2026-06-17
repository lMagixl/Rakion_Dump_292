
void __cdecl FUN_361bd270(void *param_1)

{
  undefined1 *puStack00000018;
  undefined4 uStack_34;
  undefined1 auStack_24 [16];
  undefined4 uStack_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3621c560;
  local_c = ExceptionList;
  local_4 = 0;
  puStack00000018 = auStack_24;
  uStack_34 = 0x361bd2a7;
  ExceptionList = &local_c;
  FUN_361bc180(auStack_24,0,0,0);
  local_10 = (undefined1 *)&uStack_34;
  local_4._0_1_ = 1;
  FUN_3618db50(&uStack_34,(int)&stack0x00000008);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bd190(param_1);
  local_4 = 0xffffffff;
  uStack_14 = 0x361bd2e2;
  FUN_361bc1a0((undefined4 *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}

