
void __thiscall FUN_360ff8d0(void *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *this_00;
  int iVar4;
  
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  iVar1 = FUN_360ff560((int)this);
  iVar4 = 0;
  if (0 < iVar1) {
    while (pvVar2 = (void *)FUN_360ff550(this,iVar4), pvVar2 != param_1) {
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    FUN_360fe860((int)param_1);
    if (iVar4 < *(int *)((int)this + 0x34)) {
      this_00 = (undefined4 *)((int)this + 0x10);
      iVar3 = *(int *)((int)this + 0x18) + 1;
      *(int *)((int)this + 0x18) = iVar3;
      iVar1 = FUN_3600bef0(this_00);
      if (iVar1 < iVar3) {
        iVar1 = FUN_3600bef0(this_00);
        FUN_36026aa0(this_00,iVar1 + *(int *)((int)this + 0x1c));
      }
      *(int *)(*(int *)((int)this + 0x14) + -4 + *(int *)((int)this + 0x18) * 4) = iVar4;
      return;
    }
    FUN_360ff7e0(this,(int)param_1);
    if (param_1 != (void *)0x0) {
      FUN_360ff670((int)param_1);
      FUN_360fe8c0(param_1);
    }
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
  }
  return;
}

