
int __fastcall FUN_36185370(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_36184f00(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_36184f00(param_1);
    FUN_361851d0(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0x5c + -0x5c + param_1[1];
}

