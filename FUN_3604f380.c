
void __thiscall FUN_3604f380(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_2;
  dVar2 = *(double *)((int)this + 0x10);
  dVar3 = *(double *)this;
  dVar4 = param_2[2];
  dVar5 = param_2[1];
  dVar6 = *(double *)this;
  dVar7 = *(double *)((int)this + 8);
  dVar8 = *param_2;
  *param_1 = *(double *)((int)this + 8) * param_2[2] - param_2[1] * *(double *)((int)this + 0x10);
  param_1[1] = dVar1 * dVar2 - dVar3 * dVar4;
  param_1[2] = dVar5 * dVar6 - dVar7 * dVar8;
  return;
}

