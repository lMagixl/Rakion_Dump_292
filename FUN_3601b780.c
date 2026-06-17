
void FUN_3601b780(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xa9);
  while (cVar1 == '\0') {
    FUN_3601b780((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_36017850((int)param_1);
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xa9);
  }
  return;
}

