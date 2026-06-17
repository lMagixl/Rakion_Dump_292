
void __thiscall FUN_36107540(void *this,CNetworkMessage *param_1)

{
  int iVar1;
  CNetworkMessage *pCVar2;
  int iVar3;
  undefined4 *this_00;
  int iVar4;
  
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  iVar1 = FUN_36107270((int)this);
  iVar4 = 0;
  if (0 < iVar1) {
    while (pCVar2 = (CNetworkMessage *)FUN_36107260(this,iVar4), pCVar2 != param_1) {
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    FUN_36106400(param_1);
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
    FUN_36107450(this,(int)param_1);
    if (param_1 != (CNetworkMessage *)0x0) {
      FUN_36107200(param_1);
      FUN_36106440(param_1);
    }
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
  }
  return;
}

