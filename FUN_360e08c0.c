
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_360e08c0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  iVar3 = FUN_360deef0((int)(param_1 + 2));
  if (((iVar3 != 0) && (iVar3 = *param_1, iVar3 != 0)) &&
     (iVar4 = FUN_360deef0((int)(param_1 + 2)), 0 < iVar4)) {
    pfVar5 = (float *)(param_1[3] + -4 + iVar3 * 4);
    fVar2 = 32000.0;
    do {
      fVar1 = ABS(*pfVar5 - fVar2);
      fVar2 = *pfVar5;
      if (fVar1 < _DAT_362a29a0 * (float)_DAT_36232860 !=
          (fVar1 == _DAT_362a29a0 * (float)_DAT_36232860)) {
        fVar2 = _DAT_36232870;
      }
      pfVar5 = pfVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

