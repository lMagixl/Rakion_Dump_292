
int * __fastcall FUN_361a9110(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_361bf99c(0x4000000);
  param_1[1] = iVar1 + 0x3fffff0;
  *param_1 = iVar1;
  param_1[2] = iVar1;
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_361a3200((LPCRITICAL_SECTION)(param_1 + 9));
  *(undefined4 *)param_1[1] = 0;
  *(undefined4 *)(param_1[1] + 4) = 0;
  *(undefined1 *)(param_1[1] + 8) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}

