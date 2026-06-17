
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361bc4e0(undefined4 *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *extraout_EDX;
  float local_10 [4];
  
  FUN_361bc160(local_10);
  iVar2 = 0;
  fVar1 = *param_2;
  pfVar3 = extraout_EDX;
  do {
    pfVar3 = pfVar3 + 1;
    iVar2 = iVar2 + 1;
    local_10[iVar2] = (_DAT_36223384 / fVar1) * *pfVar3;
  } while (iVar2 < 3);
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

