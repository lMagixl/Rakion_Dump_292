
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3616e810(int param_1)

{
  int iVar1;
  int iVar2;
  
  (*DAT_362c46cc)(*(undefined4 *)(param_1 + 0x3c),0);
  (*DAT_362c46cc)(*(undefined4 *)(param_1 + 0x40),0);
  if (*(int *)(param_1 + 0x44) != -1) {
    (*DAT_362c46cc)(*(int *)(param_1 + 0x44),0);
  }
  iVar1 = FUN_3615a240((undefined4 *)(param_1 + 0x10));
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      (*DAT_362c46cc)(*(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x14)),0);
      iVar2 = iVar2 + 0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  _DAT_362fea58 = 0;
  DAT_362fe1c8 = 0;
  DAT_362fe1bc = 0;
  DAT_362fe1c0 = 0;
  DAT_362fe1c4 = 0;
  _DAT_362fe1cc = 0;
  return;
}

