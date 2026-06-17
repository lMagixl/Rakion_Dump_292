
undefined4 __cdecl FUN_361300d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_360d8720(0x362fce74);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_360d8730(&DAT_362fce74,iVar4);
      if (*piVar2 == param_1) {
        uVar3 = FUN_360d8730(&DAT_362fce74,iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}

