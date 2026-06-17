
uint __cdecl FUN_361a4b40(char *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  while (0 < param_2) {
    iVar1 = toupper((int)*param_1);
    iVar2 = toupper((int)param_3);
    if (iVar1 == iVar2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return (param_2 + -1 < 0) - 1 & (uint)param_1;
}

