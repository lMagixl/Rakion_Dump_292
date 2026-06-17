
undefined4 * __thiscall FUN_3604fc60(void *this,double *param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  undefined4 *puVar3;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28 [36];
  
  local_40 = (param_1[2] - param_2[2]) * (param_3[1] - param_2[1]) -
             (param_1[1] - param_2[1]) * (param_3[2] - param_2[2]);
  local_38 = (*param_1 - *param_2) * (param_3[2] - param_2[2]) -
             (*param_3 - *param_2) * (param_1[2] - param_2[2]);
  local_30 = (*param_3 - *param_2) * (param_1[1] - param_2[1]) -
             (*param_1 - *param_2) * (param_3[1] - param_2[1]);
  pdVar1 = FUN_3604f9e0(local_28,(undefined4 *)&local_40,param_1);
  puVar3 = this;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)pdVar1;
    pdVar1 = (double *)((int)pdVar1 + 4);
    puVar3 = puVar3 + 1;
  }
  return this;
}

