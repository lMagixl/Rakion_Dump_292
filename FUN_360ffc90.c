
int * __cdecl FUN_360ffc90(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + (int)param_1);
  while( true ) {
    if (piVar1 <= param_1) {
      return (int *)0x0;
    }
    if ((*param_1 == 0x34544e45) && (*(int *)(param_1[2] + 0xc + (int)param_1) == 0x34544e45))
    break;
    param_1 = (int *)((int)param_1 + 1);
  }
  return param_1;
}

