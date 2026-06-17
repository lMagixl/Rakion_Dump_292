
void __fastcall FUN_3615b320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    operator_delete__(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

