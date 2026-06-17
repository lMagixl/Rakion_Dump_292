
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360a2450(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uVar10;
  unkbyte10 in_ST3;
  unkbyte10 Var11;
  ulonglong uVar12;
  
  iVar1 = DAT_362ca23c;
  _DAT_362ca1e0 = (ulonglong)ROUND(_DAT_362ca208 * _DAT_36230198);
  _DAT_362ca1e8 = (longlong)ROUND(_DAT_362ca20c * _DAT_36230194);
  _DAT_362ca1f0 = (longlong)ROUND(_DAT_362ca200 * _DAT_36230194);
  _DAT_362ca1f8 = (longlong)ROUND(_DAT_362ca204 * _DAT_36230194);
  uVar12 = (ulonglong)((uint)DAT_362ca224 << 0x10 | _DAT_362ca228 & 0xffff);
  Var11 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),CONCAT44(DAT_362ca234,DAT_362ca238));
  uVar3 = DAT_362ca22c << 0x10 | DAT_362ca230;
  _DAT_362ca1e0 = _DAT_362ca1e0 & 0xffffffffffff0000;
  uVar4 = CONCAT22(DAT_362ca1f0,DAT_362ca1f8);
  iVar5 = DAT_362ca244;
  iVar6 = DAT_362ca1f2;
  iVar7 = DAT_362ca1fa;
  puVar8 = DAT_362ca240;
  do {
    if (DAT_362ca220 <= iVar7) {
      iVar7 = iVar7 - DAT_362ca220;
      DAT_362ca1d0 = DAT_362ca1d4;
    }
    if (DAT_362ca220 <= iVar6) {
      iVar6 = iVar6 - DAT_362ca220;
      DAT_362ca1d0 = DAT_362ca1d4;
    }
    if (DAT_362ca1d0 != 0) break;
    uVar2 = (ushort)(uVar4 >> 0x10);
    uVar10 = pmaddwd(CONCAT44(*(undefined4 *)(iVar1 + iVar6 * 2),*(undefined4 *)(iVar1 + iVar7 * 2))
                     ,CONCAT26(uVar2 >> 1,
                               CONCAT24(uVar2 >> 1,CONCAT22((ushort)uVar4 >> 1,(ushort)uVar4 >> 1)))
                      ^ _DAT_362a5248);
    uVar10 = CONCAT44((int)((longlong)uVar10 >> 0x2f),(int)uVar10 >> 0xf);
    uVar10 = packssdw(uVar10,uVar10);
    uVar10 = psubsw(uVar10,uVar12);
    uVar10 = pmulhw(uVar10,(ulonglong)uVar3);
    uVar10 = psllw(uVar10,1);
    uVar12 = paddsw(uVar10,uVar12);
    iVar9 = (int)((unkuint10)Var11 >> 0x20);
    uVar10 = CONCAT44(iVar9 >> 0x10,(int)Var11 >> 0x10);
    uVar10 = packssdw(uVar10,uVar10);
    uVar10 = pmulhw(uVar12,uVar10);
    uVar10 = psllw(uVar10,1);
    Var11 = CONCAT28((short)((unkuint10)Var11 >> 0x40),
                     CONCAT44(iVar9 + (int)((ulonglong)DAT_362ca1d8 >> 0x20),
                              (int)Var11 + (int)DAT_362ca1d8));
    uVar10 = paddsw(uVar10,(ulonglong)*puVar8);
    *puVar8 = (uint)uVar10;
    iVar6 = iVar6 + _DAT_362ca1e4 + (uint)CARRY4(uVar4,_DAT_362ca1e0);
    uVar2 = (ushort)(uVar4 + _DAT_362ca1e0);
    uVar4 = CONCAT22((short)(uVar4 + _DAT_362ca1e0 >> 0x10),uVar2 + _DAT_362ca1e8);
    iVar7 = iVar7 + _DAT_362ca1ea + (uint)CARRY2(uVar2,_DAT_362ca1e8);
    puVar8 = puVar8 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  DAT_362ca1f8 = (undefined2)uVar4;
  _DAT_362ca1f8 = CONCAT42(iVar7,DAT_362ca1f8);
  DAT_362ca1f0 = (undefined2)(uVar4 >> 0x10);
  _DAT_362ca1f0 = CONCAT42(iVar6,DAT_362ca1f0);
  _DAT_362ca228 = (uint)uVar12 & 0xffff;
  _DAT_362ca224 = (uint)uVar12 >> 0x10;
  return;
}

