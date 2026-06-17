
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3616e080(void *this,float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)_DAT_36227cf0;
  fVar1 = (float10)fsin((float10)param_2 * fVar2);
  *(float *)((int)this + 4) = (float)(fVar1 * (float10)*param_1);
  *(float *)((int)this + 8) = (float)(fVar1 * (float10)param_1[1]);
  *(float *)((int)this + 0xc) = (float)(fVar1 * (float10)param_1[2]);
  fVar2 = (float10)fcos((float10)param_2 * fVar2);
  *(float *)this = (float)fVar2;
  return;
}

