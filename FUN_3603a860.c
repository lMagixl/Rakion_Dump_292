
undefined4 __thiscall FUN_3603a860(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != -1) && (param_1[1] != -1)) {
    return *(undefined4 *)(*(int *)((int)this + 0x18) + (param_1[1] + iVar1 * 4 + iVar1) * 4);
  }
  return 0xffffffff;
}

