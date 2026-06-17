
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361fd3d0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  fVar1 = *param_1;
  fVar2 = (float)_DAT_3624cd88;
  *param_1 = fVar1 * fVar2;
  if ((param_2 != 1) &&
     (param_1[1] = (param_1[1] - fVar1 * fVar2) * (float)_DAT_3624cd88, param_2 != 2)) {
    puVar3 = (undefined4 *)FUN_361bf99c(param_2 * 4);
    iVar5 = param_2;
    puVar7 = puVar3;
    if (0 < param_2) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    puVar3[1] = 0x40000000;
    iVar5 = 2;
    if (2 < param_2 + -1) {
      iVar6 = param_2 + -3;
      pfVar4 = param_1 + 2;
      do {
        iVar6 = iVar6 + -1;
        fVar1 = (float)_DAT_3624cdd0 /
                ((float)_DAT_3624cdb8 - *(float *)((int)puVar3 + (-4 - (int)param_1) + (int)pfVar4))
        ;
        *(float *)((int)puVar3 + (-4 - (int)param_1) + (int)(pfVar4 + 1)) = fVar1;
        *pfVar4 = (*pfVar4 - pfVar4[-1]) / ((float)_DAT_3624cdb8 - fVar1);
        pfVar4 = pfVar4 + 1;
        iVar5 = param_2 + -1;
      } while (iVar6 != 0);
    }
    fVar1 = (float)_DAT_3624cdd0 / ((float)_DAT_3624cdb8 - (float)puVar3[iVar5 + -1]);
    puVar3[iVar5] = fVar1;
    param_1[iVar5] =
         (param_1[iVar5] - param_1[iVar5 + -1] * _DAT_3624cdd8) /
         ((float)_DAT_3624cdc8 - fVar1 * _DAT_3624cdd8);
    if (-1 < param_2 + -2) {
      iVar5 = param_2 + -1;
      pfVar4 = param_1 + param_2 + -2;
      do {
        iVar5 = iVar5 + -1;
        *pfVar4 = *pfVar4 - *(float *)((int)pfVar4 + (int)puVar3 + (4 - (int)param_1)) * pfVar4[1];
        pfVar4 = pfVar4 + -1;
      } while (iVar5 != 0);
    }
    if (puVar3 != (undefined4 *)0x0) {
      operator_delete(puVar3);
      return;
    }
  }
  return;
}

