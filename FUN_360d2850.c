
int __thiscall FUN_360d2850(void *this,uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 << 0x10 | param_2 & 0xffff;
  iVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  uVar1 = ((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f) ^ (iVar2 >> 6 | iVar2 * 0x40))
          & 0xfff;
  iVar2 = *(int *)(*(int *)((int)this + 4) + uVar1 * 4);
  if (-1 < iVar2) {
    do {
      if (*(uint *)(*(int *)((int)this + 0xc) + iVar2 * 0xc) == uVar3) {
        if (-1 < iVar2) {
          return iVar2;
        }
        break;
      }
      iVar2 = *(int *)(*(int *)((int)this + 0xc) + iVar2 * 0xc + 4);
    } while (-1 < iVar2);
  }
  if (param_3 != 0) {
    iVar2 = FUN_360d2750(this,uVar1,uVar3);
    return iVar2;
  }
  return -1;
}

