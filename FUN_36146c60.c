
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36146c60(void *this,byte *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  unkbyte10 in_ST1;
  unkbyte10 Var12;
  unkbyte10 in_ST2;
  unkbyte10 Var13;
  unkbyte10 in_ST3;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  unkint10 in_ST5;
  ushort uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  unkbyte10 in_ST6;
  undefined8 uVar21;
  int local_8;
  
  iVar3 = DAT_362fdafc;
  iVar2 = DAT_362fdaf8;
  local_8 = 0x7fffffff;
  iVar9 = (int)ROUND((float)DAT_362fdae0 * _DAT_362fdb18 * _DAT_362fdb1c);
  if (iVar9 != 0) {
    local_8 = (int)(0x10000 / (longlong)iVar9) + 0x100;
  }
  iVar6 = DAT_362fdafc >> 0x1f;
  iVar7 = DAT_362fdaf8 >> 0x1f;
  uVar19 = *(undefined4 *)((int)this + 0x60);
  DAT_362fdae8 = DAT_362fdae8 << 7;
  DAT_362fdae0 = iVar9 >> 1;
  Var12 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),CONCAT44(DAT_362fdaf0,DAT_362fdb00));
  Var13 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),CONCAT44(DAT_362fdaf4,DAT_362fdaec));
  uVar21 = psllw((longlong)
                 CONCAT82(CONCAT71((int7)(((unkuint10)
                                           CONCAT51((int5)(((unkuint10)
                                                            CONCAT31((int3)(((unkuint10)
                                                                             (ushort)((unkuint10)
                                                                                      in_ST6 >> 0x40
                                                                                     ) << 0x40) >>
                                                                           0x38),(char)uVar19) <<
                                                           0x30) >> 0x28),(char)((uint)uVar19 >> 8))
                                          << 0x20) >> 0x18),(char)((uint)uVar19 >> 0x10)),
                          (ushort)(byte)((uint)uVar19 >> 0x18)),1);
  iVar9 = DAT_362fdb10;
  puVar10 = DAT_362fdadc;
  do {
    in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),(ulonglong)Var12 >> 0x20);
    iVar5 = DAT_362fdb14;
    iVar8 = (int)Var12;
    do {
      if ((iVar8 < 0x10000000) && ((*param_1 & param_2) != 0)) {
        iVar4 = DAT_362fdae8;
        if ((int)(uint)*(ushort *)(&DAT_362b4af0 + (iVar8 >> 0xf & 0x1fffU) * 2) < local_8) {
          iVar4 = (*(ushort *)(&DAT_362b4af0 + (iVar8 >> 0xf & 0x1fffU) * 2) - 0x100) * DAT_362fdae0
          ;
        }
        uVar19 = CONCAT22((short)iVar4,(short)iVar4);
        uVar20 = pmulhw(CONCAT44(uVar19,uVar19),uVar21);
        uVar19 = *puVar10;
        uVar18 = (ushort)((unkuint10)in_ST5 >> 0x40);
        uVar1 = CONCAT31((int3)(((unkuint10)uVar18 << 0x40) >> 0x38),(char)((uint)uVar19 >> 0x18));
        sVar14 = (ushort)(byte)uVar19 + (short)uVar20;
        sVar15 = (ushort)(byte)((uint)uVar19 >> 8) + (short)((ulonglong)uVar20 >> 0x10);
        sVar16 = (short)(CONCAT55((int5)(((unkuint10)uVar1 << 0x30) >> 0x28),
                                  CONCAT14((char)((uint)uVar19 >> 0x10),uVar19)) >> 0x20) +
                 (short)((ulonglong)uVar20 >> 0x20);
        sVar17 = (short)uVar1 + (short)((ulonglong)uVar20 >> 0x30);
        in_ST5 = (unkuint10)uVar18 << 0x40;
        *puVar10 = CONCAT13((0 < sVar17) * (sVar17 < 0x100) * (char)sVar17 - (0xff < sVar17),
                            CONCAT12((0 < sVar16) * (sVar16 < 0x100) * (char)sVar16 -
                                     (0xff < sVar16),
                                     CONCAT11((0 < sVar15) * (sVar15 < 0x100) * (char)sVar15 -
                                              (0xff < sVar15),
                                              (0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 -
                                              (0xff < sVar14))));
      }
      puVar10 = puVar10 + 1;
      iVar8 = iVar8 + (int)in_ST3;
      in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),
                        CONCAT44((int)((unkuint10)in_ST3 >> 0x20) + iVar6,(int)in_ST3 + iVar3));
      bVar11 = (char)param_2 < '\0';
      param_2 = param_2 << 1 | bVar11;
      param_1 = param_1 + bVar11;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar10 = (undefined4 *)((int)puVar10 + _DAT_362fdb0c);
    iVar5 = (int)((unkuint10)Var13 >> 0x20);
    Var12 = CONCAT28((short)((unkuint10)Var12 >> 0x40),
                     CONCAT44((int)((unkuint10)Var12 >> 0x20) + iVar5,(int)Var12 + (int)Var13));
    Var13 = CONCAT28((short)((unkuint10)Var13 >> 0x40),CONCAT44(iVar5 + iVar7,(int)Var13 + iVar2));
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return;
}

