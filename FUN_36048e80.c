
void __thiscall FUN_36048e80(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = *(float *)((int)this + 8);
  fVar3 = *(float *)this;
  fVar4 = param_2[2];
  fVar5 = param_2[1];
  fVar6 = *(float *)this;
  fVar7 = *(float *)((int)this + 4);
  fVar8 = *param_2;
  *param_1 = *(float *)((int)this + 4) * param_2[2] - param_2[1] * *(float *)((int)this + 8);
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return;
}

