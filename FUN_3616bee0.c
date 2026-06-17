
void __cdecl FUN_3616bee0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = FUN_3615fda0(0x362fe9b0);
  if (iVar1 < 1) {
    DAT_362fe9b8 = 0;
    return;
  }
  do {
    puVar4 = (undefined4 *)(param_1 + 0xc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar1 = FUN_361601d0(puVar4);
    if (iVar1 < *(int *)(param_1 + 0x14)) {
      iVar1 = FUN_361601d0(puVar4);
      FUN_3616f6d0(puVar4,iVar1 + *(int *)(param_1 + 0x18));
    }
    puVar4 = (undefined4 *)(iVar2 + DAT_362fe9b4);
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar2);
    for (iVar1 = 0x3a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0xe8;
    iVar1 = FUN_3615fda0(0x362fe9b0);
  } while (iVar3 < iVar1);
  DAT_362fe9b8 = 0;
  return;
}

