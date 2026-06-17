
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl FilterBitmap(long,unsigned long *,unsigned long *,long,long,long,long) */

void __cdecl
FilterBitmap(long param_1,ulong *param_2,ulong *param_3,long param_4,long param_5,long param_6,
            long param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  uint5 uVar32;
  undefined8 uVar31;
  uint5 uVar33;
  uint5 uVar34;
  uint5 uVar35;
  uint5 uVar36;
  uint5 uVar37;
  uint5 uVar38;
  uint5 uVar39;
  uint5 uVar40;
  
                    /* 0x8bdb0  1625  ?FilterBitmap@@YAXJPAK0JJJJ@Z */
  if (param_6 == 0) {
    param_6 = param_4;
  }
  if (param_7 == 0) {
    param_7 = param_5;
  }
  if (((3 < param_4) && (3 < param_5)) && (param_4 < 0x1001)) {
    FUN_3608af90();
    iVar23 = param_6 - param_4;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[param_6];
    uVar4 = param_2[param_6 + 1];
    uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                   >> 0x18);
    uVar32 = (uint5)uVar14 & 0xffffffff00;
    uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                   >> 0x18);
    uVar33 = (uint5)uVar15 & 0xffffffff00;
    uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar3 >> 0x10),uVar3)) >> 0x20),uVar3)
                   >> 0x18);
    uVar34 = (uint5)uVar16 & 0xffffffff00;
    uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar4 >> 0x10),uVar4)) >> 0x20),uVar4)
                   >> 0x18);
    uVar35 = (uint5)uVar17 & 0xffffffff00;
    uVar31 = paddsw(CONCAT26((short)(uVar32 >> 0x18) * (short)((ulonglong)DAT_362c5630 >> 0x30) +
                             ((short)(uVar33 >> 0x18) + (short)(uVar34 >> 0x18)) *
                             (short)((ulonglong)DAT_362c5640 >> 0x30) +
                             (short)(uVar35 >> 0x18) * (short)((ulonglong)DAT_362c5658 >> 0x30),
                             CONCAT24((short)(uVar32 >> 8) *
                                      (short)((ulonglong)DAT_362c5630 >> 0x20) +
                                      ((short)(uVar33 >> 8) + (short)(uVar34 >> 8)) *
                                      (short)((ulonglong)DAT_362c5640 >> 0x20) +
                                      (short)(uVar35 >> 8) *
                                      (short)((ulonglong)DAT_362c5658 >> 0x20),
                                      CONCAT22(((ushort)(CONCAT43(uVar14,CONCAT12((char)(uVar1 >> 8)
                                                                                  ,(ushort)uVar1))
                                                        >> 0x10) & 0xff) *
                                               (short)((ulonglong)DAT_362c5630 >> 0x10) +
                                               (((ushort)(CONCAT43(uVar15,CONCAT12((char)(uVar2 >> 8
                                                                                         ),(ushort)
                                                  uVar2)) >> 0x10) & 0xff) +
                                               ((ushort)(CONCAT43(uVar16,CONCAT12((char)(uVar3 >> 8)
                                                                                  ,(ushort)uVar3))
                                                        >> 0x10) & 0xff)) *
                                               (short)((ulonglong)DAT_362c5640 >> 0x10) +
                                               ((ushort)(CONCAT43(uVar17,CONCAT12((char)(uVar4 >> 8)
                                                                                  ,(ushort)uVar4))
                                                        >> 0x10) & 0xff) *
                                               (short)((ulonglong)DAT_362c5658 >> 0x10),
                                               ((ushort)uVar1 & 0xff) * (short)DAT_362c5630 +
                                               (((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff)) *
                                               (short)DAT_362c5640 +
                                               ((ushort)uVar4 & 0xff) * (short)DAT_362c5658))),
                    _DAT_362a4328);
    uVar31 = pmulhw(uVar31,_DAT_362c5628);
    sVar10 = (short)uVar31;
    sVar11 = (short)((ulonglong)uVar31 >> 0x10);
    sVar12 = (short)((ulonglong)uVar31 >> 0x20);
    sVar13 = (short)((ulonglong)uVar31 >> 0x30);
    DAT_362c5680 = CONCAT13((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                            (0xff < sVar13),
                            CONCAT12((0 < sVar12) * (sVar12 < 0x100) *
                                     (char)((ulonglong)uVar31 >> 0x20) - (0xff < sVar12),
                                     CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                              (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar11),
                                              (0 < sVar10) * (sVar10 < 0x100) * (char)uVar31 -
                                              (0xff < sVar10))));
    iVar24 = param_4 + -2;
    iVar26 = 4;
    puVar28 = param_2 + 1;
    do {
      puVar30 = puVar28;
      iVar25 = iVar26;
      uVar1 = puVar30[-1];
      uVar2 = *puVar30;
      uVar3 = puVar30[1];
      uVar4 = puVar30[param_6 + -1];
      uVar5 = puVar30[param_6];
      uVar6 = puVar30[param_6 + 1];
      uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar1 >> 0x10),uVar1))
                                     >> 0x20),uVar1) >> 0x18);
      uVar32 = (uint5)uVar14 & 0xffffffff00;
      uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar2 >> 0x10),uVar2))
                                     >> 0x20),uVar2) >> 0x18);
      uVar33 = (uint5)uVar15 & 0xffffffff00;
      uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar3 >> 0x10),uVar3))
                                     >> 0x20),uVar3) >> 0x18);
      uVar34 = (uint5)uVar16 & 0xffffffff00;
      uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar4 >> 0x10),uVar4))
                                     >> 0x20),uVar4) >> 0x18);
      uVar35 = (uint5)uVar17 & 0xffffffff00;
      uVar18 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar5 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar5 >> 0x10),uVar5))
                                     >> 0x20),uVar5) >> 0x18);
      uVar36 = (uint5)uVar18 & 0xffffffff00;
      uVar19 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar6 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar6 >> 0x10),uVar6))
                                     >> 0x20),uVar6) >> 0x18);
      uVar37 = (uint5)uVar19 & 0xffffffff00;
      uVar31 = paddsw(CONCAT26(((short)(uVar32 >> 0x18) + (short)(uVar34 >> 0x18)) *
                               (short)((ulonglong)DAT_362c5640 >> 0x30) +
                               (short)(uVar33 >> 0x18) * (short)((ulonglong)DAT_362c5638 >> 0x30) +
                               ((short)(uVar35 >> 0x18) + (short)(uVar37 >> 0x18)) *
                               (short)((ulonglong)DAT_362c5658 >> 0x30) +
                               (short)(uVar36 >> 0x18) * (short)((ulonglong)DAT_362c5650 >> 0x30),
                               CONCAT24(((short)(uVar32 >> 8) + (short)(uVar34 >> 8)) *
                                        (short)((ulonglong)DAT_362c5640 >> 0x20) +
                                        (short)(uVar33 >> 8) *
                                        (short)((ulonglong)DAT_362c5638 >> 0x20) +
                                        ((short)(uVar35 >> 8) + (short)(uVar37 >> 8)) *
                                        (short)((ulonglong)DAT_362c5658 >> 0x20) +
                                        (short)(uVar36 >> 8) *
                                        (short)((ulonglong)DAT_362c5650 >> 0x20),
                                        CONCAT22((((ushort)(CONCAT43(uVar14,CONCAT12((char)(uVar1 >>
                                                                                           8),(
                                                  ushort)uVar1)) >> 0x10) & 0xff) +
                                                 ((ushort)(CONCAT43(uVar16,CONCAT12((char)(uVar3 >> 
                                                  8),(ushort)uVar3)) >> 0x10) & 0xff)) *
                                                 (short)((ulonglong)DAT_362c5640 >> 0x10) +
                                                 ((ushort)(CONCAT43(uVar15,CONCAT12((char)(uVar2 >> 
                                                  8),(ushort)uVar2)) >> 0x10) & 0xff) *
                                                 (short)((ulonglong)DAT_362c5638 >> 0x10) +
                                                 (((ushort)(CONCAT43(uVar17,CONCAT12((char)(uVar4 >>
                                                                                           8),(
                                                  ushort)uVar4)) >> 0x10) & 0xff) +
                                                 ((ushort)(CONCAT43(uVar19,CONCAT12((char)(uVar6 >> 
                                                  8),(ushort)uVar6)) >> 0x10) & 0xff)) *
                                                 (short)((ulonglong)DAT_362c5658 >> 0x10) +
                                                 ((ushort)(CONCAT43(uVar18,CONCAT12((char)(uVar5 >> 
                                                  8),(ushort)uVar5)) >> 0x10) & 0xff) *
                                                 (short)((ulonglong)DAT_362c5650 >> 0x10),
                                                 (((ushort)uVar1 & 0xff) + ((ushort)uVar3 & 0xff)) *
                                                 (short)DAT_362c5640 +
                                                 ((ushort)uVar2 & 0xff) * (short)DAT_362c5638 +
                                                 (((ushort)uVar4 & 0xff) + ((ushort)uVar6 & 0xff)) *
                                                 (short)DAT_362c5658 +
                                                 ((ushort)uVar5 & 0xff) * (short)DAT_362c5650))),
                      _DAT_362a4328);
      uVar31 = pmulhw(uVar31,_DAT_362c5628);
      sVar10 = (short)uVar31;
      sVar11 = (short)((ulonglong)uVar31 >> 0x10);
      sVar12 = (short)((ulonglong)uVar31 >> 0x20);
      sVar13 = (short)((ulonglong)uVar31 >> 0x30);
      *(uint *)((int)&DAT_362c5680 + iVar25) =
           CONCAT13((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                    (0xff < sVar13),
                    CONCAT12((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar31 >> 0x20) -
                             (0xff < sVar12),
                             CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                      (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar11),
                                      (0 < sVar10) * (sVar10 < 0x100) * (char)uVar31 -
                                      (0xff < sVar10))));
      puVar28 = puVar30 + 1;
      iVar24 = iVar24 + -1;
      iVar26 = iVar25 + 4;
    } while (iVar24 != 0);
    uVar1 = *puVar30;
    uVar2 = *puVar28;
    uVar3 = puVar30[param_6];
    uVar4 = puVar28[param_6];
    uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                   >> 0x18);
    uVar32 = (uint5)uVar14 & 0xffffffff00;
    uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                   >> 0x18);
    uVar33 = (uint5)uVar15 & 0xffffffff00;
    uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar3 >> 0x10),uVar3)) >> 0x20),uVar3)
                   >> 0x18);
    uVar34 = (uint5)uVar16 & 0xffffffff00;
    uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar4 >> 0x10),uVar4)) >> 0x20),uVar4)
                   >> 0x18);
    uVar35 = (uint5)uVar17 & 0xffffffff00;
    uVar31 = paddsw(CONCAT26(((short)(uVar32 >> 0x18) + (short)(uVar35 >> 0x18)) *
                             (short)((ulonglong)DAT_362c5640 >> 0x30) +
                             (short)(uVar33 >> 0x18) * (short)((ulonglong)DAT_362c5630 >> 0x30) +
                             (short)(uVar34 >> 0x18) * (short)((ulonglong)DAT_362c5658 >> 0x30),
                             CONCAT24(((short)(uVar32 >> 8) + (short)(uVar35 >> 8)) *
                                      (short)((ulonglong)DAT_362c5640 >> 0x20) +
                                      (short)(uVar33 >> 8) *
                                      (short)((ulonglong)DAT_362c5630 >> 0x20) +
                                      (short)(uVar34 >> 8) *
                                      (short)((ulonglong)DAT_362c5658 >> 0x20),
                                      CONCAT22((((ushort)(CONCAT43(uVar14,CONCAT12((char)(uVar1 >> 8
                                                                                         ),(ushort)
                                                  uVar1)) >> 0x10) & 0xff) +
                                               ((ushort)(CONCAT43(uVar17,CONCAT12((char)(uVar4 >> 8)
                                                                                  ,(ushort)uVar4))
                                                        >> 0x10) & 0xff)) *
                                               (short)((ulonglong)DAT_362c5640 >> 0x10) +
                                               ((ushort)(CONCAT43(uVar15,CONCAT12((char)(uVar2 >> 8)
                                                                                  ,(ushort)uVar2))
                                                        >> 0x10) & 0xff) *
                                               (short)((ulonglong)DAT_362c5630 >> 0x10) +
                                               ((ushort)(CONCAT43(uVar16,CONCAT12((char)(uVar3 >> 8)
                                                                                  ,(ushort)uVar3))
                                                        >> 0x10) & 0xff) *
                                               (short)((ulonglong)DAT_362c5658 >> 0x10),
                                               (((ushort)uVar1 & 0xff) + ((ushort)uVar4 & 0xff)) *
                                               (short)DAT_362c5640 +
                                               ((ushort)uVar2 & 0xff) * (short)DAT_362c5630 +
                                               ((ushort)uVar3 & 0xff) * (short)DAT_362c5658))),
                    _DAT_362a4328);
    uVar31 = pmulhw(uVar31,_DAT_362c5628);
    sVar10 = (short)uVar31;
    sVar11 = (short)((ulonglong)uVar31 >> 0x10);
    sVar12 = (short)((ulonglong)uVar31 >> 0x20);
    sVar13 = (short)((ulonglong)uVar31 >> 0x30);
    *(uint *)((int)&DAT_362c5684 + iVar25) =
         CONCAT13((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                  (0xff < sVar13),
                  CONCAT12((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar31 >> 0x20) -
                           (0xff < sVar12),
                           CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                    (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar11),
                                    (0 < sVar10) * (sVar10 < 0x100) * (char)uVar31 - (0xff < sVar10)
                                   )));
    puVar28 = puVar28 + iVar23 + 1;
    puVar30 = param_3 + param_6;
    iVar26 = param_5 + -2;
    do {
      uVar1 = puVar28[-param_6];
      uVar2 = puVar28[1 - param_6];
      uVar3 = *puVar28;
      uVar4 = puVar28[1];
      uVar5 = puVar28[param_6];
      uVar6 = puVar28[param_6 + 1];
      uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar1 >> 0x10),uVar1))
                                     >> 0x20),uVar1) >> 0x18);
      uVar32 = (uint5)uVar14 & 0xffffffff00;
      uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar2 >> 0x10),uVar2))
                                     >> 0x20),uVar2) >> 0x18);
      uVar33 = (uint5)uVar15 & 0xffffffff00;
      uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar3 >> 0x10),uVar3))
                                     >> 0x20),uVar3) >> 0x18);
      uVar34 = (uint5)uVar16 & 0xffffffff00;
      uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar4 >> 0x10),uVar4))
                                     >> 0x20),uVar4) >> 0x18);
      uVar35 = (uint5)uVar17 & 0xffffffff00;
      uVar18 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar5 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar5 >> 0x10),uVar5))
                                     >> 0x20),uVar5) >> 0x18);
      uVar36 = (uint5)uVar18 & 0xffffffff00;
      uVar19 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar6 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar6 >> 0x10),uVar6))
                                     >> 0x20),uVar6) >> 0x18);
      uVar37 = (uint5)uVar19 & 0xffffffff00;
      uVar31 = paddsw(CONCAT26(((short)(uVar32 >> 0x18) + (short)(uVar36 >> 0x18)) *
                               (short)((ulonglong)DAT_362c5640 >> 0x30) +
                               ((short)(uVar33 >> 0x18) + (short)(uVar37 >> 0x18)) *
                               (short)((ulonglong)DAT_362c5658 >> 0x30) +
                               (short)(uVar34 >> 0x18) * (short)((ulonglong)DAT_362c5638 >> 0x30) +
                               (short)(uVar35 >> 0x18) * (short)((ulonglong)DAT_362c5650 >> 0x30),
                               CONCAT24(((short)(uVar32 >> 8) + (short)(uVar36 >> 8)) *
                                        (short)((ulonglong)DAT_362c5640 >> 0x20) +
                                        ((short)(uVar33 >> 8) + (short)(uVar37 >> 8)) *
                                        (short)((ulonglong)DAT_362c5658 >> 0x20) +
                                        (short)(uVar34 >> 8) *
                                        (short)((ulonglong)DAT_362c5638 >> 0x20) +
                                        (short)(uVar35 >> 8) *
                                        (short)((ulonglong)DAT_362c5650 >> 0x20),
                                        CONCAT22((((ushort)(CONCAT43(uVar14,CONCAT12((char)(uVar1 >>
                                                                                           8),(
                                                  ushort)uVar1)) >> 0x10) & 0xff) +
                                                 ((ushort)(CONCAT43(uVar18,CONCAT12((char)(uVar5 >> 
                                                  8),(ushort)uVar5)) >> 0x10) & 0xff)) *
                                                 (short)((ulonglong)DAT_362c5640 >> 0x10) +
                                                 (((ushort)(CONCAT43(uVar15,CONCAT12((char)(uVar2 >>
                                                                                           8),(
                                                  ushort)uVar2)) >> 0x10) & 0xff) +
                                                 ((ushort)(CONCAT43(uVar19,CONCAT12((char)(uVar6 >> 
                                                  8),(ushort)uVar6)) >> 0x10) & 0xff)) *
                                                 (short)((ulonglong)DAT_362c5658 >> 0x10) +
                                                 ((ushort)(CONCAT43(uVar16,CONCAT12((char)(uVar3 >> 
                                                  8),(ushort)uVar3)) >> 0x10) & 0xff) *
                                                 (short)((ulonglong)DAT_362c5638 >> 0x10) +
                                                 ((ushort)(CONCAT43(uVar17,CONCAT12((char)(uVar4 >> 
                                                  8),(ushort)uVar4)) >> 0x10) & 0xff) *
                                                 (short)((ulonglong)DAT_362c5650 >> 0x10),
                                                 (((ushort)uVar1 & 0xff) + ((ushort)uVar5 & 0xff)) *
                                                 (short)DAT_362c5640 +
                                                 (((ushort)uVar2 & 0xff) + ((ushort)uVar6 & 0xff)) *
                                                 (short)DAT_362c5658 +
                                                 ((ushort)uVar3 & 0xff) * (short)DAT_362c5638 +
                                                 ((ushort)uVar4 & 0xff) * (short)DAT_362c5650))),
                      _DAT_362a4328);
      uVar31 = pmulhw(uVar31,_DAT_362c5628);
      sVar10 = (short)uVar31;
      sVar11 = (short)((ulonglong)uVar31 >> 0x10);
      sVar12 = (short)((ulonglong)uVar31 >> 0x20);
      sVar13 = (short)((ulonglong)uVar31 >> 0x30);
      uVar1 = CONCAT13((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                       (0xff < sVar13),
                       CONCAT12((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar31 >> 0x20)
                                - (0xff < sVar12),
                                CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar11),
                                         (0 < sVar10) * (sVar10 < 0x100) * (char)uVar31 -
                                         (0xff < sVar10))));
      puVar30[-param_6] = DAT_362c5680;
      DAT_362c5680 = uVar1;
      puVar30 = puVar30 + 1;
      iVar25 = param_4 + -2;
      iVar24 = 4;
      puVar28 = puVar28 + 1;
      do {
        puVar29 = puVar28;
        iVar27 = iVar24;
        uVar1 = puVar29[-1 - param_6];
        uVar2 = puVar29[-param_6];
        uVar3 = puVar29[1 - param_6];
        uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >>
                                                        0x28),CONCAT14((char)(uVar1 >> 0x10),uVar1))
                                       >> 0x20),uVar1) >> 0x18);
        uVar32 = (uint5)uVar14 & 0xffffffff00;
        uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >>
                                                        0x28),CONCAT14((char)(uVar2 >> 0x10),uVar2))
                                       >> 0x20),uVar2) >> 0x18);
        uVar33 = (uint5)uVar15 & 0xffffffff00;
        uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >>
                                                        0x28),CONCAT14((char)(uVar3 >> 0x10),uVar3))
                                       >> 0x20),uVar3) >> 0x18);
        uVar34 = (uint5)uVar16 & 0xffffffff00;
        uVar4 = puVar29[-1];
        uVar5 = *puVar29;
        uVar6 = puVar29[1];
        uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >>
                                                        0x28),CONCAT14((char)(uVar4 >> 0x10),uVar4))
                                       >> 0x20),uVar4) >> 0x18);
        uVar36 = (uint5)uVar17 & 0xffffffff00;
        uVar18 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar5 >> 0x18) << 0x30) >>
                                                        0x28),CONCAT14((char)(uVar5 >> 0x10),uVar5))
                                       >> 0x20),uVar5) >> 0x18);
        uVar38 = (uint5)uVar18 & 0xffffffff00;
        uVar19 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar6 >> 0x18) << 0x30) >>
                                                        0x28),CONCAT14((char)(uVar6 >> 0x10),uVar6))
                                       >> 0x20),uVar6) >> 0x18);
        uVar39 = (uint5)uVar19 & 0xffffffff00;
        uVar7 = puVar29[param_6 + -1];
        uVar8 = puVar29[param_6];
        uVar9 = puVar29[param_6 + 1];
        uVar20 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar7 >> 0x18) << 0x30) >>
                                                        0x28),CONCAT14((char)(uVar7 >> 0x10),uVar7))
                                       >> 0x20),uVar7) >> 0x18);
        uVar35 = (uint5)uVar20 & 0xffffffff00;
        uVar21 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar8 >> 0x18) << 0x30) >>
                                                        0x28),CONCAT14((char)(uVar8 >> 0x10),uVar8))
                                       >> 0x20),uVar8) >> 0x18);
        uVar37 = (uint5)uVar21 & 0xffffffff00;
        uVar22 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar9 >> 0x18) << 0x30) >>
                                                        0x28),CONCAT14((char)(uVar9 >> 0x10),uVar9))
                                       >> 0x20),uVar9) >> 0x18);
        uVar40 = (uint5)uVar22 & 0xffffffff00;
        uVar31 = paddsw(CONCAT26(((short)(uVar32 >> 0x18) + (short)(uVar34 >> 0x18) +
                                  (short)(uVar35 >> 0x18) + (short)(uVar40 >> 0x18)) *
                                 (short)((ulonglong)DAT_362c5658 >> 0x30) +
                                 ((short)(uVar33 >> 0x18) + (short)(uVar36 >> 0x18) +
                                  (short)(uVar39 >> 0x18) + (short)(uVar37 >> 0x18)) *
                                 (short)((ulonglong)DAT_362c5650 >> 0x30) +
                                 (short)(uVar38 >> 0x18) * (short)((ulonglong)DAT_362c5648 >> 0x30),
                                 CONCAT24(((short)(uVar32 >> 8) + (short)(uVar34 >> 8) +
                                           (short)(uVar35 >> 8) + (short)(uVar40 >> 8)) *
                                          (short)((ulonglong)DAT_362c5658 >> 0x20) +
                                          ((short)(uVar33 >> 8) + (short)(uVar36 >> 8) +
                                           (short)(uVar39 >> 8) + (short)(uVar37 >> 8)) *
                                          (short)((ulonglong)DAT_362c5650 >> 0x20) +
                                          (short)(uVar38 >> 8) *
                                          (short)((ulonglong)DAT_362c5648 >> 0x20),
                                          CONCAT22((((ushort)(CONCAT43(uVar14,CONCAT12((char)(uVar1 
                                                  >> 8),(ushort)uVar1)) >> 0x10) & 0xff) +
                                                  ((ushort)(CONCAT43(uVar16,CONCAT12((char)(uVar3 >>
                                                                                           8),(
                                                  ushort)uVar3)) >> 0x10) & 0xff) +
                                                  ((ushort)(CONCAT43(uVar20,CONCAT12((char)(uVar7 >>
                                                                                           8),(
                                                  ushort)uVar7)) >> 0x10) & 0xff) +
                                                  ((ushort)(CONCAT43(uVar22,CONCAT12((char)(uVar9 >>
                                                                                           8),(
                                                  ushort)uVar9)) >> 0x10) & 0xff)) *
                                                  (short)((ulonglong)DAT_362c5658 >> 0x10) +
                                                  (((ushort)(CONCAT43(uVar15,CONCAT12((char)(uVar2 
                                                  >> 8),(ushort)uVar2)) >> 0x10) & 0xff) +
                                                  ((ushort)(CONCAT43(uVar17,CONCAT12((char)(uVar4 >>
                                                                                           8),(
                                                  ushort)uVar4)) >> 0x10) & 0xff) +
                                                  ((ushort)(CONCAT43(uVar19,CONCAT12((char)(uVar6 >>
                                                                                           8),(
                                                  ushort)uVar6)) >> 0x10) & 0xff) +
                                                  ((ushort)(CONCAT43(uVar21,CONCAT12((char)(uVar8 >>
                                                                                           8),(
                                                  ushort)uVar8)) >> 0x10) & 0xff)) *
                                                  (short)((ulonglong)DAT_362c5650 >> 0x10) +
                                                  ((ushort)(CONCAT43(uVar18,CONCAT12((char)(uVar5 >>
                                                                                           8),(
                                                  ushort)uVar5)) >> 0x10) & 0xff) *
                                                  (short)((ulonglong)DAT_362c5648 >> 0x10),
                                                  (((ushort)uVar1 & 0xff) + ((ushort)uVar3 & 0xff) +
                                                   ((ushort)uVar7 & 0xff) + ((ushort)uVar9 & 0xff))
                                                  * (short)DAT_362c5658 +
                                                  (((ushort)uVar2 & 0xff) + ((ushort)uVar4 & 0xff) +
                                                   ((ushort)uVar6 & 0xff) + ((ushort)uVar8 & 0xff))
                                                  * (short)DAT_362c5650 +
                                                  ((ushort)uVar5 & 0xff) * (short)DAT_362c5648))),
                        _DAT_362a4328);
        uVar31 = pmulhw(uVar31,_DAT_362c5628);
        sVar10 = (short)uVar31;
        sVar11 = (short)((ulonglong)uVar31 >> 0x10);
        sVar12 = (short)((ulonglong)uVar31 >> 0x20);
        sVar13 = (short)((ulonglong)uVar31 >> 0x30);
        uVar1 = *(ulong *)((int)&DAT_362c5680 + iVar27);
        *(uint *)((int)&DAT_362c5680 + iVar27) =
             CONCAT13((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                      (0xff < sVar13),
                      CONCAT12((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar31 >> 0x20) -
                               (0xff < sVar12),
                               CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                        (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar11),
                                        (0 < sVar10) * (sVar10 < 0x100) * (char)uVar31 -
                                        (0xff < sVar10))));
        puVar30[-param_6] = uVar1;
        puVar28 = puVar29 + 1;
        puVar30 = puVar30 + 1;
        iVar25 = iVar25 + -1;
        iVar24 = iVar27 + 4;
      } while (iVar25 != 0);
      uVar1 = puVar29[-param_6];
      uVar2 = puVar28[-param_6];
      uVar3 = *puVar29;
      uVar4 = *puVar28;
      uVar5 = puVar29[param_6];
      uVar6 = puVar28[param_6];
      uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar1 >> 0x10),uVar1))
                                     >> 0x20),uVar1) >> 0x18);
      uVar32 = (uint5)uVar14 & 0xffffffff00;
      uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar2 >> 0x10),uVar2))
                                     >> 0x20),uVar2) >> 0x18);
      uVar33 = (uint5)uVar15 & 0xffffffff00;
      uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar3 >> 0x10),uVar3))
                                     >> 0x20),uVar3) >> 0x18);
      uVar34 = (uint5)uVar16 & 0xffffffff00;
      uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar4 >> 0x10),uVar4))
                                     >> 0x20),uVar4) >> 0x18);
      uVar35 = (uint5)uVar17 & 0xffffffff00;
      uVar18 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar5 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar5 >> 0x10),uVar5))
                                     >> 0x20),uVar5) >> 0x18);
      uVar36 = (uint5)uVar18 & 0xffffffff00;
      uVar19 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar6 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar6 >> 0x10),uVar6))
                                     >> 0x20),uVar6) >> 0x18);
      uVar37 = (uint5)uVar19 & 0xffffffff00;
      uVar31 = paddsw(CONCAT26(((short)(uVar32 >> 0x18) + (short)(uVar36 >> 0x18)) *
                               (short)((ulonglong)DAT_362c5658 >> 0x30) +
                               ((short)(uVar33 >> 0x18) + (short)(uVar37 >> 0x18)) *
                               (short)((ulonglong)DAT_362c5640 >> 0x30) +
                               (short)(uVar34 >> 0x18) * (short)((ulonglong)DAT_362c5650 >> 0x30) +
                               (short)(uVar35 >> 0x18) * (short)((ulonglong)DAT_362c5638 >> 0x30),
                               CONCAT24(((short)(uVar32 >> 8) + (short)(uVar36 >> 8)) *
                                        (short)((ulonglong)DAT_362c5658 >> 0x20) +
                                        ((short)(uVar33 >> 8) + (short)(uVar37 >> 8)) *
                                        (short)((ulonglong)DAT_362c5640 >> 0x20) +
                                        (short)(uVar34 >> 8) *
                                        (short)((ulonglong)DAT_362c5650 >> 0x20) +
                                        (short)(uVar35 >> 8) *
                                        (short)((ulonglong)DAT_362c5638 >> 0x20),
                                        CONCAT22((((ushort)(CONCAT43(uVar14,CONCAT12((char)(uVar1 >>
                                                                                           8),(
                                                  ushort)uVar1)) >> 0x10) & 0xff) +
                                                 ((ushort)(CONCAT43(uVar18,CONCAT12((char)(uVar5 >> 
                                                  8),(ushort)uVar5)) >> 0x10) & 0xff)) *
                                                 (short)((ulonglong)DAT_362c5658 >> 0x10) +
                                                 (((ushort)(CONCAT43(uVar15,CONCAT12((char)(uVar2 >>
                                                                                           8),(
                                                  ushort)uVar2)) >> 0x10) & 0xff) +
                                                 ((ushort)(CONCAT43(uVar19,CONCAT12((char)(uVar6 >> 
                                                  8),(ushort)uVar6)) >> 0x10) & 0xff)) *
                                                 (short)((ulonglong)DAT_362c5640 >> 0x10) +
                                                 ((ushort)(CONCAT43(uVar16,CONCAT12((char)(uVar3 >> 
                                                  8),(ushort)uVar3)) >> 0x10) & 0xff) *
                                                 (short)((ulonglong)DAT_362c5650 >> 0x10) +
                                                 ((ushort)(CONCAT43(uVar17,CONCAT12((char)(uVar4 >> 
                                                  8),(ushort)uVar4)) >> 0x10) & 0xff) *
                                                 (short)((ulonglong)DAT_362c5638 >> 0x10),
                                                 (((ushort)uVar1 & 0xff) + ((ushort)uVar5 & 0xff)) *
                                                 (short)DAT_362c5658 +
                                                 (((ushort)uVar2 & 0xff) + ((ushort)uVar6 & 0xff)) *
                                                 (short)DAT_362c5640 +
                                                 ((ushort)uVar3 & 0xff) * (short)DAT_362c5650 +
                                                 ((ushort)uVar4 & 0xff) * (short)DAT_362c5638))),
                      _DAT_362a4328);
      uVar31 = pmulhw(uVar31,_DAT_362c5628);
      sVar10 = (short)uVar31;
      sVar11 = (short)((ulonglong)uVar31 >> 0x10);
      sVar12 = (short)((ulonglong)uVar31 >> 0x20);
      sVar13 = (short)((ulonglong)uVar31 >> 0x30);
      uVar1 = *(ulong *)((int)&DAT_362c5684 + iVar27);
      *(uint *)((int)&DAT_362c5684 + iVar27) =
           CONCAT13((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                    (0xff < sVar13),
                    CONCAT12((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar31 >> 0x20) -
                             (0xff < sVar12),
                             CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                      (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar11),
                                      (0 < sVar10) * (sVar10 < 0x100) * (char)uVar31 -
                                      (0xff < sVar10))));
      puVar30[-param_6] = uVar1;
      uVar1 = DAT_362c5680;
      puVar28 = puVar28 + iVar23 + 1;
      puVar30 = puVar30 + iVar23 + 1;
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    uVar2 = puVar28[-param_6];
    uVar3 = puVar28[1 - param_6];
    uVar4 = *puVar28;
    uVar5 = puVar28[1];
    uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                   >> 0x18);
    uVar32 = (uint5)uVar14 & 0xffffffff00;
    uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar3 >> 0x10),uVar3)) >> 0x20),uVar3)
                   >> 0x18);
    uVar33 = (uint5)uVar15 & 0xffffffff00;
    uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar4 >> 0x10),uVar4)) >> 0x20),uVar4)
                   >> 0x18);
    uVar34 = (uint5)uVar16 & 0xffffffff00;
    uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar5 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar5 >> 0x10),uVar5)) >> 0x20),uVar5)
                   >> 0x18);
    uVar35 = (uint5)uVar17 & 0xffffffff00;
    uVar31 = paddsw(CONCAT26(((short)(uVar32 >> 0x18) + (short)(uVar35 >> 0x18)) *
                             (short)((ulonglong)DAT_362c5640 >> 0x30) +
                             (short)(uVar33 >> 0x18) * (short)((ulonglong)DAT_362c5658 >> 0x30) +
                             (short)(uVar34 >> 0x18) * (short)((ulonglong)DAT_362c5630 >> 0x30),
                             CONCAT24(((short)(uVar32 >> 8) + (short)(uVar35 >> 8)) *
                                      (short)((ulonglong)DAT_362c5640 >> 0x20) +
                                      (short)(uVar33 >> 8) *
                                      (short)((ulonglong)DAT_362c5658 >> 0x20) +
                                      (short)(uVar34 >> 8) *
                                      (short)((ulonglong)DAT_362c5630 >> 0x20),
                                      CONCAT22((((ushort)(CONCAT43(uVar14,CONCAT12((char)(uVar2 >> 8
                                                                                         ),(ushort)
                                                  uVar2)) >> 0x10) & 0xff) +
                                               ((ushort)(CONCAT43(uVar17,CONCAT12((char)(uVar5 >> 8)
                                                                                  ,(ushort)uVar5))
                                                        >> 0x10) & 0xff)) *
                                               (short)((ulonglong)DAT_362c5640 >> 0x10) +
                                               ((ushort)(CONCAT43(uVar15,CONCAT12((char)(uVar3 >> 8)
                                                                                  ,(ushort)uVar3))
                                                        >> 0x10) & 0xff) *
                                               (short)((ulonglong)DAT_362c5658 >> 0x10) +
                                               ((ushort)(CONCAT43(uVar16,CONCAT12((char)(uVar4 >> 8)
                                                                                  ,(ushort)uVar4))
                                                        >> 0x10) & 0xff) *
                                               (short)((ulonglong)DAT_362c5630 >> 0x10),
                                               (((ushort)uVar2 & 0xff) + ((ushort)uVar5 & 0xff)) *
                                               (short)DAT_362c5640 +
                                               ((ushort)uVar3 & 0xff) * (short)DAT_362c5658 +
                                               ((ushort)uVar4 & 0xff) * (short)DAT_362c5630))),
                    _DAT_362a4328);
    uVar31 = pmulhw(uVar31,_DAT_362c5628);
    sVar10 = (short)uVar31;
    sVar11 = (short)((ulonglong)uVar31 >> 0x10);
    sVar12 = (short)((ulonglong)uVar31 >> 0x20);
    sVar13 = (short)((ulonglong)uVar31 >> 0x30);
    *puVar30 = CONCAT13((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                        (0xff < sVar13),
                        CONCAT12((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar31 >> 0x20)
                                 - (0xff < sVar12),
                                 CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                          (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar11),
                                          (0 < sVar10) * (sVar10 < 0x100) * (char)uVar31 -
                                          (0xff < sVar10))));
    puVar30[-param_6] = uVar1;
    puVar30 = puVar30 + 1;
    iVar23 = param_4 + -2;
    iVar26 = 4;
    puVar28 = puVar28 + 1;
    do {
      puVar29 = puVar28;
      iVar24 = iVar26;
      uVar1 = puVar29[-1 - param_6];
      uVar2 = puVar29[-param_6];
      uVar3 = puVar29[1 - param_6];
      uVar4 = puVar29[-1];
      uVar5 = *puVar29;
      uVar6 = puVar29[1];
      uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar1 >> 0x10),uVar1))
                                     >> 0x20),uVar1) >> 0x18);
      uVar32 = (uint5)uVar14 & 0xffffffff00;
      uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar2 >> 0x10),uVar2))
                                     >> 0x20),uVar2) >> 0x18);
      uVar33 = (uint5)uVar15 & 0xffffffff00;
      uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar3 >> 0x10),uVar3))
                                     >> 0x20),uVar3) >> 0x18);
      uVar34 = (uint5)uVar16 & 0xffffffff00;
      uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar4 >> 0x10),uVar4))
                                     >> 0x20),uVar4) >> 0x18);
      uVar35 = (uint5)uVar17 & 0xffffffff00;
      uVar18 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar5 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar5 >> 0x10),uVar5))
                                     >> 0x20),uVar5) >> 0x18);
      uVar36 = (uint5)uVar18 & 0xffffffff00;
      uVar19 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar6 >> 0x18) << 0x30) >>
                                                      0x28),CONCAT14((char)(uVar6 >> 0x10),uVar6))
                                     >> 0x20),uVar6) >> 0x18);
      uVar37 = (uint5)uVar19 & 0xffffffff00;
      uVar31 = paddsw(CONCAT26(((short)(uVar32 >> 0x18) + (short)(uVar34 >> 0x18)) *
                               (short)((ulonglong)DAT_362c5658 >> 0x30) +
                               (short)(uVar33 >> 0x18) * (short)((ulonglong)DAT_362c5650 >> 0x30) +
                               ((short)(uVar35 >> 0x18) + (short)(uVar37 >> 0x18)) *
                               (short)((ulonglong)DAT_362c5640 >> 0x30) +
                               (short)(uVar36 >> 0x18) * (short)((ulonglong)DAT_362c5638 >> 0x30),
                               CONCAT24(((short)(uVar32 >> 8) + (short)(uVar34 >> 8)) *
                                        (short)((ulonglong)DAT_362c5658 >> 0x20) +
                                        (short)(uVar33 >> 8) *
                                        (short)((ulonglong)DAT_362c5650 >> 0x20) +
                                        ((short)(uVar35 >> 8) + (short)(uVar37 >> 8)) *
                                        (short)((ulonglong)DAT_362c5640 >> 0x20) +
                                        (short)(uVar36 >> 8) *
                                        (short)((ulonglong)DAT_362c5638 >> 0x20),
                                        CONCAT22((((ushort)(CONCAT43(uVar14,CONCAT12((char)(uVar1 >>
                                                                                           8),(
                                                  ushort)uVar1)) >> 0x10) & 0xff) +
                                                 ((ushort)(CONCAT43(uVar16,CONCAT12((char)(uVar3 >> 
                                                  8),(ushort)uVar3)) >> 0x10) & 0xff)) *
                                                 (short)((ulonglong)DAT_362c5658 >> 0x10) +
                                                 ((ushort)(CONCAT43(uVar15,CONCAT12((char)(uVar2 >> 
                                                  8),(ushort)uVar2)) >> 0x10) & 0xff) *
                                                 (short)((ulonglong)DAT_362c5650 >> 0x10) +
                                                 (((ushort)(CONCAT43(uVar17,CONCAT12((char)(uVar4 >>
                                                                                           8),(
                                                  ushort)uVar4)) >> 0x10) & 0xff) +
                                                 ((ushort)(CONCAT43(uVar19,CONCAT12((char)(uVar6 >> 
                                                  8),(ushort)uVar6)) >> 0x10) & 0xff)) *
                                                 (short)((ulonglong)DAT_362c5640 >> 0x10) +
                                                 ((ushort)(CONCAT43(uVar18,CONCAT12((char)(uVar5 >> 
                                                  8),(ushort)uVar5)) >> 0x10) & 0xff) *
                                                 (short)((ulonglong)DAT_362c5638 >> 0x10),
                                                 (((ushort)uVar1 & 0xff) + ((ushort)uVar3 & 0xff)) *
                                                 (short)DAT_362c5658 +
                                                 ((ushort)uVar2 & 0xff) * (short)DAT_362c5650 +
                                                 (((ushort)uVar4 & 0xff) + ((ushort)uVar6 & 0xff)) *
                                                 (short)DAT_362c5640 +
                                                 ((ushort)uVar5 & 0xff) * (short)DAT_362c5638))),
                      _DAT_362a4328);
      uVar31 = pmulhw(uVar31,_DAT_362c5628);
      sVar10 = (short)uVar31;
      sVar11 = (short)((ulonglong)uVar31 >> 0x10);
      sVar12 = (short)((ulonglong)uVar31 >> 0x20);
      sVar13 = (short)((ulonglong)uVar31 >> 0x30);
      uVar1 = *(ulong *)((int)&DAT_362c5680 + iVar24);
      *puVar30 = CONCAT13((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                          (0xff < sVar13),
                          CONCAT12((0 < sVar12) * (sVar12 < 0x100) *
                                   (char)((ulonglong)uVar31 >> 0x20) - (0xff < sVar12),
                                   CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                            (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar11),
                                            (0 < sVar10) * (sVar10 < 0x100) * (char)uVar31 -
                                            (0xff < sVar10))));
      puVar30[-param_6] = uVar1;
      puVar28 = puVar29 + 1;
      puVar30 = puVar30 + 1;
      iVar23 = iVar23 + -1;
      iVar26 = iVar24 + 4;
    } while (iVar23 != 0);
    uVar1 = puVar29[-param_6];
    uVar2 = puVar28[-param_6];
    uVar3 = *puVar29;
    uVar4 = *puVar28;
    uVar14 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                   >> 0x18);
    uVar32 = (uint5)uVar14 & 0xffffffff00;
    uVar15 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                   >> 0x18);
    uVar33 = (uint5)uVar15 & 0xffffffff00;
    uVar16 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar3 >> 0x10),uVar3)) >> 0x20),uVar3)
                   >> 0x18);
    uVar34 = (uint5)uVar16 & 0xffffffff00;
    uVar17 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >> 0x28)
                                             ,CONCAT14((char)(uVar4 >> 0x10),uVar4)) >> 0x20),uVar4)
                   >> 0x18);
    uVar35 = (uint5)uVar17 & 0xffffffff00;
    uVar31 = paddsw(CONCAT26((short)(uVar32 >> 0x18) * (short)((ulonglong)DAT_362c5658 >> 0x30) +
                             ((short)(uVar33 >> 0x18) + (short)(uVar34 >> 0x18)) *
                             (short)((ulonglong)DAT_362c5640 >> 0x30) +
                             (short)(uVar35 >> 0x18) * (short)((ulonglong)DAT_362c5630 >> 0x30),
                             CONCAT24((short)(uVar32 >> 8) *
                                      (short)((ulonglong)DAT_362c5658 >> 0x20) +
                                      ((short)(uVar33 >> 8) + (short)(uVar34 >> 8)) *
                                      (short)((ulonglong)DAT_362c5640 >> 0x20) +
                                      (short)(uVar35 >> 8) *
                                      (short)((ulonglong)DAT_362c5630 >> 0x20),
                                      CONCAT22(((ushort)(CONCAT43(uVar14,CONCAT12((char)(uVar1 >> 8)
                                                                                  ,(ushort)uVar1))
                                                        >> 0x10) & 0xff) *
                                               (short)((ulonglong)DAT_362c5658 >> 0x10) +
                                               (((ushort)(CONCAT43(uVar15,CONCAT12((char)(uVar2 >> 8
                                                                                         ),(ushort)
                                                  uVar2)) >> 0x10) & 0xff) +
                                               ((ushort)(CONCAT43(uVar16,CONCAT12((char)(uVar3 >> 8)
                                                                                  ,(ushort)uVar3))
                                                        >> 0x10) & 0xff)) *
                                               (short)((ulonglong)DAT_362c5640 >> 0x10) +
                                               ((ushort)(CONCAT43(uVar17,CONCAT12((char)(uVar4 >> 8)
                                                                                  ,(ushort)uVar4))
                                                        >> 0x10) & 0xff) *
                                               (short)((ulonglong)DAT_362c5630 >> 0x10),
                                               ((ushort)uVar1 & 0xff) * (short)DAT_362c5658 +
                                               (((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff)) *
                                               (short)DAT_362c5640 +
                                               ((ushort)uVar4 & 0xff) * (short)DAT_362c5630))),
                    _DAT_362a4328);
    uVar31 = pmulhw(uVar31,_DAT_362c5628);
    sVar10 = (short)uVar31;
    sVar11 = (short)((ulonglong)uVar31 >> 0x10);
    sVar12 = (short)((ulonglong)uVar31 >> 0x20);
    sVar13 = (short)((ulonglong)uVar31 >> 0x30);
    uVar1 = *(ulong *)((int)&DAT_362c5684 + iVar24);
    *puVar30 = CONCAT13((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                        (0xff < sVar13),
                        CONCAT12((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar31 >> 0x20)
                                 - (0xff < sVar12),
                                 CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                          (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar11),
                                          (0 < sVar10) * (sVar10 < 0x100) * (char)uVar31 -
                                          (0xff < sVar10))));
    puVar30[-param_6] = uVar1;
    return;
  }
  if ((param_3 != param_2) && (iVar26 = param_6 * param_7, iVar26 != 0)) {
    for (; iVar26 != 0; iVar26 = iVar26 + -1) {
      *param_3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    }
  }
  return;
}

