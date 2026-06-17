
int __fastcall FUN_36026d50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_3600bef0(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3600bef0(param_1);
    FUN_36026aa0(param_1,iVar2 + param_1[3]);
  }
  return param_1[1] + -4 + param_1[2] * 4;
}

