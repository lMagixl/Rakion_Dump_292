
int __fastcall FUN_36100770(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_361005f0(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_361005f0(param_1);
    FUN_36100690(param_1,iVar2 + param_1[3]);
  }
  return param_1[1] + -0xc + param_1[2] * 0xc;
}

