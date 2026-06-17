
int __fastcall FUN_36048530(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_36047c20(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_36047c20(param_1);
    FUN_36048070(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0x20 + -0x20 + param_1[1];
}

