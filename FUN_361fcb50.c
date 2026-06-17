
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_361fcb50(double *param_1,double *param_2,uint param_3,double *param_4,double *param_5,
            int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  int local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  pdVar4 = (double *)FUN_361bf99c(param_3 * 8);
  if (0 < (int)param_3) {
    pdVar7 = pdVar4;
    for (iVar5 = (param_3 & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar7 = 0;
      pdVar7 = (double *)((int)pdVar7 + 4);
    }
  }
  iVar5 = FUN_361fcd20(param_1,param_2,pdVar4,param_3);
  if (iVar5 != 0) {
    if (pdVar4 != (double *)0x0) {
      operator_delete(pdVar4);
    }
    return iVar5;
  }
  if ((*param_4 < *param_1) || (param_1[param_3 - 1] < param_4[param_6 + -1])) {
    if (pdVar4 != (double *)0x0) {
      operator_delete(pdVar4);
    }
    return -1;
  }
  local_38 = *param_4 - _DAT_3624cdd0;
  iVar5 = 0;
  if (0 < param_6) {
    local_40 = param_6;
    pdVar7 = param_5;
    do {
      dVar1 = *(double *)(((int)param_4 - (int)param_5) + (int)pdVar7);
      if (local_38 < dVar1) {
        if (iVar5 < (int)param_3) {
          pdVar6 = param_1 + iVar5;
          do {
            if (dVar1 <= *pdVar6) break;
            iVar5 = iVar5 + 1;
            pdVar6 = pdVar6 + 1;
          } while (iVar5 < (int)param_3);
        }
        if (dVar1 < param_1[iVar5]) {
          iVar5 = iVar5 + 1;
        }
        local_30 = param_1[iVar5];
        local_38 = param_1[iVar5 + 1];
        dVar2 = _DAT_3624cdd0 / (param_1[iVar5 + 1] - param_1[iVar5]);
        dVar3 = (param_2[iVar5 + 1] - param_2[iVar5]) * dVar2;
        local_10 = param_2[iVar5];
        local_18 = pdVar4[iVar5];
        local_20 = ((dVar3 * _DAT_3624cda0 - (pdVar4[iVar5] + pdVar4[iVar5])) - pdVar4[iVar5 + 1]) *
                   dVar2;
        local_28 = ((pdVar4[iVar5] + pdVar4[iVar5 + 1]) - (dVar3 + dVar3)) * dVar2 * dVar2;
      }
      dVar1 = dVar1 - local_30;
      local_40 = local_40 + -1;
      *pdVar7 = ((dVar1 * local_28 + local_20) * dVar1 + local_18) * dVar1 + local_10;
      pdVar7 = pdVar7 + 1;
    } while (local_40 != 0);
  }
  if (pdVar4 != (double *)0x0) {
    operator_delete(pdVar4);
  }
  return 0;
}

