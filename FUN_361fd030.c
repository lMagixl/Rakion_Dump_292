
void __cdecl
FUN_361fd030(double *param_1,uint param_2,uint param_3,undefined4 *param_4,uint param_5,int param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double *pdVar5;
  int iVar6;
  uint uVar7;
  undefined4 *local_20;
  int local_10;
  
  pdVar1 = (double *)FUN_361bf99c(param_2 * 8);
  pdVar2 = (double *)FUN_361bf99c(param_5 * 8);
  uVar7 = param_2 * param_6;
  pdVar3 = (double *)FUN_361bf99c(uVar7 * 8);
  if (0 < (int)param_2) {
    pdVar5 = pdVar1;
    for (iVar6 = (param_2 & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pdVar5 = 0;
      pdVar5 = (double *)((int)pdVar5 + 4);
    }
  }
  if (0 < (int)param_5) {
    pdVar5 = pdVar2;
    for (iVar6 = (param_5 & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pdVar5 = 0;
      pdVar5 = (double *)((int)pdVar5 + 4);
    }
  }
  if (0 < (int)uVar7) {
    pdVar5 = pdVar3;
    for (iVar6 = (uVar7 & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pdVar5 = 0;
      pdVar5 = (double *)((int)pdVar5 + 4);
    }
  }
  if (0 < (int)param_2) {
    local_20 = (undefined4 *)param_2;
    pdVar5 = pdVar3;
    do {
      FUN_361fc860(param_1,param_3,pdVar5,param_6);
      pdVar5 = pdVar5 + param_6;
      param_1 = param_1 + param_3;
      local_20 = (undefined4 *)((int)local_20 - 1);
    } while (local_20 != (undefined4 *)0x0);
  }
  if (0 < param_6) {
    local_20 = param_4;
    local_10 = param_6;
    do {
      if (0 < (int)param_2) {
        puVar4 = (undefined4 *)(((int)pdVar3 - (int)param_4) + (int)local_20);
        pdVar5 = pdVar1;
        uVar7 = param_2;
        do {
          *(undefined4 *)pdVar5 = *puVar4;
          *(undefined4 *)((int)pdVar5 + 4) = puVar4[1];
          puVar4 = puVar4 + param_6 * 2;
          pdVar5 = pdVar5 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      FUN_361fc860(pdVar1,param_2,pdVar2,param_5);
      pdVar5 = pdVar2;
      puVar4 = local_20;
      uVar7 = param_5;
      if (0 < (int)param_5) {
        do {
          *puVar4 = *(undefined4 *)pdVar5;
          puVar4[1] = *(undefined4 *)((int)pdVar5 + 4);
          uVar7 = uVar7 - 1;
          pdVar5 = pdVar5 + 1;
          puVar4 = puVar4 + param_6 * 2;
        } while (uVar7 != 0);
      }
      local_20 = local_20 + 2;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (pdVar1 != (double *)0x0) {
    operator_delete(pdVar1);
  }
  if (pdVar2 != (double *)0x0) {
    operator_delete(pdVar2);
  }
  if (pdVar3 != (double *)0x0) {
    operator_delete(pdVar3);
  }
  return;
}

