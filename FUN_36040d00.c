
undefined4 __cdecl FUN_36040d00(void *param_1,CTString *param_2)

{
  int iVar1;
  CTString *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_360259d0((int)param_1);
  if (0 < iVar1) {
    do {
      pCVar2 = (CTString *)FUN_360217c0(param_1,iVar3);
      iVar1 = CTString::Matches(param_2,pCVar2);
      if (iVar1 != 0) {
        return 1;
      }
      pCVar2 = (CTString *)FUN_360217c0(param_1,iVar3);
      iVar1 = CTString::HasPrefix(param_2,pCVar2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360259d0((int)param_1);
    } while (iVar3 < iVar1);
  }
  return 0;
}

