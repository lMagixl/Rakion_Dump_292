
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36058fb0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)((int)this + 0xc);
  fVar1 = *(float *)((int)this + 4);
  *param_1 = (*(float *)((int)this + 8) + *(float *)this) * _DAT_36227cf0;
  param_1[1] = (fVar2 + fVar1) * _DAT_36227cf0;
  return;
}

