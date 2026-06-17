
void __thiscall FUN_3605de80(void *this,double *param_1)

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
  
  dVar1 = param_1[5];
  dVar2 = param_1[3];
  dVar3 = *(double *)this;
  dVar4 = param_1[4];
  dVar5 = param_1[8];
  dVar6 = param_1[6];
  dVar7 = *(double *)this;
  dVar8 = param_1[7];
  dVar9 = *(double *)((int)this + 8);
  *(double *)this =
       *param_1 * *(double *)this +
       param_1[1] * *(double *)((int)this + 8) + param_1[2] * *(double *)((int)this + 0x10);
  *(double *)((int)this + 8) =
       dVar4 * *(double *)((int)this + 8) + dVar2 * dVar3 + dVar1 * *(double *)((int)this + 0x10);
  *(double *)((int)this + 0x10) =
       dVar8 * dVar9 + dVar6 * dVar7 + dVar5 * *(double *)((int)this + 0x10);
  return;
}

