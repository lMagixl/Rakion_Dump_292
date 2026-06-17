
void __fastcall FUN_36102b60(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

