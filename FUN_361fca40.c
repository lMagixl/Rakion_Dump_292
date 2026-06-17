
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361fca40(double *param_1,uint param_2)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)FUN_361bf99c(param_2 * 8);
  if (0 < (int)param_2) {
    puVar6 = puVar2;
    for (iVar3 = (param_2 & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  dVar1 = *param_1 * _DAT_3624cd88;
  *param_1 = dVar1;
  param_1[1] = (param_1[1] - dVar1) * _DAT_3624cd88;
  puVar2[2] = 0;
  puVar2[3] = 0x40000000;
  iVar3 = 2;
  if (2 < (int)(param_2 - 1)) {
    iVar5 = param_2 - 3;
    pdVar4 = param_1 + 2;
    do {
      iVar5 = iVar5 + -1;
      dVar1 = _DAT_3624cdd0 /
              (_DAT_3624cdb8 - *(double *)((int)puVar2 + (-8 - (int)param_1) + (int)pdVar4));
      *(double *)((int)puVar2 + (-8 - (int)param_1) + (int)(pdVar4 + 1)) = dVar1;
      *pdVar4 = (*pdVar4 - pdVar4[-1]) / (_DAT_3624cdb8 - dVar1);
      pdVar4 = pdVar4 + 1;
      iVar3 = param_2 - 1;
    } while (iVar5 != 0);
  }
  dVar1 = _DAT_3624cdd0 / (_DAT_3624cdb8 - *(double *)(puVar2 + iVar3 * 2 + -2));
  *(double *)(puVar2 + iVar3 * 2) = dVar1;
  param_1[iVar3] =
       (param_1[iVar3] - param_1[iVar3 + -1] * _DAT_3624cdb8) /
       (_DAT_3624cdc8 - dVar1 * _DAT_3624cdb8);
  if (-1 < (int)(param_2 - 2)) {
    iVar3 = param_2 - 1;
    pdVar4 = param_1 + (param_2 - 2);
    do {
      iVar3 = iVar3 + -1;
      *pdVar4 = *pdVar4 - *(double *)((int)pdVar4 + (int)puVar2 + (8 - (int)param_1)) * pdVar4[1];
      pdVar4 = pdVar4 + -1;
    } while (iVar3 != 0);
  }
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete(puVar2);
  }
  return;
}

