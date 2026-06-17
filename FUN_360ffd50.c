
void __cdecl FUN_360ffd50(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  piVar2 = (int *)(DAT_362cf500 + 0x14);
  **(undefined1 **)(DAT_362cf500 + 0x14) = 1;
  *piVar2 = *piVar2 + 1;
  iVar1 = DAT_362cf500;
  **(uint **)(DAT_362cf500 + 0x14) = param_2;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 4;
  piVar2 = (int *)(DAT_362cf500 + 0x14);
  puVar4 = (undefined4 *)(param_1 + DAT_362cf51c);
  puVar5 = *(undefined4 **)(DAT_362cf500 + 0x14);
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *piVar2 = *piVar2 + param_2;
  return;
}

