
void __fastcall FUN_36097aa0(int param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    operator_delete__(*(void **)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

