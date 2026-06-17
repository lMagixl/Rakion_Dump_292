
/* unsigned long __cdecl shaGetLightColor(void) */

ulong __cdecl shaGetLightColor(void)

{
                    /* 0x8e720  4340  ?shaGetLightColor@@YAKXZ */
  return DAT_362c9944 >> 0x18 | (DAT_362c9944 & 0xff0000) >> 8 | (DAT_362c9944 & 0xff00) << 8 |
         DAT_362c9944 << 0x18;
}

