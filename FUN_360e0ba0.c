
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_360e0ba0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = param_1[4];
  while( true ) {
    if (fVar1 == 1.4013e-45) {
      return (float10)_DAT_36223384;
    }
    if (fVar1 == 2.8026e-45) break;
    fVar1 = (*param_2 * *param_1 + param_2[1] * param_1[1] + param_2[2] * param_1[2]) - param_1[3];
    if (fVar1 <= param_3) {
      if (-param_3 <= fVar1) {
        fVar2 = FUN_360e0ba0((float *)param_1[5],param_2,param_3);
        fVar1 = (float)fVar2;
        if (((fVar1 != _DAT_3622376c) &&
            (fVar2 = FUN_360e0ba0((float *)param_1[6],param_2,param_3),
            fVar2 != (float10)_DAT_3622376c)) && ((float10)fVar1 == fVar2)) {
          return (float10)fVar1;
        }
        return (float10)_DAT_3622376c;
      }
      param_1 = (float *)param_1[6];
    }
    else {
      param_1 = (float *)param_1[5];
    }
    fVar1 = param_1[4];
  }
  return (float10)_DAT_36227d20;
}

