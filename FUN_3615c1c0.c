
int __fastcall FUN_3615c1c0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_3615a890(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3615a890(param_1);
    FUN_3615c010(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0x4c + -0x4c + param_1[1];
}

