
void __thiscall FUN_360589f0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)((int)this + 4);
  fVar4 = *(float *)((int)this + 8);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *(float *)this - *param_2;
  param_1[1] = fVar3 - fVar1;
  param_1[2] = fVar4 - fVar2;
  return;
}

