
void __cdecl
FUN_3620ba30(int param_1,int param_2,int param_3,byte param_4,char param_5,char param_6,byte param_7
            )

{
  short *psVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  void *pvVar13;
  byte *pbVar14;
  byte bVar15;
  void *pvVar16;
  short *psVar17;
  ushort *puVar18;
  int iVar19;
  short sVar20;
  int iVar21;
  short *psVar22;
  int iVar23;
  int iVar24;
  ushort local_40;
  ushort local_3c;
  int local_2c;
  int local_20;
  int local_1c;
  int local_8;
  
  bVar15 = 0xc - param_5;
  pvVar13 = (void *)FUN_361bf99c(param_2 * param_3 * 8);
  if (0 < param_3) {
    local_2c = param_3;
    iVar23 = param_1;
    pvVar16 = pvVar13;
    do {
      if (0 < param_2) {
        psVar17 = (short *)((int)pvVar16 + 4);
        pbVar14 = (byte *)(iVar23 + 2);
        _param_5 = param_2;
        do {
          bVar2 = pbVar14[-1];
          bVar3 = *pbVar14;
          bVar4 = pbVar14[1];
          psVar17[-2] = (ushort)pbVar14[-2] << 4;
          psVar17[-1] = (ushort)bVar2 << 4;
          pbVar14 = pbVar14 + 4;
          *psVar17 = (ushort)bVar3 << 4;
          psVar17[1] = (ushort)bVar4 << 4;
          psVar17 = psVar17 + 4;
          _param_5 = _param_5 + -1;
        } while (_param_5 != 0);
      }
      iVar23 = iVar23 + param_2 * 4;
      pvVar16 = (void *)((int)pvVar16 + param_2 * 8);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  local_8 = param_3 + -1;
  local_3c = (ushort)((1 << (bVar15 & 0x1f)) + -1);
  local_40 = (ushort)((1 << (0xcU - param_6 & 0x1f)) + -1);
  _param_7 = (ushort)((1 << (0xc - param_7 & 0x1f)) + -1);
  _param_4 = (ushort)((1 << (0xc - param_4 & 0x1f)) + -1);
  pvVar16 = pvVar13;
  if (0 < local_8) {
    do {
      local_20 = param_2 + -1;
      iVar23 = 0;
      local_1c = 0;
      if (0 < local_20) {
        psVar17 = (short *)((int)pvVar16 + 4);
        psVar22 = (short *)((int)pvVar16 + param_2 * 8 + 4);
        do {
          sVar9 = psVar17[1];
          sVar10 = psVar17[-2];
          sVar11 = psVar17[-1];
          sVar12 = sVar10 - ((short)local_3c / 2 + sVar10 & ~local_3c);
          sVar20 = *psVar17;
          sVar6 = sVar11 - ((short)local_40 / 2 + sVar11 & ~local_40);
          sVar7 = sVar20 - ((short)_param_7 / 2 + sVar20 & ~_param_7);
          sVar8 = sVar9 - (sVar9 + (short)_param_4 / 2 & ~_param_4);
          psVar17[-2] = sVar10 - sVar12;
          iVar21 = (int)sVar12;
          psVar17[-1] = sVar11 - sVar6;
          *psVar17 = sVar20 - sVar7;
          psVar17[1] = sVar9 - sVar8;
          iVar24 = (int)sVar6;
          psVar17[2] = psVar17[2] + sVar12 / 2;
          psVar17[3] = psVar17[3] + sVar6 / 2;
          iVar23 = (int)sVar7;
          iVar19 = (int)sVar8;
          psVar17[4] = psVar17[4] + sVar7 / 2;
          psVar17[5] = psVar17[5] + sVar8 / 2;
          psVar22[-2] = psVar22[-2] + (short)((int)(iVar21 + (iVar21 >> 0x1f & 3U)) >> 2);
          psVar22[-1] = psVar22[-1] + (short)((int)(iVar24 + (iVar24 >> 0x1f & 3U)) >> 2);
          *psVar22 = *psVar22 + (short)((int)(iVar23 + (iVar23 >> 0x1f & 3U)) >> 2);
          psVar22[1] = psVar22[1] + (short)((int)(iVar19 + (iVar19 >> 0x1f & 3U)) >> 2);
          if (local_1c != 0) {
            sVar20 = (short)((int)(iVar21 + (iVar21 >> 0x1f & 7U)) >> 3);
            psVar22[-6] = psVar22[-6] + sVar20;
            sVar9 = (short)((int)(iVar24 + (iVar24 >> 0x1f & 7U)) >> 3);
            psVar22[-5] = psVar22[-5] + sVar9;
            sVar10 = (short)((int)(iVar23 + (iVar23 >> 0x1f & 7U)) >> 3);
            psVar22[-4] = psVar22[-4] + sVar10;
            sVar11 = (short)((int)(iVar19 + (iVar19 >> 0x1f & 7U)) >> 3);
            psVar22[-3] = psVar22[-3] + sVar11;
            if (2 < local_1c) {
              psVar1 = (short *)((int)pvVar16 + (param_2 + local_1c) * 8 + -0x18);
              *psVar1 = *psVar1 + sVar20;
              psVar22[-0xd] = psVar22[-0xd] + sVar9;
              psVar22[-0xc] = psVar22[-0xc] + sVar10;
              psVar22[-0xb] = psVar22[-0xb] + sVar11;
            }
          }
          iVar23 = local_1c + 1;
          psVar17 = psVar17 + 4;
          psVar22 = psVar22 + 4;
          local_1c = iVar23;
        } while (iVar23 < param_2 + -1);
      }
      sVar9 = *(short *)((int)pvVar16 + iVar23 * 8 + 2);
      sVar10 = *(short *)((int)pvVar16 + iVar23 * 8 + 4);
      puVar18 = (ushort *)((int)pvVar16 + iVar23 * 8 + 6);
      uVar5 = *puVar18;
      *(ushort *)((int)pvVar16 + iVar23 * 8) =
           *(short *)((int)pvVar16 + iVar23 * 8) + (short)local_3c / 2 & ~local_3c;
      *(ushort *)((int)pvVar16 + iVar23 * 8 + 2) = (short)local_40 / 2 + sVar9 & ~local_40;
      *(ushort *)((int)pvVar16 + iVar23 * 8 + 4) = (short)_param_7 / 2 + sVar10 & ~_param_7;
      *puVar18 = (short)_param_4 / 2 + uVar5 & ~_param_4;
      pvVar16 = (void *)((int)pvVar16 + param_2 * 8);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if (0 < param_2) {
    local_8 = param_2;
    puVar18 = (ushort *)((int)pvVar16 + 4);
    do {
      puVar18[-2] = puVar18[-2] + (short)local_3c / 2 & ~local_3c;
      puVar18[-1] = puVar18[-1] + (short)local_40 / 2 & ~local_40;
      *puVar18 = (short)_param_7 / 2 + *puVar18 & ~_param_7;
      puVar18[1] = puVar18[1] + (short)_param_4 / 2 & ~_param_4;
      local_8 = local_8 + -1;
      puVar18 = puVar18 + 4;
    } while (local_8 != 0);
  }
  sVar9 = (short)local_3c >> 4;
  sVar10 = (short)local_40 >> 4;
  sVar11 = (short)_param_7 >> 4;
  sVar20 = (short)_param_4 >> 4;
  if (0 < param_3) {
    local_8 = param_3;
    _param_6 = pvVar13;
    do {
      if (0 < param_2) {
        local_40._0_1_ = (byte)sVar10;
        local_3c._0_1_ = (byte)sVar9;
        param_4 = (byte)sVar20;
        param_7 = (byte)sVar11;
        pbVar14 = (byte *)(param_1 + 2);
        psVar17 = (short *)((int)_param_6 + 4);
        iVar23 = param_2;
        do {
          sVar12 = psVar17[-2] >> 4;
          if (sVar12 < 0x100) {
            if (sVar12 < 0) {
              sVar12 = 0;
            }
          }
          else {
            sVar12 = 0xff;
          }
          pbVar14[-2] = ~(byte)local_3c & (byte)sVar12;
          sVar12 = psVar17[-1] >> 4;
          if (sVar12 < 0x100) {
            if (sVar12 < 0) {
              sVar12 = 0;
            }
          }
          else {
            sVar12 = 0xff;
          }
          pbVar14[-1] = ~(byte)local_40 & (byte)sVar12;
          sVar12 = *psVar17 >> 4;
          if (sVar12 < 0x100) {
            if (sVar12 < 0) {
              sVar12 = 0;
            }
          }
          else {
            sVar12 = 0xff;
          }
          *pbVar14 = (byte)sVar12 & ~param_7;
          sVar12 = psVar17[1] >> 4;
          if (sVar12 < 0x100) {
            if (sVar12 < 0) {
              sVar12 = 0;
            }
          }
          else {
            sVar12 = 0xff;
          }
          psVar17 = psVar17 + 4;
          pbVar14[1] = (byte)sVar12 & ~param_4;
          pbVar14 = pbVar14 + 4;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      local_8 = local_8 + -1;
      param_1 = param_1 + param_2 * 4;
      _param_6 = (void *)((int)_param_6 + param_2 * 8);
    } while (local_8 != 0);
  }
  operator_delete(pvVar13);
  return;
}

