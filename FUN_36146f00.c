
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36146f00(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined6 uVar14;
  undefined6 uVar15;
  ushort uVar16;
  undefined4 uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined1 uVar26;
  unkbyte10 extraout_ST1;
  undefined2 uVar28;
  unkbyte10 Var27;
  undefined1 uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  unkbyte10 in_ST2;
  undefined1 uVar32;
  short sVar33;
  ulonglong uVar34;
  undefined8 uVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  unkbyte10 in_ST3;
  ushort uVar39;
  undefined4 uVar40;
  undefined8 uVar41;
  undefined4 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulonglong uVar45;
  
  fVar8 = _DAT_36223384 / (param_1[4] - param_1[3]);
  fVar9 = (*(float *)((int)this + 0x44) * *param_1 +
          *(float *)((int)this + 0x48) * param_1[1] + *(float *)((int)this + 0x4c) * param_1[2]) *
          fVar8;
  fVar21 = (*param_1 * *(float *)((int)this + 0x50) +
           *(float *)((int)this + 0x54) * param_1[1] + *(float *)((int)this + 0x58) * param_1[2]) *
           fVar8;
  fVar9 = fVar9 / (float)*(int *)((int)this + 0x28) + fVar9;
  fVar21 = fVar21 / (float)*(int *)((int)this + 0x2c) + fVar21;
  iVar1 = (int)ROUND(fVar9 * _DAT_36231940);
  iVar2 = (int)ROUND(fVar21 * _DAT_36231940);
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  DAT_362fdadc = *(undefined4 **)((int)this + 0x30);
  fVar21 = ((*(float *)((int)this + 0x38) * *param_1 +
            *(float *)((int)this + 0x3c) * param_1[1] + *(float *)((int)this + 0x40) * param_1[2]) -
           param_1[3]) * fVar8 - (fVar21 + fVar9) * _DAT_36227cf0;
  if (fVar21 < _DAT_3622376c) {
    fVar21 = 0.0;
  }
  else if (fVar21 < _DAT_36223384 == (fVar21 == _DAT_36223384)) {
    fVar21 = 1.0;
  }
  uVar45 = FUN_361bfd6c();
  uVar23 = (uint)uVar45;
  iVar5 = *(int *)((int)this + 0x20);
  iVar6 = *(int *)((int)this + 0x28);
  uVar18 = LerpColor((ulong)fVar3,(ulong)fVar4,fVar21);
  iVar7 = *(int *)((int)this + 0x28);
  iVar20 = *(int *)((int)this + 0x2c);
  uVar10 = (undefined1)(uVar18 >> 0x10);
  uVar26 = (undefined1)(uVar18 >> 8);
  uVar11 = (undefined1)((uint)fVar3 >> 0x10);
  uVar29 = (undefined1)((uint)fVar3 >> 8);
  uVar12 = (undefined1)((uint)fVar4 >> 0x10);
  uVar32 = (undefined1)((uint)fVar4 >> 8);
  uVar28 = (undefined2)((unkuint10)extraout_ST1 >> 0x40);
  uVar39 = (ushort)((unkuint10)in_ST2 >> 0x40);
  uVar40 = CONCAT31(CONCAT21(uVar28,(char)uVar18),(char)uVar18);
  uVar14 = CONCAT51(CONCAT41(uVar40,uVar26),uVar26);
  uVar26 = (undefined1)(uVar18 >> 0x18);
  uVar16 = CONCAT11(SUB41(fVar3,0),SUB41(fVar3,0));
  uVar17 = CONCAT31(CONCAT21(uVar16,uVar29),uVar29);
  uVar29 = (undefined1)((uint)fVar3 >> 0x18);
  uVar42 = CONCAT31(CONCAT21(uVar39,SUB41(fVar4,0)),SUB41(fVar4,0));
  uVar15 = CONCAT51(CONCAT41(uVar42,uVar32),uVar32);
  uVar32 = (undefined1)((uint)fVar4 >> 0x18);
  uVar45 = CONCAT26((ushort)uVar40 >> 2,
                    CONCAT24((ushort)uVar14 >> 2,
                             CONCAT22((ushort)CONCAT71(CONCAT61(uVar14,uVar10),uVar10) >> 2,
                                      CONCAT11(uVar26,uVar26) >> 2)));
  uVar30 = CONCAT26(uVar16 >> 1,
                    CONCAT24((ushort)uVar17 >> 1,
                             CONCAT22((ushort)CONCAT51(CONCAT41(uVar17,uVar11),uVar11) >> 1,
                                      CONCAT11(uVar29,uVar29) >> 1)));
  uVar34 = CONCAT26((ushort)uVar42 >> 1,
                    CONCAT24((ushort)uVar15 >> 1,
                             CONCAT22((ushort)CONCAT71(CONCAT61(uVar15,uVar12),uVar12) >> 1,
                                      CONCAT11(uVar32,uVar32) >> 1)));
  if (param_1[5] != 0.0) {
    uVar45 = uVar45 ^ 0xffffffffffffffff;
    uVar30 = uVar30 ^ 0xffffffffffffffff;
    uVar34 = uVar34 ^ 0xffffffffffffffff;
    uVar45 = CONCAT26((short)(uVar45 >> 0x30) + 1,
                      CONCAT24((short)(uVar45 >> 0x20) + 1,
                               CONCAT22((short)(uVar45 >> 0x10) + 1,(short)uVar45 + 1)));
    uVar30 = CONCAT26((short)(uVar30 >> 0x30) + 1,
                      CONCAT24((short)(uVar30 >> 0x20) + 1,
                               CONCAT22((short)(uVar30 >> 0x10) + 1,(short)uVar30 + 1)));
    uVar34 = CONCAT26((short)(uVar34 >> 0x30) + 1,
                      CONCAT24((short)(uVar34 >> 0x20) + 1,
                               CONCAT22((short)(uVar34 >> 0x10) + 1,(short)uVar34 + 1)));
  }
  Var27 = CONCAT28(uVar28,uVar45);
  uVar35 = CONCAT26((short)(uVar34 >> 0x30) - (short)(uVar30 >> 0x30),
                    CONCAT24((short)(uVar34 >> 0x20) - (short)(uVar30 >> 0x20),
                             CONCAT22((short)(uVar34 >> 0x10) - (short)(uVar30 >> 0x10),
                                      (short)uVar34 - (short)uVar30)));
  uVar28 = (undefined2)iVar1;
  uVar40 = CONCAT22(uVar28,uVar28);
  uVar28 = (undefined2)iVar2;
  uVar42 = CONCAT22(uVar28,uVar28);
  uVar31 = pmulhw(uVar35,CONCAT44(uVar40,uVar40));
  uVar35 = pmulhw(uVar35,CONCAT44(uVar42,uVar42));
  uVar41 = psraw(uVar30,1);
  uVar43 = psraw(uVar34,1);
  puVar24 = DAT_362fdadc;
  do {
    in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),(longlong)Var27);
    iVar19 = iVar7;
    uVar22 = uVar23;
    do {
      while( true ) {
        puVar25 = puVar24;
        uVar44 = psraw((longlong)in_ST3,6);
        uVar40 = *puVar25;
        uVar13 = CONCAT31((int3)(((unkuint10)uVar39 << 0x40) >> 0x38),(char)((uint)uVar40 >> 0x18));
        sVar33 = (ushort)(byte)uVar40 + (short)uVar44;
        sVar36 = (ushort)(byte)((uint)uVar40 >> 8) + (short)((ulonglong)uVar44 >> 0x10);
        sVar37 = (short)(CONCAT55((int5)(((unkuint10)uVar13 << 0x30) >> 0x28),
                                  CONCAT14((char)((uint)uVar40 >> 0x10),uVar40)) >> 0x20) +
                 (short)((ulonglong)uVar44 >> 0x20);
        sVar38 = (short)uVar13 + (short)((ulonglong)uVar44 >> 0x30);
        *puVar25 = CONCAT13((0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38),
                            CONCAT12((0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 -
                                     (0xff < sVar37),
                                     CONCAT11((0 < sVar36) * (sVar36 < 0x100) * (char)sVar36 -
                                              (0xff < sVar36),
                                              (0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 -
                                              (0xff < sVar33))));
        uVar22 = uVar22 + iVar1;
        uVar28 = (undefined2)((unkuint10)in_ST3 >> 0x40);
        if (0x8000 < uVar22) break;
        in_ST3 = CONCAT28(uVar28,CONCAT26((short)((unkuint10)in_ST3 >> 0x30) +
                                          (short)((ulonglong)uVar31 >> 0x30),
                                          CONCAT24((short)((unkuint10)in_ST3 >> 0x20) +
                                                   (short)((ulonglong)uVar31 >> 0x20),
                                                   CONCAT22((short)((unkuint10)in_ST3 >> 0x10) +
                                                            (short)((ulonglong)uVar31 >> 0x10),
                                                            (short)in_ST3 + (short)uVar31))));
        iVar19 = iVar19 + -1;
        puVar24 = puVar25 + 1;
        if (iVar19 == 0) goto LAB_3614711c;
      }
      uVar44 = uVar43;
      if ((int)uVar22 < 0x8001) {
        uVar44 = uVar41;
      }
      in_ST3 = CONCAT28(uVar28,uVar44);
      iVar19 = iVar19 + -1;
      puVar24 = puVar25 + 1;
    } while (iVar19 != 0);
LAB_3614711c:
    uVar23 = uVar23 + iVar2;
    if (uVar23 < 0x8001) {
      uVar44 = CONCAT26((short)((unkuint10)Var27 >> 0x30) + (short)((ulonglong)uVar35 >> 0x30),
                        CONCAT24((short)((unkuint10)Var27 >> 0x20) +
                                 (short)((ulonglong)uVar35 >> 0x20),
                                 CONCAT22((short)((unkuint10)Var27 >> 0x10) +
                                          (short)((ulonglong)uVar35 >> 0x10),
                                          (short)Var27 + (short)uVar35)));
    }
    else {
      uVar44 = uVar43;
      if ((int)uVar23 < 0x8001) {
        uVar44 = uVar41;
      }
    }
    Var27 = CONCAT28((short)((unkuint10)Var27 >> 0x40),uVar44);
    iVar20 = iVar20 + -1;
    puVar24 = puVar25 + (iVar5 - iVar6) + 1;
    if (iVar20 == 0) {
      return;
    }
  } while( true );
}

