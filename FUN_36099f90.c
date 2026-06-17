
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36099f90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  ulonglong uVar17;
  short sVar18;
  short sVar22;
  int iVar19;
  int iVar20;
  int iVar23;
  ulonglong uVar21;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  int iVar32;
  
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar3 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar1 + 0x218) = *puVar3;
    *(undefined4 *)(iVar1 + 0x21c) = puVar3[1];
  }
  puVar3 = *(undefined4 **)(DAT_362c9c80 + 0x60);
  bVar8 = (byte)*(undefined4 *)(DAT_362c9c7c + 0x28);
  iVar15 = *(int *)(DAT_362c9c7c + 0x24) >> (bVar8 & 0x1f);
  iVar12 = *(int *)(DAT_362c9c7c + 0x20) >> (bVar8 & 0x1f);
  lVar4 = GetMipmapOffset(DAT_362c9c64,iVar12,iVar15);
  iVar1 = *(int *)(DAT_362c9c7c + 0x60) + lVar4 * 4;
  uVar13 = iVar12 >> ((byte)DAT_362c9c64 & 0x1f);
  iVar15 = iVar15 >> ((byte)DAT_362c9c64 & 0x1f);
  _DAT_362c9d98 = uVar13 - 1;
  _DAT_362c9d9c = _DAT_362c9d98 >> 0x1f;
  DAT_362c9da0._0_4_ = iVar15 + -1;
  DAT_362c9da0._4_4_ = (int)DAT_362c9da0 >> 0x1f;
  piVar11 = *(int **)(DAT_362c9c80 + 100);
  uVar10 = DAT_362c9c70 & 0x3fffffff;
  piVar16 = (int *)((int)piVar11 + _DAT_362c9c6c * DAT_362c9c70 * 2);
  piVar14 = piVar11;
  if (uVar10 != 0) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *piVar16 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar16 = piVar16 + 1;
    }
  }
  uVar10 = DAT_362c9c70;
  if ((int)DAT_362c9c70 < (int)DAT_362c9c78) {
    if (DAT_362c9c70 * 2 == DAT_362c9c78) {
      _DAT_362c9d88 = 0;
      if (uVar13 != 0) {
        for (; (uVar13 >> _DAT_362c9d88 & 1) == 0; _DAT_362c9d88 = _DAT_362c9d88 + 1) {
        }
      }
      _DAT_362c9d88 = 0x20 - _DAT_362c9d88;
      _DAT_362c9da8 =
           CONCAT44(DAT_362c9da0._4_4_,(int)DAT_362c9da0) << 0x20 |
           CONCAT44(_DAT_362c9d9c,_DAT_362c9d98);
      iVar15 = 0;
      iVar6 = 0;
      uVar13 = DAT_362c9c70;
      uVar10 = DAT_362c9c78;
      iVar12 = _DAT_362c9c6c;
      do {
        do {
          iVar19 = (*(int *)((int)piVar11 + 2) - *piVar11) + iVar15 * 0x20;
          iVar23 = (*(int *)((int)piVar11 + DAT_362c9c70 * 2) - *piVar11) + iVar6 * 0x20;
          iVar25 = (piVar11[1] - *(int *)((int)piVar11 + 2)) + (iVar15 + (int)DAT_3622ead8) * 0x20;
          iVar28 = (*(int *)((int)piVar11 + DAT_362c9c70 * 2 + 2) - *(int *)((int)piVar11 + 2)) +
                   (iVar6 + (int)((ulonglong)DAT_3622ead8 >> 0x20)) * 0x20;
          iVar32 = *(int *)((int)piVar11 + DAT_362c9c70 * 2);
          iVar29 = (*(int *)((int)piVar11 + DAT_362c9c70 * 2 + 2) - iVar32) +
                   (iVar15 + (int)DAT_3622eae0) * 0x20;
          iVar30 = (piVar11[DAT_362c9c70] - iVar32) +
                   (iVar6 + (int)((ulonglong)DAT_3622eae0 >> 0x20)) * 0x20;
          iVar32 = *(int *)((int)piVar11 + DAT_362c9c70 * 2 + 4);
          iVar20 = *(int *)((int)piVar11 + DAT_362c9c70 * 4 + 2);
          iVar24 = *(int *)((int)piVar11 + DAT_362c9c70 * 2 + 2);
          iVar26 = (int)DAT_3622eae8;
          uVar21 = (ulonglong)DAT_3622eae8 >> 0x20;
          uVar17 = CONCAT44(iVar23 >> 4,iVar19 >> 4) & _DAT_362c9da8;
          *puVar3 = *(undefined4 *)
                     (iVar1 + ((int)uVar17 + (int)(uVar17 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88)))
                              * 4);
          uVar17 = CONCAT44(iVar23 + iVar28 >> 5,iVar19 + iVar25 >> 5) & _DAT_362c9da8;
          puVar3[1] = *(undefined4 *)
                       (iVar1 + ((int)uVar17 + (int)(uVar17 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))
                                ) * 4);
          uVar17 = CONCAT44(iVar23 + iVar30 >> 5,iVar19 + iVar29 >> 5) & _DAT_362c9da8;
          puVar3[uVar10] =
               *(undefined4 *)
                (iVar1 + ((int)uVar17 + (int)(uVar17 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar23 + iVar28 + iVar30 +
                            (iVar20 - iVar24) + (iVar6 + (int)uVar21) * 0x20 >> 6,
                            iVar19 + iVar25 + iVar29 + (iVar32 - iVar24) + (iVar15 + iVar26) * 0x20
                            >> 6) & _DAT_362c9da8;
          puVar3[uVar10 + 1] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          iVar15 = iVar15 + (int)DAT_3622ead8;
          iVar6 = iVar6 + (int)((ulonglong)DAT_3622ead8 >> 0x20);
          puVar3 = puVar3 + 2;
          piVar11 = (int *)((int)piVar11 + 2);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        puVar3 = puVar3 + uVar10;
        iVar15 = iVar15 + (int)DAT_3622eae0;
        iVar6 = iVar6 + (int)((ulonglong)DAT_3622eae0 >> 0x20);
        iVar12 = iVar12 + -1;
        uVar13 = DAT_362c9c70;
        uVar10 = DAT_362c9c78;
      } while (iVar12 != 0);
    }
    else if (DAT_362c9c70 * 4 == DAT_362c9c78) {
      _DAT_362c9d88 = 0;
      if (uVar13 != 0) {
        for (; (uVar13 >> _DAT_362c9d88 & 1) == 0; _DAT_362c9d88 = _DAT_362c9d88 + 1) {
        }
      }
      _DAT_362c9d88 = 0x20 - _DAT_362c9d88;
      _DAT_362c9da8 =
           CONCAT44(DAT_362c9da0._4_4_,(int)DAT_362c9da0) << 0x20 |
           CONCAT44(_DAT_362c9d9c,_DAT_362c9d98);
      iVar15 = 0;
      iVar6 = 0;
      iVar12 = _DAT_362c9c6c;
      do {
        do {
          uVar13 = DAT_362c9c78;
          iVar20 = (*(int *)((int)piVar11 + 2) - *piVar11) + iVar15 * 0x20;
          iVar24 = (*(int *)((int)piVar11 + DAT_362c9c70 * 2) - *piVar11) + iVar6 * 0x20;
          iVar26 = (piVar11[1] - *(int *)((int)piVar11 + 2)) + (iVar15 + (int)DAT_3622ead8) * 0x20;
          iVar19 = (*(int *)((int)piVar11 + DAT_362c9c70 * 2 + 2) - *(int *)((int)piVar11 + 2)) +
                   (iVar6 + (int)((ulonglong)DAT_3622ead8 >> 0x20)) * 0x20;
          iVar32 = *(int *)((int)piVar11 + DAT_362c9c70 * 2);
          iVar23 = (*(int *)((int)piVar11 + DAT_362c9c70 * 2 + 2) - iVar32) +
                   (iVar15 + (int)DAT_3622eae0) * 0x20;
          iVar25 = (piVar11[DAT_362c9c70] - iVar32) +
                   (iVar6 + (int)((ulonglong)DAT_3622eae0 >> 0x20)) * 0x20;
          iVar32 = *(int *)((int)piVar11 + DAT_362c9c70 * 2 + 2);
          iVar28 = (*(int *)((int)piVar11 + DAT_362c9c70 * 2 + 4) - iVar32) +
                   (iVar15 + (int)DAT_3622eae8) * 0x20;
          iVar32 = (*(int *)((int)piVar11 + DAT_362c9c70 * 4 + 2) - iVar32) +
                   (iVar6 + (int)((ulonglong)DAT_3622eae8 >> 0x20)) * 0x20;
          uVar21 = CONCAT44(iVar24 >> 3,iVar20 >> 3) & _DAT_362c9da8;
          *puVar3 = *(undefined4 *)
                     (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88)))
                              * 4);
          uVar21 = CONCAT44(iVar24 * 3 + iVar19 >> 5,iVar20 * 3 + iVar26 >> 5) & _DAT_362c9da8;
          puVar3[1] = *(undefined4 *)
                       (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))
                                ) * 4);
          uVar21 = CONCAT44(iVar24 + iVar19 >> 4,iVar20 + iVar26 >> 4) & _DAT_362c9da8;
          puVar3[2] = *(undefined4 *)
                       (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))
                                ) * 4);
          uVar21 = CONCAT44(iVar24 + iVar19 * 3 >> 5,iVar20 + iVar26 * 3 >> 5) & _DAT_362c9da8;
          puVar3[3] = *(undefined4 *)
                       (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))
                                ) * 4);
          uVar21 = CONCAT44(iVar24 * 3 + iVar25 >> 5,iVar20 * 3 + iVar23 >> 5) & _DAT_362c9da8;
          puVar3[uVar13] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar24 * 9 + iVar19 * 3 + iVar25 * 3 + iVar32 >> 7,
                            iVar20 * 9 + iVar26 * 3 + iVar23 * 3 + iVar28 >> 7) & _DAT_362c9da8;
          puVar3[uVar13 + 1] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar24 * 3 + iVar19 * 3 + iVar25 + iVar32 >> 6,
                            iVar20 * 3 + iVar26 * 3 + iVar23 + iVar28 >> 6) & _DAT_362c9da8;
          puVar3[uVar13 + 2] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar19 * 9 + iVar24 * 3 + iVar25 + iVar32 * 3 >> 7,
                            iVar26 * 9 + iVar20 * 3 + iVar23 + iVar28 * 3 >> 7) & _DAT_362c9da8;
          puVar3[uVar13 + 3] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar24 + iVar25 >> 4,iVar20 + iVar23 >> 4) & _DAT_362c9da8;
          puVar3[uVar13 * 2] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar24 * 3 + iVar19 + iVar25 * 3 + iVar32 >> 6,
                            iVar20 * 3 + iVar26 + iVar23 * 3 + iVar28 >> 6) & _DAT_362c9da8;
          puVar3[uVar13 * 2 + 1] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar24 + iVar19 + iVar25 + iVar32 >> 5,
                            iVar20 + iVar26 + iVar23 + iVar28 >> 5) & _DAT_362c9da8;
          puVar3[uVar13 * 2 + 2] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar24 + iVar19 * 3 + iVar25 + iVar32 * 3 >> 6,
                            iVar20 + iVar26 * 3 + iVar23 + iVar28 * 3 >> 6) & _DAT_362c9da8;
          puVar3[uVar13 * 2 + 3] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar24 + iVar25 * 3 >> 5,iVar20 + iVar23 * 3 >> 5) & _DAT_362c9da8;
          puVar3[uVar13 * 3] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar25 * 9 + iVar24 * 3 + iVar19 + iVar32 * 3 >> 7,
                            iVar23 * 9 + iVar20 * 3 + iVar26 + iVar28 * 3 >> 7) & _DAT_362c9da8;
          puVar3[uVar13 * 3 + 1] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar32 * 3 + iVar25 * 3 + iVar19 + iVar24 >> 6,
                            iVar28 * 3 + iVar23 * 3 + iVar26 + iVar20 >> 6) & _DAT_362c9da8;
          puVar3[uVar13 * 3 + 2] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          uVar21 = CONCAT44(iVar32 * 9 + iVar24 + iVar19 * 3 + iVar25 * 3 >> 7,
                            iVar28 * 9 + iVar20 + iVar26 * 3 + iVar23 * 3 >> 7) & _DAT_362c9da8;
          puVar3[uVar13 * 3 + 3] =
               *(undefined4 *)
                (iVar1 + ((int)uVar21 + (int)(uVar21 >> CONCAT44(uRam362c9d8c,_DAT_362c9d88))) * 4);
          iVar15 = iVar15 + (int)DAT_3622ead8;
          iVar6 = iVar6 + (int)((ulonglong)DAT_3622ead8 >> 0x20);
          puVar3 = puVar3 + 4;
          piVar11 = (int *)((int)piVar11 + 2);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        puVar3 = puVar3 + uVar13 * 3;
        iVar15 = iVar15 + (int)DAT_3622eae0;
        iVar6 = iVar6 + (int)((ulonglong)DAT_3622eae0 >> 0x20);
        iVar12 = iVar12 + -1;
        uVar10 = DAT_362c9c70;
      } while (iVar12 != 0);
    }
  }
  else {
    iVar12 = 0;
    if (DAT_362c9c78 != 0) {
      for (; (DAT_362c9c78 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
      }
    }
    uVar5 = (int)DAT_362c9c70 >> ((char)iVar12 - 1U & 0x1f);
    _DAT_362c9db0 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> _DAT_362c9db0 & 1) == 0; _DAT_362c9db0 = _DAT_362c9db0 + 1) {
      }
    }
    _DAT_362c9db0 = _DAT_362c9db0 + 4;
    iVar6 = (uVar5 - 2) * DAT_362c9c70;
    _DAT_362c9da8 = CONCAT44(DAT_362c9da8_4,(uVar13 | iVar15 << 0x10) - 0x10001);
    _DAT_362c9d90 = uVar13 << 0x10 | 1;
    uVar31 = 0;
    uVar13 = DAT_362c9c78;
    iVar12 = DAT_362c9c74;
    do {
      do {
        uVar2 = *(undefined4 *)((int)piVar11 + uVar10 * 2);
        sVar18 = (short)*piVar11;
        sVar22 = (short)((uint)*piVar11 >> 0x10);
        uVar27 = psraw(CONCAT22(sVar22 - sVar18,sVar18) & _DAT_3622eb00 |
                       (ulonglong)
                       CONCAT22((short)((uint)uVar2 >> 0x10) - sVar22,(short)uVar2 - sVar18),
                       CONCAT44(uRam362c9db4,_DAT_362c9db0));
        uVar27 = pmaddwd(CONCAT26((short)((ulonglong)uVar27 >> 0x30) +
                                  (short)((ulonglong)uVar31 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar27 >> 0x20) +
                                           (short)((ulonglong)uVar31 >> 0x20),
                                           CONCAT22((short)((ulonglong)uVar27 >> 0x10) +
                                                    (short)((ulonglong)uVar31 >> 0x10),
                                                    (short)uVar27 + (short)uVar31))) & _DAT_362c9da8
                         ,CONCAT44(uRam362c9d94,_DAT_362c9d90));
        *puVar3 = *(undefined4 *)(iVar1 + (int)uVar27 * 4);
        piVar11 = (int *)((int)piVar11 + uVar5);
        puVar3 = puVar3 + 1;
        iVar15 = (int)uVar31 + (int)DAT_3622eaf0;
        iVar32 = (int)((ulonglong)uVar31 >> 0x20) + (int)((ulonglong)DAT_3622eaf0 >> 0x20);
        uVar31 = CONCAT44(iVar32,iVar15);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      piVar11 = (int *)((int)piVar11 + iVar6);
      uVar31 = CONCAT44(iVar32 + (int)((ulonglong)DAT_3622eaf8 >> 0x20),iVar15 + (int)DAT_3622eaf8);
      iVar12 = iVar12 + -1;
      uVar13 = DAT_362c9c78;
    } while (iVar12 != 0);
  }
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar10 = *puVar7;
    uVar13 = puVar7[1];
    uVar5 = *(uint *)(iVar1 + 0x220);
    uVar9 = uVar10 - *(uint *)(iVar1 + 0x218);
    *(uint *)(iVar1 + 0x220) = uVar5 + uVar9;
    *(uint *)(iVar1 + 0x224) =
         *(int *)(iVar1 + 0x224) +
         ((uVar13 - *(int *)(iVar1 + 0x21c)) - (uint)(uVar10 < *(uint *)(iVar1 + 0x218))) +
         (uint)CARRY4(uVar5,uVar9);
    *(undefined4 *)(iVar1 + 0x218) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x21c) = 0xffffffff;
  }
  return;
}

