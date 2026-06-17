
void __thiscall FUN_3613c370(void *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)this != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = FUN_3600be20(param_1);
  if (iVar1 != 0) {
    *(int *)this = *param_1;
    *(int *)((int)this + 4) = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

