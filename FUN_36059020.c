
void __thiscall FUN_36059020(void *this,float *param_1)

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
  
  fVar1 = param_1[5];
  fVar2 = param_1[3];
  fVar3 = *(float *)this;
  fVar4 = param_1[4];
  fVar5 = param_1[8];
  fVar6 = param_1[6];
  fVar7 = *(float *)this;
  fVar8 = param_1[7];
  fVar9 = *(float *)((int)this + 4);
  *(float *)this =
       *param_1 * *(float *)this +
       param_1[1] * *(float *)((int)this + 4) + param_1[2] * *(float *)((int)this + 8);
  *(float *)((int)this + 4) =
       fVar4 * *(float *)((int)this + 4) + fVar2 * fVar3 + fVar1 * *(float *)((int)this + 8);
  *(float *)((int)this + 8) = fVar8 * fVar9 + fVar6 * fVar7 + fVar5 * *(float *)((int)this + 8);
  return;
}

