
void __fastcall FUN_360d32f0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  iVar1 = FUN_3600bef0(param_1 + 2);
  if (iVar1 != 0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

