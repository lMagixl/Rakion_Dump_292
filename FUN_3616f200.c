
int __fastcall FUN_3616f200(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_3616e210(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3616e210(param_1);
    FUN_3616eb30(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0x7c + -0x7c + param_1[1];
}

