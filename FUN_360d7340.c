
void __fastcall FUN_360d7340(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_360cb790((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb0d0(param_1,iVar2);
      *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) & 0xfffffffb;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360cb790((int)param_1);
    } while (iVar2 < iVar1);
  }
  FUN_360ccb10(param_1);
  return;
}

