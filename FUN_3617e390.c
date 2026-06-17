
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3617e390(int param_1,int param_2)

{
  uint *puVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  int local_30;
  float local_28 [4];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar14 = param_2 * 0x160;
  iVar5 = *(int *)(*(int *)(param_1 + 0x104) + 0x11c + iVar14);
  iVar15 = *(int *)(param_1 + 0x104) + iVar14;
  DAT_36301560 = 0;
  _DAT_36301550 = iVar5;
  iVar9 = FUN_36061f60((undefined4 *)&DAT_36301548);
  if (iVar9 < iVar5) {
    iVar9 = FUN_36061f60((undefined4 *)&DAT_36301548);
    FUN_360621d0(&DAT_36301548,iVar9 + ((iVar5 + -1) / DAT_36301554 + 1) * DAT_36301554);
  }
  DAT_36301560 = DAT_36301560 + iVar5;
  iVar9 = FUN_36061fd0((undefined4 *)&DAT_36301558);
  if (iVar9 < DAT_36301560) {
    iVar9 = FUN_36061fd0((undefined4 *)&DAT_36301558);
    FUN_36062460(&DAT_36301558,iVar9 + ((iVar5 + -1) / DAT_36301564 + 1) * DAT_36301564);
  }
  *(uint *)(*(int *)(param_1 + 0x104) + 0x118 + iVar14) =
       *(uint *)(*(int *)(param_1 + 0x104) + 0x118 + iVar14) | 8;
  local_28[0] = *(float *)(iVar15 + 0x10);
  local_4 = 0;
  if (-1 < *(int *)(iVar15 + 0x20)) {
    iVar9 = *(int *)(iVar15 + 0x20) * 0x160;
    local_28[3] = *(float *)(iVar9 + 0x10 + *(int *)(param_1 + 0x104));
    if (*(int *)(iVar9 + *(int *)(param_1 + 0x104) + 8) == *(int *)(iVar15 + 8)) {
      if (local_28[3] < local_28[0]) {
        local_c = local_28[3];
      }
      else {
        local_c = local_28[0];
      }
    }
  }
  if (-1 < *(int *)(iVar15 + 0x18)) {
    iVar9 = *(int *)(iVar15 + 0x18) * 0x160;
    local_28[1] = *(float *)(iVar9 + 0x10 + *(int *)(param_1 + 0x104));
    if (*(int *)(iVar9 + 8 + *(int *)(param_1 + 0x104)) == *(int *)(iVar15 + 8)) {
      if (local_28[1] < local_28[0]) {
        local_14 = local_28[1];
      }
      else {
        local_14 = local_28[0];
      }
    }
  }
  if (-1 < *(int *)(iVar15 + 0x1c)) {
    iVar9 = *(int *)(iVar15 + 0x1c) * 0x160;
    local_28[2] = *(float *)(iVar9 + 0x10 + *(int *)(param_1 + 0x104));
    if (*(int *)(iVar9 + 8 + *(int *)(param_1 + 0x104)) == *(int *)(iVar15 + 8)) {
      if (local_28[2] < local_28[0]) {
        local_10 = local_28[2];
      }
      else {
        local_10 = local_28[0];
      }
    }
  }
  if (-1 < *(int *)(iVar15 + 0x24)) {
    iVar9 = *(int *)(iVar15 + 0x24) * 0x160;
    local_18 = *(float *)(iVar9 + 0x10 + *(int *)(param_1 + 0x104));
    if (*(int *)(iVar9 + 8 + *(int *)(param_1 + 0x104)) == *(int *)(iVar15 + 8)) {
      if (local_18 < local_28[0]) {
        local_8 = local_18;
      }
      else {
        local_8 = local_28[0];
      }
    }
  }
  iVar9 = 0;
  local_30 = 0;
  if (3 < iVar5) {
    iVar12 = 0;
    do {
      iVar11 = local_30 * 8;
      iVar9 = *(int *)(iVar15 + 0x128) + iVar11;
      bVar3 = *(byte *)(iVar9 + 1);
      fVar8 = (float)*(byte *)(*(int *)(iVar15 + 0x128) + iVar11);
      fVar7 = (float)*(ushort *)(iVar9 + 4);
      pfVar16 = (float *)(DAT_3630154c + iVar12);
      pfVar13 = (float *)(DAT_3630155c + iVar11);
      fVar2 = local_28[*(byte *)(iVar9 + 2)];
      fVar6 = fVar7;
      if ((fVar2 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(iVar9 + 6), fVar2 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(iVar9 + 6) - fVar7) * fVar2 + fVar7;
      }
      *pfVar16 = fVar8;
      pfVar16[2] = (float)bVar3;
      pfVar16[1] = fVar6;
      *pfVar13 = fVar8;
      pfVar13[1] = (float)bVar3;
      iVar9 = *(int *)(iVar15 + 0x128) + 8 + iVar11;
      bVar3 = *(byte *)(iVar9 + 1);
      fVar8 = (float)*(byte *)(*(int *)(iVar15 + 0x128) + 8 + iVar11);
      fVar7 = (float)*(ushort *)(iVar9 + 4);
      pfVar13 = (float *)(iVar12 + 0xc + DAT_3630154c);
      pfVar16 = (float *)(iVar11 + 8 + DAT_3630155c);
      fVar2 = local_28[*(byte *)(iVar9 + 2)];
      fVar6 = fVar7;
      if ((fVar2 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(iVar9 + 6), fVar2 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(iVar9 + 6) - fVar7) * fVar2 + fVar7;
      }
      *pfVar13 = fVar8;
      pfVar13[2] = (float)bVar3;
      pfVar13[1] = fVar6;
      *pfVar16 = fVar8;
      pfVar16[1] = (float)bVar3;
      pbVar10 = (byte *)(*(int *)(iVar15 + 0x128) + iVar11 + 0x10);
      pfVar16 = (float *)(iVar11 + 0x10 + DAT_3630155c);
      bVar3 = *pbVar10;
      bVar4 = pbVar10[1];
      fVar7 = (float)*(ushort *)(pbVar10 + 4);
      pfVar13 = (float *)(iVar12 + 0x18 + DAT_3630154c);
      fVar2 = local_28[pbVar10[2]];
      fVar6 = fVar7;
      if ((fVar2 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(pbVar10 + 6), fVar2 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(pbVar10 + 6) - fVar7) * fVar2 + fVar7;
      }
      *pfVar13 = (float)bVar3;
      pfVar13[2] = (float)bVar4;
      pfVar13[1] = fVar6;
      *pfVar16 = (float)bVar3;
      pfVar16[1] = (float)bVar4;
      pbVar10 = (byte *)(*(int *)(iVar15 + 0x128) + iVar11 + 0x18);
      pfVar16 = (float *)(iVar11 + 0x18 + DAT_3630155c);
      bVar3 = *pbVar10;
      bVar4 = pbVar10[1];
      fVar7 = (float)*(ushort *)(pbVar10 + 4);
      pfVar13 = (float *)(iVar12 + 0x24 + DAT_3630154c);
      fVar2 = local_28[pbVar10[2]];
      fVar6 = fVar7;
      if ((fVar2 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(pbVar10 + 6), fVar2 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(pbVar10 + 6) - fVar7) * fVar2 + fVar7;
      }
      iVar12 = iVar12 + 0x30;
      *pfVar13 = (float)bVar3;
      pfVar13[2] = (float)bVar4;
      pfVar13[1] = fVar6;
      *pfVar16 = (float)bVar3;
      pfVar16[1] = (float)bVar4;
      iVar9 = local_30 + 4;
      local_30 = iVar9;
    } while (iVar9 < iVar5 + -3);
  }
  if (iVar9 < iVar5) {
    iVar12 = iVar9 * 0xc;
    do {
      pbVar10 = (byte *)(*(int *)(iVar15 + 0x128) + iVar9 * 8);
      pfVar13 = (float *)(iVar9 * 8 + DAT_3630155c);
      bVar3 = *pbVar10;
      bVar4 = pbVar10[1];
      fVar7 = (float)*(ushort *)(pbVar10 + 4);
      pfVar16 = (float *)(DAT_3630154c + iVar12);
      fVar2 = local_28[pbVar10[2]];
      fVar6 = fVar7;
      if ((fVar2 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(pbVar10 + 6), fVar2 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(pbVar10 + 6) - fVar7) * fVar2 + fVar7;
      }
      *pfVar16 = (float)bVar3;
      iVar9 = iVar9 + 1;
      iVar12 = iVar12 + 0xc;
      pfVar16[2] = (float)bVar4;
      pfVar16[1] = fVar6;
      *pfVar13 = (float)bVar3;
      pfVar13[1] = (float)bVar4;
    } while (iVar9 < iVar5);
  }
  puVar1 = (uint *)(iVar14 + 0x118 + *(int *)(param_1 + 0x104));
  *puVar1 = *puVar1 & 0xffffffe7;
  return;
}

