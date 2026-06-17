
/* int __cdecl shaOverBrightningEnabled(void) */

int __cdecl shaOverBrightningEnabled(void)

{
  int iVar1;
  
                    /* 0x8ea10  4360  ?shaOverBrightningEnabled@@YAHXZ */
  if ((DAT_362a4104 == 0) || (iVar1 = 1, *(int *)(_pGfx + 0xadc) < 2)) {
    iVar1 = 0;
  }
  return iVar1;
}

