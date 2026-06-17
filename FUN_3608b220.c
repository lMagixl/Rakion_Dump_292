
void __cdecl FUN_3608b220(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  param_3[2] = param_1;
  param_3[3] = param_2;
  if (0 < param_1) {
    piVar2 = param_3 + 4;
    do {
      if (param_2 < 1) break;
      *piVar2 = iVar1;
      iVar1 = iVar1 + param_2 * param_1;
      param_1 = param_1 >> 1;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
      param_2 = param_2 >> 1;
    } while (0 < param_1);
  }
  *param_3 = iVar3;
  param_3[1] = iVar1;
  return;
}

