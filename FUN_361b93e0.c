
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361b93e0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_36382ff8;
  if (DAT_36382ff4 != param_1) {
    if (DAT_36382ff4 != 0) {
      *DAT_36382ff8 = (undefined1)DAT_36382d58;
      *(undefined1 **)(DAT_36382ff4 + 8) = puVar1;
      *(undefined4 *)(DAT_36382ff4 + 0x10) = DAT_36382fe4;
    }
    DAT_36382ff4 = param_1;
    FUN_361b9270();
    _DAT_36382fec = 1;
  }
  return;
}

