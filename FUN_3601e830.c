
void FUN_3601e830(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x31);
  while (cVar1 == '\0') {
    FUN_3601e830((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_3601cc10((int)param_1);
    FUN_36018c30();
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x31);
  }
  return;
}

