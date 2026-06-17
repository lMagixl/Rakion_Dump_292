
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3616f7a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  DAT_362fe1c8 = FUN_36082920(*(int *)(param_1 + 0x38));
  DAT_362fe1bc = (*DAT_362c46c8)(*(undefined4 *)(param_1 + 0x3c),0,DAT_362fe1c8,0x65);
  DAT_362fe1c0 = (*DAT_362c46c8)(*(undefined4 *)(param_1 + 0x40),0,DAT_362fe1c8,0x65);
  if (*(int *)(param_1 + 0x44) != -1) {
    DAT_362fe1c4 = (*DAT_362c46c8)(*(int *)(param_1 + 0x44),0,DAT_362fe1c8,0x65);
  }
  iVar2 = FUN_3615a240((undefined4 *)(param_1 + 0x10));
  if (0 < iVar2) {
    FUN_3616f540(&DAT_362fea50,iVar2);
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      puVar1 = (undefined4 *)(DAT_362fea54 + iVar5 * 4);
      uVar3 = (*DAT_362c46c8)(*(undefined4 *)(iVar4 + 4 + *(int *)(param_1 + 0x14)),0,DAT_362fe1c8,
                              0x65);
      *puVar1 = uVar3;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 < iVar2);
  }
  _DAT_362fe1cc = 1;
  return;
}

