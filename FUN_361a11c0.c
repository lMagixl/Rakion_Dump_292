
void __fastcall FUN_361a11c0(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_361a0880(param_1 + 4);
  operator_delete(*(void **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

