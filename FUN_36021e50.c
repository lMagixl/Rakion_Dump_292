
void __fastcall FUN_36021e50(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x1c))) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 * 4) = 0xc61c4000;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x1c));
  }
  return;
}

