
void __thiscall FUN_361a7fa0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if ((param_2 == (int *)**(int **)((int)this + 4)) && (param_3 == *(int **)((int)this + 4))) {
    FUN_361a7f20((int)this);
    *param_1 = param_3;
    return;
  }
  while (piVar1 = param_2, piVar1 != param_3) {
    param_2 = (int *)*piVar1;
    if (piVar1 != *(int **)((int)this + 4)) {
      *(int **)piVar1[1] = param_2;
      *(int *)(*piVar1 + 4) = piVar1[1];
      FUN_361a79c0((int)piVar1);
      FUN_36018c30();
      operator_delete(piVar1);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    }
  }
  *param_1 = param_3;
  return;
}

