
void __thiscall FUN_361a6ea0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  FUN_361a4bc0(param_1,(uint)this);
  param_1 = (int *)**(int **)((int)this + 0xc);
  if (param_1 != *(int **)((int)this + 0xc)) {
    do {
      FUN_361a6ea0((void *)param_1[10],piVar1);
      FUN_3600a9a0((int *)&param_1);
    } while (param_1 != *(int **)((int)this + 0xc));
  }
  return;
}

