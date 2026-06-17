
void __fastcall FUN_3600cd20(int *param_1)

{
  int *piVar1;
  int iVar2;
  LONG *local_4;
  
  local_4 = param_1;
  FUN_36001a30(&local_4,param_1 + 3);
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    param_1[2] = param_1[2] + -1;
    InterlockedExchange(local_4,0);
    return;
  }
  InterlockedExchange(local_4,0);
  (**(code **)(*param_1 + 4))();
  FUN_36001a30(&local_4,param_1 + 3);
  iVar2 = param_1[2];
  param_1[2] = iVar2 + -1;
  InterlockedExchange(local_4,0);
  if (iVar2 + -1 == 0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}

