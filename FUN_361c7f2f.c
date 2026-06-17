
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_361c7f2f(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (_DAT_36249384 <= param_1) {
    fVar4 = (float10)param_1 * (float10)param_1;
    fVar5 = ABS(((float10)param_2 * (float10)param_2 - (float10)_DAT_36223384) + fVar4);
    fVar1 = (float)fVar5;
    fVar5 = SQRT(fVar5);
    fVar6 = fVar5 * (float10)param_1 * (float10)_DAT_36228798;
    fVar2 = (float)((((float10)fVar1 - fVar6) + fVar4) / (fVar6 + (float10)fVar1 + fVar4));
    fVar6 = (float10)1 - fVar4;
    fVar3 = (float)((fVar6 / (float10)param_1) * fVar5 * (float10)_DAT_36228798);
    fVar4 = (((((float10)fVar1 - (float10)fVar3) +
              (float10)(float)fVar6 * (float10)(float)fVar6 * ((float10)1 / fVar4)) * (float10)fVar2
             ) / ((float10)(float)fVar6 * (float10)(float)fVar6 * ((float10)1 / fVar4) +
                  (float10)fVar3 + (float10)fVar1) + (float10)fVar2) * (float10)_DAT_36227cf0;
    if ((float10)_DAT_36223384 < fVar4) {
      fVar4 = (float10)1;
    }
    if (fVar4 < (float10)_DAT_3622376c) {
      fVar4 = (float10)0;
    }
  }
  else {
    fVar4 = (float10)_DAT_36223384;
  }
  return fVar4;
}

