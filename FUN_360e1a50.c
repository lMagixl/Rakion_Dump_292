
undefined4 * __thiscall FUN_360e1a50(void *this,undefined4 *param_1)

{
  undefined4 in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362154f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  local_4 = 0;
  FUN_360e16f0((void *)((int)this + 0x10),&stack0x00000008);
  *(undefined4 *)((int)this + 0x24) = in_stack_0000001c;
  local_4 = 0xffffffff;
  thunk_FUN_360e0d40((undefined4 *)&stack0x00000008);
  ExceptionList = local_c;
  return this;
}

