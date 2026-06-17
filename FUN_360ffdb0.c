
void __cdecl FUN_360ffdb0(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar5 = param_2;
  uVar4 = param_4;
  if ((int)param_2 <= (int)param_4) {
    uVar4 = param_2;
  }
  pbVar6 = (byte *)(DAT_362cf514 + param_1);
  pbVar2 = (byte *)(DAT_362cf51c + param_3);
  param_2 = uVar4;
  if (0 < (int)uVar4) {
    do {
      *pbVar2 = *pbVar2 ^ *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar2 = pbVar2 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  piVar3 = (int *)(DAT_362cf500 + 0x14);
  **(undefined1 **)(DAT_362cf500 + 0x14) = 2;
  *piVar3 = *piVar3 + 1;
  iVar1 = DAT_362cf500;
  **(int **)(DAT_362cf500 + 0x14) = param_1;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 4;
  iVar1 = DAT_362cf500;
  **(uint **)(DAT_362cf500 + 0x14) = uVar5;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 4;
  iVar1 = DAT_362cf500;
  **(uint **)(DAT_362cf500 + 0x14) = param_4;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 4;
  piVar3 = (int *)(DAT_362cf500 + 0x14);
  puVar7 = (undefined4 *)(DAT_362cf51c + param_3);
  puVar8 = *(undefined4 **)(DAT_362cf500 + 0x14);
  for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *piVar3 = *piVar3 + param_4;
  return;
}

