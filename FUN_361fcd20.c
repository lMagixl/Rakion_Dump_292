
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_361fcd20(double *param_1,double *param_2,double *param_3,uint param_4)

{
  size_t sVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  void *pvVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  
  sVar1 = param_4 * 8;
  pvVar7 = (void *)FUN_361bf99c(sVar1);
  pdVar8 = (double *)FUN_361bf99c(sVar1);
  pdVar9 = (double *)FUN_361bf99c(sVar1);
  if (0 < (int)param_4) {
    pdVar10 = pdVar8;
    uVar16 = param_4;
    do {
      *(undefined4 *)(((int)pvVar7 - (int)pdVar8) + (int)pdVar10) = 0;
      *(undefined4 *)(((int)pvVar7 - (int)pdVar8) + 4 + (int)pdVar10) = 0;
      *(undefined4 *)pdVar10 = 0;
      *(undefined4 *)((int)pdVar10 + 4) = 0;
      *(undefined4 *)(((int)pdVar9 - (int)pdVar8) + (int)pdVar10) = 0;
      *(undefined4 *)(((int)pdVar9 - (int)pdVar8) + 4 + (int)pdVar10) = 0;
      pdVar10 = pdVar10 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  dVar2 = param_1[1] - *param_1;
  dVar5 = param_1[2] - param_1[1];
  pdVar10 = param_1 + 2;
  pdVar11 = param_2 + 1;
  dVar3 = (*pdVar11 - *param_2) / dVar2;
  dVar6 = (param_2[2] - *pdVar11) / dVar5;
  dVar4 = dVar5 + dVar2;
  *pdVar8 = dVar4 * dVar5;
  *pdVar9 = dVar4 * dVar4;
  *param_3 = dVar6 * dVar2 * dVar2 + (dVar2 * _DAT_3624cda0 + dVar5 + dVar5) * dVar5 * dVar3;
  if ((int)(param_4 - 1) < 2) {
    iVar13 = 1;
  }
  else {
    iVar15 = param_4 - 2;
    iVar13 = param_4 - 1;
    do {
      dVar2 = pdVar10[-1] - pdVar10[-2];
      dVar5 = *pdVar10 - pdVar10[-1];
      pdVar10 = pdVar10 + 1;
      pdVar12 = pdVar11 + 1;
      iVar15 = iVar15 + -1;
      dVar3 = (*pdVar11 - pdVar11[-1]) / dVar2;
      dVar6 = (*(double *)((int)param_2 + (-8 - (int)param_1) + (int)pdVar10) - *pdVar11) / dVar5;
      *(double *)((int)pvVar7 + (-8 - (int)param_2) + (int)pdVar12) = dVar5;
      *(double *)((int)pdVar8 + (-8 - (int)param_2) + (int)pdVar12) = dVar5 + dVar2 + dVar5 + dVar2;
      *(double *)((int)pdVar9 + (-8 - (int)param_2) + (int)pdVar12) = dVar2;
      *(double *)((int)param_3 + (-8 - (int)param_2) + (int)pdVar12) =
           (dVar6 * dVar2 + dVar3 * dVar5) * _DAT_3624cda0;
      pdVar11 = pdVar12;
    } while (iVar15 != 0);
  }
  dVar4 = dVar5 + dVar2;
  *(double *)((int)pvVar7 + iVar13 * 8) = dVar4 * dVar4;
  pdVar8[iVar13] = dVar4 * dVar2;
  param_3[iVar13] = dVar3 * dVar5 * dVar5 + (dVar2 + dVar2 + dVar5 * _DAT_3624cda0) * dVar2 * dVar6;
  uVar14 = FUN_361fcf50((int)pvVar7,pdVar8,(int)pdVar9,param_3,param_4);
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  if (pdVar8 != (double *)0x0) {
    operator_delete(pdVar8);
  }
  if (pdVar9 != (double *)0x0) {
    operator_delete(pdVar9);
  }
  return uVar14;
}

