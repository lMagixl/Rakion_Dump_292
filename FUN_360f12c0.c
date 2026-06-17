
void __fastcall FUN_360f12c0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((0 < *(int *)(param_1 + 0x14)) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
    FreeMemory(*(void **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

