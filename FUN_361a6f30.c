
void __thiscall FUN_361a6f30(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  *param_1 = *param_1 + *(int *)((int)this + 0x10);
  param_1 = (int *)**(int **)((int)this + 0xc);
  if (param_1 != *(int **)((int)this + 0xc)) {
    do {
      FUN_361a6f30((void *)param_1[10],piVar1);
      FUN_3600a9a0((int *)&param_1);
    } while (param_1 != *(int **)((int)this + 0xc));
  }
  return;
}

