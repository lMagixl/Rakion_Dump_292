
void __thiscall FUN_36121a00(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)((int)this + 4);
  fVar3 = *(float *)((int)this + 8);
  fVar1 = *(float *)((int)this + 0xc);
  *param_1 = -*(float *)this;
  param_1[3] = -fVar1;
  param_1[1] = -fVar2;
  param_1[2] = -fVar3;
  return;
}

