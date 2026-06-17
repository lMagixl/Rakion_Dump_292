
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_361c8310(float *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
                    int param_6)

{
  float fVar1;
  float fVar2;
  
  switch(((param_6 != 0) << 1 | param_5 != 0) << 1 | param_4 != 0) {
  case '\0':
    break;
  case '\x01':
    break;
  case '\x02':
    break;
  case '\x03':
    goto code_r0x361c83e1;
  case '\x04':
    break;
  case '\x05':
    goto code_r0x361c83e1;
  case '\x06':
    goto code_r0x361c83e1;
  case '\a':
    thunk_FUN_361c574e();
code_r0x361c83e1:
    thunk_FUN_361c574e();
  }
  thunk_FUN_361c501c();
  if (param_3 != (int *)0x0) {
    fVar2 = (float)param_3[2];
    if (param_3[2] < 0) {
      fVar2 = fVar2 + _DAT_362265a8;
    }
    fVar1 = (float)*param_3;
    if (*param_3 < 0) {
      fVar1 = fVar1 + _DAT_362265a8;
    }
    *param_1 = fVar1 + fVar2 * (*param_1 + _DAT_36223384) * _DAT_36227cf0;
    fVar2 = (float)param_3[3];
    if (param_3[3] < 0) {
      fVar2 = fVar2 + _DAT_362265a8;
    }
    fVar1 = (float)param_3[1];
    if (param_3[1] < 0) {
      fVar1 = fVar1 + _DAT_362265a8;
    }
    param_1[1] = fVar1 + fVar2 * (1.0 - param_1[1]) * _DAT_36227cf0;
    param_1[2] = ((float)param_3[5] - (float)param_3[4]) * param_1[2] + (float)param_3[4];
  }
  return param_1;
}

