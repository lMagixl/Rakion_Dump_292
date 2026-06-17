
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360bf5a0(int *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puVar12;
  float *pfVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int local_28;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362143b8;
  local_c = ExceptionList;
  iVar7 = *param_1;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(iVar7 + 0xf8)) {
    do {
      uVar15 = *(uint *)(local_14 * 0x70 + 0x48 + *(int *)(iVar7 + 0xfc));
      iVar17 = local_14 * 0x70 + *(int *)(iVar7 + 0xfc);
      if ((((uVar15 & 8) == 0) && (*(int *)(iVar17 + 0x68) != 0)) &&
         ((param_2 != -1 || ((uVar15 & 1) != 0)))) {
        uVar15 = (uint)(*(int *)(iVar17 + 0x50) != 0);
        iVar19 = 0;
        iVar11 = FUN_3600bef0((undefined4 *)(iVar17 + 0x5c));
        if (0 < iVar11) {
          do {
            iVar11 = *(int *)(*(int *)(iVar17 + 0x60) + iVar19 * 4) * 0x34;
            iVar16 = iVar11 + *(int *)(iVar7 + 0xf4);
            iVar11 = *(int *)(iVar11 + 0x18 + *(int *)(iVar7 + 0xf4)) * 0x38 +
                     *(int *)(*param_1 + 0x48);
            bVar14 = (byte)DAT_362cabc8;
            *(float *)(iVar11 + 0x2c) = (float)(*(int *)(iVar16 + 0xc) >> (bVar14 & 0x1f));
            iVar19 = iVar19 + 1;
            *(float *)(iVar11 + 0x30) = (float)(*(int *)(iVar16 + 0x10) >> (bVar14 & 0x1f));
            *(float *)(iVar11 + 0x18) = *(float *)(iVar11 + 0x2c) * *(float *)(iVar11 + 0x14);
            *(float *)(iVar11 + 0x1c) = *(float *)(iVar11 + 0x30) * *(float *)(iVar11 + 0x14);
            iVar11 = FUN_3600bef0((undefined4 *)(iVar17 + 0x5c));
          } while (iVar19 < iVar11);
        }
        local_18 = 0;
        iVar11 = FUN_3600bef0((undefined4 *)(iVar17 + 0x54));
        if (0 < iVar11) {
          do {
            iVar19 = *(int *)(*(int *)(iVar17 + 0x58) + local_18 * 4) * 0x1c;
            puVar18 = (undefined4 *)(iVar19 + *(int *)(iVar7 + 0xec));
            iVar11 = DAT_362cabc4;
            if (*(int *)(iVar19 + 0x14 + *(int *)(iVar7 + 0xec)) == param_2) {
              if (puVar18[6] == 0) {
                iVar19 = *(int *)puVar18[1];
                iVar21 = 1;
                iVar16 = FUN_3600c1d0(puVar18);
                iVar11 = DAT_362cabc4;
                if (1 < iVar16 + -1) {
                  do {
                    FUN_3608b290(DAT_362ca524,DAT_362ca528,DAT_362ca52c,(float *)(iVar19 + 0xc),
                                 (float *)(*(int *)(puVar18[1] + iVar21 * 8) + 0xc),
                                 (float *)(*(int *)(puVar18[1] + 8 + iVar21 * 8) + 0xc),uVar15);
                    iVar21 = iVar21 + 1;
                    iVar16 = FUN_3600c1d0(puVar18);
                    iVar11 = DAT_362cabc4;
                  } while (iVar21 < iVar16 + -1);
                }
              }
              else {
                iVar19 = 0;
                DAT_362cabc0 = 0;
                iVar11 = FUN_3600c1d0(puVar18);
                iVar11 = iVar11 + -1;
                local_28 = 0;
                iVar16 = FUN_3600c1d0(puVar18);
                if (0 < iVar16) {
                  do {
                    fVar6 = DAT_362cabf4;
                    puVar10 = PTR_DAT_362a5f04;
                    puVar22 = *(undefined4 **)(iVar11 * 8 + puVar18[1]);
                    fVar3 = DAT_362cabf4 - (float)puVar22[10];
                    iVar11 = *(int *)(puVar18[1] + local_28 * 8);
                    fVar8 = DAT_362cabf4 - *(float *)(iVar11 + 0x28);
                    bVar9 = fVar8 < _DAT_3622376c;
                    if (fVar3 < _DAT_3622376c) {
                      iVar16 = DAT_362cabc0;
                      if (!bVar9) {
                        fVar3 = fVar3 / (fVar3 - fVar8);
                        DAT_362cabc0 = iVar19 + 1;
                        *(float *)(PTR_DAT_362a5f04 + iVar19 * 0x38 + 0x20) =
                             (float)puVar22[8] -
                             ((float)puVar22[8] - *(float *)(iVar11 + 0x20)) * fVar3;
                        fVar8 = (float)puVar22[9];
                        fVar4 = *(float *)(iVar11 + 0x24);
                        fVar5 = (float)puVar22[9];
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x28) = fVar6;
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x24) = fVar5 - (fVar8 - fVar4) * fVar3
                        ;
                        fVar5 = _DAT_362cabf0 * _DAT_362cabe4;
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x14) = fVar5;
                        fVar8 = (float)puVar22[0xc];
                        fVar6 = *(float *)(iVar11 + 0x30);
                        fVar4 = (float)puVar22[0xc];
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x18) =
                             ((float)puVar22[0xb] -
                             ((float)puVar22[0xb] - *(float *)(iVar11 + 0x2c)) * fVar3) * fVar5;
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x1c) =
                             fVar5 * (fVar4 - (fVar8 - fVar6) * fVar3);
                        iVar19 = DAT_362cabc0;
                        iVar16 = DAT_362cabc0;
                      }
                    }
                    else {
                      puVar20 = puVar22;
                      puVar23 = (undefined4 *)(PTR_DAT_362a5f04 + iVar19 * 0x38);
                      for (iVar16 = 0xe; fVar6 = DAT_362cabf4, puVar10 = PTR_DAT_362a5f04,
                          iVar16 != 0; iVar16 = iVar16 + -1) {
                        *puVar23 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar23 = puVar23 + 1;
                      }
                      iVar19 = DAT_362cabc0 + 1;
                      iVar16 = iVar19;
                      if (bVar9) {
                        fVar8 = fVar8 / (fVar8 - fVar3);
                        DAT_362cabc0 = DAT_362cabc0 + 2;
                        *(float *)(PTR_DAT_362a5f04 + iVar19 * 0x38 + 0x20) =
                             *(float *)(iVar11 + 0x20) -
                             (*(float *)(iVar11 + 0x20) - (float)puVar22[8]) * fVar8;
                        fVar3 = *(float *)(iVar11 + 0x24);
                        fVar4 = (float)puVar22[9];
                        fVar5 = *(float *)(iVar11 + 0x24);
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x28) = fVar6;
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x24) = fVar5 - (fVar3 - fVar4) * fVar8
                        ;
                        fVar5 = _DAT_362cabf0 * _DAT_362cabe4;
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x14) = fVar5;
                        fVar3 = *(float *)(iVar11 + 0x30);
                        fVar6 = (float)puVar22[0xc];
                        fVar4 = *(float *)(iVar11 + 0x30);
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x18) =
                             (*(float *)(iVar11 + 0x2c) -
                             (*(float *)(iVar11 + 0x2c) - (float)puVar22[0xb]) * fVar8) * fVar5;
                        *(float *)(puVar10 + iVar19 * 0x38 + 0x1c) =
                             fVar5 * (fVar4 - (fVar3 - fVar6) * fVar8);
                        iVar19 = DAT_362cabc0;
                        iVar16 = DAT_362cabc0;
                      }
                    }
                    DAT_362cabc0 = iVar16;
                    iVar21 = local_28 + 1;
                    iVar16 = FUN_3600c1d0(puVar18);
                    iVar11 = local_28;
                    local_28 = iVar21;
                  } while (iVar21 < iVar16);
                }
                puVar10 = PTR_DAT_362a5f04;
                PTR_DAT_362a5f04 = PTR_DAT_362a5f00;
                PTR_DAT_362a5f00 = puVar10;
                DAT_362cabc4 = iVar19;
                if (DAT_362cabec < _DAT_3622376c) {
                  iVar11 = 0;
                  DAT_362cabc0 = 0;
                  local_28 = 0;
                  if (0 < iVar19) {
                    iVar19 = (iVar19 + -1) * 0x38;
                    iVar16 = 0;
                    do {
                      fVar6 = DAT_362cabec;
                      puVar10 = PTR_DAT_362a5f00;
                      puVar18 = (undefined4 *)(PTR_DAT_362a5f00 + iVar19);
                      fVar3 = *(float *)(PTR_DAT_362a5f00 + iVar19 + 0x28) - DAT_362cabec;
                      fVar8 = *(float *)(PTR_DAT_362a5f00 + iVar16 + 0x28) - DAT_362cabec;
                      bVar9 = fVar8 < _DAT_3622376c;
                      if (fVar3 < _DAT_3622376c) {
                        iVar19 = DAT_362cabc0;
                        if (!bVar9) {
                          puVar12 = PTR_DAT_362a5f04 + iVar11 * 0x38;
                          fVar8 = fVar3 / (fVar3 - fVar8);
                          DAT_362cabc0 = iVar11 + 1;
                          *(float *)(puVar12 + 0x20) =
                               (float)puVar18[8] -
                               ((float)puVar18[8] - *(float *)(PTR_DAT_362a5f00 + iVar16 + 0x20)) *
                               fVar8;
                          fVar3 = (float)puVar18[9];
                          fVar4 = *(float *)(puVar10 + iVar16 + 0x24);
                          fVar5 = (float)puVar18[9];
                          *(float *)(puVar12 + 0x28) = fVar6;
                          *(float *)(puVar12 + 0x24) = fVar5 - (fVar3 - fVar4) * fVar8;
                          fVar6 = _DAT_362cabe8 * _DAT_362cabe4;
                          *(float *)(puVar12 + 0x14) = fVar6;
                          fVar4 = (float)puVar18[0xc] -
                                  ((float)puVar18[0xc] - *(float *)(puVar10 + iVar16 + 0x30)) *
                                  fVar8;
                          fVar3 = (float)puVar18[0xb];
                          fVar5 = fVar3 - *(float *)(puVar10 + iVar16 + 0x2c);
                          goto LAB_360bfa5d;
                        }
                      }
                      else {
                        puVar22 = puVar18;
                        puVar20 = (undefined4 *)(PTR_DAT_362a5f04 + iVar11 * 0x38);
                        for (iVar19 = 0xe; fVar6 = DAT_362cabec, iVar19 != 0; iVar19 = iVar19 + -1)
                        {
                          *puVar20 = *puVar22;
                          puVar22 = puVar22 + 1;
                          puVar20 = puVar20 + 1;
                        }
                        iVar11 = DAT_362cabc0 + 1;
                        iVar19 = iVar11;
                        if (bVar9) {
                          puVar12 = PTR_DAT_362a5f04 + iVar11 * 0x38;
                          fVar8 = fVar8 / (fVar8 - fVar3);
                          DAT_362cabc0 = DAT_362cabc0 + 2;
                          *(float *)(puVar12 + 0x20) =
                               *(float *)(puVar10 + iVar16 + 0x20) -
                               (*(float *)(puVar10 + iVar16 + 0x20) - (float)puVar18[8]) * fVar8;
                          fVar3 = *(float *)(puVar10 + iVar16 + 0x24);
                          fVar4 = (float)puVar18[9];
                          fVar5 = *(float *)(puVar10 + iVar16 + 0x24);
                          *(float *)(puVar12 + 0x28) = fVar6;
                          *(float *)(puVar12 + 0x24) = fVar5 - (fVar3 - fVar4) * fVar8;
                          fVar6 = _DAT_362cabe8 * _DAT_362cabe4;
                          *(float *)(puVar12 + 0x14) = fVar6;
                          fVar4 = *(float *)(puVar10 + iVar16 + 0x30) -
                                  (*(float *)(puVar10 + iVar16 + 0x30) - (float)puVar18[0xc]) *
                                  fVar8;
                          fVar3 = *(float *)(puVar10 + iVar16 + 0x2c);
                          fVar5 = fVar3 - (float)puVar18[0xb];
LAB_360bfa5d:
                          *(float *)(puVar12 + 0x18) = (fVar3 - fVar5 * fVar8) * fVar6;
                          *(float *)(puVar12 + 0x1c) = fVar6 * fVar4;
                          iVar11 = DAT_362cabc0;
                          iVar19 = DAT_362cabc0;
                        }
                      }
                      DAT_362cabc0 = iVar19;
                      local_28 = local_28 + 1;
                      iVar19 = iVar16;
                      iVar16 = iVar16 + 0x38;
                    } while (local_28 < DAT_362cabc4);
                  }
                  puVar10 = PTR_DAT_362a5f04;
                  PTR_DAT_362a5f04 = PTR_DAT_362a5f00;
                  PTR_DAT_362a5f00 = puVar10;
                  DAT_362cabc4 = iVar11;
                }
                iVar11 = 0;
                if (0 < DAT_362cabc4) {
                  iVar19 = 0;
                  do {
                    puVar10 = PTR_DAT_362a5f00;
                    if (DAT_362cabe0 == 0) {
                      *(float *)(PTR_DAT_362a5f00 + iVar19 + 0xc) =
                           _DAT_362cac04 * *(float *)(PTR_DAT_362a5f00 + iVar19 + 0x28) +
                           _DAT_362cabfc * *(float *)(PTR_DAT_362a5f00 + iVar19 + 0x20) +
                           _DAT_362cac14;
                      fVar3 = (_DAT_362cac10 - _DAT_362cabf8 * *(float *)(puVar10 + iVar19 + 0x24))
                              - _DAT_362cac00 * *(float *)(puVar10 + iVar19 + 0x28);
                    }
                    else {
                      fVar3 = _DAT_36223384 / *(float *)(PTR_DAT_362a5f00 + iVar19 + 0x28);
                      *(float *)(PTR_DAT_362a5f00 + iVar19 + 0xc) =
                           fVar3 * *(float *)(PTR_DAT_362a5f00 + iVar19 + 0x20) * _DAT_362cac0c +
                           _DAT_362cac14;
                      fVar3 = _DAT_362cac10 -
                              fVar3 * *(float *)(puVar10 + iVar19 + 0x24) * _DAT_362cac08;
                    }
                    *(float *)(puVar10 + iVar19 + 0x10) = fVar3;
                    iVar11 = iVar11 + 1;
                    iVar19 = iVar19 + 0x38;
                  } while (iVar11 < DAT_362cabc4);
                }
                iVar11 = 0;
                iVar19 = 0;
                DAT_362cabc0 = 0;
                if (0 < DAT_362cabc4) {
                  iVar16 = (DAT_362cabc4 + -1) * 0x38;
                  iVar21 = 0;
                  do {
                    pfVar1 = (float *)(PTR_DAT_362a5f00 + iVar16 + 0xc);
                    pfVar2 = (float *)(PTR_DAT_362a5f00 + iVar21 + 0xc);
                    fVar3 = *pfVar1;
                    fVar8 = *pfVar2;
                    bVar9 = fVar8 < _DAT_3622376c;
                    if (fVar3 < _DAT_3622376c) {
                      iVar16 = DAT_362cabc0;
                      if (!bVar9) {
                        puVar18 = (undefined4 *)(PTR_DAT_362a5f04 + iVar11 * 0x38 + 0xc);
                        fVar3 = fVar3 / (fVar3 - fVar8);
                        DAT_362cabc0 = iVar11 + 1;
                        *puVar18 = 0;
                        puVar18[1] = pfVar1[1] - (pfVar1[1] - pfVar2[1]) * fVar3;
                        puVar18[2] = pfVar1[2] - (pfVar1[2] - pfVar2[2]) * fVar3;
                        puVar18[3] = pfVar1[3] - (pfVar1[3] - pfVar2[3]) * fVar3;
                        fVar3 = pfVar1[4] - (pfVar1[4] - pfVar2[4]) * fVar3;
                        goto LAB_360bfcbd;
                      }
                    }
                    else {
                      pfVar13 = (float *)(PTR_DAT_362a5f04 + iVar11 * 0x38 + 0xc);
                      *pfVar13 = *pfVar1;
                      pfVar13[1] = pfVar1[1];
                      pfVar13[2] = pfVar1[2];
                      pfVar13[3] = pfVar1[3];
                      pfVar13[4] = pfVar1[4];
                      iVar11 = DAT_362cabc0 + 1;
                      iVar16 = iVar11;
                      if (bVar9) {
                        puVar18 = (undefined4 *)(PTR_DAT_362a5f04 + iVar11 * 0x38 + 0xc);
                        fVar8 = fVar8 / (fVar8 - fVar3);
                        DAT_362cabc0 = DAT_362cabc0 + 2;
                        *puVar18 = 0;
                        puVar18[1] = pfVar2[1] - (pfVar2[1] - pfVar1[1]) * fVar8;
                        puVar18[2] = pfVar2[2] - (pfVar2[2] - pfVar1[2]) * fVar8;
                        puVar18[3] = pfVar2[3] - (pfVar2[3] - pfVar1[3]) * fVar8;
                        fVar3 = pfVar2[4] - (pfVar2[4] - pfVar1[4]) * fVar8;
LAB_360bfcbd:
                        puVar18[4] = fVar3;
                        iVar11 = DAT_362cabc0;
                        iVar16 = DAT_362cabc0;
                      }
                    }
                    DAT_362cabc0 = iVar16;
                    iVar19 = iVar19 + 1;
                    iVar16 = iVar21;
                    iVar21 = iVar21 + 0x38;
                  } while (iVar19 < DAT_362cabc4);
                }
                DAT_362cabc4 = iVar11;
                puVar12 = PTR_DAT_362a5f04;
                puVar10 = PTR_DAT_362a5f00;
                iVar11 = 0;
                iVar19 = 0;
                PTR_DAT_362a5f00 = PTR_DAT_362a5f04;
                PTR_DAT_362a5f04 = puVar10;
                DAT_362cabc0 = 0;
                if (0 < DAT_362cabc4) {
                  fVar3 = (float)_DAT_362cac18;
                  iVar16 = (DAT_362cabc4 + -1) * 0x38;
                  iVar21 = 0;
                  do {
                    pfVar1 = (float *)(PTR_DAT_362a5f00 + iVar16 + 0xc);
                    fVar6 = fVar3 - *pfVar1;
                    pfVar2 = (float *)(PTR_DAT_362a5f00 + iVar21 + 0xc);
                    fVar8 = fVar3 - *pfVar2;
                    bVar9 = fVar8 < _DAT_3622376c;
                    if (fVar6 < _DAT_3622376c) {
                      iVar16 = DAT_362cabc0;
                      if (!bVar9) {
                        pfVar13 = (float *)(PTR_DAT_362a5f04 + iVar11 * 0x38 + 0xc);
                        fVar6 = fVar6 / (fVar6 - fVar8);
                        DAT_362cabc0 = iVar11 + 1;
                        *pfVar13 = fVar3;
                        pfVar13[1] = pfVar1[1] - (pfVar1[1] - pfVar2[1]) * fVar6;
                        pfVar13[2] = pfVar1[2] - (pfVar1[2] - pfVar2[2]) * fVar6;
                        pfVar13[3] = pfVar1[3] - (pfVar1[3] - pfVar2[3]) * fVar6;
                        fVar8 = pfVar1[4] - (pfVar1[4] - pfVar2[4]) * fVar6;
                        goto LAB_360bfe58;
                      }
                    }
                    else {
                      pfVar13 = (float *)(PTR_DAT_362a5f04 + iVar11 * 0x38 + 0xc);
                      *pfVar13 = *pfVar1;
                      pfVar13[1] = pfVar1[1];
                      pfVar13[2] = pfVar1[2];
                      pfVar13[3] = pfVar1[3];
                      pfVar13[4] = pfVar1[4];
                      iVar11 = DAT_362cabc0 + 1;
                      iVar16 = iVar11;
                      if (bVar9) {
                        pfVar13 = (float *)(PTR_DAT_362a5f04 + iVar11 * 0x38 + 0xc);
                        fVar8 = fVar8 / (fVar8 - fVar6);
                        DAT_362cabc0 = DAT_362cabc0 + 2;
                        *pfVar13 = fVar3;
                        pfVar13[1] = pfVar2[1] - (pfVar2[1] - pfVar1[1]) * fVar8;
                        pfVar13[2] = pfVar2[2] - (pfVar2[2] - pfVar1[2]) * fVar8;
                        pfVar13[3] = pfVar2[3] - (pfVar2[3] - pfVar1[3]) * fVar8;
                        fVar8 = pfVar2[4] - (pfVar2[4] - pfVar1[4]) * fVar8;
LAB_360bfe58:
                        pfVar13[4] = fVar8;
                        iVar11 = DAT_362cabc0;
                        iVar16 = DAT_362cabc0;
                      }
                    }
                    DAT_362cabc0 = iVar16;
                    iVar19 = iVar19 + 1;
                    iVar16 = iVar21;
                    puVar12 = PTR_DAT_362a5f00;
                    iVar21 = iVar21 + 0x38;
                  } while (iVar19 < DAT_362cabc4);
                }
                iVar19 = 1;
                PTR_DAT_362a5f00 = PTR_DAT_362a5f04;
                pfVar1 = (float *)(PTR_DAT_362a5f04 + 0xc);
                PTR_DAT_362a5f04 = puVar12;
                DAT_362cabc0 = DAT_362cabc4;
                if (1 < iVar11 + -1) {
                  iVar16 = 0x38;
                  DAT_362cabc4 = iVar11;
                  do {
                    FUN_3608b290(DAT_362ca524,DAT_362ca528,DAT_362ca52c,pfVar1,
                                 (float *)(PTR_DAT_362a5f00 + iVar16 + 0xc),
                                 (float *)(PTR_DAT_362a5f00 + iVar16 + 0x44),uVar15);
                    iVar19 = iVar19 + 1;
                    iVar16 = iVar16 + 0x38;
                    iVar11 = DAT_362cabc4;
                  } while (iVar19 < DAT_362cabc4 + -1);
                }
              }
            }
            DAT_362cabc4 = iVar11;
            local_18 = local_18 + 1;
            iVar11 = FUN_3600bef0((undefined4 *)(iVar17 + 0x54));
          } while (local_18 < iVar11);
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(iVar7 + 0xf8));
  }
  ExceptionList = local_c;
  return;
}

