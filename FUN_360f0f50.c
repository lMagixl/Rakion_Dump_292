
void __fastcall FUN_360f0f50(int *param_1)

{
  FUN_360f0f20(param_1);
  if (*param_1 != 0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

