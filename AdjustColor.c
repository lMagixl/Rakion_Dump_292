
/* unsigned long __cdecl AdjustColor(unsigned long,long,long) */

ulong __cdecl AdjustColor(ulong param_1,long param_2,long param_3)

{
  uchar uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uchar local_c [4];
  uchar local_8 [4];
  uchar local_4 [4];
  
                    /* 0x630a0  1042  ?AdjustColor@@YAKKJJ@Z */
  if ((param_2 == 0) && (param_3 == 0x100)) {
    return param_1;
  }
  uVar3 = param_1;
  if (param_3 != 0x100) {
    uVar2 = param_1 >> 0x10 & 0xff;
    uVar4 = param_1 >> 8 & 0xff;
    iVar5 = (int)(uVar4 * 0x20 + uVar2 * 0x98 + (param_1 >> 0x18) * 0x48) >> 8;
    uVar3 = (uint)CONCAT21(CONCAT11(_pubClipByte
                                    [iVar5 + ((int)(((param_1 >> 0x18) - iVar5) * param_3) >> 8)],
                                    _pubClipByte[iVar5 + ((int)((uVar2 - iVar5) * param_3) >> 8)]),
                           _pubClipByte[iVar5 + ((int)((uVar4 - iVar5) * param_3) >> 8)]) << 8;
  }
  if (param_2 == 0) {
    return param_1 & 0xff | uVar3;
  }
  ColorToHSV(uVar3,local_c,local_4,local_8);
  uVar1 = local_c[0] + (char)param_2;
  local_c[0] = uVar1;
  uVar3 = HSVToColor(uVar1,local_4[0],local_8[0]);
  return uVar3 | param_1 & 0xff;
}

