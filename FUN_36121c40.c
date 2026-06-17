
int __fastcall FUN_36121c40(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_3611f940(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3611f940(param_1);
    FUN_36120a90(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0x1c + -0x1c + param_1[1];
}

