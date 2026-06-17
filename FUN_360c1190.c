
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360c1190(int param_1)

{
  short *psVar1;
  char *pcVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  char cVar22;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined6 uVar29;
  undefined *puVar30;
  int *in_EAX;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  float fVar35;
  int iVar36;
  float *pfVar37;
  int iVar38;
  float fVar39;
  undefined4 *puVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  int *piVar44;
  uint uVar45;
  int *piVar46;
  float *pfVar47;
  undefined8 *puVar48;
  ushort uVar49;
  ushort uVar52;
  undefined4 uVar50;
  ushort uVar54;
  undefined8 uVar51;
  ushort uVar53;
  unkbyte10 in_ST1;
  undefined2 uVar55;
  undefined4 uVar57;
  undefined8 uVar56;
  undefined4 uVar58;
  undefined8 uVar59;
  undefined4 uVar61;
  undefined8 uVar60;
  undefined8 uVar62;
  undefined8 uVar63;
  char cVar23;
  char cVar24;
  char cVar25;
  
  fVar6 = (float)in_EAX[0x25];
  fVar26 = (float)in_EAX[10] * _DAT_36231e3c;
  fVar7 = (float)in_EAX[0x26];
  fVar8 = (float)in_EAX[0x27];
  fVar9 = (float)in_EAX[0x28];
  fVar27 = (float)in_EAX[0xb] * _DAT_36231e3c;
  fVar10 = (float)in_EAX[0x29];
  fVar11 = (float)in_EAX[0x2a];
  fVar12 = (float)in_EAX[5];
  fVar28 = (float)in_EAX[0xc] * _DAT_36231e3c;
  iVar13 = *(int *)(in_EAX[1] + 0x34);
  piVar46 = (int *)((int)DAT_362cba4c + ((int)DAT_362cba68 >> 1) * 4);
  iVar14 = in_EAX[8];
  iVar36 = in_EAX[9];
  if ((*(byte *)(*in_EAX + 0x1260) & 0x10) == 0) {
    if (iVar14 == iVar36) {
      iVar36 = 0;
      piVar44 = piVar46;
      pfVar47 = DAT_362cba48;
      do {
        pcVar2 = (char *)(iVar14 + (uint)*(ushort *)(iVar13 + iVar36 * 2) * 4);
        cVar22 = pcVar2[1];
        cVar23 = pcVar2[2];
        *pfVar47 = ((float)(int)*pcVar2 - fVar9) * fVar6;
        pfVar47[1] = ((float)(int)cVar22 - fVar10) * fVar7;
        pfVar47[2] = ((float)(int)cVar23 - fVar11) * fVar8;
        uVar41 = (uint)(byte)pcVar2[3];
        *piVar44 = (int)ROUND((float)(&DAT_362a5300)[uVar41 * 3] * fVar26 +
                              (float)(&DAT_362a5304)[uVar41 * 3] * fVar27 +
                              (float)(&DAT_362a5308)[uVar41 * 3] * fVar28);
        if (param_1 != 0) {
          puVar40 = (undefined4 *)(iVar36 * 0xc + DAT_362cba44);
          uVar50 = (&DAT_362a5304)[uVar41 * 3];
          uVar57 = (&DAT_362a5308)[uVar41 * 3];
          *puVar40 = (&DAT_362a5300)[uVar41 * 3];
          puVar40[1] = uVar50;
          puVar40[2] = uVar57;
        }
        pfVar47 = pfVar47 + 3;
        piVar44 = (int *)((int)piVar44 + 2);
        iVar36 = iVar36 + 1;
      } while (iVar36 < (int)DAT_362cba68);
    }
    else {
      iVar3 = (int)ROUND(fVar12 * _DAT_36231e38);
      fVar6 = fVar6 * _DAT_36223768;
      fVar9 = fVar9 * _DAT_36231e38;
      fVar7 = fVar7 * _DAT_36223768;
      fVar10 = fVar10 * _DAT_36231e38;
      fVar8 = fVar8 * _DAT_36223768;
      fVar11 = fVar11 * _DAT_36231e38;
      iVar38 = 0;
      piVar44 = piVar46;
      pfVar47 = DAT_362cba48;
      do {
        uVar34 = (uint)*(ushort *)(iVar13 + iVar38 * 2);
        iVar31 = (int)*(char *)(iVar14 + uVar34 * 4);
        iVar32 = (int)*(char *)(iVar14 + 1 + uVar34 * 4);
        cVar22 = *(char *)(iVar36 + 1 + uVar34 * 4);
        iVar33 = (int)*(char *)(iVar14 + 2 + uVar34 * 4);
        cVar23 = *(char *)(iVar36 + 2 + uVar34 * 4);
        *pfVar47 = ((float)(iVar31 * 0x100 + (*(char *)(iVar36 + uVar34 * 4) - iVar31) * iVar3) -
                   fVar9) * fVar6;
        pfVar47[1] = ((float)(iVar32 * 0x100 + (cVar22 - iVar32) * iVar3) - fVar10) * fVar7;
        pfVar47[2] = ((float)(iVar33 * 0x100 + (cVar23 - iVar33) * iVar3) - fVar11) * fVar8;
        uVar41 = (uint)*(byte *)(iVar14 + 3 + uVar34 * 4);
        uVar34 = (uint)*(byte *)(iVar36 + 3 + uVar34 * 4);
        fVar35 = ((float)(&DAT_362a5300)[uVar34 * 3] - (float)(&DAT_362a5300)[uVar41 * 3]) * fVar12
                 + (float)(&DAT_362a5300)[uVar41 * 3];
        fVar43 = ((float)(&DAT_362a5304)[uVar34 * 3] - (float)(&DAT_362a5304)[uVar41 * 3]) * fVar12
                 + (float)(&DAT_362a5304)[uVar41 * 3];
        fVar39 = ((float)(&DAT_362a5308)[uVar34 * 3] - (float)(&DAT_362a5308)[uVar41 * 3]) * fVar12
                 + (float)(&DAT_362a5308)[uVar41 * 3];
        *piVar44 = (int)ROUND(fVar26 * fVar35 + fVar27 * fVar43 + fVar28 * fVar39);
        if (param_1 != 0) {
          pfVar37 = (float *)(iVar38 * 0xc + DAT_362cba44);
          *pfVar37 = fVar35;
          pfVar37[1] = fVar43;
          pfVar37[2] = fVar39;
        }
        pfVar47 = pfVar47 + 3;
        piVar44 = (int *)((int)piVar44 + 2);
        iVar38 = iVar38 + 1;
      } while (iVar38 < (int)DAT_362cba68);
    }
  }
  else if (iVar14 == iVar36) {
    iVar36 = 0;
    piVar44 = piVar46;
    pfVar47 = DAT_362cba48;
    do {
      psVar1 = (short *)(iVar14 + (uint)*(ushort *)(iVar13 + iVar36 * 2) * 8);
      sVar4 = psVar1[1];
      sVar5 = psVar1[2];
      *pfVar47 = ((float)(int)*psVar1 - fVar9) * fVar6;
      pfVar47[1] = ((float)(int)sVar4 - fVar10) * fVar7;
      pfVar47[2] = ((float)(int)sVar5 - fVar11) * fVar8;
      puVar30 = _pfSinTable;
      uVar41 = (uint)*(byte *)((int)psVar1 + 7);
      fVar12 = *(float *)(_pfSinTable + (uint)*(byte *)(psVar1 + 3) * 4);
      fVar35 = *(float *)(_pfSinTable + uVar41 * 4 + 0x100);
      fVar39 = *(float *)(_pfSinTable + (uint)*(byte *)(psVar1 + 3) * 4 + 0x100);
      fVar43 = *(float *)(_pfSinTable + uVar41 * 4 + 0x100);
      *piVar44 = (int)ROUND(-(fVar12 * fVar35) * fVar26 +
                            -*(float *)(_pfSinTable + uVar41 * 4) * fVar27 +
                            -(fVar39 * fVar43) * fVar28);
      if (param_1 != 0) {
        pfVar37 = (float *)(iVar36 * 0xc + DAT_362cba44);
        fVar15 = *(float *)(puVar30 + uVar41 * 4);
        *pfVar37 = -(fVar12 * fVar35);
        pfVar37[1] = -fVar15;
        pfVar37[2] = -(fVar39 * fVar43);
      }
      pfVar47 = pfVar47 + 3;
      piVar44 = (int *)((int)piVar44 + 2);
      iVar36 = iVar36 + 1;
    } while (iVar36 < (int)DAT_362cba68);
  }
  else {
    iVar3 = (int)ROUND(fVar12 * _DAT_36231e38);
    iVar38 = 0;
    piVar44 = piVar46;
    pfVar47 = DAT_362cba48;
    do {
      uVar45 = (uint)*(ushort *)(iVar13 + iVar38 * 2);
      iVar31 = (int)*(short *)(iVar14 + uVar45 * 8);
      iVar32 = (int)*(short *)(iVar14 + 2 + uVar45 * 8);
      sVar4 = *(short *)(iVar36 + 2 + uVar45 * 8);
      iVar33 = (int)*(short *)(iVar14 + 4 + uVar45 * 8);
      sVar5 = *(short *)(iVar36 + 4 + uVar45 * 8);
      *pfVar47 = ((float)(iVar31 + ((*(short *)(iVar36 + uVar45 * 8) - iVar31) * iVar3 >> 8)) -
                 fVar9) * fVar6;
      pfVar47[1] = ((float)(iVar32 + ((sVar4 - iVar32) * iVar3 >> 8)) - fVar10) * fVar7;
      pfVar47[2] = ((float)(iVar33 + ((sVar5 - iVar33) * iVar3 >> 8)) - fVar11) * fVar8;
      uVar41 = (uint)*(byte *)(iVar14 + 6 + uVar45 * 8);
      uVar42 = (uint)*(byte *)(iVar14 + 7 + uVar45 * 8);
      uVar34 = (uint)*(byte *)(iVar36 + 6 + uVar45 * 8);
      uVar45 = (uint)*(byte *)(iVar36 + 7 + uVar45 * 8);
      fVar35 = -((*(float *)(_pfSinTable + uVar34 * 4) *
                  *(float *)(_pfSinTable + uVar45 * 4 + 0x100) -
                 *(float *)(_pfSinTable + uVar41 * 4) * *(float *)(_pfSinTable + uVar42 * 4 + 0x100)
                 ) * fVar12 +
                *(float *)(_pfSinTable + uVar41 * 4) * *(float *)(_pfSinTable + uVar42 * 4 + 0x100))
      ;
      fVar43 = -(*(float *)(_pfSinTable + uVar42 * 4) +
                (*(float *)(_pfSinTable + uVar45 * 4) - *(float *)(_pfSinTable + uVar42 * 4)) *
                fVar12);
      fVar39 = -(*(float *)(_pfSinTable + uVar41 * 4 + 0x100) *
                 *(float *)(_pfSinTable + uVar42 * 4 + 0x100) +
                (*(float *)(_pfSinTable + uVar34 * 4 + 0x100) *
                 *(float *)(_pfSinTable + uVar45 * 4 + 0x100) -
                *(float *)(_pfSinTable + uVar41 * 4 + 0x100) *
                *(float *)(_pfSinTable + uVar42 * 4 + 0x100)) * fVar12);
      *piVar44 = (int)ROUND(fVar35 * fVar26 + fVar43 * fVar27 + fVar39 * fVar28);
      if (param_1 != 0) {
        pfVar37 = (float *)(iVar38 * 0xc + DAT_362cba44);
        *pfVar37 = fVar35;
        pfVar37[1] = fVar43;
        pfVar37[2] = fVar39;
      }
      pfVar47 = pfVar47 + 3;
      piVar44 = (int *)((int)piVar44 + 2);
      iVar38 = iVar38 + 1;
    } while (iVar38 < (int)DAT_362cba68);
  }
  uVar62 = psllw(CONCAT44(DAT_362cba7c,DAT_362cba74 | DAT_362cba78 << 0x10) | 0x1fe000000000000,1);
  uVar63 = CONCAT44(DAT_362cba88,DAT_362cba80 | DAT_362cba84 << 0x10);
  puVar48 = DAT_362cba4c;
  for (uVar41 = DAT_362cba68 >> 2; uVar41 != 0; uVar41 = uVar41 - 1) {
    uVar51 = *(undefined8 *)piVar46;
    uVar55 = (undefined2)((unkuint10)in_ST1 >> 0x40);
    sVar4 = (short)uVar51;
    cVar22 = (0 < sVar4) * (sVar4 < 0x100) * (char)uVar51 - (0xff < sVar4);
    sVar4 = (short)((ulonglong)uVar51 >> 0x10);
    cVar23 = (0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar51 >> 0x10) - (0xff < sVar4);
    sVar4 = (short)((ulonglong)uVar51 >> 0x20);
    cVar24 = (0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar51 >> 0x20) - (0xff < sVar4);
    sVar4 = (short)((ulonglong)uVar51 >> 0x30);
    cVar25 = (0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar51 >> 0x30) - (0xff < sVar4);
    uVar50 = CONCAT31(CONCAT21(uVar55,cVar25),cVar25);
    uVar29 = CONCAT51(CONCAT41(uVar50,cVar24),cVar24);
    uVar49 = CONCAT11(cVar22,cVar22) >> 1;
    uVar52 = (ushort)CONCAT71(CONCAT61(uVar29,cVar23),cVar23) >> 1;
    uVar53 = (ushort)uVar29 >> 1;
    uVar54 = (ushort)uVar50 >> 1;
    uVar50 = CONCAT22(uVar49,uVar49);
    uVar58 = CONCAT22(uVar53,uVar53);
    uVar57 = (undefined4)CONCAT42(CONCAT22(uVar55,uVar52),uVar52);
    uVar61 = (undefined4)(CONCAT26(uVar54,CONCAT24(uVar54,uVar58)) >> 0x20);
    uVar51 = pmulhw(CONCAT44(uVar50,uVar50),uVar62);
    uVar56 = pmulhw(CONCAT44(uVar57,uVar57),uVar62);
    uVar59 = pmulhw(CONCAT44(uVar58,uVar58),uVar62);
    uVar60 = pmulhw(CONCAT44(uVar61,uVar61),uVar62);
    uVar51 = paddsw(uVar51,uVar63);
    uVar56 = paddsw(uVar56,uVar63);
    uVar59 = paddsw(uVar59,uVar63);
    uVar60 = paddsw(uVar60,uVar63);
    sVar4 = (short)uVar51;
    sVar5 = (short)((ulonglong)uVar51 >> 0x10);
    sVar16 = (short)((ulonglong)uVar51 >> 0x20);
    sVar17 = (short)((ulonglong)uVar51 >> 0x30);
    sVar18 = (short)uVar56;
    sVar19 = (short)((ulonglong)uVar56 >> 0x10);
    sVar20 = (short)((ulonglong)uVar56 >> 0x20);
    sVar21 = (short)((ulonglong)uVar56 >> 0x30);
    uVar51 = CONCAT17((0 < sVar21) * (sVar21 < 0x100) * (char)((ulonglong)uVar56 >> 0x30) -
                      (0xff < sVar21),
                      CONCAT16((0 < sVar20) * (sVar20 < 0x100) * (char)((ulonglong)uVar56 >> 0x20) -
                               (0xff < sVar20),
                               CONCAT15((0 < sVar19) * (sVar19 < 0x100) *
                                        (char)((ulonglong)uVar56 >> 0x10) - (0xff < sVar19),
                                        CONCAT14((0 < sVar18) * (sVar18 < 0x100) * (char)uVar56 -
                                                 (0xff < sVar18),
                                                 CONCAT13((0 < sVar17) * (sVar17 < 0x100) *
                                                          (char)((ulonglong)uVar51 >> 0x30) -
                                                          (0xff < sVar17),
                                                          CONCAT12((0 < sVar16) * (sVar16 < 0x100) *
                                                                   (char)((ulonglong)uVar51 >> 0x20)
                                                                   - (0xff < sVar16),
                                                                   CONCAT11((0 < sVar5) *
                                                                            (sVar5 < 0x100) *
                                                                            (char)((ulonglong)uVar51
                                                                                  >> 0x10) -
                                                                            (0xff < sVar5),
                                                                            (0 < sVar4) *
                                                                            (sVar4 < 0x100) *
                                                                            (char)uVar51 -
                                                                            (0xff < sVar4))))))));
    in_ST1 = CONCAT28(uVar55,uVar51);
    sVar4 = (short)uVar59;
    sVar5 = (short)((ulonglong)uVar59 >> 0x10);
    sVar16 = (short)((ulonglong)uVar59 >> 0x20);
    sVar17 = (short)((ulonglong)uVar59 >> 0x30);
    sVar18 = (short)uVar60;
    sVar19 = (short)((ulonglong)uVar60 >> 0x10);
    sVar20 = (short)((ulonglong)uVar60 >> 0x20);
    sVar21 = (short)((ulonglong)uVar60 >> 0x30);
    *puVar48 = uVar51;
    puVar48[1] = CONCAT17((0 < sVar21) * (sVar21 < 0x100) * (char)((ulonglong)uVar60 >> 0x30) -
                          (0xff < sVar21),
                          CONCAT16((0 < sVar20) * (sVar20 < 0x100) *
                                   (char)((ulonglong)uVar60 >> 0x20) - (0xff < sVar20),
                                   CONCAT15((0 < sVar19) * (sVar19 < 0x100) *
                                            (char)((ulonglong)uVar60 >> 0x10) - (0xff < sVar19),
                                            CONCAT14((0 < sVar18) * (sVar18 < 0x100) * (char)uVar60
                                                     - (0xff < sVar18),
                                                     CONCAT13((0 < sVar17) * (sVar17 < 0x100) *
                                                              (char)((ulonglong)uVar59 >> 0x30) -
                                                              (0xff < sVar17),
                                                              CONCAT12((0 < sVar16) *
                                                                       (sVar16 < 0x100) *
                                                                       (char)((ulonglong)uVar59 >>
                                                                             0x20) - (0xff < sVar16)
                                                                       ,CONCAT11((0 < sVar5) *
                                                                                 (sVar5 < 0x100) *
                                                                                 (char)((ulonglong)
                                                                                        uVar59 >>
                                                                                       0x10) -
                                                                                 (0xff < sVar5),
                                                                                 (0 < sVar4) *
                                                                                 (sVar4 < 0x100) *
                                                                                 (char)uVar59 -
                                                                                 (0xff < sVar4))))))
                                  ));
    piVar46 = piVar46 + 2;
    puVar48 = puVar48 + 2;
  }
  for (uVar41 = DAT_362cba68 & 3; uVar41 != 0; uVar41 = uVar41 - 1) {
    sVar4 = (short)*piVar46;
    cVar22 = (0 < sVar4) * (sVar4 < 0x100) * (char)sVar4 - (0xff < sVar4);
    uVar49 = CONCAT11(cVar22,cVar22) >> 1;
    uVar50 = CONCAT22(uVar49,uVar49);
    uVar51 = pmulhw(CONCAT44(uVar50,uVar50),uVar62);
    uVar51 = paddsw(uVar51,uVar63);
    sVar4 = (short)uVar51;
    sVar5 = (short)((ulonglong)uVar51 >> 0x10);
    sVar16 = (short)((ulonglong)uVar51 >> 0x20);
    sVar17 = (short)((ulonglong)uVar51 >> 0x30);
    *(uint *)puVar48 =
         CONCAT13((0 < sVar17) * (sVar17 < 0x100) * (char)((ulonglong)uVar51 >> 0x30) -
                  (0xff < sVar17),
                  CONCAT12((0 < sVar16) * (sVar16 < 0x100) * (char)((ulonglong)uVar51 >> 0x20) -
                           (0xff < sVar16),
                           CONCAT11((0 < sVar5) * (sVar5 < 0x100) *
                                    (char)((ulonglong)uVar51 >> 0x10) - (0xff < sVar5),
                                    (0 < sVar4) * (sVar4 < 0x100) * (char)uVar51 - (0xff < sVar4))))
    ;
    piVar46 = (int *)((int)piVar46 + 2);
    puVar48 = (undefined8 *)((int)puVar48 + 4);
  }
  return;
}

