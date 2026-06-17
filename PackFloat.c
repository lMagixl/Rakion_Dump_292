
/* unsigned long __cdecl PackFloat(unsigned char,unsigned char,unsigned char,float) */

ulong __cdecl PackFloat(uchar param_1,uchar param_2,uchar param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0xfe1f0  2732  ?PackFloat@@YAKEEEM@Z */
  uVar2 = (uint)param_4 >> 0x17 & 0xff;
  uVar1 = (uint)param_4 & 0x7fffff;
  if (uVar2 < 0x7f) {
    uVar1 = (uVar1 | 0x800000) >> (0x7fU - (char)((uint)param_4 >> 0x17) & 0x1f);
    uVar2 = 0;
  }
  else {
    uVar2 = ((1 << (param_1 & 0x1f)) - 1U & uVar2 - 0x7f) + (uint)param_3 << (param_2 & 0x1f);
  }
  return ((uint)param_4 >> 0x1f) << (param_1 + param_2 & 0x1f) | uVar1 >> (0x17 - param_2 & 0x1f) |
         uVar2;
}

