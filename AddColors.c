
/* unsigned long __cdecl AddColors(unsigned long,unsigned long) */

ulong __cdecl AddColors(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
                    /* 0x62c20  966  ?AddColors@@YAKKK@Z */
  if (param_1 == 0) {
    return param_2;
  }
  if (param_2 != 0) {
    if ((param_1 != 0xffffffff) && (param_2 != 0xffffffff)) {
      uVar1 = (param_1 >> 0x18) + (param_2 >> 0x18);
      uVar2 = ((param_1 & 0xff0000) >> 0x10) + ((param_2 & 0xff0000) >> 0x10);
      uVar3 = ((param_1 & 0xff00) >> 8) + ((param_2 & 0xff00) >> 8);
      uVar4 = (param_1 & 0xff) + (param_2 & 0xff);
      return (uVar1 | -(uint)(0xff < uVar1)) << 0x18 |
             ((uVar2 | -(uint)(0xff < uVar2)) & 0xff) << 0x10 |
             ((uVar3 | -(uint)(0xff < uVar3)) & 0xff) << 8 | (uVar4 | -(uint)(0xff < uVar4)) & 0xff;
    }
    param_1 = 0xffffffff;
  }
  return param_1;
}

