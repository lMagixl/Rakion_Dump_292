
void __thiscall FUN_36069100(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*param_1 <= *param_2) {
    iVar1 = *param_1;
  }
  *(int *)this = iVar1;
  iVar1 = *param_2;
  if (*param_2 <= *param_1) {
    iVar1 = *param_1;
  }
  *(int *)((int)this + 8) = iVar1;
  iVar1 = param_2[1];
  if (param_1[1] <= param_2[1]) {
    iVar1 = param_1[1];
  }
  *(int *)((int)this + 4) = iVar1;
  if (param_1[1] < param_2[1]) {
    *(int *)((int)this + 0xc) = param_2[1];
    return;
  }
  *(int *)((int)this + 0xc) = param_1[1];
  return;
}

