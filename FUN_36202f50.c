
int __thiscall FUN_36202f50(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  iVar1 = *(int *)this;
  if (iVar1 <= param_1) {
    param_1 = iVar1 + -1;
  }
  if (*(int *)((int)this + 4) <= param_2) {
    param_2 = *(int *)((int)this + 4) + -1;
  }
  return iVar1 * param_2 + param_1;
}

