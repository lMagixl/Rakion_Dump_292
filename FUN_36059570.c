
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36059570(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  
  fVar1 = in_EAX[1];
  fVar2 = in_EAX[2];
  fVar3 = _DAT_36223384 / SQRT(in_EAX[2] * in_EAX[2] + in_EAX[1] * in_EAX[1] + *in_EAX * *in_EAX);
  *(float *)this = *in_EAX * fVar3;
  *(float *)((int)this + 4) = fVar1 * fVar3;
  *(float *)((int)this + 8) = fVar2 * fVar3;
  *(float *)((int)this + 0xc) = fVar3 * param_1;
  return;
}

