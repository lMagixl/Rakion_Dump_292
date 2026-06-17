
void __thiscall FUN_361a6ee0(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = param_2;
  FUN_361a6d90(param_2,(int)param_1,(int)this);
  param_1 = (int *)**(int **)((int)this + 0xc);
  if (param_1 != *(int **)((int)this + 0xc)) {
    do {
      FUN_361a6ee0((void *)param_1[10],param_1 + 3,pvVar1);
      FUN_3600a9a0((int *)&param_1);
    } while (param_1 != *(int **)((int)this + 0xc));
  }
  return;
}

