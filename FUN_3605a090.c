
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_3605a090(float *param_1,float *param_2,float param_3,int *param_4,int *param_5,int param_6)

{
  float fVar1;
  float fVar2;
  
  DAT_362bf770 = param_3 + param_1[2];
  DAT_362bf76c = param_3 + param_2[2];
  fVar2 = _DAT_362a29b0 / (DAT_362bf770 - DAT_362bf76c);
  if ((int)DAT_362bf770 < 1) {
    if ((int)DAT_362bf76c < 1) {
      return 0;
    }
    param_1[2] = -param_3;
    *param_4 = param_6;
    fVar2 = fVar2 * DAT_362bf770;
    fVar1 = param_2[1];
    *param_1 = *param_1 - (*param_1 - *param_2) * fVar2;
    param_1[1] = param_1[1] - (param_1[1] - fVar1) * fVar2;
  }
  else if ((int)DAT_362bf76c < 1) {
    param_2[2] = -param_3;
    *param_5 = param_6 << 8;
    fVar2 = fVar2 * DAT_362bf76c;
    fVar1 = param_1[1];
    *param_2 = *param_2 - (*param_1 - *param_2) * fVar2;
    param_2[1] = param_2[1] - (fVar1 - param_2[1]) * fVar2;
  }
  return 1;
}

