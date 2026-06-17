
void __cdecl FUN_36017640(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_3;
  iVar1 = param_2;
  while (param_1 != iVar1) {
    *piVar2 = *piVar2 + 1;
    FUN_3600e990(&param_1);
  }
  return;
}

