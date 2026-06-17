
undefined4 __fastcall FUN_360d3350(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_36026a70((int)(param_1 + 2));
  if (iVar1 == 0) {
    iVar1 = FUN_360d2f60(param_1);
    FUN_360d30d0(param_1,param_1[6] + iVar1);
    iVar2 = FUN_36026d00(param_1 + 2,param_1[6]);
    if (0 < (int)param_1[6]) {
      iVar3 = 0;
      do {
        *(int *)(iVar2 + iVar3 * 4) = iVar3 + iVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[6]);
    }
  }
  iVar1 = param_1[4];
  param_1[4] = iVar1 + -1;
  return *(undefined4 *)(param_1[3] + (iVar1 + -1) * 4);
}

