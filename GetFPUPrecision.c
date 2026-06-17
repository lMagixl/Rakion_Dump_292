
/* enum FPUPrecisionType __cdecl GetFPUPrecision(void) */

FPUPrecisionType __cdecl GetFPUPrecision(void)

{
  uint uVar1;
  
                    /* 0x48a60  1862  ?GetFPUPrecision@@YA?AW4FPUPrecisionType@@XZ */
  uVar1 = _control87(0,0);
  if ((uVar1 & 0x30000) == 0) {
    return 2;
  }
  if ((uVar1 & 0x30000) != 0x10000) {
    return 0;
  }
  return 1;
}

