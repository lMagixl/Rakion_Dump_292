
undefined4 __thiscall FUN_36020620(void *this,float param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) * 0x2c + *(int *)(*(int *)((int)this + 0x14) + 0x18);
  if ((*(byte *)((int)this + 0xc) & 1) != 0) {
    uVar1 = FUN_360201f0(this,(int)ROUND(*(float *)((int)this + 4) / *(float *)(iVar2 + 0x20)));
    uVar1 = FUN_360201f0(this,uVar1 + *(int *)(iVar2 + 0x24));
    return *(undefined4 *)(*(int *)(iVar2 + 0x28) + uVar1 * 4);
  }
  uVar1 = FUN_360201f0(this,(int)ROUND((param_1 - *(float *)((int)this + 4)) /
                                       *(float *)(iVar2 + 0x20)));
  return *(undefined4 *)(*(int *)(iVar2 + 0x28) + uVar1 * 4);
}

