
void __thiscall FUN_3605cfa0(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar1 = param_2[5];
  dVar2 = *(double *)((int)this + 0x10);
  dVar3 = param_2[3];
  dVar4 = *(double *)this;
  dVar5 = param_2[4];
  dVar6 = *(double *)((int)this + 8);
  dVar7 = param_2[8];
  dVar8 = *(double *)((int)this + 0x10);
  dVar9 = param_2[6];
  dVar10 = *(double *)this;
  dVar11 = param_2[7];
  dVar12 = *(double *)((int)this + 8);
  *param_1 = *param_2 * *(double *)this +
             param_2[1] * *(double *)((int)this + 8) + param_2[2] * *(double *)((int)this + 0x10);
  param_1[1] = dVar5 * dVar6 + dVar3 * dVar4 + dVar1 * dVar2;
  param_1[2] = dVar11 * dVar12 + dVar9 * dVar10 + dVar7 * dVar8;
  return;
}

