
void __fastcall FUN_360ccd60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_360cb720((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb0a0(param_1,iVar2);
      *(uint *)(iVar1 + 200) = *(uint *)(iVar1 + 200) & 0xfffffeff;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360cb720((int)param_1);
    } while (iVar2 < iVar1);
  }
  FUN_360ccae0(param_1);
  return;
}

