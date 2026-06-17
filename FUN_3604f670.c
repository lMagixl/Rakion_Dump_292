
void __thiscall FUN_3604f670(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_2[5];
  fVar2 = *(float *)((int)this + 8);
  fVar3 = param_2[3];
  fVar4 = *(float *)this;
  fVar5 = param_2[4];
  fVar6 = *(float *)((int)this + 4);
  fVar7 = param_2[8];
  fVar8 = *(float *)((int)this + 8);
  fVar9 = param_2[6];
  fVar10 = *(float *)this;
  fVar11 = param_2[7];
  fVar12 = *(float *)((int)this + 4);
  *param_1 = *param_2 * *(float *)this +
             param_2[1] * *(float *)((int)this + 4) + param_2[2] * *(float *)((int)this + 8);
  param_1[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  param_1[2] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  return;
}

