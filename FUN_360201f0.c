
uint __thiscall FUN_360201f0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(*(int *)((int)this + 0x14) + 0x14) != 0) {
    iVar2 = *(int *)((int)this + 8) * 0x2c + *(int *)(*(int *)((int)this + 0x14) + 0x18);
    if ((*(byte *)((int)this + 0xc) & 2) == 0) {
      if (-1 < (int)param_1) {
        iVar2 = *(int *)(iVar2 + 0x24);
        if (iVar2 <= (int)param_1) {
          param_1 = iVar2 - 1;
        }
        return param_1;
      }
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0x24);
      if (0 < (int)uVar1) {
        return param_1 % uVar1;
      }
    }
  }
  return 0;
}

