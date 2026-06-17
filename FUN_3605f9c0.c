
void __thiscall FUN_3605f9c0(void *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar5 = (*param_3 * *(float *)this +
          param_3[2] * *(float *)((int)this + 8) + param_3[1] * *(float *)((int)this + 4)) /
          (*param_2 * *(float *)this +
          param_2[2] * *(float *)((int)this + 8) + param_2[1] * *(float *)((int)this + 4));
  fVar3 = param_3[2];
  fVar4 = param_3[1];
  *param_1 = *param_3 - *param_2 * fVar5;
  param_1[1] = fVar4 - fVar1 * fVar5;
  param_1[2] = fVar3 - fVar2 * fVar5;
  return;
}

