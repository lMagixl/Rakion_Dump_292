
undefined4 __thiscall FUN_361dbc0b(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 4) == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    uVar1 = 0x80004005;
    *(undefined4 *)((int)this + 0xc) = 0x80004005;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + -1;
    *(int *)((int)this + 4) = iVar2;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(*(int *)this + iVar2 * 4);
    }
    uVar1 = 0;
  }
  return uVar1;
}

