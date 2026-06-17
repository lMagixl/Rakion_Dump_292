
void __thiscall FUN_361206c0(void *this,float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)((int)this + 4);
  *param_1 = *(float *)this * param_2;
  param_1[1] = fVar1 * param_2;
  return;
}

