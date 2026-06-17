
void FUN_361bce80(void)

{
  int iVar1;
  void *in_stack_00000018;
  void *in_stack_0000001c;
  void *in_stack_00000020;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3621c490;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_361bc4e0(local_1c,(float *)&stack0x00000004);
  local_4._0_1_ = 1;
  FUN_361bc580(in_stack_00000018,local_2c,iVar1);
  FUN_361bc1a0(local_2c);
  local_4._0_1_ = 0;
  FUN_361bc1a0(local_1c);
  iVar1 = FUN_361bc430(local_2c,(float *)&stack0x00000024);
  local_4._0_1_ = 2;
  FUN_361bc2b0(in_stack_0000001c,local_1c,iVar1);
  FUN_361bc1a0(local_1c);
  local_4._0_1_ = 0;
  FUN_361bc1a0(local_2c);
  iVar1 = FUN_361bc430(local_2c,(float *)&stack0x00000024);
  local_4._0_1_ = 3;
  FUN_361bc2b0(in_stack_00000020,local_1c,iVar1);
  FUN_361bc1a0(local_1c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bc1a0(local_2c);
  local_4 = 0xffffffff;
  FUN_361bc1a0((undefined4 *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}

