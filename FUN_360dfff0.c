
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_360dfff0(int *param_1)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  _PtFuncCompare *p_Var5;
  
  piVar1 = param_1 + 4;
  iVar2 = FUN_360ded70((int)piVar1);
  if ((iVar2 != 0) && (iVar2 = *param_1, iVar2 != 0)) {
    DAT_362cc0e4 = iVar2;
    if (*(double *)(param_1 + 2) <= _DAT_36227d98) {
      iVar2 = FUN_360ded70((int)piVar1);
      if (0 < iVar2) {
        p_Var5 = (_PtFuncCompare *)&LAB_360df920;
        sVar4 = 0x18;
        sVar3 = FUN_360ded70((int)piVar1);
        qsort((void *)param_1[5],sVar3,sVar4,p_Var5);
      }
    }
    else {
      iVar2 = FUN_360ded70((int)piVar1);
      if (0 < iVar2) {
        p_Var5 = (_PtFuncCompare *)&LAB_360df8e0;
        sVar4 = 0x18;
        sVar3 = FUN_360ded70((int)piVar1);
        qsort((void *)param_1[5],sVar3,sVar4,p_Var5);
        return;
      }
    }
  }
  return;
}

