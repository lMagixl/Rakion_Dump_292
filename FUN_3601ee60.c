
void __thiscall FUN_3601ee60(void *this,_String_base *param_1,int param_2)

{
  _String_base *p_Var1;
  uint in_stack_ffffff6c;
  uint in_stack_ffffff70;
  void *pvVar2;
  undefined1 *local_64 [2];
  int local_5c;
  int *local_58;
  _String_base local_54 [36];
  undefined1 local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620eb90;
  local_c = ExceptionList;
  local_5c = param_2;
  ExceptionList = &local_c;
  FUN_36014470(&local_58,param_2);
  *(void **)(local_5c + 4) = this;
  local_4 = 0;
  if (local_58 != (int *)0x0) {
    FUN_36010d50((int)local_58);
  }
  local_64[0] = &stack0xffffff6c;
  local_4._0_1_ = 1;
  pvVar2 = (void *)(in_stack_ffffff70 & 0xffffff00);
  FUN_3601cb20(&stack0xffffff6c,param_1,0,0xffffffff,in_stack_ffffff6c);
  local_4._0_1_ = 0;
  p_Var1 = FUN_3601e0e0(local_30,in_stack_ffffff6c,pvVar2);
  local_4._0_1_ = 2;
  FUN_3601cd00(local_54,p_Var1);
  local_4._0_1_ = 3;
  FUN_3601ebe0((void *)((int)this + 8),local_64,local_54);
  local_4._0_1_ = 2;
  FUN_3601bdd0((int)local_54);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_3601be50((int)local_30);
  local_4 = 0xffffffff;
  if (local_58 != (int *)0x0) {
    FUN_3600cd20(local_58);
  }
  ExceptionList = local_c;
  return;
}

