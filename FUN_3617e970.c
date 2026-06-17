
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3617e970(int param_1,int param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  int local_38;
  float local_28 [4];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar16 = param_2 * 0x160;
  param_2 = *(int *)(*(int *)(param_1 + 0x104) + 0x134 + iVar16);
  iVar18 = *(int *)(param_1 + 0x104) + iVar16;
  iVar14 = *(int *)(iVar18 + 0x11c);
  iVar8 = FUN_36061f20(0x36301568);
  iVar9 = FUN_36061f30(0x36301588);
  DAT_36301570 = DAT_36301570 + iVar14;
  iVar10 = FUN_36061f60((undefined4 *)&DAT_36301568);
  if (iVar10 < DAT_36301570) {
    iVar10 = FUN_36061f60((undefined4 *)&DAT_36301568);
    FUN_360621d0(&DAT_36301568,iVar10 + ((iVar14 + -1) / DAT_36301574 + 1) * DAT_36301574);
  }
  DAT_36301580 = DAT_36301580 + iVar14;
  iVar10 = FUN_36061fd0((undefined4 *)&DAT_36301578);
  if (iVar10 < DAT_36301580) {
    iVar10 = FUN_36061fd0((undefined4 *)&DAT_36301578);
    FUN_36062460(&DAT_36301578,iVar10 + ((iVar14 + -1) / DAT_36301584 + 1) * DAT_36301584);
  }
  iVar19 = DAT_36301590 + param_2 * 3;
  DAT_36301590 = iVar19;
  iVar10 = FUN_3600bda0((undefined4 *)&DAT_36301588);
  if (iVar10 < iVar19) {
    iVar10 = FUN_3600bda0((undefined4 *)&DAT_36301588);
    FUN_360623a0(&DAT_36301588,iVar10 + ((param_2 * 3 + -1) / DAT_36301594 + 1) * DAT_36301594);
  }
  *(uint *)(*(int *)(param_1 + 0x104) + 0x118 + iVar16) =
       *(uint *)(*(int *)(param_1 + 0x104) + 0x118 + iVar16) | 8;
  local_28[0] = *(float *)(iVar18 + 0x10);
  local_4 = 0;
  if (-1 < *(int *)(iVar18 + 0x20)) {
    iVar10 = *(int *)(iVar18 + 0x20) * 0x160 + *(int *)(param_1 + 0x104);
    local_28[3] = *(float *)(iVar10 + 0x10);
    if (*(int *)(iVar10 + 8) == *(int *)(iVar18 + 8)) {
      if (local_28[3] < local_28[0]) {
        local_c = local_28[3];
      }
      else {
        local_c = local_28[0];
      }
    }
  }
  if (-1 < *(int *)(iVar18 + 0x18)) {
    iVar10 = *(int *)(iVar18 + 0x18) * 0x160;
    local_28[1] = *(float *)(iVar10 + 0x10 + *(int *)(param_1 + 0x104));
    if (*(int *)(iVar10 + *(int *)(param_1 + 0x104) + 8) == *(int *)(iVar18 + 8)) {
      if (local_28[1] < local_28[0]) {
        local_14 = local_28[1];
      }
      else {
        local_14 = local_28[0];
      }
    }
  }
  if (-1 < *(int *)(iVar18 + 0x1c)) {
    iVar10 = *(int *)(iVar18 + 0x1c) * 0x160;
    local_28[2] = *(float *)(iVar10 + 0x10 + *(int *)(param_1 + 0x104));
    if (*(int *)(iVar10 + 8 + *(int *)(param_1 + 0x104)) == *(int *)(iVar18 + 8)) {
      if (local_28[2] < local_28[0]) {
        local_10 = local_28[2];
      }
      else {
        local_10 = local_28[0];
      }
    }
  }
  if (-1 < *(int *)(iVar18 + 0x24)) {
    iVar10 = *(int *)(iVar18 + 0x24) * 0x160;
    local_18 = *(float *)(iVar10 + 0x10 + *(int *)(param_1 + 0x104));
    if (*(int *)(iVar10 + 8 + *(int *)(param_1 + 0x104)) == *(int *)(iVar18 + 8)) {
      if (local_18 < local_28[0]) {
        local_8 = local_18;
      }
      else {
        local_8 = local_28[0];
      }
    }
  }
  fVar4 = *(float *)(iVar18 + 0x54);
  fVar5 = *(float *)(iVar18 + 0x74);
  iVar10 = 0;
  local_38 = 0;
  if (3 < iVar14) {
    iVar19 = iVar8 * 8;
    iVar13 = iVar8 * 0xc;
    do {
      pfVar17 = (float *)(DAT_3630157c + iVar19);
      iVar10 = local_38 * 8;
      pbVar11 = (byte *)(*(int *)(iVar18 + 0x128) + iVar10);
      bVar2 = *pbVar11;
      bVar3 = pbVar11[1];
      fVar7 = (float)*(ushort *)(pbVar11 + 4);
      pfVar20 = (float *)(DAT_3630156c + iVar13);
      fVar1 = local_28[pbVar11[2]];
      fVar6 = fVar7;
      if ((fVar1 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(pbVar11 + 6), fVar1 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(pbVar11 + 6) - fVar7) * fVar1 + fVar7;
      }
      *pfVar20 = (float)bVar2 + fVar4;
      pfVar20[2] = (float)bVar3 + fVar5;
      pfVar20[1] = fVar6;
      pfVar17[1] = (float)bVar3 + fVar5;
      *pfVar17 = (float)bVar2 + fVar4;
      pbVar11 = (byte *)(iVar10 + 8 + *(int *)(iVar18 + 0x128));
      pfVar17 = (float *)(iVar19 + 8 + DAT_3630157c);
      bVar2 = *pbVar11;
      bVar3 = pbVar11[1];
      fVar7 = (float)*(ushort *)(pbVar11 + 4);
      pfVar20 = (float *)(iVar13 + 0xc + DAT_3630156c);
      fVar1 = local_28[pbVar11[2]];
      fVar6 = fVar7;
      if ((fVar1 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(pbVar11 + 6), fVar1 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(pbVar11 + 6) - fVar7) * fVar1 + fVar7;
      }
      iVar10 = iVar10 + 0x18;
      *pfVar20 = (float)bVar2 + fVar4;
      pfVar20[2] = (float)bVar3 + fVar5;
      pfVar20[1] = fVar6;
      pfVar17[1] = (float)bVar3 + fVar5;
      *pfVar17 = (float)bVar2 + fVar4;
      pbVar11 = (byte *)(*(int *)(iVar18 + 0x128) + -8 + iVar10);
      pfVar17 = (float *)(iVar19 + 0x10 + DAT_3630157c);
      bVar2 = *pbVar11;
      bVar3 = pbVar11[1];
      fVar7 = (float)*(ushort *)(pbVar11 + 4);
      pfVar20 = (float *)(iVar13 + 0x18 + DAT_3630156c);
      fVar1 = local_28[pbVar11[2]];
      fVar6 = fVar7;
      if ((fVar1 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(pbVar11 + 6), fVar1 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(pbVar11 + 6) - fVar7) * fVar1 + fVar7;
      }
      *pfVar20 = (float)bVar2 + fVar4;
      pfVar20[2] = (float)bVar3 + fVar5;
      pfVar20[1] = fVar6;
      pfVar17[1] = (float)bVar3 + fVar5;
      *pfVar17 = (float)bVar2 + fVar4;
      iVar12 = *(int *)(iVar18 + 0x128) + iVar10;
      bVar2 = *(byte *)(iVar12 + 1);
      fVar7 = (float)*(ushort *)(iVar12 + 4);
      pfVar17 = (float *)(iVar13 + 0x24 + DAT_3630156c);
      pfVar20 = (float *)(iVar19 + 0x18 + DAT_3630157c);
      fVar1 = local_28[*(byte *)(iVar12 + 2)];
      fVar6 = fVar7;
      if ((fVar1 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(iVar12 + 6), fVar1 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(iVar12 + 6) - fVar7) * fVar1 + fVar7;
      }
      iVar13 = iVar13 + 0x30;
      fVar1 = (float)*(byte *)(*(int *)(iVar18 + 0x128) + iVar10) + fVar4;
      iVar19 = iVar19 + 0x20;
      *pfVar17 = fVar1;
      fVar7 = (float)bVar2 + fVar5;
      pfVar17[2] = fVar7;
      pfVar17[1] = fVar6;
      pfVar20[1] = fVar7;
      *pfVar20 = fVar1;
      iVar10 = local_38 + 4;
      local_38 = iVar10;
    } while (iVar10 < iVar14 + -3);
  }
  if (iVar10 < iVar14) {
    iVar19 = (iVar8 + iVar10) * 8;
    iVar13 = (iVar8 + iVar10) * 0xc;
    do {
      pbVar11 = (byte *)(*(int *)(iVar18 + 0x128) + iVar10 * 8);
      pfVar20 = (float *)(iVar19 + DAT_3630157c);
      bVar2 = *pbVar11;
      bVar3 = pbVar11[1];
      fVar7 = (float)*(ushort *)(pbVar11 + 4);
      pfVar17 = (float *)(DAT_3630156c + iVar13);
      fVar1 = local_28[pbVar11[2]];
      fVar6 = fVar7;
      if ((fVar1 != _DAT_3622376c) &&
         (fVar6 = (float)*(ushort *)(pbVar11 + 6), fVar1 != _DAT_36223384)) {
        fVar6 = ((float)*(ushort *)(pbVar11 + 6) - fVar7) * fVar1 + fVar7;
      }
      iVar10 = iVar10 + 1;
      iVar13 = iVar13 + 0xc;
      *pfVar17 = (float)bVar2 + fVar4;
      pfVar17[2] = (float)bVar3 + fVar5;
      pfVar17[1] = fVar6;
      pfVar20[1] = (float)bVar3 + fVar5;
      *pfVar20 = (float)bVar2 + fVar4;
      iVar19 = iVar19 + 8;
    } while (iVar10 < iVar14);
  }
  if (0 < param_2) {
    iVar14 = 0;
    iVar9 = iVar9 * 2;
    do {
      iVar10 = *(int *)(iVar18 + 0x140) + iVar14;
      sVar15 = (short)iVar8;
      *(short *)(iVar9 + DAT_3630158c) = *(short *)(*(int *)(iVar18 + 0x140) + iVar14) + sVar15;
      *(short *)(iVar9 + 2 + DAT_3630158c) = *(short *)(iVar10 + 2) + sVar15;
      *(short *)(iVar9 + 4 + DAT_3630158c) = *(short *)(iVar10 + 4) + sVar15;
      iVar14 = iVar14 + 6;
      iVar9 = iVar9 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(uint *)(*(int *)(param_1 + 0x104) + 0x118 + iVar16) =
       *(uint *)(*(int *)(param_1 + 0x104) + 0x118 + iVar16) & 0xffffffe7;
  return;
}

