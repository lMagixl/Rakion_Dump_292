
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36161b50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int local_c;
  uint local_4;
  
  puVar5 = DAT_362fdfe4;
  puVar7 = DAT_362fdfe0;
  uVar9 = DAT_362fdfe4[1];
  iVar2 = FUN_3615a190(DAT_362fdfe0);
  local_4 = *puVar5;
  _DAT_362fe0b8 = iVar2;
  iVar3 = FUN_3600bef0((undefined4 *)&DAT_362fe0b0);
  puVar8 = DAT_362fe0b4;
  if (iVar3 < iVar2) {
    iVar3 = FUN_3600bef0((undefined4 *)&DAT_362fe0b0);
    FUN_36026aa0(&DAT_362fe0b0,iVar3 + ((iVar2 + -1) / DAT_362fe0bc + 1) * DAT_362fe0bc);
    puVar8 = DAT_362fe0b4;
    puVar7 = DAT_362fdfe0;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_c = FUN_3615a2c0(puVar7 + 8);
  if (0 < local_c) {
    iVar2 = 0;
    do {
      iVar3 = puVar7[9];
      iVar4 = FUN_3600c3d0((undefined4 *)(iVar3 + iVar2 + 4));
      iVar6 = 0;
      if (0 < iVar4) {
        do {
          iVar1 = iVar6 * 8;
          iVar6 = iVar6 + 1;
          DAT_362fe0b4[*(int *)(*(int *)(iVar3 + iVar2 + 8) + iVar1)] =
               DAT_362fe0b4[*(int *)(*(int *)(iVar3 + iVar2 + 8) + iVar1)] + 1;
        } while (iVar6 < iVar4);
      }
      iVar2 = iVar2 + 0xc;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  if (0 < (int)uVar9) {
    iVar2 = local_4 << 2;
    do {
      puVar5 = FUN_36161520(&local_4);
      *(uint *)(iVar2 + DAT_362fe084) = *puVar5;
      iVar2 = iVar2 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

