
void __thiscall FUN_36058a50(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = -*(float *)this;
  param_1[1] = -fVar1;
  param_1[2] = -fVar2;
  return;
}

