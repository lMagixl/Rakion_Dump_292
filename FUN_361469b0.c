
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361469b0(void *this,byte *param_1,byte param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  short sVar19;
  uint5 uVar18;
  short sVar20;
  undefined8 uVar21;
  ushort uVar22;
  undefined8 uVar23;
  
  iVar4 = DAT_362fdafc;
  iVar3 = DAT_362fdaf8;
  iVar7 = DAT_362fdaf8 >> 0x1f;
  uVar1 = *(undefined4 *)((int)this + 0x60);
  DAT_362fdae8 = DAT_362fdae8 << 7;
  DAT_362fdae0 = DAT_362fdae0 >> 1;
  uVar22 = (ushort)(byte)((uint)uVar1 >> 0x18);
  uVar23 = psllw((ulonglong)
                 CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)uVar1 << 0x30
                                                                         ) >> 0x28),
                                                                 (char)((uint)uVar1 >> 8)) << 0x20)
                                               >> 0x18),CONCAT12((char)((uint)uVar1 >> 0x10),uVar22)
                                         ) >> 0x10),uVar22),1);
  iVar6 = DAT_362fdb14;
  iVar12 = DAT_362fdb00;
  puVar9 = DAT_362fdadc;
  iVar14 = DAT_362fdaf0;
  iVar16 = DAT_362fdaf4;
  iVar15 = DAT_362fdaec;
  iVar13 = DAT_362fdaf0;
  iVar11 = DAT_362fdb00;
  iVar8 = DAT_362fdb10;
  do {
    do {
      if ((iVar12 < 0x10000000) && ((*param_1 & param_2) != 0)) {
        sVar5 = (short)DAT_362fdae8;
        if (DAT_362fdae4 < (int)(uint)(byte)(&DAT_362b2af0)[iVar12 >> 0xf & 0x1fff]) {
          sVar5 = (0xff - (ushort)(byte)(&DAT_362b2af0)[iVar12 >> 0xf & 0x1fff]) *
                  (short)DAT_362fdae0;
        }
        uVar21 = pmulhw(CONCAT44(CONCAT22(sVar5,sVar5),CONCAT22(sVar5,sVar5)),uVar23);
        uVar1 = *puVar9;
        uVar2 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30)
                                                       >> 0x28),
                                                CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >> 0x20
                                      ),uVar1) >> 0x18);
        uVar18 = (uint5)uVar2 & 0xffffffff00;
        sVar5 = ((ushort)uVar1 & 0xff) + (short)uVar21;
        sVar17 = ((ushort)(CONCAT43(uVar2,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10)
                 & 0xff) + (short)((ulonglong)uVar21 >> 0x10);
        sVar19 = (short)(uVar18 >> 8) + (short)((ulonglong)uVar21 >> 0x20);
        sVar20 = (short)(uVar18 >> 0x18) + (short)((ulonglong)uVar21 >> 0x30);
        *puVar9 = CONCAT13((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20),
                           CONCAT12((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 - (0xff < sVar19)
                                    ,CONCAT11((0 < sVar17) * (sVar17 < 0x100) * (char)sVar17 -
                                              (0xff < sVar17),
                                              (0 < sVar5) * (sVar5 < 0x100) * (char)sVar5 -
                                              (0xff < sVar5))));
      }
      puVar9 = puVar9 + 1;
      bVar10 = (char)param_2 < '\0';
      param_2 = param_2 << 1 | bVar10;
      param_1 = param_1 + bVar10;
      iVar6 = iVar6 + -1;
      iVar12 = iVar12 + iVar14;
      iVar14 = iVar14 + iVar4;
    } while (iVar6 != 0);
    puVar9 = (undefined4 *)((int)puVar9 + _DAT_362fdb0c);
    iVar12 = iVar11 + iVar15;
    iVar14 = iVar13 + iVar16;
    iVar15 = iVar15 + iVar3;
    iVar16 = iVar16 + iVar7;
    iVar8 = iVar8 + -1;
    iVar6 = DAT_362fdb14;
    iVar13 = iVar14;
    iVar11 = iVar12;
  } while (iVar8 != 0);
  return;
}

