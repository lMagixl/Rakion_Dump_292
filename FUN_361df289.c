
void __cdecl
FUN_361df289(int *param_1,byte *param_2,size_t param_3,uint param_4,int param_5,int param_6)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  bool bVar5;
  void *pvVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  size_t sVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int *piVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_1c;
  int local_18;
  byte *local_14;
  int local_10;
  uint local_c;
  
  param_1[0x18] = param_1[0x18] | 0x40;
  if (param_6 == 0) {
    pvVar6 = FUN_361e5642(param_1,param_3);
    param_1[0x5e] = (int)pvVar6;
    iVar7 = 0;
    if (0 < (int)param_3) {
      do {
        *(char *)(iVar7 + param_1[0x5e]) = (char)iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_3);
    }
  }
  if ((int)param_4 < (int)param_3) {
    pbVar8 = FUN_361e5642(param_1,param_3);
    if (param_5 == 0) {
      pvVar6 = FUN_361e5642(param_1,param_3);
      iVar7 = 0;
      if (0 < (int)param_3) {
        do {
          ((undefined1 *)(iVar7 + (int)pvVar6))[(int)pbVar8 - (int)pvVar6] = (char)iVar7;
          *(undefined1 *)(iVar7 + (int)pvVar6) = (char)iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)param_3);
      }
      puVar17 = FUN_361e5642(param_1,0xc04);
      puVar16 = puVar17;
      for (iVar7 = 0x301; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      local_10 = 0x60;
      sVar10 = param_3;
      do {
        local_c = 0;
        if (sVar10 != 1 && -1 < (int)(sVar10 - 1)) {
          pbVar13 = param_2 + 2;
          do {
            iVar7 = local_c + 1;
            if (iVar7 < (int)sVar10) {
              pbVar9 = pbVar13 + 2;
              local_14 = (byte *)iVar7;
              do {
                uVar24 = (int)((uint)pbVar13[-2] - (uint)pbVar9[-1]) >> 0x1f;
                uVar11 = (int)((uint)*pbVar13 - (uint)pbVar9[1]) >> 0x1f;
                uVar12 = (int)((uint)pbVar13[-1] - (uint)*pbVar9) >> 0x1f;
                iVar18 = (((uint)pbVar13[-2] - (uint)pbVar9[-1] ^ uVar24) - uVar24) +
                         (((uint)*pbVar13 - (uint)pbVar9[1] ^ uVar11) - uVar11) +
                         (((uint)pbVar13[-1] - (uint)*pbVar9 ^ uVar12) - uVar12);
                if (iVar18 <= local_10) {
                  puVar16 = FUN_361e5642(param_1,8);
                  *puVar16 = puVar17[iVar18];
                  *(undefined1 *)(puVar16 + 1) = (undefined1)local_c;
                  *(undefined1 *)((int)puVar16 + 5) = local_14._0_1_;
                  puVar17[iVar18] = puVar16;
                }
                local_14 = (byte *)((int)local_14 + 1);
                pbVar9 = pbVar9 + 3;
              } while ((int)local_14 < (int)sVar10);
            }
            pbVar13 = pbVar13 + 3;
            local_c = iVar7;
          } while (iVar7 < (int)(sVar10 - 1));
        }
        local_c = 0;
        if (-1 < local_10) {
          do {
            piVar14 = (int *)puVar17[local_c];
            if (piVar14 != (int *)0x0) {
              pbVar13 = param_2 + sVar10 * 3;
              do {
                local_2c = (uint)*(byte *)(piVar14 + 1);
                pbVar9 = pbVar13;
                if (((int)(uint)pbVar8[local_2c] < (int)sVar10) &&
                   (uVar24 = (uint)*(byte *)((int)piVar14 + 5),
                   (int)(uint)pbVar8[uVar24] < (int)sVar10)) {
                  uVar11 = uVar24;
                  if ((sVar10 & 1) != 0) {
                    uVar11 = local_2c;
                    local_2c = uVar24;
                  }
                  pbVar15 = pbVar8 + uVar11;
                  bVar2 = *pbVar15;
                  pbVar9 = pbVar13 + -3;
                  *(undefined2 *)(param_2 + (uint)bVar2 * 3) = *(undefined2 *)pbVar9;
                  (param_2 + (uint)bVar2 * 3)[2] = pbVar13[-1];
                  iVar7 = 0;
                  sVar10 = sVar10 - 1;
                  if ((param_6 == 0) && (0 < (int)param_3)) {
                    do {
                      if (*(byte *)(param_1[0x5e] + iVar7) == *pbVar15) {
                        *(byte *)(param_1[0x5e] + iVar7) = pbVar8[local_2c];
                      }
                      if (*(byte *)(param_1[0x5e] + iVar7) == sVar10) {
                        *(byte *)(param_1[0x5e] + iVar7) = *pbVar15;
                      }
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < (int)param_3);
                  }
                  pbVar8[*(byte *)(sVar10 + (int)pvVar6)] = *pbVar15;
                  *(undefined1 *)((uint)*pbVar15 + (int)pvVar6) =
                       *(undefined1 *)(sVar10 + (int)pvVar6);
                  *pbVar15 = (byte)sVar10;
                  local_28._0_1_ = (undefined1)uVar11;
                  *(undefined1 *)(sVar10 + (int)pvVar6) = (undefined1)local_28;
                }
                if ((int)sVar10 <= (int)param_4) goto LAB_361df705;
                piVar14 = (int *)*piVar14;
                pbVar13 = pbVar9;
              } while (piVar14 != (int *)0x0);
              if ((int)sVar10 <= (int)param_4) break;
            }
            local_c = local_c + 1;
          } while ((int)local_c <= local_10);
        }
LAB_361df705:
        local_c = 0;
        do {
          puVar16 = (undefined4 *)puVar17[local_c];
          while (puVar16 != (undefined4 *)0x0) {
            puVar4 = (undefined4 *)*puVar16;
            FUN_361e5678((int)param_1,puVar16);
            puVar16 = puVar4;
          }
          puVar17[local_c] = 0;
          local_c = local_c + 1;
        } while ((int)local_c < 0x301);
        local_10 = local_10 + 0x60;
      } while ((int)param_4 < (int)sVar10);
      FUN_361e5678((int)param_1,puVar17);
      FUN_361e5678((int)param_1,pvVar6);
      FUN_361e5678((int)param_1,pbVar8);
    }
    else {
      iVar7 = 0;
      if (0 < (int)param_3) {
        do {
          pbVar8[iVar7] = (byte)iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)param_3);
      }
      iVar7 = param_3 - 1;
      if ((int)param_4 <= iVar7) {
        while (bVar5 = true, pbVar13 = pbVar8, local_2c = iVar7, 0 < iVar7) {
          do {
            pbVar9 = pbVar13 + 1;
            bVar2 = *pbVar13;
            if (*(ushort *)(param_5 + (uint)bVar2 * 2) < *(ushort *)(param_5 + (uint)*pbVar9 * 2)) {
              bVar5 = false;
              *pbVar13 = *pbVar9;
              *pbVar9 = bVar2;
            }
            local_2c = local_2c + -1;
            pbVar13 = pbVar9;
          } while (local_2c != 0);
          if ((bVar5) || (iVar7 = iVar7 + -1, iVar7 < (int)param_4)) break;
        }
      }
      iVar7 = 0;
      if (param_6 == 0) {
        iVar7 = 0;
        if (0 < (int)param_4) {
          local_14 = param_2;
          sVar10 = param_3;
          do {
            if ((int)param_4 <= (int)(uint)pbVar8[iVar7]) {
              do {
                sVar10 = sVar10 - 1;
              } while ((int)param_4 <= (int)(uint)pbVar8[sVar10]);
              pbVar13 = param_2 + sVar10 * 3;
              uVar1 = *(undefined2 *)pbVar13;
              bVar2 = pbVar13[2];
              *(undefined2 *)pbVar13 = *(undefined2 *)local_14;
              pbVar13[2] = local_14[2];
              *(undefined2 *)local_14 = uVar1;
              local_14[2] = bVar2;
              *(char *)(sVar10 + param_1[0x5e]) = (char)iVar7;
              *(char *)(iVar7 + param_1[0x5e]) = (char)sVar10;
            }
            local_14 = local_14 + 3;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)param_4);
        }
        local_c = 0;
        if (0 < (int)param_3) {
          do {
            uVar24 = (uint)*(byte *)(param_1[0x5e] + local_c);
            if ((int)param_4 <= (int)uVar24) {
              pbVar13 = param_2 + uVar24 * 3;
              uVar24 = (uint)pbVar13[1] - (uint)param_2[1];
              uVar21 = (int)uVar24 >> 0x1f;
              local_2c = 0;
              local_2c._0_1_ = 0;
              uVar11 = (uint)pbVar13[2] - (uint)param_2[2];
              uVar22 = (int)uVar11 >> 0x1f;
              uVar12 = (uint)*pbVar13 - (uint)*param_2;
              uVar23 = (int)uVar12 >> 0x1f;
              iVar7 = ((uVar24 ^ uVar21) - uVar21) + ((uVar11 ^ uVar22) - uVar22) +
                      ((uVar12 ^ uVar23) - uVar23);
              local_14 = (byte *)0x1;
              if (1 < (int)param_4) {
                pbVar9 = param_2 + 4;
                do {
                  uVar24 = (uint)*pbVar13 - (uint)pbVar9[-1];
                  uVar21 = (int)uVar24 >> 0x1f;
                  uVar11 = (uint)pbVar13[2] - (uint)pbVar9[1];
                  uVar22 = (int)uVar11 >> 0x1f;
                  uVar12 = (uint)pbVar13[1] - (uint)*pbVar9;
                  uVar23 = (int)uVar12 >> 0x1f;
                  iVar18 = ((uVar24 ^ uVar21) - uVar21) + ((uVar11 ^ uVar22) - uVar22) +
                           ((uVar12 ^ uVar23) - uVar23);
                  if (iVar18 < iVar7) {
                    local_2c = (uint)local_14;
                    iVar7 = iVar18;
                  }
                  local_14 = (byte *)((int)local_14 + 1);
                  pbVar9 = pbVar9 + 3;
                } while ((int)local_14 < (int)param_4);
              }
              *(byte *)(param_1[0x5e] + local_c) = (byte)local_2c;
            }
            local_c = local_c + 1;
          } while ((int)local_c < (int)param_3);
        }
      }
      else {
        pbVar13 = param_2;
        if (0 < (int)param_4) {
          do {
            if ((int)param_4 <= (int)(uint)pbVar8[iVar7]) {
              do {
                param_3 = param_3 - 1;
              } while ((int)param_4 <= (int)(uint)pbVar8[param_3]);
              *(undefined2 *)pbVar13 = *(undefined2 *)(param_2 + param_3 * 3);
              pbVar13[2] = (param_2 + param_3 * 3)[2];
            }
            iVar7 = iVar7 + 1;
            pbVar13 = pbVar13 + 3;
          } while (iVar7 < (int)param_4);
        }
      }
      FUN_361e5678((int)param_1,pbVar8);
    }
    param_3 = param_4;
  }
  if (param_1[0x41] == 0) {
    param_1[0x41] = (int)param_2;
  }
  *(short *)(param_1 + 0x42) = (short)param_3;
  if (param_6 != 0) {
    puVar16 = FUN_361e5642(param_1,0x8000);
    param_1[0x5d] = (int)puVar16;
    for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    }
    puVar17 = FUN_361e5642(param_1,0x8000);
    local_18 = 0;
    puVar16 = puVar17;
    for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar16 = 0xffffffff;
      puVar16 = puVar16 + 1;
    }
    if (0 < (int)param_3) {
      pbVar8 = param_2 + 2;
      do {
        bVar2 = pbVar8[-1];
        bVar3 = *pbVar8;
        local_1c = 0;
        local_28 = -(uint)(pbVar8[-2] >> 3);
        do {
          iVar7 = (local_28 ^ (int)local_28 >> 0x1f) - ((int)local_28 >> 0x1f);
          param_6 = 0;
          local_24 = -(uint)(bVar2 >> 3);
          do {
            iVar18 = (local_24 ^ (int)local_24 >> 0x1f) - ((int)local_24 >> 0x1f);
            local_10 = iVar7;
            if (iVar7 <= iVar18) {
              local_10 = iVar18;
            }
            param_4 = 0;
            local_c = -(uint)(bVar3 >> 3);
            do {
              iVar19 = (local_c ^ (int)local_c >> 0x1f) - ((int)local_c >> 0x1f);
              uVar24 = param_4 | param_6 << 5 | local_1c << 10;
              iVar20 = local_10;
              if (local_10 <= iVar19) {
                iVar20 = iVar19;
              }
              iVar20 = iVar19 + iVar20 + iVar18 + iVar7;
              if (iVar20 < (int)(uint)*(byte *)(uVar24 + (int)puVar17)) {
                *(char *)(uVar24 + (int)puVar17) = (char)iVar20;
                *(undefined1 *)(uVar24 + param_1[0x5d]) = (undefined1)local_18;
              }
              param_4 = param_4 + 1;
              local_c = local_c + 1;
            } while ((int)param_4 < 0x20);
            param_6 = param_6 + 1;
            local_24 = local_24 + 1;
          } while (param_6 < 0x20);
          local_1c = local_1c + 1;
          local_28 = local_28 + 1;
        } while (local_1c < 0x20);
        local_18 = local_18 + 1;
        pbVar8 = pbVar8 + 3;
      } while (local_18 < (int)param_3);
    }
    FUN_361e5678((int)param_1,puVar17);
  }
  return;
}

