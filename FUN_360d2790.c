
void __thiscall FUN_360d2790(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(*(int *)((int)this + 0xc) + param_1 * 0xc);
  uVar4 = (int)(short)iVar3 >> 0x1f;
  iVar5 = ((int)(short)iVar3 ^ uVar4) - uVar4;
  piVar2 = (int *)(*(int *)((int)this + 4) +
                  (((iVar3 >> 0x10 ^ iVar3 >> 0x1f) - (iVar3 >> 0x1f) ^ (iVar5 >> 6 | iVar5 * 0x40))
                  & 0xfffU) * 4);
  if (-1 < *piVar2) {
    while (puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + *piVar2 * 0xc), *piVar2 != param_1) {
      piVar2 = puVar1 + 1;
      if ((int)puVar1[1] < 0) {
        return;
      }
    }
    *piVar2 = puVar1[1];
    puVar1[1] = 0xfffffffe;
    puVar1[2] = 0xffffffff;
    *puVar1 = 0x12345678;
    puVar1 = (undefined4 *)((int)this + 0x10);
    iVar5 = *(int *)((int)this + 0x18) + 1;
    *(int *)((int)this + 0x18) = iVar5;
    iVar3 = FUN_3600bef0(puVar1);
    if (iVar3 < iVar5) {
      iVar3 = FUN_3600bef0(puVar1);
      FUN_36026aa0(puVar1,iVar3 + *(int *)((int)this + 0x1c));
    }
    *(int *)(*(int *)((int)this + 0x14) + -4 + *(int *)((int)this + 0x18) * 4) = param_1;
  }
  return;
}

