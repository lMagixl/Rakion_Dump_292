
void __thiscall FUN_360d71b0(void *this,undefined4 *param_1,double *param_2)

{
  int iVar1;
  double *pdVar2;
  double local_20;
  double local_18;
  double local_10;
  double local_8;
  
  pdVar2 = &local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = *(undefined4 *)this;
    this = (undefined4 *)((int)this + 4);
    pdVar2 = (double *)((int)pdVar2 + 4);
  }
  local_8 = local_8 - (local_20 * *param_2 + local_10 * param_2[2] + local_18 * param_2[1]);
  pdVar2 = &local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    param_1 = param_1 + 1;
  }
  return;
}

