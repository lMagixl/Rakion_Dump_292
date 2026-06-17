
undefined4 * __thiscall FUN_360bbbf0(void *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  CAttachedModelPosition *pCVar5;
  CAttachedModelPosition *local_8;
  
  FUN_360b2390(this);
  iVar1 = FUN_360b0e60((int)param_1);
  if (iVar1 != 0) {
    local_8 = FUN_360b2340(this,iVar1);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar2 = (undefined4 *)FUN_360b0e50(param_1,iVar4);
        pCVar5 = local_8;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pCVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          pCVar5 = pCVar5 + 4;
        }
        iVar4 = iVar4 + 1;
        local_8 = local_8 + 0x24;
      } while (iVar4 < iVar1);
    }
  }
  return this;
}

