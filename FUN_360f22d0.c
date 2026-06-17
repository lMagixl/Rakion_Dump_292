
int __fastcall FUN_360f22d0(int param_1)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  CTimer::GetHighPrecisionTimer(_pTimer);
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 0;
  }
  iVar1 = FUN_360febf0(param_1 + 0x18);
  if ((*(int *)(iVar1 + 0x1c) <= local_4) &&
     ((*(int *)(iVar1 + 0x1c) < local_4 || (*(uint *)(iVar1 + 0x18) <= local_8)))) {
    FUN_360ff390((void *)(param_1 + 0x18),0);
    return iVar1;
  }
  return 0;
}

