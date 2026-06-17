
void __cdecl FUN_36162300(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_2 + 0x7c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = (*(int *)(param_2 + 0x78) + iVar2) * 0x7c;
      puVar4 = (undefined4 *)(iVar3 + DAT_362fe9a4);
      iVar3 = *(int *)(**(int **)(iVar3 + DAT_362fe9a4) + 0x18) +
              *(int *)(iVar3 + 0x18 + DAT_362fe9a4) * 0x54;
      DAT_362fdffc = DAT_362fdffc + 1;
      DAT_362fdfe0 = iVar3;
      FUN_3616f7a0(iVar3);
      FUN_361692e0(param_1,puVar4,*(int *)(param_2 + 0x6c));
      FUN_36162020();
      FUN_3616e810(iVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

