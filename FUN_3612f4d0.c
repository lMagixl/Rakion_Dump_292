
int __fastcall FUN_3612f4d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_3612e880(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3612e880(param_1);
    FUN_3612f350(param_1,iVar2 + param_1[3]);
  }
  return param_1[1] + -8 + param_1[2] * 8;
}

