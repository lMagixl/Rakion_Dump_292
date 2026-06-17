
void __fastcall FUN_360325c0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
    piVar1 = piVar3 + -4;
    piVar3 = piVar2;
    if (piVar1 != (int *)0x0) {
      FUN_36032430((int)piVar1);
      operator_delete(piVar1);
    }
  }
  return;
}

