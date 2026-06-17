
void __fastcall FUN_360e7560(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_360e7fc0((undefined4 *)(param_1 + 0xc));
  if (0 < iVar1) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 4 + iVar2 * 8) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360e7fc0((undefined4 *)(param_1 + 0xc));
    } while (iVar2 < iVar1);
  }
  return;
}

