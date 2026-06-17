
void __fastcall FUN_360e1890(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    operator_delete__(*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

