
void __thiscall FUN_3605fd00(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)((int)this + 0xc);
  fVar2 = *(float *)this;
  fVar3 = *(float *)((int)this + 4);
  fVar4 = *(float *)((int)this + 8);
  FUN_3605fbc0(this,&local_c,param_2);
  *param_1 = local_c - fVar2 * fVar1;
  param_1[1] = local_8 - fVar3 * fVar1;
  param_1[2] = local_4 - fVar4 * fVar1;
  return;
}

