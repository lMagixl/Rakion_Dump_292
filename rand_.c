
/* int __cdecl rand_(void) */

int __cdecl rand_(void)

{
                    /* 0x49ce0  4278  ?rand_@@YAHXZ */
  DAT_362a2810 = DAT_362a2810 * 0x343fd + 0x269ec3;
  return DAT_362a2810 >> 0x10 & 0x7fff;
}

