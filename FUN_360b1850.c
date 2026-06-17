
float * __thiscall FUN_360b1850(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (*(float *)this <= *param_1) {
    fVar1 = *(float *)this;
  }
  *(float *)this = fVar1;
  fVar1 = param_1[3];
  if (param_1[3] <= *(float *)((int)this + 0xc)) {
    fVar1 = *(float *)((int)this + 0xc);
  }
  *(float *)((int)this + 0xc) = fVar1;
  fVar1 = param_1[1];
  if (*(float *)((int)this + 4) <= param_1[1]) {
    fVar1 = *(float *)((int)this + 4);
  }
  *(float *)((int)this + 4) = fVar1;
  fVar1 = param_1[4];
  if (param_1[4] <= *(float *)((int)this + 0x10)) {
    fVar1 = *(float *)((int)this + 0x10);
  }
  *(float *)((int)this + 0x10) = fVar1;
  fVar1 = param_1[2];
  if (*(float *)((int)this + 8) <= param_1[2]) {
    fVar1 = *(float *)((int)this + 8);
  }
  *(float *)((int)this + 8) = fVar1;
  fVar1 = param_1[5];
  if (param_1[5] <= *(float *)((int)this + 0x14)) {
    fVar1 = *(float *)((int)this + 0x14);
  }
  *(float *)((int)this + 0x14) = fVar1;
  return this;
}

