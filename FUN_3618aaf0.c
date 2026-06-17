
undefined1 * __thiscall FUN_3618aaf0(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b00b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = *param_1;
  uVar1 = FUN_36189b60();
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  param_1 = *(undefined1 **)((int)this + 8);
  local_4 = 0;
  FUN_3618a810((void *)((int)this + 0x10),9,&param_1);
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x24) = 1;
  ExceptionList = local_c;
  return this;
}

