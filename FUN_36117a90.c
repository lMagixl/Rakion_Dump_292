
void __fastcall FUN_36117a90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0xd90) + 0xb4);
  iVar1 = *(int *)(*(int *)(param_1 + 0xd90) + 0xb8) + iVar7;
  for (; iVar7 < iVar1; iVar7 = iVar7 + 1) {
    iVar2 = FUN_3611fd70((void *)(param_1 + 0xd94),iVar7);
    iVar5 = *(int *)(iVar2 + 0x108);
    if (iVar5 != 0) {
      puVar8 = (undefined4 *)(param_1 + 0xe18);
      uVar3 = FUN_36026a70((int)puVar8);
      iVar6 = *(int *)(param_1 + 0xe20) + iVar5;
      *(int *)(param_1 + 0xe20) = iVar6;
      iVar4 = FUN_3600bef0(puVar8);
      if (iVar4 < iVar6) {
        iVar4 = *(int *)(param_1 + 0xe24);
        iVar6 = FUN_3600bef0(puVar8);
        FUN_36026aa0(puVar8,iVar6 + ((iVar5 + -1) / iVar4 + 1) * iVar4);
      }
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0xe1c) + (*(int *)(param_1 + 0xe20) - iVar5) * 4);
      iVar5 = *(int *)(iVar2 + 0x104);
      iVar4 = *(int *)(iVar2 + 0x108) + iVar5;
      for (; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        *puVar8 = *(undefined4 *)(DAT_362fcaf4 + iVar5 * 4);
        puVar8 = puVar8 + 1;
      }
      *(undefined4 *)(iVar2 + 0x104) = uVar3;
    }
  }
  DAT_362fcaf8 = 0;
  DAT_362fcb08 = 0;
  return;
}

