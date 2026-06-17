
void __fastcall FUN_36014730(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    operator_delete__(*(void **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    operator_delete__(*(void **)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    operator_delete__(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

