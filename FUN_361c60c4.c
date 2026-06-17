
void __thiscall FUN_361c60c4(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)((int)this + 0xc);
  fVar2 = *(float *)((int)this + 8);
  fVar3 = *(float *)((int)this + 4);
  *param_1 = param_2 * *(float *)this;
  param_1[1] = param_2 * fVar3;
  param_1[2] = param_2 * fVar2;
  param_1[3] = param_2 * fVar1;
  return;
}

