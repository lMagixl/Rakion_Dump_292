
void FUN_361bc620(undefined4 *param_1)

{
  int iVar1;
  float *pfVar2;
  float *extraout_EDX;
  undefined4 local_10;
  float local_c [3];
  
  FUN_361bc160(&local_10);
  iVar1 = 0;
  pfVar2 = extraout_EDX;
  do {
    pfVar2 = pfVar2 + 1;
    local_c[iVar1] = -*pfVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  param_1[1] = local_c[0];
  param_1[2] = local_c[1];
  param_1[3] = local_c[2];
  param_1[1] = local_c[0];
  param_1[2] = local_c[1];
  param_1[3] = local_c[2];
  *param_1 = &PTR_FUN_3623dc04;
  FUN_361bc1a0(&local_10);
  return;
}

