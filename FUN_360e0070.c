
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_360e0070(int *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  
  iVar3 = FUN_360ded70((int)(param_1 + 4));
  dVar2 = _DAT_36232868;
  if (((iVar3 != 0) && (iVar3 = *param_1, iVar3 != 0)) &&
     (iVar4 = FUN_360ded70((int)(param_1 + 4)), 0 < iVar4)) {
    pdVar5 = (double *)(param_1[5] + -8 + iVar3 * 8);
    do {
      dVar1 = ABS(*pdVar5 - dVar2);
      dVar2 = *pdVar5;
      if (dVar1 < (double)_DAT_362a29a0 * _DAT_36232860 !=
          (dVar1 == (double)_DAT_362a29a0 * _DAT_36232860)) {
        dVar2 = _DAT_36232868;
      }
      pdVar5 = pdVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

