
/* int __cdecl IsBlack(unsigned long) */

int __cdecl IsBlack(ulong param_1)

{
                    /* 0x62a50  2372  ?IsBlack@@YAHK@Z */
  if ((((byte)(param_1 >> 0x18) < 4) && ((byte)(param_1 >> 0x10) < 4)) && ((byte)(param_1 >> 8) < 4)
     ) {
    return 1;
  }
  return 0;
}

