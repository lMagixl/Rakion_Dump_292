
bool __cdecl FUN_362052c0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < param_1) {
    piVar2 = param_3;
    while (*(int *)(((int)param_2 - (int)param_3) + (int)piVar2) == *piVar2) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (param_1 <= iVar1) {
        return iVar1 == param_1;
      }
    }
    if (iVar1 < param_1) {
      iVar1 = 0;
      piVar2 = param_3 + param_1 + -1;
      do {
        if (*param_2 != *piVar2) break;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + -1;
        param_2 = param_2 + 1;
      } while (iVar1 < param_1);
    }
  }
  return iVar1 == param_1;
}

