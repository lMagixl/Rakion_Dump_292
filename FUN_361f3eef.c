
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_361f3eef(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  undefined7 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  undefined2 uVar20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined8 uVar21;
  undefined2 uVar25;
  undefined8 uVar22;
  undefined8 uVar26;
  undefined2 uVar28;
  undefined2 uVar29;
  undefined8 uVar27;
  undefined4 uVar30;
  undefined8 uVar31;
  
  uVar14 = param_1 >> 2;
  do {
    uVar30 = *param_2;
    uVar1 = *param_3;
    uVar10 = (ushort)(((uint7)(byte)((uint)uVar30 >> 0x18) << 0x30) >> 0x28);
    uVar11 = CONCAT25(uVar10,CONCAT14((char)((uint)uVar30 >> 0x10),uVar30));
    uVar12 = (ulonglong)
             CONCAT41((int)(CONCAT34((int3)((uint7)uVar11 >> 0x20),uVar30) >> 0x18),
                      (char)((uint)uVar30 >> 8)) & 0xffffffff00ff;
    bVar15 = (byte)uVar30;
    uVar30 = *param_4;
    uVar18 = psubsw((ulonglong)
                    CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                             CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >>
                                   0x10),(short)uVar1) & 0xffffffff00ff00ff,_DAT_362ae160);
    uVar21 = psubsw((ulonglong)
                    CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar30 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar30 >> 0x10),uVar30)) >>
                                                  0x20),uVar30) >> 0x18),(char)((uint)uVar30 >> 8)),
                             (ushort)(byte)uVar30) & 0xffffffff00ffffff,_DAT_362ae160);
    uVar23 = (undefined2)((ulonglong)uVar21 >> 0x10);
    uVar20 = (undefined2)((ulonglong)uVar18 >> 0x10);
    uVar19 = pmaddwd(CONCAT44(CONCAT22(uVar23,uVar20),CONCAT22((short)uVar21,(short)uVar18)),
                     _DAT_362ae168);
    uVar17 = psllw(CONCAT62((int6)uVar12,(ushort)bVar15),8);
    uVar28 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar24 = (undefined2)((ulonglong)uVar21 >> 0x20);
    uVar29 = (undefined2)((ulonglong)uVar18 >> 0x30);
    uVar25 = (undefined2)((ulonglong)uVar21 >> 0x30);
    uVar27 = pmaddwd(CONCAT26(uVar25,CONCAT24(uVar29,CONCAT22(uVar24,uVar28))),_DAT_362ae168);
    uVar16 = (undefined2)uVar12;
    uVar21 = pmaddwd(CONCAT44(CONCAT22(uVar16,uVar23),(uint)CONCAT12(bVar15,(short)uVar21)),
                     _DAT_362ae170);
    uVar26 = pmaddwd(CONCAT44(CONCAT22(uVar16,uVar20),(uint)CONCAT12(bVar15,(short)uVar18)),
                     _DAT_362ae178);
    uVar16 = (undefined2)((uint7)uVar11 >> 0x20);
    uVar10 = uVar10 >> 8;
    uVar31 = pmaddwd(CONCAT26(uVar10,CONCAT24(uVar29,CONCAT22(uVar16,uVar28))),_DAT_362ae178);
    uVar18 = pmaddwd(CONCAT26(uVar10,CONCAT24(uVar25,CONCAT22(uVar16,uVar24))),_DAT_362ae170);
    uVar30 = *param_5;
    uVar16 = CONCAT11((char)((uint)DAT_36383ca0 >> 0x18),(char)((uint)uVar30 >> 0x18));
    uVar13 = (uint)DAT_36383ca0 >> 0x10;
    uVar22 = packssdw(CONCAT44((int)((int)uVar19 + (uint)(ushort)uVar17) >> 8,(int)uVar21 >> 8),
                      CONCAT44(CONCAT22((short)DAT_36383ca0,
                                        CONCAT11((char)DAT_36383ca0,(char)uVar30)),(int)uVar26 >> 8)
                     );
    uVar19 = packssdw(CONCAT44((int)((int)((ulonglong)uVar19 >> 0x20) +
                                    (uint)(ushort)((ulonglong)uVar17 >> 0x10)) >> 8,
                               (int)((longlong)uVar21 >> 0x28)),
                      CONCAT44(CONCAT22((short)((uint)DAT_36383ca0 >> 0x10),
                                        CONCAT11((char)((uint)DAT_36383ca0 >> 8),
                                                 (char)((uint)uVar30 >> 8))),
                               (int)((longlong)uVar26 >> 0x28)));
    sVar2 = (short)uVar22;
    sVar3 = (short)((ulonglong)uVar22 >> 0x10);
    sVar4 = (short)((ulonglong)uVar22 >> 0x20);
    sVar5 = (short)((ulonglong)uVar22 >> 0x30);
    sVar6 = (short)uVar19;
    sVar7 = (short)((ulonglong)uVar19 >> 0x10);
    sVar8 = (short)((ulonglong)uVar19 >> 0x20);
    sVar9 = (short)((ulonglong)uVar19 >> 0x30);
    *param_6 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar19 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar19 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar19 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar22 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar22 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar22 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar22 -
                                                                              (0xff < sVar2))))))));
    uVar30 = CONCAT22((short)DAT_36383ca4,
                      (short)(CONCAT35(CONCAT21(uVar16,(char)uVar13),
                                       CONCAT14((char)((uint)uVar30 >> 0x10),uVar30)) >> 0x20));
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    uVar19 = packssdw(CONCAT44((int)((int)uVar27 + (uint)(ushort)((ulonglong)uVar17 >> 0x20)) >> 8,
                               (int)uVar18 >> 8),CONCAT44(uVar30,(int)uVar31 >> 8));
    param_4 = param_4 + 1;
    uVar17 = packssdw(CONCAT44((int)((int)((ulonglong)uVar27 >> 0x20) +
                                    (uint)(ushort)((ulonglong)uVar17 >> 0x30)) >> 8,
                               (int)((longlong)uVar18 >> 0x28)),
                      CONCAT44((int)(CONCAT26((short)((uint)DAT_36383ca4 >> 0x10),
                                              CONCAT24(uVar16,uVar30)) >> 0x20),
                               (int)((longlong)uVar31 >> 0x28)));
    sVar2 = (short)uVar19;
    sVar3 = (short)((ulonglong)uVar19 >> 0x10);
    sVar4 = (short)((ulonglong)uVar19 >> 0x20);
    sVar5 = (short)((ulonglong)uVar19 >> 0x30);
    sVar6 = (short)uVar17;
    sVar7 = (short)((ulonglong)uVar17 >> 0x10);
    sVar8 = (short)((ulonglong)uVar17 >> 0x20);
    sVar9 = (short)((ulonglong)uVar17 >> 0x30);
    param_5 = param_5 + 1;
    param_6[1] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                          (0xff < sVar9),
                          CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar17 >> 0x20)
                                   - (0xff < sVar8),
                                   CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                            (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar7),
                                            CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar17 -
                                                     (0xff < sVar6),
                                                     CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                              (char)((ulonglong)uVar19 >> 0x30) -
                                                              (0xff < sVar5),
                                                              CONCAT12((0 < sVar4) * (sVar4 < 0x100)
                                                                       * (char)((ulonglong)uVar19 >>
                                                                               0x20) -
                                                                       (0xff < sVar4),
                                                                       CONCAT11((0 < sVar3) *
                                                                                (sVar3 < 0x100) *
                                                                                (char)((ulonglong)
                                                                                       uVar19 >>
                                                                                      0x10) -
                                                                                (0xff < sVar3),
                                                                                (0 < sVar2) *
                                                                                (sVar2 < 0x100) *
                                                                                (char)uVar19 -
                                                                                (0xff < sVar2)))))))
                         );
    uVar14 = uVar14 - 1;
    param_6 = param_6 + 2;
  } while (uVar14 != 0);
  return;
}

