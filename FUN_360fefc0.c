
int __thiscall FUN_360fefc0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = *(int **)((int)this + 8);
  while (piVar2 = (int *)*piVar4, piVar2 != (int *)0x0) {
    piVar1 = piVar4 + -0x105;
    piVar4 = piVar2;
    if (*piVar1 == param_1) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

