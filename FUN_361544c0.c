
int __fastcall FUN_361544c0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_3600cc40(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3600cc40(param_1);
    FUN_36154390(param_1,iVar2 + param_1[3]);
  }
  return param_1[1] + -0x14 + param_1[2] * 0x14;
}

