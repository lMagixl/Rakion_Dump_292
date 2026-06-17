
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36058cb0(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = _DAT_36223384 / param_2;
  fVar1 = *(float *)((int)this + 4);
  *param_1 = *(float *)this * fVar2;
  param_1[1] = fVar2 * fVar1;
  return;
}

