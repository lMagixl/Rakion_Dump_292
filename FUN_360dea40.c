
int FUN_360dea40(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_360dea40(*(int *)(param_1 + 0x28));
  iVar2 = FUN_360dea40(*(int *)(param_1 + 0x24));
  return iVar1 + 1 + iVar2;
}

