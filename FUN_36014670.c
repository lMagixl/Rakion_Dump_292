
int __cdecl FUN_36014670(int param_1,int param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  while (iVar1 = iVar3, 0 < iVar1) {
    iVar3 = iVar1 / 2;
    bVar2 = FUN_361a9740(*param_3,*(int *)(param_1 + iVar3 * 4));
    if (!bVar2) {
      param_1 = param_1 + 4 + iVar3 * 4;
      iVar3 = iVar1 + (-1 - iVar3);
    }
  }
  return param_1;
}

