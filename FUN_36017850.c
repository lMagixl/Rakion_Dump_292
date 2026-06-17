
void __fastcall FUN_36017850(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x24)) {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

