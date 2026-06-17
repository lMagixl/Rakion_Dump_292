
void __fastcall FUN_36124280(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_360cb7c0((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb210(param_1,iVar2);
      *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffd;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360cb7c0((int)param_1);
    } while (iVar2 < iVar1);
  }
  FUN_36124250(param_1);
  return;
}

