
void __thiscall FUN_3616f0b0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)((int)this + 0xc);
  fVar5 = *(float *)this;
  fVar6 = *(float *)((int)this + 4);
  fVar7 = *(float *)((int)this + 8);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  *param_1 = fVar5;
  param_1[1] = fVar6;
  param_1[2] = fVar7;
  param_1[3] = fVar4 - (fVar5 * fVar3 + fVar7 * fVar2 + fVar6 * fVar1);
  return;
}

