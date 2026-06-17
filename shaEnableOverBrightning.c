
/* void __cdecl shaEnableOverBrightning(void) */

void __cdecl shaEnableOverBrightning(void)

{
  int iVar1;
  
                    /* 0x8edf0  4326  ?shaEnableOverBrightning@@YAXXZ */
  iVar1 = shaOverBrightningEnabled();
  if (iVar1 != 0) {
    (*DAT_362c4684)(2);
  }
  return;
}

