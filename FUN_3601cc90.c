
void * __thiscall FUN_3601cc90(void *this,_String_base *param_1)

{
  int iVar1;
  uint unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  FUN_3601cb20(this,param_1,0,0xffffffff,unaff_EDI);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x20);
  local_4 = 0;
  *(int *)((int)this + 0x20) = iVar1;
  if (iVar1 != 0) {
    FUN_36010d50(iVar1);
  }
  ExceptionList = local_c;
  return this;
}

