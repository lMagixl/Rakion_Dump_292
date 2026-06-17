
int __fastcall FUN_36084460(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  iVar1 = FUN_36084140(param_1);
  if (iVar1 < iVar2 + 1) {
    iVar2 = FUN_36084140(param_1);
    FUN_36084310(param_1,iVar2 + param_1[3]);
  }
  return param_1[2] * 0xd4 + -0xd4 + param_1[1];
}

