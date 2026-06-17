
void __thiscall FUN_3605f960(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)((int)this + 0xc);
  fVar2 = *(float *)((int)this + 4);
  fVar3 = *(float *)((int)this + 8);
  *param_1 = *(float *)this * fVar1;
  param_1[1] = fVar2 * fVar1;
  param_1[2] = fVar3 * fVar1;
  return;
}

