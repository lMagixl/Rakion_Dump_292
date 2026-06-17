
double * __thiscall FUN_3604adc0(void *this,double *param_1)

{
  double dVar1;
  
  dVar1 = *param_1;
  if (*(double *)this <= *param_1) {
    dVar1 = *(double *)this;
  }
  *(double *)this = dVar1;
  dVar1 = param_1[3];
  if (param_1[3] <= *(double *)((int)this + 0x18)) {
    dVar1 = *(double *)((int)this + 0x18);
  }
  *(double *)((int)this + 0x18) = dVar1;
  dVar1 = param_1[1];
  if (*(double *)((int)this + 8) <= param_1[1]) {
    dVar1 = *(double *)((int)this + 8);
  }
  *(double *)((int)this + 8) = dVar1;
  dVar1 = param_1[4];
  if (param_1[4] <= *(double *)((int)this + 0x20)) {
    dVar1 = *(double *)((int)this + 0x20);
  }
  *(double *)((int)this + 0x20) = dVar1;
  dVar1 = param_1[2];
  if (*(double *)((int)this + 0x10) <= param_1[2]) {
    dVar1 = *(double *)((int)this + 0x10);
  }
  *(double *)((int)this + 0x10) = dVar1;
  dVar1 = param_1[5];
  if (param_1[5] <= *(double *)((int)this + 0x28)) {
    dVar1 = *(double *)((int)this + 0x28);
  }
  *(double *)((int)this + 0x28) = dVar1;
  return this;
}

