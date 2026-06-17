
int __fastcall FUN_360f1d50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_360febe0(param_1 + 0x14);
  iVar2 = FUN_360febe0(param_1 + 6);
  return iVar2 + iVar1;
}

