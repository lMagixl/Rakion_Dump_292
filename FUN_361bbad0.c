
undefined1 * __thiscall FUN_361bbad0(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c3bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = *param_1;
  uVar1 = FUN_361bace0();
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  param_1 = *(undefined1 **)((int)this + 8);
  local_4 = 0;
  FUN_361bb390((void *)((int)this + 0x10),9,&param_1);
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x24) = 1;
  ExceptionList = local_c;
  return this;
}

