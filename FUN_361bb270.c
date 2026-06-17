
void __thiscall FUN_361bb270(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 local_4;
  
  FUN_361baee0(&local_4,param_1);
  *(undefined4 *)this = param_1;
  piVar1 = *(int **)((int)this + 4);
  *(undefined4 *)((int)this + 4) = local_4;
  if (piVar1 != (int *)0x0) {
    FUN_3600cd20(piVar1);
  }
  return;
}

