
void __thiscall FUN_3605fbc0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)((int)this + 4);
  fVar5 = (*param_2 * *(float *)this +
          param_2[1] * *(float *)((int)this + 4) + param_2[2] * *(float *)((int)this + 8)) -
          *(float *)((int)this + 0xc);
  fVar2 = *(float *)((int)this + 8);
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  *param_1 = *param_2 - *(float *)this * fVar5;
  param_1[1] = fVar3 - fVar1 * fVar5;
  param_1[2] = fVar4 - fVar2 * fVar5;
  return;
}

