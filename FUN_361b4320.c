
void __thiscall FUN_361b4320(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_360a5b10(this);
  if (iVar1 != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = FUN_360cb720((int)param_1);
  if (iVar1 != 0) {
    FUN_361b40a0(this,param_1);
    *(int *)((int)this + 8) = param_1[2];
    *(int *)((int)this + 0xc) = param_1[3];
    param_1[2] = 0;
  }
  return;
}

