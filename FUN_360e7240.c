
void __fastcall FUN_360e7240(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_360360d0(param_1);
  if (iVar1 != 0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

