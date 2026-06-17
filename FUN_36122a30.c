
int __fastcall FUN_36122a30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_3611fa00(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_3611fa00(param_1);
    FUN_361221a0(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0x10 + -0x10 + param_1[1];
}

