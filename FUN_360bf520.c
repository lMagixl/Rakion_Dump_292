
int __fastcall FUN_360bf520(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_360bef60(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_360bef60(param_1);
    FUN_360bf3c0(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0xe8 + -0xe8 + param_1[1];
}

