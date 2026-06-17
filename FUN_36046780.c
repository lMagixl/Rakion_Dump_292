
int __thiscall FUN_36046780(void *this,undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar1 = param_2 + param_3;
  iVar3 = 0;
  for (; (int)param_2 < iVar1; param_2 = param_2 + uVar7) {
    uVar7 = ~(DAT_362bf438 - 1U) & param_2;
    DVar4 = FUN_36046610(&DAT_362bf438,(DWORD)this,uVar7,0);
    iVar5 = 0;
    if (0 < DAT_362a2774) {
      do {
        iVar5 = iVar5 + 1;
        FUN_36046610(&DAT_362bf438,(DWORD)this,iVar5 * DAT_362bf438 + uVar7,0);
      } while (iVar5 < DAT_362a2774);
    }
    FUN_360463f0(&DAT_362bf438,DVar4);
    iVar2 = *(int *)(DVar4 * 0x30 + 4 + DAT_362bf440);
    iVar5 = DAT_362bf438 + iVar2;
    if (iVar1 <= iVar5) {
      iVar5 = iVar1;
    }
    uVar7 = iVar5 - param_2;
    puVar8 = (undefined4 *)((*(int *)(DVar4 * 0x30 + DAT_362bf440 + 8) - iVar2) + param_2);
    puVar9 = param_1;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    param_1 = (undefined4 *)((int)param_1 + uVar7);
    iVar3 = iVar3 + uVar7;
  }
  return iVar3;
}

