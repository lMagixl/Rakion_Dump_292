
void __cdecl
FUN_3620c030(int param_1,int param_2,int param_3,char param_4,byte param_5,byte param_6)

{
  short *psVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  void *pvVar9;
  byte *pbVar10;
  void *pvVar11;
  short *psVar12;
  ushort *puVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  short sVar19;
  int iVar20;
  ushort local_30;
  int local_2c;
  int local_20;
  int local_8;
  
  iVar6 = param_2;
  iVar14 = param_1;
  pvVar9 = (void *)FUN_361bf99c(param_2 * param_3 * 6);
  if (0 < param_3) {
    local_20 = param_3;
    pvVar11 = pvVar9;
    do {
      if (0 < param_2) {
        psVar12 = (short *)((int)pvVar11 + 4);
        pbVar10 = (byte *)(param_1 + 2);
        iVar17 = param_2;
        do {
          bVar2 = pbVar10[-1];
          bVar3 = *pbVar10;
          psVar12[-2] = (ushort)pbVar10[-2] << 4;
          psVar12[-1] = (ushort)bVar2 << 4;
          *psVar12 = (ushort)bVar3 << 4;
          pbVar10 = pbVar10 + 3;
          psVar12 = psVar12 + 3;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      param_1 = param_2 * 3 + param_1;
      pvVar11 = (void *)((int)pvVar11 + param_2 * 6);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  local_8 = param_3 + -1;
  local_30 = (ushort)((1 << (0xcU - param_4 & 0x1f)) + -1);
  _param_5 = (ushort)((1 << (0xc - param_5 & 0x1f)) + -1);
  _param_6 = (ushort)((1 << (0xc - param_6 & 0x1f)) + -1);
  pvVar11 = pvVar9;
  if (0 < local_8) {
    do {
      iVar17 = 0;
      local_2c = 0;
      if (param_2 != 1 && -1 < param_2 + -1) {
        psVar12 = (short *)((int)pvVar11 + 4);
        psVar18 = (short *)((int)pvVar11 + param_2 * 6 + 4);
        do {
          sVar7 = psVar12[-2];
          sVar15 = psVar12[-1];
          sVar19 = *psVar12;
          sVar8 = sVar7 - ((short)local_30 / 2 + sVar7 & ~local_30);
          sVar4 = sVar15 - ((short)_param_5 / 2 + sVar15 & ~_param_5);
          sVar5 = sVar19 - ((short)_param_6 / 2 + sVar19 & ~_param_6);
          psVar12[-2] = sVar7 - sVar8;
          psVar12[-1] = sVar15 - sVar4;
          *psVar12 = sVar19 - sVar5;
          iVar20 = (int)sVar8;
          iVar16 = (int)sVar4;
          psVar12[1] = psVar12[1] + sVar8 / 2;
          iVar17 = (int)sVar5;
          psVar12[2] = psVar12[2] + sVar4 / 2;
          psVar12[3] = psVar12[3] + sVar5 / 2;
          psVar18[-2] = psVar18[-2] + (short)((int)(iVar20 + (iVar20 >> 0x1f & 3U)) >> 2);
          psVar18[-1] = psVar18[-1] + (short)((int)(iVar16 + (iVar16 >> 0x1f & 3U)) >> 2);
          *psVar18 = *psVar18 + (short)((int)(iVar17 + (iVar17 >> 0x1f & 3U)) >> 2);
          if (local_2c != 0) {
            sVar19 = (short)((int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3);
            psVar18[-5] = psVar18[-5] + sVar19;
            sVar15 = (short)((int)(iVar16 + (iVar16 >> 0x1f & 7U)) >> 3);
            psVar18[-4] = psVar18[-4] + sVar15;
            sVar7 = (short)((int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3);
            psVar18[-3] = psVar18[-3] + sVar7;
            if (2 < local_2c) {
              psVar1 = (short *)((int)pvVar11 + (local_2c + -3 + param_2) * 6);
              *psVar1 = *psVar1 + sVar19;
              psVar18[-10] = psVar18[-10] + sVar15;
              psVar18[-9] = psVar18[-9] + sVar7;
            }
          }
          iVar17 = local_2c + 1;
          psVar12 = psVar12 + 3;
          psVar18 = psVar18 + 3;
          local_2c = iVar17;
        } while (iVar17 < param_2 + -1);
      }
      sVar7 = *(short *)((int)pvVar11 + iVar17 * 6 + 2);
      puVar13 = (ushort *)((int)pvVar11 + iVar17 * 6);
      *puVar13 = *puVar13 + (short)local_30 / 2 & ~local_30;
      puVar13[1] = (short)_param_5 / 2 + sVar7 & ~_param_5;
      puVar13[2] = (short)_param_6 / 2 + puVar13[2] & ~_param_6;
      local_8 = local_8 + -1;
      pvVar11 = (void *)((int)pvVar11 + param_2 * 6);
    } while (local_8 != 0);
  }
  if (0 < param_2) {
    puVar13 = (ushort *)((int)pvVar11 + 4);
    do {
      puVar13[-2] = puVar13[-2] + (short)local_30 / 2 & ~local_30;
      puVar13[-1] = (short)_param_5 / 2 + puVar13[-1] & ~_param_5;
      *puVar13 = *puVar13 + (short)_param_6 / 2 & ~_param_6;
      param_2 = param_2 + -1;
      puVar13 = puVar13 + 3;
    } while (param_2 != 0);
  }
  sVar7 = (short)local_30 >> 4;
  sVar15 = (short)_param_5 >> 4;
  sVar19 = (short)_param_6 >> 4;
  if (0 < param_3) {
    param_1 = param_3;
    pvVar11 = pvVar9;
    do {
      if (0 < iVar6) {
        local_30._0_1_ = (byte)sVar7;
        param_5 = (byte)sVar15;
        param_6 = (byte)sVar19;
        pbVar10 = (byte *)(iVar14 + 2);
        psVar12 = (short *)((int)pvVar11 + 4);
        iVar17 = iVar6;
        do {
          sVar8 = psVar12[-2] >> 4;
          if (sVar8 < 0x100) {
            if (sVar8 < 0) {
              sVar8 = 0;
            }
          }
          else {
            sVar8 = 0xff;
          }
          pbVar10[-2] = ~(byte)local_30 & (byte)sVar8;
          sVar8 = psVar12[-1] >> 4;
          if (sVar8 < 0x100) {
            if (sVar8 < 0) {
              sVar8 = 0;
            }
          }
          else {
            sVar8 = 0xff;
          }
          pbVar10[-1] = ~param_5 & (byte)sVar8;
          sVar8 = *psVar12 >> 4;
          if (sVar8 < 0x100) {
            if (sVar8 < 0) {
              sVar8 = 0;
            }
          }
          else {
            sVar8 = 0xff;
          }
          psVar12 = psVar12 + 3;
          *pbVar10 = ~param_6 & (byte)sVar8;
          pbVar10 = pbVar10 + 3;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      iVar14 = iVar6 * 3 + iVar14;
      pvVar11 = (void *)((int)pvVar11 + iVar6 * 6);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  operator_delete(pvVar9);
  return;
}

