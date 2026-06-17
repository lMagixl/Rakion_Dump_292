
void __thiscall FUN_36030160(void *this,int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  iVar1 = sprintf((char *)*param_1,s___45s___7d__7_2f_3622547c,*(undefined4 *)this,
                  *(int *)((int)this + 4),(double)*(int *)((int)this + 4) / (double)param_2);
  *param_1 = *param_1 + iVar1;
  return;
}

