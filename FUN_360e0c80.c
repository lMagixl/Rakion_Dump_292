
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_360e0c80(float *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = param_1[4];
  while( true ) {
    if (fVar1 == 1.4013e-45) {
      return (float10)_DAT_36223384;
    }
    if (fVar1 == 2.8026e-45) break;
    fVar2 = FUN_36058b90(param_2,param_1);
    if (fVar2 <= (float10)_DAT_3622376c) {
      if ((float10)_DAT_3622376c <= fVar2) {
        fVar2 = FUN_360e0c80((float *)param_1[5],param_2);
        fVar1 = (float)fVar2;
        if (((fVar1 != _DAT_3622376c) &&
            (fVar2 = FUN_360e0c80((float *)param_1[6],param_2), fVar2 != (float10)_DAT_3622376c)) &&
           ((float10)fVar1 == fVar2)) {
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

