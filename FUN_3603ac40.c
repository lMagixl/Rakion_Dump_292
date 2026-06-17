
void __fastcall FUN_3603ac40(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    operator_delete__(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

