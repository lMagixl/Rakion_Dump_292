
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_360e0840(int *param_1)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  _PtFuncCompare *p_Var5;
  
  piVar1 = param_1 + 2;
  iVar2 = FUN_360deef0((int)piVar1);
  if ((iVar2 != 0) && (iVar2 = *param_1, iVar2 != 0)) {
    DAT_362cc0e4 = iVar2;
    if ((float)param_1[1] <= _DAT_3622376c) {
      iVar2 = FUN_360deef0((int)piVar1);
      if (0 < iVar2) {
        p_Var5 = (_PtFuncCompare *)&LAB_360df9f0;
        sVar4 = 0xc;
        sVar3 = FUN_360deef0((int)piVar1);
        qsort((void *)param_1[3],sVar3,sVar4,p_Var5);
      }
    }
    else {
      iVar2 = FUN_360deef0((int)piVar1);
      if (0 < iVar2) {
        p_Var5 = (_PtFuncCompare *)&LAB_360df9b0;
        sVar4 = 0xc;
        sVar3 = FUN_360deef0((int)piVar1);
        qsort((void *)param_1[3],sVar3,sVar4,p_Var5);
        return;
      }
    }
  }
  return;
}

