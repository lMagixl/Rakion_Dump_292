
void __cdecl FUN_361bdb80(void *param_1)

{
  int iVar1;
  float in_stack_00000048;
  float local_cc [16];
  undefined4 local_8c [16];
  float local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3621c73b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_361bf450(local_cc);
  local_4._0_1_ = 1;
  FUN_361bd470(local_cc,in_stack_00000048);
  iVar1 = FUN_361bf560(local_4c,(int)local_cc,(float *)&stack0x00000008);
  local_4._0_1_ = 2;
  FUN_361bf830(param_1,local_8c,iVar1);
  FUN_361bf470();
  local_4._0_1_ = 1;
  FUN_361bf470();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bf470();
  local_4 = 0xffffffff;
  FUN_361bf470();
  ExceptionList = local_c;
  return;
}

