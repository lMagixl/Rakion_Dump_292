
float * __thiscall FUN_36069060(void *this,float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  if (*param_1 <= *param_2) {
    fVar1 = *param_1;
  }
  *(float *)this = fVar1;
  fVar1 = *param_2;
  if (*param_2 <= *param_1) {
    fVar1 = *param_1;
  }
  *(float *)((int)this + 8) = fVar1;
  fVar1 = param_2[1];
  if (param_1[1] <= param_2[1]) {
    fVar1 = param_1[1];
  }
  *(float *)((int)this + 4) = fVar1;
  fVar1 = param_2[1];
  if (param_2[1] <= param_1[1]) {
    fVar1 = param_1[1];
  }
  *(float *)((int)this + 0xc) = fVar1;
  return this;
}

