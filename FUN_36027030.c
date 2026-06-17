
void __thiscall FUN_36027030(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_3600bef0(this);
  if (iVar1 != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = FUN_36026a70((int)param_1);
  if (iVar1 != 0) {
    FUN_36026de0(this,param_1);
    *(int *)((int)this + 8) = param_1[2];
    *(int *)((int)this + 0xc) = param_1[3];
    param_1[2] = 0;
  }
  return;
}

