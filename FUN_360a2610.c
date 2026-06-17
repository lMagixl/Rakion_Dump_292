
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360a2610(void)

{
  undefined8 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined8 uVar11;
  unkbyte10 in_ST3;
  unkbyte10 Var12;
  ulonglong uVar13;
  
  iVar2 = DAT_362ca23c;
  _DAT_362ca1e0 = (ulonglong)ROUND(_DAT_362ca208 * _DAT_36230198);
  _DAT_362ca1e8 = (longlong)ROUND(_DAT_362ca20c * _DAT_36230194);
  _DAT_362ca1f0 = (longlong)ROUND(_DAT_362ca200 * _DAT_36230194);
  _DAT_362ca1f8 = (longlong)ROUND(_DAT_362ca204 * _DAT_36230194);
  uVar13 = (ulonglong)((uint)DAT_362ca224 << 0x10 | _DAT_362ca228 & 0xffff);
  Var12 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),CONCAT44(DAT_362ca234,DAT_362ca238));
  uVar4 = DAT_362ca22c << 0x10 | DAT_362ca230;
  _DAT_362ca1e0 = _DAT_362ca1e0 & 0xffffffffffff0000;
  uVar5 = CONCAT22(DAT_362ca1f0,DAT_362ca1f8);
  iVar6 = DAT_362ca244;
  iVar7 = DAT_362ca1f2;
  iVar8 = DAT_362ca1fa;
  puVar9 = DAT_362ca240;
  do {
    if (DAT_362ca220 <= iVar8) {
      iVar8 = iVar8 - DAT_362ca220;
      DAT_362ca1d0 = DAT_362ca1d4;
    }
    if (DAT_362ca220 <= iVar7) {
      iVar7 = iVar7 - DAT_362ca220;
      DAT_362ca1d0 = DAT_362ca1d4;
    }
    if (DAT_362ca1d0 != 0) break;
    uVar11 = *(undefined8 *)(iVar2 + iVar8 * 4);
    uVar1 = *(undefined8 *)(iVar2 + iVar7 * 4);
    uVar11 = packssdw(CONCAT44((int)(short)((ulonglong)uVar11 >> 0x20),(int)(short)uVar11),
                      CONCAT44((int)((longlong)uVar1 >> 0x30),(int)uVar1 >> 0x10));
    uVar3 = (ushort)(uVar5 >> 0x10);
    uVar11 = pmaddwd(uVar11,CONCAT26(uVar3 >> 1,
                                     CONCAT24(uVar3 >> 1,
                                              CONCAT22((ushort)uVar5 >> 1,(ushort)uVar5 >> 1))) ^
                            _DAT_362a5248);
    uVar11 = CONCAT44((int)((longlong)uVar11 >> 0x2f),(int)uVar11 >> 0xf);
    uVar11 = packssdw(uVar11,uVar11);
    uVar11 = psubsw(uVar11,uVar13);
    uVar11 = pmulhw(uVar11,(ulonglong)uVar4);
    uVar11 = psllw(uVar11,1);
    uVar13 = paddsw(uVar11,uVar13);
    iVar10 = (int)((unkuint10)Var12 >> 0x20);
    uVar11 = CONCAT44(iVar10 >> 0x10,(int)Var12 >> 0x10);
    uVar11 = packssdw(uVar11,uVar11);
    uVar11 = pmulhw(uVar13,uVar11);
    uVar11 = psllw(uVar11,1);
    Var12 = CONCAT28((short)((unkuint10)Var12 >> 0x40),
                     CONCAT44(iVar10 + (int)((ulonglong)DAT_362ca1d8 >> 0x20),
                              (int)Var12 + (int)DAT_362ca1d8));
    uVar11 = paddsw(uVar11,(ulonglong)*puVar9);
    *puVar9 = (uint)uVar11;
    iVar7 = iVar7 + _DAT_362ca1e4 + (uint)CARRY4(uVar5,_DAT_362ca1e0);
    uVar3 = (ushort)(uVar5 + _DAT_362ca1e0);
    uVar5 = CONCAT22((short)(uVar5 + _DAT_362ca1e0 >> 0x10),uVar3 + _DAT_362ca1e8);
    iVar8 = iVar8 + _DAT_362ca1ea + (uint)CARRY2(uVar3,_DAT_362ca1e8);
    puVar9 = puVar9 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DAT_362ca1f8 = (undefined2)uVar5;
  _DAT_362ca1f8 = CONCAT42(iVar8,DAT_362ca1f8);
  DAT_362ca1f0 = (undefined2)(uVar5 >> 0x10);
  _DAT_362ca1f0 = CONCAT42(iVar7,DAT_362ca1f0);
  _DAT_362ca228 = (uint)uVar13 & 0xffff;
  _DAT_362ca224 = (uint)uVar13 >> 0x10;
  return;
}

