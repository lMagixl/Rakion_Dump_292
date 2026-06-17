
/* unsigned long __cdecl MulColors(unsigned long,unsigned long) */

ulong __cdecl MulColors(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
                    /* 0x62b10  2660  ?MulColors@@YAKKK@Z */
  if (param_1 == 0xffffffff) {
    return param_2;
  }
  if (param_2 != 0xffffffff) {
    if ((param_1 != 0) && (param_2 != 0)) {
      uVar1 = (param_1 & 0xff0000) >> 0x10;
      uVar3 = (param_2 & 0xff0000) >> 0x10;
      uVar2 = (param_1 & 0xff00) >> 8;
      uVar4 = (param_2 & 0xff00) >> 8;
      return (param_1 >> 0x18 | (param_1 >> 0x18) << 8) * (param_2 >> 0x18 | (param_2 >> 0x18) << 8)
             & 0xff000000 | ((uVar1 | uVar1 << 8) * (uVar3 | uVar3 << 8) >> 0x18) << 0x10 |
             ((uVar2 | uVar2 << 8) * (uVar4 | uVar4 << 8) >> 0x18) << 8 |
             (param_1 & 0xff | (param_1 & 0xff) << 8) * (param_2 & 0xff | (param_2 & 0xff) << 8) >>
             0x18;
    }
    param_1 = 0;
  }
  return param_1;
}

