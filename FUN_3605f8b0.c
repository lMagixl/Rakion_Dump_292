
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_3605f8b0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  
  *(float *)this = *param_1;
  *(float *)((int)this + 4) = param_1[1];
  *(float *)((int)this + 8) = param_1[2];
  fVar1 = SQRT(*(float *)((int)this + 8) * *(float *)((int)this + 8) +
               *(float *)((int)this + 4) * *(float *)((int)this + 4) +
               *(float *)this * *(float *)this);
  if ((float)_DAT_36223438 <= fVar1) {
    fVar1 = _DAT_36223384 / fVar1;
    *(float *)this = fVar1 * *(float *)this;
    *(float *)((int)this + 4) = fVar1 * *(float *)((int)this + 4);
    fVar1 = fVar1 * *(float *)((int)this + 8);
  }
  else {
    *(float *)this = *(float *)this * _DAT_3622376c;
    *(float *)((int)this + 4) = *(float *)((int)this + 4) * _DAT_3622376c;
    fVar1 = *(float *)((int)this + 8) * _DAT_3622376c;
  }
  *(float *)((int)this + 8) = fVar1;
  *(float *)((int)this + 0xc) =
       *param_2 * *(float *)this +
       param_2[1] * *(float *)((int)this + 4) + param_2[2] * *(float *)((int)this + 8);
  return this;
}

