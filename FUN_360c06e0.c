
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360c06e0(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (*param_1 * _DAT_362cbbcc + param_1[1] * _DAT_362cbbd0 + param_1[2] * _DAT_362cbbd4 +
          _DAT_362cba24) * DAT_362c3b20;
  *param_2 = (*param_1 * _DAT_362cbbc0 + param_1[1] * _DAT_362cbbc4 + param_1[2] * _DAT_362cbbc8 +
             _DAT_362cba28) * DAT_362c3b1c;
  param_2[1] = fVar1;
  return;
}

