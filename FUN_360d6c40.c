
void __cdecl FUN_360d6c40(undefined4 *param_1,float *param_2)

{
  int iVar1;
  double *pdVar2;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  double local_8;
  
  local_48 = (double)*param_2;
  local_40 = (double)param_2[1];
  local_38 = (double)param_2[2];
  local_30 = (double)param_2[3];
  local_28 = (double)param_2[4];
  local_20 = (double)param_2[5];
  local_18 = (double)param_2[6];
  local_10 = (double)param_2[7];
  local_8 = (double)param_2[8];
  pdVar2 = &local_48;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    param_1 = param_1 + 1;
  }
  return;
}

