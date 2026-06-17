
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361fd200(float *param_1,int param_2,float *param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float local_c;
  float local_8;
  
  pfVar2 = param_1;
  pfVar3 = (float *)FUN_361bf99c(param_2 * 4);
  iVar5 = param_2;
  pfVar4 = pfVar3;
  if (0 < param_2) {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar4 = 0.0;
      pfVar4 = pfVar4 + 1;
    }
  }
  FUN_361fd310(param_1,param_2,pfVar3);
  iVar5 = -1;
  param_2 = 0;
  fVar6 = (float10)_DAT_3624cd94;
  if (0 < (int)param_4) {
    param_1 = (float *)param_4;
    pfVar4 = param_3;
    do {
      if (param_2 != iVar5) {
        local_8 = pfVar2[param_2];
        local_c = pfVar3[param_2];
        fVar1 = pfVar2[param_2 + 1] - pfVar2[param_2];
        param_3 = (float *)((fVar1 * (float)_DAT_3624cda0 - (pfVar3[param_2] + pfVar3[param_2])) -
                           pfVar3[param_2 + 1]);
        param_4 = (pfVar3[param_2 + 1] - (fVar1 + fVar1)) + pfVar3[param_2];
        iVar5 = param_2;
      }
      fVar6 = fVar6 - (float10)param_2;
      *pfVar4 = (float)(((fVar6 * (float10)param_4 + (float10)(float)param_3) * fVar6 +
                        (float10)local_c) * fVar6 + (float10)local_8);
      param_2 = ftol();
      pfVar4 = pfVar4 + 1;
      param_1 = (float *)((int)param_1 + -1);
      fVar6 = extraout_ST0;
    } while (param_1 != (float *)0x0);
  }
  if (pfVar3 != (float *)0x0) {
    operator_delete(pfVar3);
  }
  return;
}

