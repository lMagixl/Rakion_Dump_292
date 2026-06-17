
void __thiscall FUN_360dfda0(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)((int)this + 0x18);
  dVar2 = *(double *)((int)this + 8);
  dVar3 = *(double *)((int)this + 0x10);
  *param_1 = *(double *)this * dVar1;
  param_1[1] = dVar2 * dVar1;
  param_1[2] = dVar3 * dVar1;
  return;
}

