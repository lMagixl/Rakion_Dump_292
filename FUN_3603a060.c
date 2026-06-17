
undefined4 __fastcall FUN_3603a060(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = param_1 + 2;
  iVar1 = FUN_36026a70((int)puVar3);
  if (iVar1 == 0) {
    iVar1 = FUN_36039b50(param_1);
    FUN_36039d60(param_1,param_1[6] + iVar1);
    iVar2 = FUN_36026d00(puVar3,param_1[6]);
    if (0 < (int)param_1[6]) {
      iVar4 = 0;
      do {
        *(int *)(iVar2 + iVar4 * 4) = iVar4 + iVar1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_1[6]);
    }
  }
  puVar3 = (undefined4 *)FUN_36026d90((int)puVar3);
  return *puVar3;
}

