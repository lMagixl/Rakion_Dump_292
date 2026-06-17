
void __thiscall FUN_3604be90(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)((int)this + 8);
  dVar2 = *(double *)((int)this + 0x10);
  *param_1 = -*(double *)this;
  param_1[1] = -dVar1;
  param_1[2] = -dVar2;
  return;
}

