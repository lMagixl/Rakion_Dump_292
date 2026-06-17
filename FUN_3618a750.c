
void __thiscall FUN_3618a750(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if ((param_2 == (int *)**(int **)((int)this + 4)) && (param_3 == *(int **)((int)this + 4))) {
    FUN_3606b730((int)this);
    *param_1 = param_3;
    return;
  }
  while (piVar1 = param_2, piVar1 != param_3) {
    param_2 = (int *)*piVar1;
    if (piVar1 != *(int **)((int)this + 4)) {
      *(int **)piVar1[1] = param_2;
      *(int *)(*piVar1 + 4) = piVar1[1];
      FUN_3606b340((int)piVar1);
      operator_delete(piVar1);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    }
  }
  *param_1 = param_3;
  return;
}

