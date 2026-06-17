
void __cdecl FUN_3613c670(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = *(int **)(param_1 + 8);
  do {
    iVar1 = 0;
    piVar2 = *(int **)(param_2 + 8);
    do {
      if (*piVar3 == *piVar2) {
        *param_3 = (*(int **)(param_1 + 8))[iVar4 * 2];
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < 3);
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar4 < 3);
  *param_3 = 0;
  return;
}

