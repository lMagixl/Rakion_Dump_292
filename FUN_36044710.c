
int __cdecl FUN_36044710(LONG *param_1)

{
  int iVar1;
  DWORD DVar2;
  LONG LVar3;
  
  DVar2 = GetCurrentThreadId();
  LVar3 = InterlockedIncrement(param_1);
  if (LVar3 == 0) {
    param_1[1] = DVar2;
    param_1[2] = 1;
    return 1;
  }
  if (param_1[1] == DVar2) {
    iVar1 = param_1[2];
    param_1[2] = iVar1 + 1;
    return iVar1 + 1;
  }
  LVar3 = InterlockedDecrement(param_1);
  if (LVar3 < 0) {
    ResetEvent((HANDLE)param_1[3]);
  }
  return 0;
}

