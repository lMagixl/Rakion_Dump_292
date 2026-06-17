
int __fastcall FUN_3616f170(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_3616e1f0(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3616e1f0(param_1);
    FUN_3616ea80(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0x8c + -0x8c + param_1[1];
}

