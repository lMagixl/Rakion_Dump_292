
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361fc860(double *param_1,uint param_2,double *param_3,int param_4)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 extraout_ST1;
  int local_1c;
  int local_18;
  int local_14;
  double local_10;
  
  pdVar1 = (double *)FUN_361bf99c(param_2 * 8);
  if (0 < (int)param_2) {
    pdVar3 = pdVar1;
    for (iVar2 = (param_2 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pdVar3 = 0;
      pdVar3 = (double *)((int)pdVar3 + 4);
    }
  }
  FUN_361fc980(param_1,param_2,pdVar1);
  local_1c = -1;
  local_18 = 0;
  if (0 < param_4) {
    fVar4 = (float10)local_10;
    fVar5 = (float10)local_10;
    local_14 = param_4;
    fVar6 = (float10)local_10;
    fVar8 = (float10)_DAT_3624cda8;
    do {
      fVar7 = fVar4;
      if (local_18 != local_1c) {
        fVar7 = (float10)param_1[local_18];
        fVar5 = (float10)pdVar1[local_18];
        fVar6 = (float10)param_1[local_18 + 1] - (float10)param_1[local_18];
        local_10 = (double)((fVar6 * (float10)_DAT_3624cda0 -
                            ((float10)pdVar1[local_18] + (float10)pdVar1[local_18])) -
                           (float10)pdVar1[local_18 + 1]);
        fVar6 = ((float10)pdVar1[local_18 + 1] - (fVar6 + fVar6)) + (float10)pdVar1[local_18];
        local_1c = local_18;
      }
      fVar8 = fVar8 - (float10)local_18;
      *param_3 = (double)(((fVar8 * fVar6 + (float10)local_10) * fVar8 + fVar5) * fVar8 + fVar7);
      fVar4 = fVar5;
      local_18 = ftol();
      param_3 = param_3 + 1;
      local_14 = local_14 + -1;
      fVar6 = extraout_ST0;
      fVar5 = extraout_ST1;
      fVar8 = fVar7;
    } while (local_14 != 0);
  }
  if (pdVar1 != (double *)0x0) {
    operator_delete(pdVar1);
  }
  return;
}

