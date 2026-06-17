
int FUN_360deca0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_360deca0(*(int *)(param_1 + 0x18));
  iVar2 = FUN_360deca0(*(int *)(param_1 + 0x14));
  return iVar1 + 1 + iVar2;
}

