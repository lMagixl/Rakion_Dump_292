
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_36200660(int param_1,int param_2,int param_3,uint *param_4,uint param_5,float *param_6,
            undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  ushort *puVar7;
  int *piVar8;
  double *pdVar9;
  undefined2 extraout_var;
  ushort *puVar10;
  ushort uVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  uint *puVar15;
  ushort uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  bool bVar20;
  float10 fVar21;
  int local_398;
  uint *local_394;
  uint local_390;
  int local_38c;
  uint *local_388;
  uint local_380;
  uint local_37c;
  undefined4 local_378;
  float *local_374;
  uint *local_370;
  float *local_36c;
  uint local_368;
  int local_364;
  int local_360;
  int local_35c;
  uint local_358;
  int local_354;
  uint *local_350;
  uint local_34c;
  uint local_348;
  int local_344 [4];
  undefined4 uStack_334;
  uint local_330;
  undefined4 uStack_32c;
  uint local_328;
  undefined4 uStack_324;
  uint local_320;
  undefined4 uStack_31c;
  uint local_318;
  undefined4 uStack_314;
  uint local_310;
  undefined4 uStack_30c;
  uint local_308;
  undefined4 uStack_304;
  uint local_300;
  undefined4 uStack_2fc;
  uint local_2f8;
  undefined4 uStack_2f4;
  uint local_2f0;
  undefined4 uStack_2ec;
  float local_2e8;
  float afStack_2e4 [16];
  uint local_2a4;
  uint local_2a0;
  int local_29c;
  uint local_298 [18];
  float local_250 [15];
  int local_214;
  float local_210 [2];
  double local_208 [48];
  double local_88 [3];
  int local_70;
  undefined1 local_6c;
  int local_68;
  ushort local_60 [10];
  uint local_4c [18];
  
  if (*(uint *)(param_1 + 0xc) < 4) {
    *(undefined4 *)(param_1 + 0xc) = 4;
  }
  if (*(uint *)(param_1 + 8) < 4) {
    *(undefined4 *)(param_1 + 8) = 4;
  }
  iVar14 = 3;
  *(undefined4 *)(param_3 + 4) = 0x81806;
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_3 + 0x10) = param_7;
  *(uint **)(param_3 + 0x24) = param_4;
  *(undefined4 *)(param_3 + 0x48) = 0x20;
  uVar2 = *(uint *)(param_1 + 0x4c);
  *(undefined4 *)(param_3 + 0x50) = 0x12345678;
  *(uint *)(param_3 + 0x4c) = uVar2 & 1 | 4;
  *(uint *)(param_3 + 0x54) = param_5;
  piVar8 = local_344;
  uVar2 = *(int *)(param_1 + 0x54) + 7U >> 3;
  local_360 = (param_1 + 0x58) - (int)local_344;
  do {
    iVar12 = 0;
    for (uVar3 = *(uint *)(local_360 + (int)piVar8); (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
      iVar12 = iVar12 + 1;
    }
    *piVar8 = iVar12;
    piVar8 = piVar8 + 1;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  uVar3 = *(uint *)(param_1 + 100);
  if (uVar3 != 0) {
    local_35c = 0;
    for (uVar4 = uVar3; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
      local_35c = local_35c + 1;
    }
    local_34c = (int)(((longlong)(int)(uVar3 >> ((byte)local_35c & 0x1f)) * (longlong)DAT_362afa2c &
                      0xffffffffU) / 0xff) << ((byte)local_35c & 0x1f);
  }
  local_350 = *(uint **)(param_1 + 0x24);
  local_388 = param_4;
  iVar14 = *(int *)(param_1 + 8);
  local_354 = 0;
  if (0 < iVar14) {
    do {
      local_37c = iVar14 - local_354;
      if (3 < local_37c) {
        local_37c = 4;
      }
      iVar14 = *(int *)(param_1 + 0xc);
      local_364 = 0;
      puVar15 = local_350;
      if (0 < iVar14) {
        do {
          local_348 = 0;
          pdVar9 = local_88;
          iVar12 = 3;
          pfVar5 = param_6;
          do {
            fVar13 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            *pdVar9 = (double)fVar13;
            pdVar9 = pdVar9 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          local_380 = iVar14 - local_364;
          if (3 < local_380) {
            local_380 = 4;
          }
          fVar13 = 0.0;
          local_210[0] = 0.0;
          if (param_2 == 0) {
            uVar3 = param_5 & 0xff;
            local_394 = puVar15;
            if (uVar3 == 0) {
              iVar14 = 0;
              local_398 = 0;
              do {
                pfVar5 = local_250 + iVar14;
                local_390 = 0;
                do {
                  if (((int)local_390 < (int)local_380) && (local_398 < (int)local_37c)) {
                    local_374 = (float *)*local_394;
                    *pfVar5 = fVar13;
                    local_36c = pfVar5 + 1;
                    local_210[0] = (float)((int)fVar13 + 1);
                    piVar8 = local_344;
                    iVar12 = 3;
                    pdVar9 = local_208 + (int)fVar13 * 3;
                    do {
                      puVar18 = (uint *)((int)piVar8 + local_360);
                      iVar6 = *piVar8;
                      piVar8 = piVar8 + 1;
                      local_310 = *puVar18 >> ((byte)iVar6 & 0x1f);
                      local_2f8 = (*puVar18 & (uint)local_374) >> ((byte)iVar6 & 0x1f);
                      uStack_2f4 = 0;
                      uStack_30c = 0;
                      iVar12 = iVar12 + -1;
                      *pdVar9 = (double)local_2f8 / (double)local_310;
                      fVar13 = local_210[0];
                      pdVar9 = pdVar9 + 1;
                    } while (iVar12 != 0);
                  }
                  else {
                    *pfVar5 = -NAN;
                  }
                  iVar14 = iVar14 + 1;
                  pfVar5 = pfVar5 + 1;
                  local_394 = (uint *)((int)local_394 + uVar2);
                  local_390 = local_390 + 1;
                } while ((int)local_390 < 4);
                local_398 = local_398 + 1;
                local_394 = (uint *)((int)local_394 + *(int *)(param_1 + 0x10) + uVar2 * -4);
              } while (local_398 < 4);
            }
            else if (uVar3 == 1) {
              iVar14 = 0;
              local_398 = 0;
              do {
                pfVar5 = local_250 + iVar14;
                local_390 = 0;
                do {
                  if ((((int)local_390 < (int)local_380) && (local_398 < (int)local_37c)) &&
                     ((local_374 = (float *)*local_394, local_374 < *(float **)(param_1 + 0x40) ||
                      (*(float **)(param_1 + 0x44) < local_374)))) {
                    *pfVar5 = fVar13;
                    local_36c = pfVar5 + 1;
                    local_210[0] = (float)((int)fVar13 + 1);
                    piVar8 = local_344;
                    iVar12 = 3;
                    pdVar9 = local_208 + (int)fVar13 * 3;
                    do {
                      puVar18 = (uint *)((int)piVar8 + local_360);
                      iVar6 = *piVar8;
                      piVar8 = piVar8 + 1;
                      local_320 = *puVar18 >> ((byte)iVar6 & 0x1f);
                      local_300 = (*puVar18 & (uint)local_374) >> ((byte)iVar6 & 0x1f);
                      uStack_2fc = 0;
                      uStack_31c = 0;
                      iVar12 = iVar12 + -1;
                      *pdVar9 = (double)local_300 / (double)local_320;
                      fVar13 = local_210[0];
                      pdVar9 = pdVar9 + 1;
                    } while (iVar12 != 0);
                  }
                  else {
                    *pfVar5 = -NAN;
                  }
                  iVar14 = iVar14 + 1;
                  pfVar5 = pfVar5 + 1;
                  local_390 = local_390 + 1;
                  local_394 = (uint *)((int)local_394 + uVar2);
                } while ((int)local_390 < 4);
                local_398 = local_398 + 1;
                local_394 = (uint *)((int)local_394 + *(int *)(param_1 + 0x10) + uVar2 * -4);
              } while (local_398 < 4);
            }
            else if (uVar3 == 2) {
              iVar14 = 0;
              local_398 = 0;
              do {
                pfVar5 = local_250 + iVar14;
                local_390 = 0;
                do {
                  if (((int)local_390 < (int)local_380) && (local_398 < (int)local_37c)) {
                    local_36c = (float *)*local_394;
                    if (local_34c < (*(uint *)(param_1 + 100) & (uint)local_36c)) {
                      *pfVar5 = fVar13;
                      local_374 = pfVar5 + 1;
                      local_210[0] = (float)((int)fVar13 + 1);
                      piVar8 = local_344;
                      iVar12 = 3;
                      pdVar9 = local_208 + (int)fVar13 * 3;
                      do {
                        puVar18 = (uint *)((int)piVar8 + local_360);
                        iVar6 = *piVar8;
                        piVar8 = piVar8 + 1;
                        local_308 = *puVar18 >> ((byte)iVar6 & 0x1f);
                        local_2f0 = (*puVar18 & (uint)local_36c) >> ((byte)iVar6 & 0x1f);
                        uStack_2ec = 0;
                        uStack_304 = 0;
                        iVar12 = iVar12 + -1;
                        *pdVar9 = (double)local_2f0 / (double)local_308;
                        fVar13 = local_210[0];
                        pdVar9 = pdVar9 + 1;
                      } while (iVar12 != 0);
                    }
                    else {
                      *pfVar5 = -NAN;
                    }
                  }
                  else {
                    *pfVar5 = -NAN;
                  }
                  iVar14 = iVar14 + 1;
                  pfVar5 = pfVar5 + 1;
                  local_390 = local_390 + 1;
                  local_394 = (uint *)((int)local_394 + uVar2);
                } while ((int)local_390 < 4);
                local_398 = local_398 + 1;
                local_394 = (uint *)((int)local_394 + *(int *)(param_1 + 0x10) + uVar2 * -4);
              } while (local_398 < 4);
            }
          }
          else if ((param_5 & 0xff) == 0) {
            iVar14 = 0;
            local_390 = 0;
            puVar18 = puVar15;
            do {
              pfVar5 = local_250 + iVar14;
              local_394 = (uint *)0x0;
              do {
                puVar19 = puVar18;
                if (((int)local_394 < (int)local_380) && ((int)local_390 < (int)local_37c)) {
                  uVar3 = *puVar19;
                  *pfVar5 = fVar13;
                  pbVar1 = (byte *)(param_2 + (uint)(byte)uVar3 * 4);
                  local_210[0] = (float)((int)fVar13 + 1);
                  local_208[(int)fVar13 * 3] = (double)*pbVar1 * _DAT_3624cf40;
                  local_208[(int)fVar13 * 3 + 1] = (double)pbVar1[1] * _DAT_3624cf40;
                  local_208[(int)fVar13 * 3 + 2] = (double)pbVar1[2] * _DAT_3624cf40;
                  fVar13 = (float)((int)fVar13 + 1);
                }
                else {
                  *pfVar5 = -NAN;
                }
                pfVar5 = pfVar5 + 1;
                iVar14 = iVar14 + 1;
                local_394 = (uint *)((int)local_394 + 1);
                puVar18 = (uint *)((int)puVar19 + 1);
              } while ((int)local_394 < 4);
              local_390 = local_390 + 1;
              puVar18 = (uint *)((int)puVar19 + *(int *)(param_1 + 0x10) + -3);
            } while ((int)local_390 < 4);
          }
          else if ((param_5 & 0xff) == 1) {
            local_38c = 0;
            local_390 = 0;
            puVar18 = puVar15;
            do {
              local_394 = (uint *)0x0;
              pfVar5 = local_250 + local_38c;
              do {
                puVar19 = puVar18;
                if (((int)local_394 < (int)local_380) && ((int)local_390 < (int)local_37c)) {
                  puVar18 = (uint *)(param_2 + (uint)(byte)*puVar19 * 4);
                  if ((*(uint *)(param_1 + 0x40) <= (*puVar18 & 0xffffff)) &&
                     ((*puVar18 & 0xffffff) <= *(uint *)(param_1 + 0x44))) goto LAB_362008b7;
                  *pfVar5 = fVar13;
                  local_210[0] = (float)((int)fVar13 + 1);
                  local_208[(int)fVar13 * 3] = (double)(byte)*puVar18 * _DAT_3624cf40;
                  local_208[(int)fVar13 * 3 + 1] =
                       (double)*(byte *)((int)puVar18 + 1) * _DAT_3624cf40;
                  local_208[(int)fVar13 * 3 + 2] =
                       (double)*(byte *)((int)puVar18 + 2) * _DAT_3624cf40;
                  fVar13 = (float)((int)fVar13 + 1);
                }
                else {
LAB_362008b7:
                  *pfVar5 = -NAN;
                }
                local_38c = local_38c + 1;
                pfVar5 = pfVar5 + 1;
                local_394 = (uint *)((int)local_394 + 1);
                puVar18 = (uint *)((int)puVar19 + 1);
              } while ((int)local_394 < 4);
              local_390 = local_390 + 1;
              puVar18 = (uint *)((int)puVar19 + *(int *)(param_1 + 0x10) + -3);
            } while ((int)local_390 < 4);
          }
          local_358 = param_5 & 0xff;
          uVar3 = param_5 & 0xff00;
          local_370 = puVar15;
          if (uVar3 == 0x100) {
            iVar14 = 0;
            do {
              if (iVar14 < (int)local_37c) {
                iVar12 = 0;
                do {
                  if (iVar12 < (int)local_380) {
                    local_328 = (*(uint *)(param_1 + 100) & *puVar15) >> ((byte)local_35c & 0x1f);
                    local_318 = *(uint *)(param_1 + 100) >> ((byte)local_35c & 0x1f);
                    uStack_324 = 0;
                    uStack_314 = 0;
                    floor(((double)local_328 / (double)local_318) * (double)_DAT_3624cf38 +
                          (double)_DAT_3624cf34);
                    iVar6 = ftol();
                    local_368 = iVar6 << 0xc | CONCAT22(extraout_var,(ushort)local_368 >> 4);
                    fVar13 = local_210[0];
                  }
                  else {
                    local_368 = CONCAT22(local_368._2_2_,(ushort)local_368 >> 4);
                  }
                  iVar12 = iVar12 + 1;
                  puVar15 = (uint *)((int)puVar15 + uVar2);
                } while (iVar12 < 4);
                *(ushort *)local_388 = (ushort)local_368;
              }
              else {
                *(undefined2 *)local_388 = 0;
              }
              local_388 = (uint *)((int)local_388 + 2);
              iVar14 = iVar14 + 1;
              puVar15 = (uint *)((int)puVar15 + *(int *)(param_1 + 0x10) + uVar2 * -4);
            } while (iVar14 < 4);
          }
          else if (uVar3 == 0x200) {
            local_2e8 = 0.0;
            local_38c = 0;
            local_390 = 0;
            do {
              local_394 = (uint *)0x0;
              pfVar5 = local_250 + local_38c;
              do {
                if (((int)local_394 < (int)local_380) && ((int)local_390 < (int)local_37c)) {
                  uVar4 = (*(uint *)(param_1 + 100) & *puVar15) >> ((byte)local_35c & 0x1f);
                  uVar17 = *(uint *)(param_1 + 100) >> ((byte)local_35c & 0x1f);
                  *pfVar5 = local_2e8;
                  if (uVar4 == uVar17) {
                    fVar21 = (float10)_DAT_3624cddc;
                  }
                  else {
                    local_344[3] = uVar4;
                    uStack_334 = 0;
                    local_330 = uVar17;
                    uStack_32c = 0;
                    fVar21 = (float10)uVar4 / (float10)uVar17;
                  }
                  afStack_2e4[(int)local_2e8] = (float)fVar21;
                  local_2e8 = (float)((int)local_2e8 + 1);
                }
                else {
                  *pfVar5 = -NAN;
                }
                local_38c = local_38c + 1;
                pfVar5 = pfVar5 + 1;
                local_394 = (uint *)((int)local_394 + 1);
                puVar15 = (uint *)((int)puVar15 + uVar2);
              } while ((int)local_394 < 4);
              local_390 = local_390 + 1;
              puVar15 = (uint *)((int)puVar15 + *(int *)(param_1 + 0x10) + uVar2 * -4);
            } while ((int)local_390 < 4);
            local_2a0 = param_5 & 0x20000;
            local_2a4 = param_5 & 0x10000;
            if (local_2e8 == 0.0) {
              local_298[1] = 0;
              local_298[0] = 0;
LAB_36200eb8:
              iVar14 = 0;
              local_298[1] = local_298[1] + 1;
              if (0 < (int)local_2e8) {
                puVar15 = local_298 + 2;
                do {
                  *puVar15 = 0;
                  iVar14 = iVar14 + 1;
                  puVar15 = puVar15 + 1;
                } while (iVar14 < (int)local_2e8);
              }
              local_29c = 6;
            }
            else {
              FUN_36207eb0(&local_2e8);
              fVar13 = local_210[0];
              if (local_298[0] == local_298[1]) goto LAB_36200eb8;
            }
            uVar4 = local_298[0];
            bVar20 = (int)local_298[1] < (int)local_298[0] == (local_29c == 6);
            if (bVar20) {
              local_298[0] = local_298[1];
              local_298[1] = uVar4;
            }
            puVar15 = local_298;
            iVar14 = 2;
            do {
              puVar18 = local_388;
              if (0xff < (int)*puVar15) {
                *puVar15 = 0xff;
              }
              if ((int)*puVar15 < 0) {
                *puVar15 = 0;
              }
              uVar4 = *puVar15;
              puVar15 = puVar15 + 1;
              *(char *)puVar18 = (char)uVar4;
              local_388 = (uint *)((int)puVar18 + 1);
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            uVar4 = 0;
            *local_388 = 0;
            local_390 = 0;
            *(undefined2 *)((int)puVar18 + 5) = 0;
            pfVar5 = local_250;
            puVar15 = local_388;
            do {
              local_374 = pfVar5 + 4;
              local_388 = (uint *)0x4;
              do {
                uVar4 = uVar4 >> 3;
                if (-1 < (int)*pfVar5) {
                  uVar17 = local_298[(int)*pfVar5 + 2];
                  if (bVar20) {
                    if (local_29c == 8) {
                      if ((int)uVar17 < 2) {
LAB_36200fee:
                        uVar17 = (uint)(uVar17 == 0);
                      }
                      else {
                        uVar17 = 9 - uVar17;
                      }
                    }
                    else if ((local_29c == 6) && ((int)uVar17 < 6)) {
                      if ((int)uVar17 < 2) goto LAB_36200fee;
                      uVar17 = 7 - uVar17;
                    }
                  }
                  uVar4 = uVar4 | uVar17 << 0x15;
                }
                pfVar5 = pfVar5 + 1;
                local_388 = (uint *)((int)local_388 + -1);
              } while (local_388 != (uint *)0x0);
              local_388 = puVar15;
              if ((local_390 & 1) != 0) {
                local_388 = (uint *)((int)puVar15 + 3);
                uVar17 = *puVar15 | uVar4;
                uVar4 = 0;
                *puVar15 = uVar17;
              }
              local_390 = local_390 + 1;
              pfVar5 = local_374;
              puVar15 = local_388;
            } while ((int)local_390 < 4);
          }
          if (uVar3 == 0) {
            local_6c = param_9;
          }
          else {
            local_6c = 1;
          }
          local_70 = ((int)(local_380 * local_37c) <= (int)fVar13) + 3;
          if (fVar13 == 0.0) {
            puVar7 = local_60;
            iVar14 = 2;
            do {
              puVar7[2] = 0;
              puVar7[3] = 0;
              puVar7[0] = 0;
              puVar7[1] = 0;
              puVar7[-0xffffffff00000002] = 0;
              puVar7[-0xffffffff00000001] = 0;
              puVar7 = puVar7 + 6;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          else {
            FUN_362041e0((double *)local_210);
          }
          iVar14 = 2;
          puVar7 = local_60;
          puVar10 = (ushort *)&local_378;
          do {
            iVar14 = iVar14 + -1;
            *puVar10 = (puVar7[-2] << 6 | *puVar7) << 5 | puVar7[2];
            puVar7 = puVar7 + 6;
            puVar10 = puVar10 + 1;
          } while (iVar14 != 0);
          bVar20 = local_378._2_2_ < (ushort)local_378;
          uVar11 = local_378._2_2_;
          if (local_378._2_2_ == (ushort)local_378) {
            if (local_358 == 2) {
              uVar11 = local_378._2_2_ + 1;
              iVar14 = 0;
              local_378 = CONCAT22(uVar11,(ushort)local_378);
              if (0 < (int)local_210[0]) {
                puVar15 = local_4c;
                do {
                  *puVar15 = 0;
                  iVar14 = iVar14 + 1;
                  puVar15 = puVar15 + 1;
                } while (iVar14 < (int)local_210[0]);
              }
              local_68 = 3;
              uVar16 = (ushort)local_378;
            }
            else {
              uVar16 = (ushort)local_378 + 1;
              iVar14 = 0;
              local_378 = CONCAT22(local_378._2_2_,uVar16);
              if (0 < (int)local_210[0]) {
                puVar15 = local_4c;
                do {
                  *puVar15 = 1;
                  iVar14 = iVar14 + 1;
                  puVar15 = puVar15 + 1;
                } while (iVar14 < (int)local_210[0]);
              }
            }
            bVar20 = uVar11 < uVar16;
          }
          bVar20 = bVar20 == (local_68 == 3);
          if (bVar20) {
            local_378 = CONCAT22((short)local_378,uVar11);
          }
          iVar14 = 0x10;
          *local_388 = local_378;
          piVar8 = &local_214;
          do {
            if (*piVar8 < 0) {
              local_348 = local_348 << 2 | 3;
            }
            else {
              local_348 = local_348 << 2 | local_4c[*piVar8];
              if (bVar20) {
                if (local_68 == 4) {
                  local_348 = local_348 ^ 1;
                }
                else {
                  local_348 = local_348 ^ ~local_348 >> 1 & 1;
                }
              }
            }
            piVar8 = piVar8 + -1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          local_388[1] = local_348;
          puVar15 = local_370 + uVar2;
          local_364 = local_364 + 4;
          iVar14 = *(int *)(param_1 + 0xc);
          local_388 = local_388 + 2;
        } while (local_364 < iVar14);
      }
      iVar14 = *(int *)(param_1 + 8);
      local_354 = local_354 + 4;
      local_350 = local_350 + *(int *)(param_1 + 0x10);
    } while (local_354 < iVar14);
  }
  return;
}

