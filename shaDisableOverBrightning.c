
/* void __cdecl shaDisableOverBrightning(void) */

void __cdecl shaDisableOverBrightning(void)

{
  int iVar1;
  
                    /* 0x8ee10  4314  ?shaDisableOverBrightning@@YAXXZ */
  iVar1 = shaOverBrightningEnabled();
  if (iVar1 != 0) {
    (*DAT_362c4684)(1);
  }
  return;
}

