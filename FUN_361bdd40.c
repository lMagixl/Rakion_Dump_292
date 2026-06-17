
void __cdecl FUN_361bdd40(void *param_1)

{
  int iVar1;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined1 local_cc [48];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c [16];
  float local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3621c7a3;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_361bf500(local_cc,1);
  local_9c = in_stack_0000004c;
  local_98 = in_stack_00000050;
  local_94 = in_stack_00000054;
  local_4._0_1_ = 2;
  iVar1 = FUN_361bf560(local_4c,(int)local_cc,(float *)&stack0x00000008);
  local_4._0_1_ = 3;
  FUN_361bf830(param_1,local_8c,iVar1);
  FUN_361bf470();
  local_4._0_1_ = 2;
  FUN_361bf470();
  local_4._0_1_ = 1;
  FUN_361bf470();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bf470();
  local_4 = 0xffffffff;
  FUN_361bc1a0((undefined4 *)&stack0x00000048);
  ExceptionList = local_c;
  return;
}

