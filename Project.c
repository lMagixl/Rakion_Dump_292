
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSimpleProjection3D_DOUBLE::Project(class Plane<double,3> const &,class
   Plane<double,3> &)const  */

void __thiscall
CSimpleProjection3D_DOUBLE::Project
          (CSimpleProjection3D_DOUBLE *this,Plane<double,3> *param_1,Plane<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 *puVar3;
  int iVar4;
  double *pdVar5;
  Plane<double,3> *pPVar6;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  pdVar5 = &local_28;
                    /* 0x5d9e0  2845
                       ?Project@CSimpleProjection3D_DOUBLE@@QBEXABV?$Plane@N$02@@AAV2@@Z */
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  puVar3 = (undefined4 *)FUN_3605dfb0(&local_28,(double *)(this + 0x40));
  pPVar6 = param_2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pPVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    pPVar6 = pPVar6 + 4;
  }
  if (((*(int *)(this + 0x30) != 0x3f800000) || (*(int *)(this + 0x34) != 0x3f800000)) ||
     (*(int *)(this + 0x38) != 0x3f800000)) {
    dVar1 = SQRT(*(double *)(param_2 + 0x10) * *(double *)(param_2 + 0x10) +
                 *(double *)(param_2 + 8) * *(double *)(param_2 + 8) +
                 *(double *)param_2 * *(double *)param_2);
    dVar2 = _DAT_36227d28 / dVar1;
    local_28 = *(double *)param_2 * dVar2;
    local_20 = *(double *)(param_2 + 8) * dVar2;
    local_18 = *(double *)(param_2 + 0x10) * dVar2;
    local_10 = dVar1 * *(double *)(param_2 + 0x18);
    pdVar5 = &local_28;
    pPVar6 = param_2;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pPVar6 = *(undefined4 *)pdVar5;
      pdVar5 = (double *)((int)pdVar5 + 4);
      pPVar6 = pPVar6 + 4;
    }
  }
  *(double *)(param_2 + 0x18) =
       *(double *)param_2 * *(double *)(this + 0xd0) +
       *(double *)(this + 0xd8) * *(double *)(param_2 + 8) +
       *(double *)(this + 0xe0) * *(double *)(param_2 + 0x10) + *(double *)(param_2 + 0x18);
  return;
}

