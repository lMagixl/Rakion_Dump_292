
int FUN_3620ccd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (uint)*(byte *)(param_1 + param_2) - (uint)*(byte *)(param_1 + param_3);
  return iVar1 * iVar1;
}

