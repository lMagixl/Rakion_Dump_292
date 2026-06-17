
undefined2 * __thiscall FUN_3601b340(void *this,undefined2 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e646;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 *)this = *param_1;
  FUN_3601a210((void *)((int)this + 4),(int)(param_1 + 2));
  local_4 = 0;
  FUN_3601a2b0((void *)((int)this + 0x10),(int)(param_1 + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_3601a2b0((void *)((int)this + 0x1c),(int)(param_1 + 0xe));
  ExceptionList = local_c;
  return this;
}

