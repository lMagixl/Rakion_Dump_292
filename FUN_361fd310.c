
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361fd310(float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
  if (param_2 == 1) {
    *param_3 = *param_1 * (float)_DAT_3624cdc0;
    return;
  }
  if (param_2 == 2) {
    *param_3 = param_1[1] * (float)_DAT_3624cdb8 - *param_1 * (float)_DAT_3624cdb0;
    return;
  }
  *param_3 = (param_1[1] * (float)_DAT_3624cdb8 - *param_1 * (float)_DAT_3624cdb0) + param_1[2];
  if (1 < param_2 + -1) {
    iVar5 = param_2 + -2;
    pfVar3 = param_1;
    pfVar4 = param_3;
    do {
      pfVar4 = pfVar4 + 1;
      pfVar1 = pfVar3 + 2;
      fVar2 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 + -1;
      *pfVar4 = (*pfVar1 - fVar2) * (float)_DAT_3624cda0;
    } while (iVar5 != 0);
  }
  param_3[param_2 + -1] =
       param_1[param_2 + -1] * (float)_DAT_3624cdb0 -
       (param_1[param_2 + -2] * (float)_DAT_3624cdb8 + param_1[param_2 + -3]);
  FUN_361fd3d0(param_3,param_2);
  return;
}

