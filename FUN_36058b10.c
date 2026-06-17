
void __thiscall FUN_36058b10(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = *(float *)this * param_2;
  param_1[1] = fVar1 * param_2;
  param_1[2] = fVar2 * param_2;
  return;
}

