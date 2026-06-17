
void __thiscall FUN_36055e30(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar12 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar5 = FUN_36054b80(iVar3,iVar12);
  iVar11 = iVar3;
  if (iVar5 < 0) {
    iVar11 = iVar12;
    iVar12 = iVar3;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  piVar4 = *(int **)(param_2 + 4);
  iVar6 = 0;
  iVar3 = *piVar4;
  piVar8 = piVar4;
  while (iVar3 != iVar12) {
    piVar1 = piVar8 + 1;
    piVar8 = piVar8 + 1;
    iVar6 = iVar6 + 1;
    iVar3 = *piVar1;
  }
  iVar12 = iVar6 * 4;
  iVar3 = piVar4[iVar6];
  while (iVar3 != iVar11) {
    iVar12 = iVar12 + 4;
    if (*(int *)(*(int *)(param_2 + 4) + iVar12) != *(int *)(*(int *)(param_2 + 4) + -4 + iVar12)) {
      puVar7 = (undefined4 *)FUN_3604c300((void *)((int)this + 0x3c),1);
      if (iVar5 < 0) {
        uVar10 = *(undefined4 *)(*(int *)(param_2 + 4) + -4 + iVar12);
        uVar9 = *(undefined4 *)(*(int *)(param_2 + 4) + iVar12);
      }
      else {
        puVar2 = (undefined4 *)(iVar12 + *(int *)(param_2 + 4));
        uVar10 = *puVar2;
        uVar9 = puVar2[-1];
      }
      *puVar7 = local_18;
      puVar7[1] = local_14;
      puVar7[2] = local_10;
      puVar7[3] = local_c;
      puVar7[4] = uVar10;
      puVar7[5] = uVar9;
      puVar7[3] = *(undefined4 *)(param_1 + 8);
      *(undefined4 **)(param_1 + 8) = puVar7;
    }
    iVar3 = *(int *)(iVar12 + *(int *)(param_2 + 4));
  }
  return;
}

