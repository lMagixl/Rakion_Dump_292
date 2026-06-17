
/* unsigned long __cdecl GetGIDFromChar(char) */

ulong __cdecl GetGIDFromChar(char param_1)

{
  uint uVar1;
  
                    /* 0x281a0  1894  ?GetGIDFromChar@@YAKD@Z */
  uVar1 = 0;
  do {
    if (*(char *)((int)&DAT_362b9608 + uVar1) == param_1) {
      return uVar1 | 0x10000;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x100);
  return 0;
}

