
void __thiscall FUN_3605bdb0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)((int)this + 0xc);
  fVar1 = *(float *)((int)this + 4);
  *param_1 = *(float *)((int)this + 8) - *(float *)this;
  param_1[1] = fVar2 - fVar1;
  return;
}

