
void __fastcall FUN_360369e0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    operator_delete__(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

