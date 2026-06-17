
int __fastcall FUN_36179a80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_36179430(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_36179430(param_1);
    FUN_361799b0(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0x2c + -0x2c + param_1[1];
}

