
void __fastcall FUN_360d26d0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  FUN_360d32f0(param_1 + 2);
  FUN_360d3470(param_1 + 9);
  *param_1 = 0x1000;
  iVar1 = thunk_FUN_361bf99c(0x4004);
  param_1[1] = iVar1;
  param_1[8] = 0x400;
  param_1[0xf] = 0x400;
  iVar1 = 0;
  do {
    *(undefined4 *)(iVar1 + param_1[1]) = 0xffffffff;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x4000);
  return;
}

