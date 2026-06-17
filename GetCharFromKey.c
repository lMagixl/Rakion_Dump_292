
/* char __cdecl GetCharFromKey(unsigned long,int) */

char __cdecl GetCharFromKey(ulong param_1,int param_2)

{
                    /* 0x28180  1750  ?GetCharFromKey@@YADKH@Z */
  if (param_2 != 0) {
    return *(char *)((int)&DAT_362b9508 + (param_1 & 0xffff));
  }
  return *(char *)((int)&DAT_362b9608 + (param_1 & 0xffff));
}

