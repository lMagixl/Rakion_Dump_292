
int __fastcall FUN_36026d90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  return *(int *)(param_1 + 4) + iVar1 * 4;
}

