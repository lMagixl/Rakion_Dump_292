
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3605cd20(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = _DAT_36223384 / param_2;
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = *(float *)this * fVar3;
  param_1[1] = fVar1 * fVar3;
  param_1[2] = fVar2 * fVar3;
  return;
}

