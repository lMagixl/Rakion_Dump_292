
int __thiscall FUN_360caf30(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_360caf20((int)this);
  if (0 < iVar1) {
    piVar2 = *(int **)((int)this + 4);
    do {
      if (*piVar2 == param_1) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

