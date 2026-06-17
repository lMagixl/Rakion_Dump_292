
int __fastcall FUN_3616f4b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_3616e2e0(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3616e2e0(param_1);
    FUN_3616ee10(param_1,iVar2 + param_1[3]);
  }
  return param_1[1] + -0xc + param_1[2] * 0xc;
}

