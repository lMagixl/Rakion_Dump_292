
void FUN_361bc430(undefined4 *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float *extraout_EDX;
  float local_10 [4];
  
  FUN_361bc160(local_10);
  iVar1 = 0;
  pfVar2 = extraout_EDX;
  do {
    pfVar2 = pfVar2 + 1;
    iVar1 = iVar1 + 1;
    local_10[iVar1] = *param_2 * *pfVar2;
  } while (iVar1 < 3);
  param_1[1] = local_10[1];
  param_1[2] = local_10[2];
  param_1[3] = local_10[3];
  param_1[1] = local_10[1];
  param_1[2] = local_10[2];
  param_1[3] = local_10[3];
  *param_1 = &PTR_FUN_3623dc04;
  FUN_361bc1a0(local_10);
  return;
}

