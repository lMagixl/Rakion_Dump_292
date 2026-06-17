
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl DitherBitmap(long,unsigned long *,unsigned long *,long,long,long,long) */

void __cdecl
DitherBitmap(long param_1,ulong *param_2,ulong *param_3,long param_4,long param_5,long param_6,
            long param_7)

{
  ulong uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  ulong *puVar18;
  short sVar19;
  short sVar22;
  short sVar23;
  ulonglong uVar20;
  short sVar24;
  undefined8 uVar21;
  ushort uVar25;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  undefined8 uVar26;
  ushort uVar30;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  undefined8 uVar31;
  ushort uVar35;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  undefined8 uVar36;
  
                    /* 0x8abf0  1518  ?DitherBitmap@@YAXJPAK0JJJJ@Z */
  if (param_6 == 0) {
    param_6 = param_4;
  }
  if (param_7 == 0) {
    param_7 = param_5;
  }
  iVar15 = param_6 - param_4;
  if ((param_4 < 4) || (param_5 < 2)) {
    if ((param_3 != param_2) && (iVar15 = param_6 * param_7, iVar15 != 0)) {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        *param_3 = *param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      }
    }
    return;
  }
  switch(param_1) {
  case 1:
    DAT_362c5660 = &DAT_362a4288;
    _DAT_362c5670 = 2;
    _DAT_362c5678 = 0x3f3f3f3f;
    break;
  case 2:
    DAT_362c5660 = &DAT_362a4288;
    _DAT_362c5670 = 1;
    _DAT_362c5678 = 0x7f7f7f7f;
    break;
  case 3:
    _DAT_362c5668 = 0x30003;
    goto LAB_3608ad85;
  case 4:
    DAT_362c5660 = &DAT_362a4288;
    goto LAB_3608acef;
  case 5:
    DAT_362c5660 = &DAT_362a4248;
    _DAT_362c5670 = 1;
    _DAT_362c5678 = 0x7f7f7f7f;
    break;
  case 6:
    DAT_362c5660 = &DAT_362a4208;
    _DAT_362c5670 = 1;
    _DAT_362c5678 = 0x7f7f7f7f;
    break;
  case 7:
    _DAT_362c5668 = 0x70007;
    goto LAB_3608ad85;
  case 8:
    DAT_362c5660 = &DAT_362a4248;
    goto LAB_3608acef;
  case 9:
    DAT_362c5660 = &DAT_362a4208;
LAB_3608acef:
    _DAT_362c5670 = 0;
    _DAT_362c5678 = 0xffffffff;
    break;
  case 10:
    _DAT_362c5668 = 0xf000f;
LAB_3608ad85:
    _DAT_362c566c = _DAT_362c5668;
    if ((param_3 != param_2) && (iVar14 = param_6 * param_7, puVar18 = param_3, iVar14 != 0)) {
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar18 = *param_2;
        param_2 = param_2 + 1;
        puVar18 = puVar18 + 1;
      }
    }
    iVar14 = param_5 + -1;
    do {
      iVar17 = param_4 + -1;
      do {
        uVar1 = *param_3;
        uVar20 = (ulonglong)
                 CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),
                                                  uVar1) >> 0x18),
                                          CONCAT12((char)(uVar1 >> 8),(short)uVar1)) >> 0x10),
                          (short)uVar1) & 0xffffffff00ff00ff & CONCAT44(_DAT_362c566c,_DAT_362c5668)
        ;
        sVar19 = (short)uVar20;
        sVar22 = (short)(uVar20 >> 0x10);
        sVar23 = (short)(uVar20 >> 0x20);
        sVar24 = (short)(uVar20 >> 0x30);
        uVar25 = (ushort)(sVar19 * (short)DAT_362a42c8) >> 4;
        uVar27 = (ushort)(sVar22 * (short)((ulonglong)DAT_362a42c8 >> 0x10)) >> 4;
        uVar28 = (ushort)(sVar23 * (short)((ulonglong)DAT_362a42c8 >> 0x20)) >> 4;
        uVar29 = (ushort)(sVar24 * (short)((ulonglong)DAT_362a42c8 >> 0x30)) >> 4;
        uVar30 = (ushort)(sVar19 * (short)DAT_362a42d0) >> 4;
        uVar32 = (ushort)(sVar22 * (short)((ulonglong)DAT_362a42d0 >> 0x10)) >> 4;
        uVar33 = (ushort)(sVar23 * (short)((ulonglong)DAT_362a42d0 >> 0x20)) >> 4;
        uVar34 = (ushort)(sVar24 * (short)((ulonglong)DAT_362a42d0 >> 0x30)) >> 4;
        uVar35 = (ushort)(sVar19 * (short)DAT_362a42d8) >> 4;
        uVar37 = (ushort)(sVar22 * (short)((ulonglong)DAT_362a42d8 >> 0x10)) >> 4;
        uVar38 = (ushort)(sVar23 * (short)((ulonglong)DAT_362a42d8 >> 0x20)) >> 4;
        uVar39 = (ushort)(sVar24 * (short)((ulonglong)DAT_362a42d8 >> 0x30)) >> 4;
        sVar19 = ((sVar19 - uVar25) - uVar30) - uVar35;
        sVar22 = ((sVar22 - uVar27) - uVar32) - uVar37;
        sVar23 = ((sVar23 - uVar28) - uVar33) - uVar38;
        sVar24 = ((sVar24 - uVar29) - uVar34) - uVar39;
        uVar36 = paddusb((ulonglong)
                         CONCAT13((uVar39 != 0) * (uVar39 < 0x100) * (char)uVar39 - (0xff < uVar39),
                                  CONCAT12((uVar38 != 0) * (uVar38 < 0x100) * (char)uVar38 -
                                           (0xff < uVar38),
                                           CONCAT11((uVar37 != 0) * (uVar37 < 0x100) * (char)uVar37
                                                    - (0xff < uVar37),
                                                    (uVar35 != 0) * (uVar35 < 0x100) * (char)uVar35
                                                    - (0xff < uVar35)))),
                         *(undefined8 *)(param_3 + 1));
        uVar26 = paddusb((ulonglong)
                         CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 - (0xff < uVar29),
                                  CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                           (0xff < uVar28),
                                           CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27
                                                    - (0xff < uVar27),
                                                    (uVar25 != 0) * (uVar25 < 0x100) * (char)uVar25
                                                    - (0xff < uVar25)))),
                         *(undefined8 *)(param_3 + param_6 + -1));
        uVar31 = paddusb((ulonglong)
                         CONCAT13((uVar34 != 0) * (uVar34 < 0x100) * (char)uVar34 - (0xff < uVar34),
                                  CONCAT12((uVar33 != 0) * (uVar33 < 0x100) * (char)uVar33 -
                                           (0xff < uVar33),
                                           CONCAT11((uVar32 != 0) * (uVar32 < 0x100) * (char)uVar32
                                                    - (0xff < uVar32),
                                                    (uVar30 != 0) * (uVar30 < 0x100) * (char)uVar30
                                                    - (0xff < uVar30)))),
                         *(undefined8 *)(param_3 + param_6));
        uVar21 = paddusb((ulonglong)
                         CONCAT13((0 < sVar24) * (sVar24 < 0x100) * (char)sVar24 - (0xff < sVar24),
                                  CONCAT12((0 < sVar23) * (sVar23 < 0x100) * (char)sVar23 -
                                           (0xff < sVar23),
                                           CONCAT11((0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 -
                                                    (0xff < sVar22),
                                                    (0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 -
                                                    (0xff < sVar19)))),
                         *(undefined8 *)(param_3 + param_6 + 1));
        param_3[1] = (ulong)uVar36;
        param_3[param_6 + -1] = (ulong)uVar26;
        param_3[param_6] = (ulong)uVar31;
        param_3[param_6 + 1] = (ulong)uVar21;
        param_3 = param_3 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      puVar18 = param_3 + param_4 + iVar15;
      if (iVar14 == 1) {
        return;
      }
      iVar17 = param_4 + -1;
      do {
        uVar1 = *puVar18;
        uVar20 = (ulonglong)
                 CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),
                                                  uVar1) >> 0x18),
                                          CONCAT12((char)(uVar1 >> 8),(short)uVar1)) >> 0x10),
                          (short)uVar1) & 0xffffffff00ff00ff & CONCAT44(_DAT_362c566c,_DAT_362c5668)
        ;
        sVar19 = (short)uVar20;
        sVar22 = (short)(uVar20 >> 0x10);
        sVar23 = (short)(uVar20 >> 0x20);
        sVar24 = (short)(uVar20 >> 0x30);
        uVar25 = (ushort)(sVar19 * (short)DAT_362a42c8) >> 4;
        uVar27 = (ushort)(sVar22 * (short)((ulonglong)DAT_362a42c8 >> 0x10)) >> 4;
        uVar28 = (ushort)(sVar23 * (short)((ulonglong)DAT_362a42c8 >> 0x20)) >> 4;
        uVar29 = (ushort)(sVar24 * (short)((ulonglong)DAT_362a42c8 >> 0x30)) >> 4;
        uVar30 = (ushort)(sVar19 * (short)DAT_362a42d0) >> 4;
        uVar32 = (ushort)(sVar22 * (short)((ulonglong)DAT_362a42d0 >> 0x10)) >> 4;
        uVar33 = (ushort)(sVar23 * (short)((ulonglong)DAT_362a42d0 >> 0x20)) >> 4;
        uVar34 = (ushort)(sVar24 * (short)((ulonglong)DAT_362a42d0 >> 0x30)) >> 4;
        uVar35 = (ushort)(sVar19 * (short)DAT_362a42d8) >> 4;
        uVar37 = (ushort)(sVar22 * (short)((ulonglong)DAT_362a42d8 >> 0x10)) >> 4;
        uVar38 = (ushort)(sVar23 * (short)((ulonglong)DAT_362a42d8 >> 0x20)) >> 4;
        uVar39 = (ushort)(sVar24 * (short)((ulonglong)DAT_362a42d8 >> 0x30)) >> 4;
        sVar19 = ((sVar19 - uVar25) - uVar30) - uVar35;
        sVar22 = ((sVar22 - uVar27) - uVar32) - uVar37;
        sVar23 = ((sVar23 - uVar28) - uVar33) - uVar38;
        sVar24 = ((sVar24 - uVar29) - uVar34) - uVar39;
        uVar36 = paddusb((ulonglong)
                         CONCAT13((uVar39 != 0) * (uVar39 < 0x100) * (char)uVar39 - (0xff < uVar39),
                                  CONCAT12((uVar38 != 0) * (uVar38 < 0x100) * (char)uVar38 -
                                           (0xff < uVar38),
                                           CONCAT11((uVar37 != 0) * (uVar37 < 0x100) * (char)uVar37
                                                    - (0xff < uVar37),
                                                    (uVar35 != 0) * (uVar35 < 0x100) * (char)uVar35
                                                    - (0xff < uVar35)))),
                         *(undefined8 *)(puVar18 + -1));
        uVar21 = paddusb((ulonglong)
                         CONCAT13((0 < sVar24) * (sVar24 < 0x100) * (char)sVar24 - (0xff < sVar24),
                                  CONCAT12((0 < sVar23) * (sVar23 < 0x100) * (char)sVar23 -
                                           (0xff < sVar23),
                                           CONCAT11((0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 -
                                                    (0xff < sVar22),
                                                    (0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 -
                                                    (0xff < sVar19)))),
                         *(undefined8 *)(puVar18 + param_6 + -1));
        uVar31 = paddusb((ulonglong)
                         CONCAT13((uVar34 != 0) * (uVar34 < 0x100) * (char)uVar34 - (0xff < uVar34),
                                  CONCAT12((uVar33 != 0) * (uVar33 < 0x100) * (char)uVar33 -
                                           (0xff < uVar33),
                                           CONCAT11((uVar32 != 0) * (uVar32 < 0x100) * (char)uVar32
                                                    - (0xff < uVar32),
                                                    (uVar30 != 0) * (uVar30 < 0x100) * (char)uVar30
                                                    - (0xff < uVar30)))),
                         *(undefined8 *)(puVar18 + param_6));
        uVar26 = paddusb((ulonglong)
                         CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 - (0xff < uVar29),
                                  CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                           (0xff < uVar28),
                                           CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27
                                                    - (0xff < uVar27),
                                                    (uVar25 != 0) * (uVar25 < 0x100) * (char)uVar25
                                                    - (0xff < uVar25)))),
                         *(undefined8 *)(puVar18 + param_6 + 1));
        puVar18[-1] = (ulong)uVar36;
        puVar18[param_6 + -1] = (ulong)uVar21;
        puVar18[param_6] = (ulong)uVar31;
        puVar18[param_6 + 1] = (ulong)uVar26;
        puVar18 = puVar18 + -1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      param_3 = puVar18 + param_6;
      iVar14 = iVar14 + -2;
    } while (iVar14 != 0);
    return;
  default:
    if (param_3 == param_2) {
      return;
    }
    iVar15 = param_6 * param_7;
    if (iVar15 != 0) {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        *param_3 = *param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
      }
    }
    return;
  }
  puVar12 = DAT_362c5660;
  _DAT_362c5674 = 0;
  uVar13 = 0;
  _DAT_362c567c = _DAT_362c5678;
  do {
    uVar21 = *(undefined8 *)((int)puVar12 + uVar13 * 4);
    uVar26 = *(undefined8 *)((int)puVar12 + uVar13 * 4 + 8);
    lVar3 = CONCAT44(_DAT_362c5674,_DAT_362c5670);
    lVar4 = CONCAT44(_DAT_362c5674,_DAT_362c5670);
    lVar5 = CONCAT44(_DAT_362c5674,_DAT_362c5670);
    lVar6 = CONCAT44(_DAT_362c5674,_DAT_362c5670);
    lVar7 = CONCAT44(_DAT_362c5674,_DAT_362c5670);
    lVar8 = CONCAT44(_DAT_362c5674,_DAT_362c5670);
    lVar9 = CONCAT44(_DAT_362c5674,_DAT_362c5670);
    lVar10 = CONCAT44(_DAT_362c5674,_DAT_362c5670);
    uVar20 = CONCAT44(_DAT_362c567c,_DAT_362c5678);
    uVar11 = CONCAT44(_DAT_362c567c,_DAT_362c5678);
    lVar16 = param_4;
    do {
      uVar31 = paddusb(*(undefined8 *)param_2,
                       CONCAT26((ushort)((ulonglong)uVar21 >> 0x30) >> lVar6,
                                CONCAT24((ushort)((ulonglong)uVar21 >> 0x20) >> lVar5,
                                         CONCAT22((ushort)((ulonglong)uVar21 >> 0x10) >> lVar4,
                                                  (ushort)uVar21 >> lVar3))) & uVar20);
      uVar36 = paddusb(*(undefined8 *)(param_2 + 2),
                       CONCAT26((ushort)((ulonglong)uVar26 >> 0x30) >> lVar10,
                                CONCAT24((ushort)((ulonglong)uVar26 >> 0x20) >> lVar9,
                                         CONCAT22((ushort)((ulonglong)uVar26 >> 0x10) >> lVar8,
                                                  (ushort)uVar26 >> lVar7))) & uVar11);
      *(undefined8 *)param_3 = uVar31;
      *(undefined8 *)(param_3 + 2) = uVar36;
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      iVar14 = lVar16 + -4;
      bVar2 = 3 < lVar16;
      lVar16 = iVar14;
    } while (iVar14 != 0 && bVar2);
    if (iVar14 != 0) {
      param_2 = param_2 + iVar14;
      param_3 = param_3 + iVar14;
    }
    param_2 = param_2 + iVar15;
    param_3 = param_3 + iVar15;
    uVar13 = uVar13 + 4 & 0xf;
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}

