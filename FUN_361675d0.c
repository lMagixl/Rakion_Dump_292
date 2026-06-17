
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361675d0(int param_1,int *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float *pfVar16;
  int iVar17;
  float fVar18;
  float *pfVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float10 fVar27;
  ulonglong uVar28;
  int local_19c;
  float local_198;
  float local_194;
  int local_190;
  float local_18c;
  uint local_188;
  uint local_184;
  int local_180;
  int local_174;
  float local_164;
  float local_160;
  float local_15c;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e0;
  float *local_cc;
  float local_c8;
  int local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  int local_8c;
  int local_88;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c [3];
  float local_40 [4];
  float local_30 [4];
  float local_20 [4];
  float local_10 [4];
  
  fVar5 = CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc);
  iVar8 = *param_2;
  iVar6 = FUN_36035fa0(iVar8 + 0x34);
  if (iVar6 != 0) {
    iVar7 = FUN_36035f40(iVar8 + 0xbc);
    iVar6 = iVar7 + -1;
    local_9c = 0;
    if (-1 < iVar6) {
      pfVar19 = (float *)(*(int *)(iVar8 + 0xc0) + iVar6 * 0x18);
      do {
        local_9c = iVar6;
        if ((pfVar19[1] == _DAT_3622376c) ||
           ((fVar15 = (fVar5 - *pfVar19) / pfVar19[1], _DAT_3622376c <= fVar15 &&
            ((fVar15 < _DAT_36223384 == (fVar15 == _DAT_36223384) || (_DAT_36223384 <= fVar15))))))
        break;
        iVar6 = iVar6 + -1;
        pfVar19 = pfVar19 + -6;
        local_9c = 0;
      } while (-1 < iVar6);
    }
    while (local_9c < iVar7) {
      local_8c = local_9c * 0x18;
      pfVar19 = (float *)(*(int *)(*param_2 + 0xc0) + local_8c);
      local_9c = local_9c + 1;
      local_cc = (float *)0x0;
      if (local_9c < iVar7) {
        local_cc = pfVar19 + 6;
      }
      if (pfVar19[1] == _DAT_3622376c) {
        local_198 = 1.0;
      }
      else {
        local_198 = ((CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc))
                    - *pfVar19) / pfVar19[1];
        if (local_198 < _DAT_3622376c) {
          local_198 = 0.0;
        }
        else if (local_198 < _DAT_36223384 == (local_198 == _DAT_36223384)) {
          local_198 = 1.0;
        }
      }
      iVar8 = FUN_36035f50((int)(pfVar19 + 2));
      local_180 = 0;
      if (0 < iVar8) {
        do {
          iVar21 = local_180 * 0x20;
          piVar23 = (int *)((int)pfVar19[3] + iVar21);
          uVar9 = *(uint *)((int)pfVar19[3] + 0x14 + iVar21) & 1;
          local_194 = (float)piVar23[6];
          iVar6 = CModelInstance::FindAnimationByID
                            ((CModelInstance *)*param_2,piVar23[4],&local_88,&local_84);
          if (iVar6 != 0) {
            iVar6 = FUN_36035fb0((void *)(*param_2 + 0x34),local_88);
            uVar24 = piVar23[5];
            iVar6 = local_84 * 0x2c + *(int *)(iVar6 + 0x18);
            local_e0 = fVar5;
            if ((((uVar24 & 0x40) != 0) && (local_cc != (float *)0x0)) &&
               (fVar15 = *local_cc, fVar5 < fVar15 == (fVar5 == fVar15))) {
              local_e0 = fVar15;
            }
            local_18c = local_e0 - (float)piVar23[2];
            if (local_e0 - (float)piVar23[2] < _DAT_3622376c) {
              local_18c = _DAT_3622376c;
            }
            if (((uVar24 & 0x40) != 0) && (fVar5 < pfVar19[1] + *pfVar19)) {
              local_18c = ((pfVar19[1] + *pfVar19) - fVar5) + local_18c;
            }
            if ((uVar24 & 0x100) != 0) {
              local_194 = (float)piVar23[6] -
                          (local_e0 -
                          ((float)*(int *)(iVar6 + 4) * *(float *)(iVar6 + 8) * (float)piVar23[3] +
                          (float)piVar23[2])) / pfVar19[1];
              if (local_194 < _DAT_3622376c) {
                local_194 = 0.0;
              }
              else if (local_194 < _DAT_36223384 == (local_194 == _DAT_36223384)) {
                local_194 = 1.0;
              }
            }
            if ((uVar24 & 0x200) != 0) {
              local_18c = _DAT_3622376c;
            }
            if ((*piVar23 != 0) &&
               (local_18c = (float)piVar23[1] - (float)piVar23[2],
               (float)piVar23[1] - (float)piVar23[2] < _DAT_3622376c)) {
              local_18c = _DAT_3622376c;
            }
            local_18c = local_18c / (*(float *)(iVar6 + 8) * (float)piVar23[3]);
            if (uVar9 == 0) {
              if (((float)*(int *)(iVar6 + 4) < local_18c) &&
                 (local_18c = (float)(*(int *)(iVar6 + 4) + -1), (char)uVar24 < '\0')) {
                puVar2 = (uint *)(*(int *)(*(int *)(*param_2 + 0xc0) + 0xc + local_8c) + 0x14 +
                                 iVar21);
                *puVar2 = *puVar2 | 0x100;
              }
              uVar28 = FUN_361bfd6c();
              uVar24 = (uint)uVar28;
              uVar25 = *(int *)(iVar6 + 4) - 1;
              local_184 = uVar24;
              if ((int)uVar25 < (int)uVar24) {
                local_184 = uVar25;
              }
              local_188 = uVar24 + 1;
              if ((int)uVar25 < (int)(uVar24 + 1)) {
                local_188 = uVar25;
              }
            }
            else {
              iVar21 = *(int *)(iVar6 + 4);
              fVar27 = (float10)_CIfmod();
              local_18c = (float)fVar27;
              uVar28 = FUN_361bfd6c();
              local_188 = (uint)uVar28;
              local_184 = local_188;
              if (iVar21 <= (int)local_188) {
                local_184 = local_188 - iVar21;
              }
              local_188 = local_188 + 1;
              if (iVar21 <= (int)local_188) {
                local_188 = local_188 - iVar21;
              }
            }
            local_190 = FUN_3600cac0((undefined4 *)(iVar6 + 0x20));
            if (0 < local_190) {
              local_174 = 0;
              do {
                lVar10 = CSkeleton::FindBoneInLOD
                                   (*(CSkeleton **)*param_2,
                                    *(long *)(local_174 + *(int *)(iVar6 + 0x24)),param_2[0x1b]);
                if ((lVar10 != -1) && (param_2[0x1c] + lVar10 != -1)) {
                  iVar21 = (param_2[0x1c] + lVar10) * 0xe8 + *(int *)(param_1 + 0x10);
                  iVar22 = *(int *)(iVar6 + 0x24) + local_174;
                  if (*(int *)(iVar6 + 0x10) == 0) {
                    iVar11 = FUN_3600cc40((undefined4 *)(iVar22 + 0x1c));
                    uVar28 = FUN_36162c90(local_184,iVar11);
                    iVar13 = (int)uVar28;
                    if (uVar9 == 0) {
                      iVar14 = iVar11 + -1;
                      if (iVar13 + 1 <= iVar11 + -1) {
                        iVar14 = iVar13 + 1;
                      }
                    }
                    else {
                      iVar14 = iVar13 + 1;
                      if (iVar11 <= iVar14) {
                        iVar14 = iVar14 - iVar11;
                      }
                    }
                    iVar11 = *(int *)(iVar22 + 0x20);
                    uVar3 = *(ushort *)(iVar11 + iVar13 * 0x14);
                    uVar4 = *(ushort *)(iVar11 + iVar14 * 0x14);
                    pfVar12 = (float *)(iVar11 + iVar13 * 0x14 + 4);
                    pfVar16 = (float *)(iVar11 + iVar14 * 0x14 + 4);
                  }
                  else {
                    iVar11 = FUN_3600ccc0((undefined4 *)(iVar22 + 0x24));
                    uVar28 = FUN_36162c90(local_184,iVar11);
                    iVar13 = (int)uVar28;
                    if (uVar9 == 0) {
                      iVar14 = iVar13 + 1;
                      if (iVar11 + -1 < iVar13 + 1) {
                        iVar14 = iVar11 + -1;
                      }
                    }
                    else {
                      iVar14 = (iVar13 + 1) % iVar11;
                    }
                    iVar11 = *(int *)(iVar22 + 0x28);
                    puVar1 = (ushort *)(iVar11 + iVar13 * 0xc);
                    uVar3 = *puVar1;
                    fVar15 = *(float *)(iVar11 + 8 + iVar13 * 0xc) * _DAT_3623cd28;
                    uVar4 = *(ushort *)(iVar11 + iVar14 * 0xc);
                    iVar11 = iVar11 + iVar14 * 0xc;
                    FUN_36162f70(puVar1[2]);
                    FUN_3616e080(local_30,local_4c,fVar15);
                    fVar15 = *(float *)(iVar11 + 8) * _DAT_3623cd28;
                    FUN_36162f70(*(ushort *)(iVar11 + 4));
                    FUN_3616e080(local_40,local_4c,fVar15);
                    pfVar12 = local_30;
                    pfVar16 = local_40;
                  }
                  uVar24 = (uint)uVar3;
                  if (uVar24 < uVar4) {
                    iVar11 = uVar4 - uVar24;
                  }
                  else {
                    iVar11 = *(int *)(iVar6 + 4) - uVar24;
                  }
                  FUN_36154050(&local_5c,(local_18c - (float)uVar24) / (float)iVar11,pfVar12,pfVar16
                              );
                  if (local_194 <= (float)_DAT_3623cd20) {
                    pfVar12 = (float *)FUN_36154050(local_20,local_194,(float *)(iVar21 + 0x44),
                                                    &local_5c);
                    *(float *)(iVar21 + 0x44) = *pfVar12;
                    *(float *)(iVar21 + 0x48) = pfVar12[1];
                    *(float *)(iVar21 + 0x4c) = pfVar12[2];
                    *(float *)(iVar21 + 0x50) = pfVar12[3];
                  }
                  else {
                    *(float *)(iVar21 + 0x44) = local_5c;
                    *(undefined4 *)(iVar21 + 0x48) = local_58;
                    *(undefined4 *)(iVar21 + 0x4c) = local_54;
                    *(undefined4 *)(iVar21 + 0x50) = local_50;
                  }
                  iVar13 = FUN_3600cbf0((undefined4 *)(iVar22 + 0x14));
                  iVar11 = *(int *)(iVar22 + 0x18);
                  uVar28 = FUN_36162c90(local_184,iVar13);
                  iVar14 = (int)uVar28;
                  if (uVar9 == 0) {
                    iVar17 = iVar13 + -1;
                    if (iVar14 + 1 <= iVar13 + -1) {
                      iVar17 = iVar14 + 1;
                    }
                  }
                  else {
                    iVar17 = iVar14 + 1;
                    if (iVar13 <= iVar17) {
                      iVar17 = iVar17 - iVar13;
                    }
                  }
                  uVar25 = (uint)*(ushort *)(*(int *)(iVar22 + 0x18) + iVar14 * 0x10);
                  uVar24 = (uint)*(ushort *)(iVar17 * 0x10 + *(int *)(iVar22 + 0x18));
                  if (uVar25 < uVar24) {
                    local_19c = uVar24 - uVar25;
                  }
                  else {
                    local_19c = *(int *)(iVar6 + 4) - uVar25;
                  }
                  fVar15 = (local_18c - (float)uVar25) / (float)local_19c;
                  pfVar12 = (float *)(iVar14 * 0x10 + 4 + iVar11);
                  local_f8 = *pfVar12;
                  local_f4 = pfVar12[1];
                  local_f0 = pfVar12[2];
                  pfVar12 = (float *)(iVar17 * 0x10 + 4 + iVar11);
                  local_164 = *pfVar12;
                  local_160 = pfVar12[1];
                  local_15c = pfVar12[2];
                  fVar18 = *(float *)(iVar22 + 0x10) - *(float *)(iVar21 + 0x54);
                  if ((((fVar18 < _DAT_36231e48) || (_DAT_362253e4 <= fVar18)) &&
                      (*(float *)(iVar21 + 0x54) != *(float *)(iVar22 + 0x10))) &&
                     (*(float *)(iVar22 + 0x10) != _DAT_3622376c)) {
                    fVar18 = *(float *)(iVar21 + 0x54) / *(float *)(iVar22 + 0x10);
                    local_f8 = local_f8 * fVar18;
                    local_f4 = local_f4 * fVar18;
                    local_f0 = local_f0 * fVar18;
                    local_164 = local_164 * fVar18;
                    local_160 = local_160 * fVar18;
                    local_15c = local_15c * fVar18;
                  }
                  fVar18 = local_f8;
                  fVar20 = local_f4;
                  fVar26 = local_f0;
                  if ((fVar15 != _DAT_3622376c) &&
                     (fVar18 = local_164, fVar20 = local_160, fVar26 = local_15c,
                     fVar15 != _DAT_36223384)) {
                    local_68 = (local_164 - local_f8) * fVar15;
                    local_64 = (local_160 - local_f4) * fVar15;
                    local_60 = (local_15c - local_f0) * fVar15;
                    fVar18 = local_f8 + local_68;
                    fVar20 = local_f4 + local_64;
                    fVar26 = local_f0 + local_60;
                  }
                  pfVar12 = (float *)(iVar21 + 0x34);
                  local_80 = *pfVar12;
                  local_7c = *(float *)(iVar21 + 0x38);
                  local_78 = *(float *)(iVar21 + 0x3c);
                  if (local_194 == _DAT_3622376c) {
                    fVar18 = *pfVar12;
                    fVar20 = *(float *)(iVar21 + 0x38);
                    fVar26 = *(float *)(iVar21 + 0x3c);
                  }
                  else if (local_194 != _DAT_36223384) {
                    fVar18 = *pfVar12 + (fVar18 - local_80) * local_194;
                    fVar20 = *(float *)(iVar21 + 0x38) + (fVar20 - local_7c) * local_194;
                    fVar26 = *(float *)(iVar21 + 0x3c) + (fVar26 - local_78) * local_194;
                  }
                  *pfVar12 = fVar18;
                  *(float *)(iVar21 + 0x38) = fVar20;
                  *(float *)(iVar21 + 0x3c) = fVar26;
                  local_74 = local_f8;
                  local_70 = local_f4;
                  local_6c = local_f0;
                }
                local_174 = local_174 + 0x2c;
                local_190 = local_190 + -1;
              } while (local_190 != 0);
            }
            local_174 = 0;
            iVar21 = FUN_3600caa0((undefined4 *)(iVar6 + 0x18));
            if (0 < iVar21) {
              iVar21 = 0;
              do {
                iVar22 = FUN_36166680(param_2,&local_ac);
                if (iVar22 != 0) {
                  iVar22 = *(int *)(*(int *)(iVar6 + 0x1c) + 8 + iVar21);
                  fVar15 = *(float *)(iVar22 + local_184 * 4);
                  fVar18 = *(float *)(iVar22 + local_188 * 4);
                  fVar26 = local_18c - (float)(int)local_184;
                  fVar20 = fVar15;
                  if ((fVar26 != _DAT_3622376c) && (fVar20 = fVar18, fVar26 != _DAT_36223384)) {
                    fVar20 = (fVar18 - fVar15) * fVar26 + fVar15;
                  }
                  pfVar12 = (float *)(DAT_362fe9c4 + 8 + local_ac * 0xc);
                  fVar15 = *pfVar12;
                  fVar18 = fVar15;
                  if ((local_194 != _DAT_3622376c) && (fVar18 = fVar20, local_194 != _DAT_36223384))
                  {
                    fVar18 = (fVar20 - fVar15) * local_194 + fVar15;
                  }
                  *pfVar12 = fVar18;
                }
                local_174 = local_174 + 1;
                iVar21 = iVar21 + 0xc;
                iVar22 = FUN_3600caa0((undefined4 *)(iVar6 + 0x18));
              } while (local_174 < iVar22);
            }
          }
          local_180 = local_180 + 1;
        } while (local_180 < iVar8);
      }
      if (local_198 <= _DAT_3623cd1c) {
        local_180 = 0;
        if (0 < param_2[0x1d]) {
          do {
            piVar23 = (int *)((param_2[0x1c] + local_180) * 0xe8 + *(int *)(param_1 + 0x10));
            pfVar12 = (float *)FUN_36154050(local_10,local_198,(float *)(piVar23 + 8),
                                            (float *)(piVar23 + 0x11));
            fVar15 = _DAT_3622376c;
            piVar23[8] = (int)*pfVar12;
            piVar23[9] = (int)pfVar12[1];
            piVar23[10] = (int)pfVar12[2];
            pfVar19 = (float *)(piVar23 + 4);
            piVar23[0xb] = (int)pfVar12[3];
            local_a8 = *pfVar19;
            local_a4 = (float)piVar23[5];
            local_a0 = (float)piVar23[6];
            pfVar12 = (float *)(piVar23 + 0xd);
            if (local_198 == fVar15) {
              local_c8 = *pfVar19;
              fVar15 = (float)piVar23[5];
              fVar18 = (float)piVar23[6];
            }
            else if (local_198 == _DAT_36223384) {
              local_c8 = *pfVar12;
              fVar15 = (float)piVar23[0xe];
              fVar18 = (float)piVar23[0xf];
            }
            else {
              local_98 = (*pfVar12 - local_a8) * local_198;
              local_94 = ((float)piVar23[0xe] - local_a4) * local_198;
              local_90 = ((float)piVar23[0xf] - local_a0) * local_198;
              local_c8 = local_98 + *pfVar19;
              fVar15 = local_94 + (float)piVar23[5];
              fVar18 = local_90 + (float)piVar23[6];
            }
            iVar8 = *piVar23;
            *pfVar19 = local_c8;
            piVar23[5] = (int)fVar15;
            piVar23[6] = (int)fVar18;
            piVar23[0x11] = (int)*(float *)(iVar8 + 0x48);
            piVar23[0x12] = *(int *)(iVar8 + 0x4c);
            piVar23[0x13] = *(int *)(iVar8 + 0x50);
            piVar23[0x14] = *(int *)(iVar8 + 0x54);
            *pfVar12 = *(float *)(iVar8 + 0x3c);
            piVar23[0xe] = *(int *)(iVar8 + 0x40);
            piVar23[0xf] = *(int *)(iVar8 + 0x44);
            local_180 = local_180 + 1;
          } while (local_180 < param_2[0x1d]);
        }
      }
      else {
        local_190 = 0;
        if (0 < param_2[0x1d]) {
          do {
            piVar23 = (int *)((param_2[0x1c] + local_190) * 0xe8 + *(int *)(param_1 + 0x10));
            piVar23[8] = piVar23[0x11];
            piVar23[9] = piVar23[0x12];
            piVar23[10] = piVar23[0x13];
            piVar23[0xb] = piVar23[0x14];
            iVar8 = *piVar23;
            piVar23[4] = piVar23[0xd];
            piVar23[5] = piVar23[0xe];
            piVar23[6] = piVar23[0xf];
            piVar23[0x11] = *(int *)(iVar8 + 0x48);
            piVar23[0x12] = *(int *)(iVar8 + 0x4c);
            piVar23[0x13] = *(int *)(iVar8 + 0x50);
            piVar23[0x14] = *(int *)(iVar8 + 0x54);
            piVar23[0xd] = *(int *)(iVar8 + 0x3c);
            piVar23[0xe] = *(int *)(iVar8 + 0x40);
            piVar23[0xf] = *(int *)(iVar8 + 0x44);
            local_190 = local_190 + 1;
          } while (local_190 < param_2[0x1d]);
        }
      }
      iVar8 = param_2[0x1f];
      iVar6 = 0;
      if (0 < iVar8) {
        do {
          iVar21 = (param_2[0x1e] + iVar6) * 0x7c;
          iVar22 = iVar21 + DAT_362fe9a4;
          iVar11 = 0;
          if (0 < *(int *)(iVar21 + 0x14 + DAT_362fe9a4)) {
            do {
              iVar21 = *(int *)(iVar22 + 0x10) + iVar11;
              fVar15 = *(float *)(DAT_362fe9c4 + 8 + iVar21 * 0xc);
              iVar21 = DAT_362fe9c4 + iVar21 * 0xc;
              fVar18 = *(float *)(iVar21 + 4);
              fVar20 = fVar18;
              if ((local_198 != _DAT_3622376c) && (fVar20 = fVar15, local_198 != _DAT_36223384)) {
                fVar20 = (fVar15 - fVar18) * local_198 + fVar18;
              }
              *(float *)(iVar21 + 4) = fVar20;
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(iVar22 + 0x14));
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar8);
      }
    }
  }
  return;
}

