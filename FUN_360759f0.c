
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl FUN_360759f0(ulonglong *param_1,int param_2,uint param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  char cVar11;
  char cVar15;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  short sVar22;
  ulonglong uVar25;
  short sVar26;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint local_10;
  uint local_c;
  uint local_8;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined4 uVar23;
  undefined6 uVar24;
  undefined4 uVar27;
  undefined6 uVar28;
  
  iVar3 = param_3 * 4;
  FUN_36075e00(param_3,param_4,0,&local_c,&param_3,&local_10,&local_8);
  uVar20 = 0;
  uVar19 = 0;
  uVar21 = DAT_36228bb0;
  do {
    do {
      uVar25 = *param_1;
      puVar1 = param_1 + 1;
      puVar2 = (ulonglong *)((int)param_1 + iVar3);
      puVar4 = (ulonglong *)((int)param_1 + iVar3 + 8);
      param_1 = param_1 + 2;
      uVar25 = uVar25 & _DAT_36228ba0;
      uVar29 = *puVar1 & _DAT_36228ba0;
      uVar30 = *puVar2 & _DAT_36228ba0;
      uVar31 = *puVar4 & _DAT_36228ba0;
      sVar5 = (short)uVar25;
      cVar11 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar25 - (0xff < sVar5);
      sVar5 = (short)(uVar25 >> 0x10);
      sVar22 = CONCAT11((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar25 >> 0x10) - (0xff < sVar5),
                        cVar11);
      sVar5 = (short)(uVar25 >> 0x20);
      cVar12 = (0 < sVar5) * (sVar5 < 0x100) * (char)(uVar25 >> 0x20) - (0xff < sVar5);
      sVar5 = (short)(uVar25 >> 0x30);
      uVar23 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar25 >> 0x30) - (0xff < sVar5),
                        CONCAT12(cVar12,sVar22));
      sVar5 = (short)uVar30;
      cVar13 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar30 - (0xff < sVar5);
      sVar5 = (short)(uVar30 >> 0x10);
      uVar24 = CONCAT15((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar5),
                        CONCAT14(cVar13,uVar23));
      sVar5 = (short)(uVar30 >> 0x20);
      cVar14 = (0 < sVar5) * (sVar5 < 0x100) * (char)(uVar30 >> 0x20) - (0xff < sVar5);
      sVar7 = (short)(uVar30 >> 0x30);
      sVar5 = (short)uVar29;
      cVar15 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar29 - (0xff < sVar5);
      sVar5 = (short)(uVar29 >> 0x10);
      sVar26 = CONCAT11((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar29 >> 0x10) - (0xff < sVar5),
                        cVar15);
      sVar5 = (short)(uVar29 >> 0x20);
      cVar16 = (0 < sVar5) * (sVar5 < 0x100) * (char)(uVar29 >> 0x20) - (0xff < sVar5);
      sVar5 = (short)(uVar29 >> 0x30);
      uVar27 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar29 >> 0x30) - (0xff < sVar5),
                        CONCAT12(cVar16,sVar26));
      sVar5 = (short)uVar31;
      cVar17 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar31 - (0xff < sVar5);
      sVar5 = (short)(uVar31 >> 0x10);
      uVar28 = CONCAT15((0 < sVar5) * (sVar5 < 0x100) * (char)(uVar31 >> 0x10) - (0xff < sVar5),
                        CONCAT14(cVar17,uVar27));
      sVar5 = (short)(uVar31 >> 0x20);
      cVar18 = (0 < sVar5) * (sVar5 < 0x100) * (char)(uVar31 >> 0x20) - (0xff < sVar5);
      sVar10 = (short)(uVar31 >> 0x30);
      sVar5 = (short)((uint)uVar23 >> 0x10);
      sVar6 = (short)((uint6)uVar24 >> 0x20);
      sVar7 = (short)(CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)(uVar30 >> 0x30) -
                               (0xff < sVar7),CONCAT16(cVar14,uVar24)) >> 0x30);
      sVar8 = (short)((uint)uVar27 >> 0x10);
      sVar9 = (short)((uint6)uVar28 >> 0x20);
      sVar10 = (short)(CONCAT17((0 < sVar10) * (sVar10 < 0x100) * (char)(uVar31 >> 0x30) -
                                (0xff < sVar10),CONCAT16(cVar18,uVar28)) >> 0x30);
      *(ulonglong *)((uVar20 | uVar19) + param_2) =
           CONCAT17((0 < sVar10) * (sVar10 < 0x100) * cVar18 - (0xff < sVar10),
                    CONCAT16((0 < sVar9) * (sVar9 < 0x100) * cVar17 - (0xff < sVar9),
                             CONCAT15((0 < sVar8) * (sVar8 < 0x100) * cVar16 - (0xff < sVar8),
                                      CONCAT14((0 < sVar26) * (sVar26 < 0x100) * cVar15 -
                                               (0xff < sVar26),
                                               CONCAT13((0 < sVar7) * (sVar7 < 0x100) * cVar14 -
                                                        (0xff < sVar7),
                                                        CONCAT12((0 < sVar6) * (sVar6 < 0x100) *
                                                                 cVar13 - (0xff < sVar6),
                                                                 CONCAT11((0 < sVar5) *
                                                                          (sVar5 < 0x100) * cVar12 -
                                                                          (0xff < sVar5),
                                                                          (0 < sVar22) *
                                                                          (sVar22 < 0x100) * cVar11
                                                                          - (0xff < sVar22))))))));
      uVar20 = uVar20 - local_10 & local_c;
    } while (uVar20 != 0);
    param_1 = (ulonglong *)((int)param_1 + iVar3);
    uVar19 = uVar19 - local_8 & param_3;
  } while (uVar19 != 0);
  return uVar21;
}

