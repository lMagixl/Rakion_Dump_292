
void __thiscall FUN_3605df30(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)((int)this + 0x20);
  dVar1 = *(double *)((int)this + 8);
  dVar4 = *(double *)((int)this + 0x28);
  dVar2 = *(double *)((int)this + 0x10);
  *param_1 = *(double *)((int)this + 0x18) - *(double *)this;
  param_1[1] = dVar3 - dVar1;
  param_1[2] = dVar4 - dVar2;
  return;
}

