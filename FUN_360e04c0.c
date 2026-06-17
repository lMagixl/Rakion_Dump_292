
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_360e04c0(double *param_1,double *param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  while( true ) {
    if (iVar2 == 1) {
      return (float10)_DAT_36223384;
    }
    if (iVar2 == 2) break;
    fVar3 = FUN_360dfa80(param_2,param_1);
    if (fVar3 <= (float10)_DAT_36227d98) {
      if ((float10)_DAT_36227d98 <= fVar3) {
        fVar3 = FUN_360e04c0(*(double **)((int)param_1 + 0x24),param_2);
        fVar1 = (float)fVar3;
        if (((fVar1 != _DAT_3622376c) &&
            (fVar3 = FUN_360e04c0(*(double **)(param_1 + 5),param_2),
            fVar3 != (float10)_DAT_3622376c)) && ((float10)fVar1 == fVar3)) {
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

