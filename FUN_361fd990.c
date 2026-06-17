
void __cdecl
FUN_361fd990(float *param_1,float param_2,float *param_3,float *param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  
  fVar2 = param_2;
  pfVar3 = (float *)FUN_361bf99c((int)param_2 * 4);
  pfVar4 = (float *)FUN_361bf99c((int)param_5 * 4);
  iVar9 = (int)param_2 * (int)param_6;
  pfVar5 = (float *)FUN_361bf99c(iVar9 * 4);
  fVar8 = param_2;
  pfVar7 = pfVar3;
  if (0 < (int)param_2) {
    for (; fVar8 != 0.0; fVar8 = (float)((int)fVar8 + -1)) {
      *pfVar7 = 0.0;
      pfVar7 = pfVar7 + 1;
    }
  }
  fVar8 = param_5;
  pfVar7 = pfVar4;
  if (0 < (int)param_5) {
    for (; fVar8 != 0.0; fVar8 = (float)((int)fVar8 + -1)) {
      *pfVar7 = 0.0;
      pfVar7 = pfVar7 + 1;
    }
  }
  pfVar7 = pfVar5;
  if (0 < iVar9) {
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar7 = 0.0;
      pfVar7 = pfVar7 + 1;
    }
  }
  pfVar7 = pfVar5;
  if (0 < (int)param_2) {
    do {
      FUN_361fd200(param_1,(int)param_3,pfVar7,param_6);
      param_1 = param_1 + (int)param_3;
      param_2 = (float)((int)param_2 + -1);
      pfVar7 = pfVar7 + (int)param_6;
    } while (param_2 != 0.0);
  }
  if (0 < (int)param_6) {
    param_2 = param_6;
    param_3 = param_4;
    do {
      if (0 < (int)fVar2) {
        pfVar6 = (float *)((int)param_3 + ((int)pfVar5 - (int)param_4));
        pfVar7 = pfVar3;
        fVar8 = fVar2;
        do {
          fVar1 = *pfVar6;
          pfVar6 = pfVar6 + (int)param_6;
          *pfVar7 = fVar1;
          pfVar7 = pfVar7 + 1;
          fVar8 = (float)((int)fVar8 + -1);
        } while (fVar8 != 0.0);
      }
      FUN_361fd200(pfVar3,(int)fVar2,pfVar4,param_5);
      pfVar7 = pfVar4;
      pfVar6 = param_3;
      fVar8 = param_5;
      if (0 < (int)param_5) {
        do {
          *pfVar6 = *pfVar7;
          fVar8 = (float)((int)fVar8 + -1);
          pfVar7 = pfVar7 + 1;
          pfVar6 = pfVar6 + (int)param_6;
        } while (fVar8 != 0.0);
      }
      param_3 = param_3 + 1;
      param_2 = (float)((int)param_2 + -1);
    } while (param_2 != 0.0);
  }
  if (pfVar3 != (float *)0x0) {
    operator_delete(pfVar3);
  }
  if (pfVar4 != (float *)0x0) {
    operator_delete(pfVar4);
  }
  if (pfVar5 != (float *)0x0) {
    operator_delete(pfVar5);
  }
  return;
}

