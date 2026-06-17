
/* int __cdecl IsWhite(unsigned long) */

int __cdecl IsWhite(ulong param_1)

{
                    /* 0x62a80  2507  ?IsWhite@@YAHK@Z */
  if (((0xfb < (byte)(param_1 >> 0x18)) && (0xfb < (byte)(param_1 >> 0x10))) &&
     (0xfb < (byte)(param_1 >> 8))) {
    return 1;
  }
  return 0;
}

