
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36154050(float *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_30;
  float local_2c;
  
  fVar1 = param_4[3] * param_3[3] +
          *param_3 * *param_4 + param_3[1] * param_4[1] + param_3[2] * param_4[2];
  if (_DAT_3622376c <= fVar1) {
    local_30 = *param_4;
    local_2c = param_4[1];
    fVar8 = param_4[2];
    fVar7 = param_4[3];
  }
  else {
    fVar1 = -fVar1;
    local_30 = -*param_4;
    local_2c = -param_4[1];
    fVar8 = -param_4[2];
    fVar7 = -param_4[3];
  }
  if (fVar1 < _DAT_3623ca30) {
    fVar9 = (float10)_CIacos();
    fVar10 = (float10)fsin(fVar9);
    fVar11 = (float10)fsin(((float10)_DAT_36223384 - (float10)param_2) * fVar9);
    fVar1 = (float)(fVar11 * ((float10)_DAT_36223384 / fVar10));
    fVar9 = (float10)fsin(fVar9 * (float10)param_2);
    fVar9 = fVar9 * ((float10)_DAT_36223384 / fVar10);
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    *param_1 = (float)((float10)fVar1 * (float10)*param_3 + (float10)local_30 * fVar9);
    param_1[1] = fVar1 * fVar2 + (float)((float10)local_2c * fVar9);
    param_1[2] = fVar1 * fVar3 + (float)((float10)fVar8 * fVar9);
    param_1[3] = fVar1 * fVar4 + (float)((float10)fVar7 * fVar9);
    return;
  }
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_3[3];
  fVar5 = param_3[2];
  fVar6 = param_3[1];
  *param_1 = (local_30 - *param_3) * param_2 + *param_3;
  param_1[1] = (local_2c - fVar1) * param_2 + fVar6;
  param_1[2] = (fVar8 - fVar2) * param_2 + fVar5;
  param_1[3] = (fVar7 - fVar3) * param_2 + fVar4;
  return;
}

