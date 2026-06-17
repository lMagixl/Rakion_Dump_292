
int __fastcall FUN_360e1940(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_360df180(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_360df180(param_1);
    FUN_360e1210(param_1,iVar2 + param_1[3]);
  }
  return param_1[1] + -0x18 + param_1[2] * 0x18;
}

