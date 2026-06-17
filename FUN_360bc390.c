
void __fastcall FUN_360bc390(int *param_1)

{
  FUN_360bc150(param_1);
  if (*param_1 != 0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

