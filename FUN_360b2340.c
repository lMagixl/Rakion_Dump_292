
CAttachedModelPosition * __thiscall FUN_360b2340(void *this,int param_1)

{
  CAttachedModelPosition *pCVar1;
  int iVar2;
  CAttachedModelPosition *pCVar3;
  
  if (param_1 == 0) {
    return (CAttachedModelPosition *)0x0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  FUN_360b1380(this,param_1);
  pCVar1 = FUN_360b1e60(this,param_1);
  if (0 < param_1) {
    iVar2 = iVar2 * 4;
    pCVar3 = pCVar1;
    do {
      *(CAttachedModelPosition **)(iVar2 + *(int *)((int)this + 0xc)) = pCVar3;
      iVar2 = iVar2 + 4;
      pCVar3 = pCVar3 + 0x24;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return pCVar1;
}

