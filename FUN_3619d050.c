
void __thiscall FUN_3619d050(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x1e) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x1e))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_3619cac0(puVar2,1,param_1);
    *(int *)((int)this + 8) = (int)puVar2 + 0x1e;
    return;
  }
  FUN_3619cf80(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}

