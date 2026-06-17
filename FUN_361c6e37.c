
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361c6e37(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = _DAT_36228798;
  fVar1 = _DAT_36223384 / (param_3 - param_2);
  fVar2 = _DAT_36223384 / (param_5 - param_4);
  *param_1 = fVar1 * param_6 * _DAT_36228798;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = fVar2 * param_6 * fVar3;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = -((param_2 + param_3) * fVar1);
  param_1[9] = -((param_4 + param_5) * fVar2);
  fVar1 = param_7 / (param_7 - param_6);
  param_1[10] = fVar1;
  param_1[0xb] = 1.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = -(fVar1 * param_6);
  param_1[0xf] = 0.0;
  return;
}

