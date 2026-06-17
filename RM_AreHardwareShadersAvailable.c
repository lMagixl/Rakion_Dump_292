
/* int __cdecl RM_AreHardwareShadersAvailable(void) */

int __cdecl RM_AreHardwareShadersAvailable(void)

{
                    /* 0x162d10  2904  ?RM_AreHardwareShadersAvailable@@YAHXZ */
  if (DAT_362a4138 != 0) {
    if ((((char)*(uint *)(_pGfx + 0xa54) < '\0') && ((*(uint *)(_pGfx + 0xa54) & 0x100) != 0)) &&
       (3 < *(int *)(_pGfx + 0xadc))) {
      return 1;
    }
  }
  return 0;
}

