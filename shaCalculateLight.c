
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl shaCalculateLight(void) */

void __cdecl shaCalculateLight(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  char cVar21;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  int *piVar31;
  int iVar32;
  int iVar33;
  uint *puVar34;
  uint *puVar35;
  ulong *puVar36;
  uint uVar37;
  uint uVar38;
  int extraout_ECX;
  uint uVar39;
  uint uVar40;
  byte bVar41;
  byte bVar42;
  int iVar43;
  uint uVar44;
  float *pfVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  undefined2 uVar48;
  undefined2 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined8 uVar53;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined4 uVar58;
  undefined8 uVar57;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined1 local_3c [4];
  undefined1 local_38 [32];
  uint local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined2 uVar54;
  
                    /* 0x90690  4302  ?shaCalculateLight@@YAXXZ */
  if (DAT_362c9848 == 0) {
    puVar34 = FUN_360605c0(local_3c,DAT_362c9834);
    puVar35 = FUN_360605c0(local_38,DAT_362a4368);
    bVar41 = (byte)((uint)(byte)*puVar35 * (uint)(byte)*puVar34 >> 8);
    local_8 = CONCAT13((char)((uint)*(byte *)((int)puVar35 + 3) * (uint)*(byte *)((int)puVar34 + 3)
                             >> 8),
                       CONCAT21(CONCAT11((char)((uint)*(byte *)((int)puVar35 + 2) *
                                                (uint)*(byte *)((int)puVar34 + 2) >> 8),
                                         (char)((uint)*(byte *)((int)puVar35 + 1) *
                                                (uint)*(byte *)((int)puVar34 + 1) >> 8)),bVar41));
    puVar36 = shaGetFlags();
    if ((*puVar36 & 2) != 0) {
      shaFillColorBuffer(local_8 >> 1 & 0x7f7f7f | extraout_ECX << 0x18);
      return;
    }
    DAT_362c9954 = 0;
    FUN_36062630(&DAT_362c994c,DAT_362a433c + 1);
    iVar33 = DAT_362c9950;
    iVar32 = DAT_362c9810;
    uVar44 = local_8 >> 0x10 & 0xff;
    uVar37 = DAT_362c9944 & 0xff;
    uVar40 = local_8 >> 8 & 0xff;
    uVar25 = DAT_362c9944 >> 8;
    uVar26 = DAT_362c9944 >> 0x10;
    bVar42 = (byte)(DAT_362c9948._1_1_ * uVar40 >> 8);
    local_c = (uint)CONCAT11(bVar42,(char)((uint)(byte)DAT_362c9948 * (uint)bVar41 >> 8));
    DAT_362c9954 = DAT_362c9954 + -1;
    local_10 = local_c & 0xff;
    local_c = DAT_362c9948._2_1_ * uVar44 >> 8;
    DAT_362c9864 = DAT_362c9950;
    if (0x7f < local_10) {
      local_10 = 0x7f;
    }
    local_14 = (uint)bVar42;
    if (0x7f < local_14) {
      local_14 = 0x7f;
    }
    if (0x7f < local_c) {
      local_c = 0x7f;
    }
    uVar30 = local_8 >> 0x18;
    fVar27 = DAT_362c9868 * _DAT_3622e43c;
    fVar28 = DAT_362c986c * _DAT_3622e43c;
    local_8 = DAT_362a433c;
    local_18 = 0x180;
    fVar29 = DAT_362c9870 * _DAT_3622e43c;
    iVar43 = 0;
    do {
      uVar38 = local_8;
      if (0x17f < (int)local_8) {
        uVar38 = local_18;
      }
      pfVar45 = (float *)(iVar43 * 3 + iVar32);
      piVar31 = (int *)(iVar43 + uVar38 * 2 + iVar33);
      for (uVar39 = uVar38 >> 1; uVar39 != 0; uVar39 = uVar39 - 1) {
        fVar1 = pfVar45[3];
        fVar2 = pfVar45[4];
        fVar3 = pfVar45[5];
        *piVar31 = (int)ROUND(pfVar45[2] * fVar29 + *pfVar45 * fVar27 + pfVar45[1] * fVar28);
        pfVar45 = pfVar45 + 6;
        *(int *)((int)piVar31 + 2) = (int)ROUND(fVar3 * fVar29 + fVar1 * fVar27 + fVar2 * fVar28);
        piVar31 = piVar31 + 1;
      }
      if ((uVar38 & 1) != 0) {
        *piVar31 = (int)ROUND(*pfVar45 * fVar27 + pfVar45[1] * fVar28 + pfVar45[2] * fVar29);
      }
      uVar59 = psllw(CONCAT44((uVar26 & 0xff) * uVar44 >> 8,
                              ((uVar25 & 0xff) * uVar40 >> 8) << 0x10 | uVar37 * bVar41 >> 8),1);
      uVar60 = CONCAT44(uVar30 << 0x10 | local_c,local_14 << 0x10 | local_10);
      puVar47 = (undefined8 *)(iVar43 + iVar33);
      puVar46 = (undefined8 *)((int)puVar47 + uVar38 * 2);
      for (uVar39 = uVar38 >> 2; uVar39 != 0; uVar39 = uVar39 - 1) {
        uVar53 = *puVar46;
        sVar5 = (short)uVar53;
        cVar21 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar53 - (0xff < sVar5);
        sVar5 = (short)((ulonglong)uVar53 >> 0x10);
        cVar22 = (0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar53 >> 0x10) - (0xff < sVar5);
        sVar5 = (short)((ulonglong)uVar53 >> 0x20);
        cVar23 = (0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar53 >> 0x20) - (0xff < sVar5);
        sVar5 = (short)((ulonglong)uVar53 >> 0x30);
        cVar24 = (0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar53 >> 0x30) - (0xff < sVar5);
        uVar49 = CONCAT11(cVar24,cVar24);
        uVar51 = CONCAT31(CONCAT21(uVar49,cVar23),cVar23);
        uVar48 = CONCAT11(cVar21,cVar21);
        uVar54 = (undefined2)CONCAT51(CONCAT41(uVar51,cVar22),cVar22);
        uVar52 = CONCAT22(uVar54,uVar54);
        uVar50 = CONCAT22(uVar48,uVar48);
        uVar48 = (undefined2)uVar51;
        uVar51 = CONCAT22(uVar48,uVar48);
        uVar58 = (undefined4)(CONCAT26(uVar49,CONCAT24(uVar49,uVar51)) >> 0x20);
        uVar53 = pmulhw(CONCAT44(uVar50,uVar50),uVar59);
        uVar55 = pmulhw(CONCAT44(uVar52,uVar52),uVar59);
        uVar56 = pmulhw(CONCAT44(uVar51,uVar51),uVar59);
        uVar57 = pmulhw(CONCAT44(uVar58,uVar58),uVar59);
        uVar53 = paddsw(uVar53,uVar60);
        uVar55 = paddsw(uVar55,uVar60);
        uVar56 = paddsw(uVar56,uVar60);
        uVar57 = paddsw(uVar57,uVar60);
        sVar5 = (short)uVar53;
        sVar7 = (short)((ulonglong)uVar53 >> 0x10);
        sVar9 = (short)((ulonglong)uVar53 >> 0x20);
        sVar11 = (short)((ulonglong)uVar53 >> 0x30);
        sVar13 = (short)uVar55;
        sVar15 = (short)((ulonglong)uVar55 >> 0x10);
        sVar17 = (short)((ulonglong)uVar55 >> 0x20);
        sVar19 = (short)((ulonglong)uVar55 >> 0x30);
        sVar6 = (short)uVar56;
        sVar8 = (short)((ulonglong)uVar56 >> 0x10);
        sVar10 = (short)((ulonglong)uVar56 >> 0x20);
        sVar12 = (short)((ulonglong)uVar56 >> 0x30);
        sVar14 = (short)uVar57;
        sVar16 = (short)((ulonglong)uVar57 >> 0x10);
        sVar18 = (short)((ulonglong)uVar57 >> 0x20);
        sVar20 = (short)((ulonglong)uVar57 >> 0x30);
        *puVar47 = CONCAT17((0 < sVar19) * (sVar19 < 0x100) * (char)((ulonglong)uVar55 >> 0x30) -
                            (0xff < sVar19),
                            CONCAT16((0 < sVar17) * (sVar17 < 0x100) *
                                     (char)((ulonglong)uVar55 >> 0x20) - (0xff < sVar17),
                                     CONCAT15((0 < sVar15) * (sVar15 < 0x100) *
                                              (char)((ulonglong)uVar55 >> 0x10) - (0xff < sVar15),
                                              CONCAT14((0 < sVar13) * (sVar13 < 0x100) *
                                                       (char)uVar55 - (0xff < sVar13),
                                                       CONCAT13((0 < sVar11) * (sVar11 < 0x100) *
                                                                (char)((ulonglong)uVar53 >> 0x30) -
                                                                (0xff < sVar11),
                                                                CONCAT12((0 < sVar9) *
                                                                         (sVar9 < 0x100) *
                                                                         (char)((ulonglong)uVar53 >>
                                                                               0x20) -
                                                                         (0xff < sVar9),
                                                                         CONCAT11((0 < sVar7) *
                                                                                  (sVar7 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar53 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar7),
                                                                                  (0 < sVar5) *
                                                                                  (sVar5 < 0x100) *
                                                                                  (char)uVar53 -
                                                                                  (0xff < sVar5)))))
                                             )));
        puVar47[1] = CONCAT17((0 < sVar20) * (sVar20 < 0x100) * (char)((ulonglong)uVar57 >> 0x30) -
                              (0xff < sVar20),
                              CONCAT16((0 < sVar18) * (sVar18 < 0x100) *
                                       (char)((ulonglong)uVar57 >> 0x20) - (0xff < sVar18),
                                       CONCAT15((0 < sVar16) * (sVar16 < 0x100) *
                                                (char)((ulonglong)uVar57 >> 0x10) - (0xff < sVar16),
                                                CONCAT14((0 < sVar14) * (sVar14 < 0x100) *
                                                         (char)uVar57 - (0xff < sVar14),
                                                         CONCAT13((0 < sVar12) * (sVar12 < 0x100) *
                                                                  (char)((ulonglong)uVar56 >> 0x30)
                                                                  - (0xff < sVar12),
                                                                  CONCAT12((0 < sVar10) *
                                                                           (sVar10 < 0x100) *
                                                                           (char)((ulonglong)uVar56
                                                                                 >> 0x20) -
                                                                           (0xff < sVar10),
                                                                           CONCAT11((0 < sVar8) *
                                                                                    (sVar8 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar56 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar6) * (sVar6 < 0x100) * (char)uVar56 -
                                                  (0xff < sVar6))))))));
        puVar46 = puVar46 + 1;
        puVar47 = puVar47 + 2;
      }
      if ((uVar38 & 2) != 0) {
        uVar52 = *(undefined4 *)puVar46;
        sVar5 = (short)uVar52;
        cVar21 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar52 - (0xff < sVar5);
        sVar5 = (short)((uint)uVar52 >> 0x10);
        cVar22 = (0 < sVar5) * (sVar5 < 0x100) * (char)((uint)uVar52 >> 0x10) - (0xff < sVar5);
        uVar49 = CONCAT11(cVar22,cVar22);
        uVar48 = CONCAT11(cVar21,cVar21);
        uVar52 = CONCAT22(uVar49,uVar49);
        uVar51 = CONCAT22(uVar48,uVar48);
        uVar53 = pmulhw(CONCAT44(uVar51,uVar51),uVar59);
        uVar55 = pmulhw(CONCAT44(uVar52,uVar52),uVar59);
        uVar53 = paddsw(uVar53,uVar60);
        uVar55 = paddsw(uVar55,uVar60);
        sVar5 = (short)uVar53;
        sVar6 = (short)((ulonglong)uVar53 >> 0x10);
        sVar7 = (short)((ulonglong)uVar53 >> 0x20);
        sVar8 = (short)((ulonglong)uVar53 >> 0x30);
        sVar9 = (short)uVar55;
        sVar10 = (short)((ulonglong)uVar55 >> 0x10);
        sVar11 = (short)((ulonglong)uVar55 >> 0x20);
        sVar12 = (short)((ulonglong)uVar55 >> 0x30);
        *puVar47 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar55 >> 0x30) -
                            (0xff < sVar12),
                            CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                     (char)((ulonglong)uVar55 >> 0x20) - (0xff < sVar11),
                                     CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                              (char)((ulonglong)uVar55 >> 0x10) - (0xff < sVar10),
                                              CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar55
                                                       - (0xff < sVar9),
                                                       CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                (char)((ulonglong)uVar53 >> 0x30) -
                                                                (0xff < sVar8),
                                                                CONCAT12((0 < sVar7) *
                                                                         (sVar7 < 0x100) *
                                                                         (char)((ulonglong)uVar53 >>
                                                                               0x20) -
                                                                         (0xff < sVar7),
                                                                         CONCAT11((0 < sVar6) *
                                                                                  (sVar6 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar53 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar6),
                                                                                  (0 < sVar5) *
                                                                                  (sVar5 < 0x100) *
                                                                                  (char)uVar53 -
                                                                                  (0xff < sVar5)))))
                                             )));
        puVar46 = (undefined8 *)((int)puVar46 + 4);
        puVar47 = puVar47 + 1;
      }
      if ((uVar38 & 1) != 0) {
        sVar5 = (short)*(undefined4 *)puVar46;
        cVar21 = (0 < sVar5) * (sVar5 < 0x100) * (char)*(undefined4 *)puVar46 - (0xff < sVar5);
        uVar49 = CONCAT11(cVar21,cVar21);
        uVar52 = CONCAT22(uVar49,uVar49);
        uVar59 = pmulhw(CONCAT44(uVar52,uVar52),uVar59);
        uVar59 = paddsw(uVar59,uVar60);
        sVar5 = (short)uVar59;
        sVar6 = (short)((ulonglong)uVar59 >> 0x10);
        sVar7 = (short)((ulonglong)uVar59 >> 0x20);
        sVar8 = (short)((ulonglong)uVar59 >> 0x30);
        *(uint *)puVar47 =
             CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar59 >> 0x30) -
                      (0xff < sVar8),
                      CONCAT12((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar59 >> 0x20) -
                               (0xff < sVar7),
                               CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                        (char)((ulonglong)uVar59 >> 0x10) - (0xff < sVar6),
                                        (0 < sVar5) * (sVar5 < 0x100) * (char)uVar59 -
                                        (0xff < sVar5))));
      }
      iVar43 = iVar43 + 0x600;
      uVar39 = local_8 - 0x180;
      bVar4 = 0x17f < (int)local_8;
      local_18 = uVar38;
      local_8 = uVar39;
    } while (uVar39 != 0 && bVar4);
  }
  return;
}

