
undefined4 * __thiscall FUN_3604cf80(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362117c8;
  local_c = ExceptionList;
  puVar2 = this;
  ExceptionList = &local_c;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  FUN_3604cf00((void *)((int)this + 0x20),&stack0x00000008);
  *(undefined4 *)((int)this + 0x34) = in_stack_0000001c;
  local_4 = 0xffffffff;
  thunk_FUN_3604c3a0((undefined4 *)&stack0x00000008);
  ExceptionList = local_c;
  return this;
}

