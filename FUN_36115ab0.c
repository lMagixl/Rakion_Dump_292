
/* WARNING: Removing unreachable block (ram,0x36115de1) */
/* WARNING: Removing unreachable block (ram,0x36116044) */
/* WARNING: Removing unreachable block (ram,0x36115dc0) */
/* WARNING: Removing unreachable block (ram,0x36115f18) */
/* WARNING: Removing unreachable block (ram,0x36115dff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36115ab0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  CTextureObject *pCVar28;
  int iVar29;
  int iVar30;
  long *plVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  float10 fVar34;
  float10 fVar35;
  float10 fVar36;
  ulonglong uVar37;
  float fVar38;
  long lVar39;
  long lVar40;
  float local_a8;
  int local_a4;
  int local_94;
  int local_88;
  float local_70;
  float local_64;
  
  CDrawPort::SetOrtho(*(CDrawPort **)(param_1 + 8));
  iVar29 = 0;
  if (DAT_362a4194 < 0) {
    DAT_362a4194 = 0;
    return;
  }
  if (DAT_362a4194 < 4) {
    if (DAT_362a4194 == 0) {
      return;
    }
  }
  else {
    DAT_362a4194 = 3;
  }
  iVar30 = param_1 + 0xddc;
  iVar21 = FUN_3611f430(iVar30);
  if (iVar21 != 0) {
    uVar22 = CDrawPort::GetID(*(CDrawPort **)(param_1 + 8));
    iVar21 = FUN_3611f430(iVar30);
    if (0 < iVar21) {
      iVar21 = 0;
      do {
        plVar31 = (long *)(*(int *)(param_1 + 0xde0) + iVar21);
        if ((*(ulong *)(*(int *)(param_1 + 0xde0) + 4 + iVar21) == uVar22) || (plVar31[0xb] != 0)) {
          lVar40 = plVar31[0xb];
          lVar39 = *plVar31;
          fVar38 = (float)plVar31[9];
          uVar37 = FUN_361bfd6c();
          lVar23 = (long)uVar37;
          uVar37 = FUN_361bfd6c();
          iVar24 = CDrawPort::IsPointVisible
                             (*(CDrawPort **)(param_1 + 8),(long)uVar37,lVar23,fVar38,lVar39,lVar40)
          ;
          if (iVar24 == 0) {
            uVar25 = plVar31[0xd] & 0xfffffffd;
          }
          else {
            uVar25 = plVar31[0xd] | 2;
          }
          plVar31[0xd] = uVar25;
        }
        iVar29 = iVar29 + 1;
        iVar21 = iVar21 + 0x38;
        iVar24 = FUN_3611f430(iVar30);
      } while (iVar29 < iVar24);
    }
    iVar29 = FUN_3611f430(iVar30);
    fVar38 = *(float *)(_pTimer + 8);
    local_88 = 0;
    if (0 < iVar29) {
      iVar30 = iVar29 * 0x38;
      iVar21 = 0;
      do {
        iVar24 = *(int *)(param_1 + 0xde0);
        iVar27 = *(int *)(iVar24 + 8 + iVar21);
        puVar33 = (undefined4 *)(iVar24 + iVar21);
        if (((iVar27 == 0) ||
            ((puVar33[1] == uVar22 &&
             (((*(byte *)(puVar33 + 0xd) & 1) == 0 || (*(int *)(iVar27 + 0x40) == 0)))))) ||
           ((puVar33[1] != uVar22 && ((float)puVar33[10] < fVar38 - _DAT_3622dd0c)))) {
          iVar29 = iVar29 + -1;
          puVar32 = (undefined4 *)(iVar24 + -0x38 + iVar30);
          for (iVar27 = 0xe; iVar27 != 0; iVar27 = iVar27 + -1) {
            *puVar33 = *puVar32;
            puVar32 = puVar32 + 1;
            puVar33 = puVar33 + 1;
          }
          iVar30 = iVar30 + -0x38;
        }
        else {
          local_88 = local_88 + 1;
          iVar21 = iVar21 + 0x38;
        }
      } while (local_88 < iVar29);
    }
    iVar30 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 0xde4) = iVar29;
    fVar6 = (float)(*(int *)(iVar30 + 0x10) - *(int *)(iVar30 + 8));
    fVar12 = _DAT_36223384 / fVar6;
    fVar13 = fVar6 * _DAT_36227cf0;
    fVar14 = (float)(*(int *)(iVar30 + 0x14) - *(int *)(iVar30 + 0xc)) * _DAT_36227cf0;
    if ((DAT_362a4194 < 2) || (DAT_362fcbcc < 2)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if ((DAT_362a4194 != 3) || (bVar20 = true, DAT_362fcbcc < 3)) {
      bVar20 = false;
    }
    local_88 = 0;
    iVar29 = FUN_3611f430(param_1 + 0xddc);
    if (0 < iVar29) {
      do {
        iVar29 = local_88 * 0x38 + *(int *)(param_1 + 0xde0);
        if ((*(ulong *)(local_88 * 0x38 + 4 + *(int *)(param_1 + 0xde0)) == uVar22) &&
           (*(int *)(*(CLightSource **)(iVar29 + 8) + 0x40) != 0)) {
          uVar25 = *(uint *)(iVar29 + 0x34);
          *(uint *)(iVar29 + 0x34) = uVar25 & 0xfffffffe;
          fVar2 = _DAT_36237a7c;
          if ((uVar25 & 2) != 0) {
            fVar2 = _DAT_3622dd0c;
          }
          fVar2 = (fVar38 - *(float *)(iVar29 + 0x28)) * fVar2 + *(float *)(iVar29 + 0x30);
          bVar5 = _DAT_3622376c <= fVar2;
          *(float *)(iVar29 + 0x30) = fVar2;
          fVar3 = _DAT_3622376c;
          if ((bVar5) && (fVar3 = fVar2, fVar2 < _DAT_36223384 == (fVar2 == _DAT_36223384))) {
            fVar3 = _DAT_36223384;
          }
          *(float *)(iVar29 + 0x30) = fVar3;
          *(float *)(iVar29 + 0x28) = fVar38;
          if (_DAT_362280f0 <= *(float *)(iVar29 + 0x30)) {
            fVar2 = *(float *)(iVar29 + 0x18);
            fVar3 = *(float *)(iVar29 + 0x1c);
            fVar7 = fVar13 - fVar2;
            fVar8 = fVar14 - fVar3;
            uVar26 = CLightSource::GetLightColor(*(CLightSource **)(iVar29 + 8));
            fVar15 = (float)(uVar26 >> 0x18);
            fVar11 = (float)(uVar26 >> 0x10 & 0xff);
            fVar17 = (float)(uVar26 >> 8 & 0xff);
            fVar16 = fVar15 * _DAT_36237a78 + fVar11 * _DAT_36227cf0 + fVar17 * _DAT_362287a8;
            fVar4 = SQRT(fVar7 * fVar7 + fVar8 * fVar8) * fVar12;
            local_64 = _DAT_36223384 - (fVar4 + fVar4);
            if (local_64 < _DAT_3622376c) {
              local_64 = 0.0;
            }
            local_70 = 1.0;
            if ((*(byte *)(iVar29 + 0x34) & 8) != 0) {
              uVar25 = (uint)ROUND((_DAT_362c3b5c - *(float *)(iVar29 + 0x14)) * DAT_362c3b58 *
                                   (float)DAT_362c3b4c * _DAT_36228814 - _DAT_3622880c);
              iVar21 = (int)uVar25 >> 8;
              iVar30 = DAT_362c3b4c + -1;
              if (iVar21 < 0) {
                iVar24 = 0;
              }
              else {
                iVar24 = iVar30;
                if (iVar21 <= iVar30) {
                  iVar24 = iVar21;
                }
              }
              iVar21 = iVar21 + 1;
              if (iVar21 < 0) {
                iVar30 = 0;
              }
              else if (iVar21 <= iVar30) {
                iVar30 = iVar21;
              }
              uVar25 = uVar25 & 0xff;
              local_70 = _DAT_36223384 -
                         (float)(((uint)*(byte *)(iVar24 + DAT_362c3b54) * (uVar25 ^ 0xff) +
                                 *(byte *)(iVar30 + DAT_362c3b54) * uVar25) * DAT_362c3b60 >> 0x10)
                         * _DAT_362287a4;
            }
            if ((*(byte *)(iVar29 + 0x34) & 4) != 0) {
              iVar30 = (int)ROUND((float)DAT_362c3b34 *
                                  (_DAT_362c3be0 * *(float *)(iVar29 + 0xc) +
                                   _DAT_362c3be8 * *(float *)(iVar29 + 0x14) +
                                   _DAT_362c3be4 * *(float *)(iVar29 + 0x10) + _DAT_362c3b24) *
                                  DAT_362c3b20);
              if (iVar30 < 0) {
                iVar21 = 0;
              }
              else {
                iVar21 = DAT_362c3b34 + -1;
                if (iVar30 <= DAT_362c3b34 + -1) {
                  iVar21 = iVar30;
                }
              }
              uVar25 = (uint)ROUND((float)DAT_362c3b38 * -(DAT_362c3b1c * *(float *)(iVar29 + 0x14))
                                   * _DAT_36228810 - _DAT_3622880c);
              iVar24 = (int)uVar25 >> 8;
              iVar30 = DAT_362c3b38 + -1;
              if (iVar24 < 0) {
                iVar27 = 0;
              }
              else {
                iVar27 = iVar30;
                if (iVar24 <= iVar30) {
                  iVar27 = iVar24;
                }
              }
              iVar24 = iVar24 + 1;
              if (iVar24 < 0) {
                iVar30 = 0;
              }
              else if (iVar24 <= iVar30) {
                iVar30 = iVar24;
              }
              uVar25 = uVar25 & 0xff;
              local_70 = (_DAT_36223384 -
                         (float)(((uint)*(byte *)(iVar27 + iVar21 * DAT_362c3b38 + DAT_362c3b44) *
                                  (uVar25 ^ 0xff) +
                                 *(byte *)(iVar30 + iVar21 * DAT_362c3b38 + DAT_362c3b44) * uVar25)
                                 * DAT_362c3b28 >> 0x10) * _DAT_362287a4) * local_70;
            }
            puVar33 = *(undefined4 **)(*(int *)(iVar29 + 8) + 0x40);
            if (bVar19) {
              local_a4 = FUN_3611f5f0(puVar33);
            }
            else {
              local_a4 = 1;
            }
            if (0 < local_a4) {
              iVar30 = 0;
              do {
                iVar21 = puVar33[1];
                fVar9 = *(float *)(*(int *)(iVar29 + 8) + 0x20) * *(float *)(iVar21 + 0x2c + iVar30)
                ;
                fVar4 = *(float *)(iVar29 + 0x20);
                pCVar28 = (CTextureObject *)(iVar21 + iVar30);
                fVar10 = *(float *)(*(int *)(iVar29 + 8) + 0x24) * *(float *)(pCVar28 + 0x2c);
                fVar18 = _DAT_3622376c;
                if ((fVar4 <= fVar10) && (fVar18 = _DAT_36223384, fVar9 <= fVar4)) {
                  fVar18 = (fVar10 - fVar4) / (fVar10 - fVar9);
                }
                uVar25 = *(uint *)(pCVar28 + 0x34);
                local_a8 = fVar18 * *(float *)(iVar29 + 0x30) * local_70;
                if ((uVar25 & 4) != 0) {
                  local_a8 = local_a8 * local_64;
                }
                fVar4 = *(float *)(pCVar28 + 0x24);
                if ((uVar25 & 2) != 0) {
                  fVar4 = fVar4 * local_a8;
                }
                if (_DAT_362280f0 <= fVar4) {
                  fVar9 = fVar6;
                  if ((uVar25 & 1) != 0) {
                    fVar9 = local_a8 * fVar6;
                  }
                  if ((_DAT_36228798 <= fVar9 * *(float *)(pCVar28 + 0x1c)) &&
                     (_DAT_36228798 <= fVar9 * *(float *)(pCVar28 + 0x20))) {
                    iVar21 = (int)ROUND(((fVar16 - fVar15) * *(float *)(pCVar28 + 0x28) + fVar15) *
                                        fVar4);
                    iVar24 = 0xff;
                    if (iVar21 < 0x100) {
                      iVar24 = iVar21;
                    }
                    iVar21 = (int)ROUND(((fVar16 - fVar11) * *(float *)(pCVar28 + 0x28) + fVar11) *
                                        fVar4);
                    local_94 = 0xff;
                    if (iVar21 < 0x100) {
                      local_94 = iVar21;
                    }
                    uVar25 = (uint)ROUND(((fVar16 - fVar17) * *(float *)(pCVar28 + 0x28) + fVar17) *
                                         fVar4);
                    if (0xff < (int)uVar25) {
                      uVar25 = 0xff;
                    }
                    CDrawPort::RenderLensFlare
                              (*(CDrawPort **)(param_1 + 8),pCVar28,
                               fVar7 * *(float *)(pCVar28 + 0x18) + fVar2,
                               fVar8 * *(float *)(pCVar28 + 0x18) + fVar3,
                               fVar9 * *(float *)(pCVar28 + 0x1c),fVar9 * *(float *)(pCVar28 + 0x20)
                               ,(fVar2 - fVar13) * fVar12 * *(float *)(pCVar28 + 0x30),
                               ((uint)CONCAT11((char)iVar24,(undefined1)local_94) << 8 |
                               uVar25 & 0xff) << 8);
                  }
                }
                iVar30 = iVar30 + 0x38;
                local_a4 = local_a4 + -1;
              } while (local_a4 != 0);
            }
            iVar30 = *(int *)(iVar29 + 8);
            iVar21 = *(int *)(iVar30 + 0x40);
            if ((bVar20) && (_DAT_362280f0 <= *(float *)(iVar21 + 0xc))) {
              fVar2 = *(float *)(iVar29 + 0x20);
              fVar3 = *(float *)(iVar30 + 0x20) * *(float *)(iVar21 + 0x10);
              fVar7 = *(float *)(iVar30 + 0x24) * *(float *)(iVar21 + 0x10);
              if (fVar2 <= fVar7) {
                if (fVar3 <= fVar2) {
                  fVar34 = ((float10)fVar7 - (float10)fVar2) / ((float10)fVar7 - (float10)fVar3);
                }
                else {
                  fVar34 = (float10)_DAT_36223384;
                }
              }
              else {
                fVar34 = (float10)_DAT_3622376c;
              }
              fVar36 = (float10)1.4426950408889634 *
                       ((float10)_DAT_36223384 /
                       (((float10)_DAT_36223384 - (float10)local_64) *
                        (float10)*(float *)(iVar21 + 8) *
                        ((float10)_DAT_36223384 - (float10)local_64) + (float10)_DAT_36223384));
              fVar35 = ROUND(fVar36);
              fVar36 = (float10)f2xm1(fVar36 - fVar35);
              fVar35 = (float10)fscale((float10)1 + fVar36,fVar35);
              uVar25 = (uint)ROUND((float)((fVar35 - (float10)_DAT_36223384) *
                                           (float10)*(float *)(iVar21 + 0xc) * fVar34 *
                                          (float10)_DAT_36237a74) * 255.0);
              if (uVar25 < 0x100) {
                if (uVar25 < 2) goto LAB_361164ac;
              }
              else {
                uVar25 = 0xff;
              }
              if (_DAT_362280f0 < fVar16) {
                fVar15 = (fVar16 - fVar15) * *(float *)(iVar21 + 0x14) + fVar15;
                fVar11 = (fVar16 - fVar11) * *(float *)(iVar21 + 0x14) + fVar11;
                fVar17 = (fVar16 - fVar17) * *(float *)(iVar21 + 0x14) + fVar17;
                fVar2 = fVar11;
                if (fVar11 < fVar17) {
                  fVar2 = fVar17;
                }
                if (fVar2 <= fVar15) {
                  fVar2 = fVar15;
                }
                fVar2 = _DAT_36223774 / fVar2;
                iVar29 = (int)ROUND(fVar2 * fVar15);
                if (0xff < iVar29) {
                  iVar29 = 0xff;
                }
                iVar30 = (int)ROUND(fVar11 * fVar2);
                if (0xff < iVar30) {
                  iVar30 = 0xff;
                }
                iVar21 = (int)ROUND(fVar2 * fVar17);
                if (0xff < iVar21) {
                  iVar21 = 0xff;
                }
                piVar1 = (int *)(*(int *)(param_1 + 8) + 0x4c);
                *piVar1 = *piVar1 + iVar29 * uVar25;
                piVar1 = (int *)(*(int *)(param_1 + 8) + 0x50);
                *piVar1 = *piVar1 + iVar30 * uVar25;
                piVar1 = (int *)(*(int *)(param_1 + 8) + 0x54);
                *piVar1 = *piVar1 + iVar21 * uVar25;
                piVar1 = (int *)(*(int *)(param_1 + 8) + 0x58);
                *piVar1 = *piVar1 + uVar25;
              }
            }
          }
        }
LAB_361164ac:
        local_88 = local_88 + 1;
        iVar29 = FUN_3611f430(param_1 + 0xddc);
      } while (local_88 < iVar29);
    }
  }
  return;
}

