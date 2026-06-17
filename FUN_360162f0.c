
void __cdecl FUN_360162f0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3;
  iVar2 = param_4;
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    iVar2 = iVar2 + *(int *)(param_2 + 0xa0);
    FUN_3600eb00(&param_2);
  } while (param_2 != iVar1);
  *param_1 = iVar2;
  return;
}

