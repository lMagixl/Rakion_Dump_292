
void __thiscall FUN_3609d960(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x10);
    param_1[1] = *(undefined4 *)(iVar1 + 0x14);
    param_1[2] = *(undefined4 *)(iVar1 + 0x18);
    param_1[3] = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(iVar1 + 0x20);
    return;
  }
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x10);
    param_1[1] = *(undefined4 *)(iVar1 + 0x14);
    param_1[2] = *(undefined4 *)(iVar1 + 0x18);
    param_1[3] = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(iVar1 + 0x20);
  }
  return;
}

