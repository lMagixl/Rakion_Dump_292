
int __cdecl FUN_36044760(LONG *param_1)

{
  LONG LVar1;
  int iVar2;
  
  iVar2 = param_1[2] + -1;
  param_1[2] = iVar2;
  if (0 < iVar2) {
    InterlockedDecrement(param_1);
    return iVar2;
  }
  param_1[1] = 0;
  LVar1 = InterlockedDecrement(param_1);
  if (-1 < LVar1) {
    SetEvent((HANDLE)param_1[3]);
  }
  return iVar2;
}

