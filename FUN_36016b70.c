
void __fastcall FUN_36016b70(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x20)) {
    operator_delete(*(void **)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}

