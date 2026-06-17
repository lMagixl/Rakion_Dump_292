
void __thiscall FUN_36143ca0(void *this,double *param_1,double *param_2,undefined4 *param_3)

{
  double *pdVar1;
  int iVar2;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28 [36];
  
  local_40 = (param_2[1] - param_1[1]) * *(double *)((int)this + 0x10) -
             (param_2[2] - param_1[2]) * *(double *)((int)this + 8);
  local_38 = (param_2[2] - param_1[2]) * *(double *)this -
             (*param_2 - *param_1) * *(double *)((int)this + 0x10);
  local_30 = (*param_2 - *param_1) * *(double *)((int)this + 8) -
             (param_2[1] - param_1[1]) * *(double *)this;
  pdVar1 = FUN_3604f9e0(local_28,(undefined4 *)&local_40,param_1);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = *(undefined4 *)pdVar1;
    pdVar1 = (double *)((int)pdVar1 + 4);
    param_3 = param_3 + 1;
  }
  return;
}

