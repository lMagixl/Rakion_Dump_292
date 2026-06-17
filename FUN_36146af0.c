
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36146af0(int param_1)

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
  unkbyte10 in_ST1;
  unkbyte10 Var11;
  unkbyte10 in_ST2;
  unkbyte10 Var12;
  unkbyte10 in_ST3;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  unkint10 in_ST5;
  ushort uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  unkbyte10 in_ST6;
  undefined8 uVar20;
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
  uVar18 = *(undefined4 *)(param_1 + 0x60);
  DAT_362fdae8 = DAT_362fdae8 << 7;
  DAT_362fdae0 = iVar9 >> 1;
  Var11 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),CONCAT44(DAT_362fdaf0,DAT_362fdb00));
  Var12 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),CONCAT44(DAT_362fdaf4,DAT_362fdaec));
  uVar20 = psllw((longlong)
                 CONCAT82(CONCAT71((int7)(((unkuint10)
                                           CONCAT51((int5)(((unkuint10)
                                                            CONCAT31((int3)(((unkuint10)
                                                                             (ushort)((unkuint10)
                                                                                      in_ST6 >> 0x40
                                                                                     ) << 0x40) >>
                                                                           0x38),(char)uVar18) <<
                                                           0x30) >> 0x28),(char)((uint)uVar18 >> 8))
                                          << 0x20) >> 0x18),(char)((uint)uVar18 >> 0x10)),
                          (ushort)(byte)((uint)uVar18 >> 0x18)),1);
  iVar9 = DAT_362fdb10;
  puVar10 = DAT_362fdadc;
  do {
    in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),(ulonglong)Var11 >> 0x20);
    iVar5 = DAT_362fdb14;
    iVar8 = (int)Var11;
    do {
      if (iVar8 < 0x10000000) {
        iVar4 = DAT_362fdae8;
        if ((int)(uint)*(ushort *)(&DAT_362b4af0 + (iVar8 >> 0xf & 0x1fffU) * 2) < local_8) {
          iVar4 = (*(ushort *)(&DAT_362b4af0 + (iVar8 >> 0xf & 0x1fffU) * 2) - 0x100) * DAT_362fdae0
          ;
        }
        uVar18 = CONCAT22((short)iVar4,(short)iVar4);
        uVar19 = pmulhw(CONCAT44(uVar18,uVar18),uVar20);
        uVar18 = *puVar10;
        uVar17 = (ushort)((unkuint10)in_ST5 >> 0x40);
        uVar1 = CONCAT31((int3)(((unkuint10)uVar17 << 0x40) >> 0x38),(char)((uint)uVar18 >> 0x18));
        sVar13 = (ushort)(byte)uVar18 + (short)uVar19;
        sVar14 = (ushort)(byte)((uint)uVar18 >> 8) + (short)((ulonglong)uVar19 >> 0x10);
        sVar15 = (short)(CONCAT55((int5)(((unkuint10)uVar1 << 0x30) >> 0x28),
                                  CONCAT14((char)((uint)uVar18 >> 0x10),uVar18)) >> 0x20) +
                 (short)((ulonglong)uVar19 >> 0x20);
        sVar16 = (short)uVar1 + (short)((ulonglong)uVar19 >> 0x30);
        in_ST5 = (unkuint10)uVar17 << 0x40;
        *puVar10 = CONCAT13((0 < sVar16) * (sVar16 < 0x100) * (char)sVar16 - (0xff < sVar16),
                            CONCAT12((0 < sVar15) * (sVar15 < 0x100) * (char)sVar15 -
                                     (0xff < sVar15),
                                     CONCAT11((0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 -
                                              (0xff < sVar14),
                                              (0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 -
                                              (0xff < sVar13))));
      }
      puVar10 = puVar10 + 1;
      iVar8 = iVar8 + (int)in_ST3;
      in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),
                        CONCAT44((int)((unkuint10)in_ST3 >> 0x20) + iVar6,(int)in_ST3 + iVar3));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar10 = (undefined4 *)((int)puVar10 + _DAT_362fdb0c);
    iVar5 = (int)((unkuint10)Var12 >> 0x20);
    Var11 = CONCAT28((short)((unkuint10)Var11 >> 0x40),
                     CONCAT44((int)((unkuint10)Var11 >> 0x20) + iVar5,(int)Var11 + (int)Var12));
    Var12 = CONCAT28((short)((unkuint10)Var12 >> 0x40),CONCAT44(iVar5 + iVar7,(int)Var12 + iVar2));
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return;
}

