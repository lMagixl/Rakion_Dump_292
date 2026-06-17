
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361b7440(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_36382d14;
  if (DAT_36382d10 != param_1) {
    if (DAT_36382d10 != 0) {
      *DAT_36382d14 = DAT_36382d0c;
      *(undefined1 **)(DAT_36382d10 + 8) = puVar1;
      *(undefined4 *)(DAT_36382d10 + 0x10) = DAT_36382d08;
    }
    DAT_36382d10 = param_1;
    FUN_361b72d0();
    _DAT_36382d00 = 1;
  }
  return;
}

