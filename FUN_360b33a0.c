
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_360b33a0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float local_c [3];
  
  if ((DAT_362ca420 != 0) && (param_2[6] == -NAN)) {
    return (float10)_DAT_36231a2c;
  }
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  pfVar7 = (float *)FUN_3605cd80((void *)(param_1 + 0x3c),local_c);
  return SQRT((float10)(*pfVar7 - *param_3) * (float10)(*pfVar7 - *param_3) +
              (float10)(pfVar7[1] - param_3[1]) * (float10)(pfVar7[1] - param_3[1]) +
              (float10)(pfVar7[2] - param_3[2]) * (float10)(pfVar7[2] - param_3[2])) *
         (float10)_DAT_362280f0 +
         (float10)_DAT_36223384 /
         SQRT((float10)(fVar4 - fVar1) * (float10)(fVar4 - fVar1) +
              (float10)(fVar5 - fVar2) * (float10)(fVar5 - fVar2) +
              (float10)(fVar6 - fVar3) * (float10)(fVar6 - fVar3));
}

