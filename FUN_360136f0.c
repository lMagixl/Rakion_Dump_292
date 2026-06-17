
void FUN_360136f0(void)

{
  int iVar1;
  
  iVar1 = FUN_361bf99c(0xc);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}

