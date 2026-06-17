
void __thiscall FUN_3604f950(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)((int)this + 8);
  dVar4 = *(double *)((int)this + 0x10);
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  *param_1 = *(double *)this - *param_2;
  param_1[1] = dVar3 - dVar1;
  param_1[2] = dVar4 - dVar2;
  return;
}

