
void __fastcall FUN_3615b2c0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    operator_delete__(*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    operator_delete__(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

