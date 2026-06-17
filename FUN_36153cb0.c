
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36153cb0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = SQRT(_DAT_36223384 - *(float *)this * *(float *)this);
  fVar2 = (float10)_CIacos();
  *param_2 = (float)(fVar2 + fVar2);
  if ((float)_DAT_36227d38 <= ABS(fVar1)) {
    fVar1 = _DAT_36223384 / fVar1;
    *param_1 = fVar1 * *(float *)((int)this + 4);
    param_1[1] = fVar1 * *(float *)((int)this + 8);
    param_1[2] = fVar1 * *(float *)((int)this + 0xc);
    return;
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}

