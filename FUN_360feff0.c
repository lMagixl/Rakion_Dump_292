
undefined4 __thiscall FUN_360feff0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + 8);
  do {
    if ((int *)*piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = piVar2 + -0x105;
    piVar2 = (int *)*piVar2;
  } while (*piVar1 != param_1);
  return 1;
}

