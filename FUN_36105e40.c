
int __fastcall FUN_36105e40(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = *(int *)(*param_1 + 4);
    iVar1 = 1;
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        iVar1 = iVar1 + 1;
      } while (iVar2 != 0);
      return iVar1;
    }
  }
  return iVar1;
}

