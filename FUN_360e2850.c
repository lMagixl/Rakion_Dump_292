
void __thiscall FUN_360e2850(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)((int)this + 8);
  iVar3 = *(int *)((int)this + 0x10) + 1;
  *(int *)((int)this + 0x10) = iVar3;
  iVar2 = FUN_360df1f0(puVar1);
  if (iVar2 < iVar3) {
    iVar2 = FUN_360df1f0(puVar1);
    FUN_360e12f0(puVar1,iVar2 + *(int *)((int)this + 0x14));
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + -0xc + *(int *)((int)this + 0x10) * 0xc);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  return;
}

