
void __fastcall FUN_361a7f20(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (piVar2 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)*piVar2;
      FUN_361a79c0((int)piVar2);
      FUN_36018c30();
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 4));
  }
  return;
}

