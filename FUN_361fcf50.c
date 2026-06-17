
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_361fcf50(int param_1,double *param_2,int param_3,double *param_4,uint param_5)

{
  double dVar1;
  undefined4 *puVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)FUN_361bf99c(param_5 * 8);
  if (0 < (int)param_5) {
    puVar6 = puVar2;
    for (iVar4 = (param_5 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  iVar4 = 1;
  dVar1 = *param_2;
  *param_4 = *param_4 / dVar1;
  if (1 < (int)param_5) {
    do {
      dVar1 = *(double *)(param_3 + -8 + iVar4 * 8) / dVar1;
      *(double *)(puVar2 + iVar4 * 2) = dVar1;
      dVar1 = param_2[iVar4] - dVar1 * *(double *)(param_1 + iVar4 * 8);
      if (dVar1 == _DAT_3624cda8) {
        return 0xffffffff;
      }
      param_4[iVar4] =
           (param_4[iVar4] - param_4[iVar4 + -1] * *(double *)(param_1 + iVar4 * 8)) / dVar1;
      iVar4 = param_5 - 2;
      if (-1 < iVar4) {
        iVar5 = param_5 - 1;
        pdVar3 = param_4 + iVar4;
        iVar4 = iVar4 - iVar5;
        do {
          iVar5 = iVar5 + -1;
          *pdVar3 = *pdVar3 - *(double *)((int)pdVar3 + (int)puVar2 + (8 - (int)param_4)) *
                              pdVar3[1];
          pdVar3 = pdVar3 + -1;
        } while (iVar5 != 0);
      }
      if (puVar2 != (undefined4 *)0x0) {
        operator_delete(puVar2);
        puVar2 = (undefined4 *)0x0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_5);
  }
  return 0;
}

