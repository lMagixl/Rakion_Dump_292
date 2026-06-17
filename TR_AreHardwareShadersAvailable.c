
/* int __cdecl TR_AreHardwareShadersAvailable(void) */

int __cdecl TR_AreHardwareShadersAvailable(void)

{
                    /* 0x17d810  3743  ?TR_AreHardwareShadersAvailable@@YAHXZ */
  if (DAT_362a4148 != 0) {
    if ((((char)*(uint *)(_pGfx + 0xa54) < '\0') && ((*(uint *)(_pGfx + 0xa54) & 0x100) != 0)) &&
       (3 < *(int *)(_pGfx + 0xadc))) {
      return 1;
    }
  }
  return 0;
}

