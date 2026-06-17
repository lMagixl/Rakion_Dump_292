
void __fastcall FUN_360e05d0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_360deeb0(param_1);
  if (iVar1 < 1) {
    if ((void *)param_1[2] == (void *)0x0) {
      return;
    }
    FUN_360dea10((void *)param_1[2]);
  }
  else if (*param_1 != 0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  param_1[2] = 0;
  return;
}

