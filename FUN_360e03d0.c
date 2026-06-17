
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_360e03d0(double *param_1,double *param_2,double param_3)

{
  float fVar1;
  int iVar2;
  double dVar3;
  float10 fVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  while( true ) {
    if (iVar2 == 1) {
      return (float10)_DAT_36223384;
    }
    if (iVar2 == 2) break;
    dVar3 = (*param_2 * *param_1 + param_2[1] * param_1[1] + param_2[2] * param_1[2]) - param_1[3];
    if (dVar3 <= param_3) {
      if (-param_3 <= dVar3) {
        fVar4 = FUN_360e03d0(*(double **)((int)param_1 + 0x24),param_2,param_3);
        fVar1 = (float)fVar4;
        if (((fVar1 != _DAT_3622376c) &&
            (fVar4 = FUN_360e03d0(*(double **)(param_1 + 5),param_2,param_3),
            fVar4 != (float10)_DAT_3622376c)) && ((float10)fVar1 == fVar4)) {
          return (float10)fVar1;
        }
        return (float10)_DAT_3622376c;
      }
      param_1 = *(double **)(param_1 + 5);
    }
    else {
      param_1 = *(double **)((int)param_1 + 0x24);
    }
    iVar2 = *(int *)(param_1 + 4);
  }
  return (float10)_DAT_36227d20;
}

