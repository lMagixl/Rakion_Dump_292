
void __thiscall FUN_360e1ad0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x10);
  iVar3 = *(int *)((int)this + 0x18) + 1;
  *(int *)((int)this + 0x18) = iVar3;
  iVar2 = FUN_360df180(puVar1);
  if (iVar2 < iVar3) {
    iVar2 = FUN_360df180(puVar1);
    FUN_360e1210(puVar1,iVar2 + *(int *)((int)this + 0x1c));
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x14) + -0x18 + *(int *)((int)this + 0x18) * 0x18);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  puVar1[4] = param_1[4];
  puVar1[5] = param_1[5];
  return;
}

