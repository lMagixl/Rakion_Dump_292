
/* unsigned long __cdecl shaGetAmbientColor(void) */

ulong __cdecl shaGetAmbientColor(void)

{
                    /* 0x8e730  4331  ?shaGetAmbientColor@@YAKXZ */
  return DAT_362c9948 >> 0x18 | (DAT_362c9948 & 0xff0000) >> 8 | (DAT_362c9948 & 0xff00) << 8 |
         DAT_362c9948 << 0x18;
}

