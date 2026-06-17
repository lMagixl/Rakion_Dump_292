
void __thiscall FUN_3605bd30(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)((int)this + 4);
  fVar1 = param_2[1];
  *param_1 = *(float *)this - *param_2;
  param_1[1] = fVar2 - fVar1;
  return;
}

