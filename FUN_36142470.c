
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_36142470(double *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float10 fVar16;
  float10 fVar17;
  
  iVar1 = **(int **)((int)param_1 + 0x44);
  iVar2 = (*(int **)((int)param_1 + 0x44))[1];
  dVar4 = *(double *)(iVar2 + 0x20) - *(double *)(iVar1 + 0x20);
  dVar5 = *(double *)(iVar2 + 0x28) - *(double *)(iVar1 + 0x28);
  dVar6 = *(double *)(iVar2 + 0x30) - *(double *)(iVar1 + 0x30);
  iVar3 = *(int *)(param_1 + 9);
  dVar7 = *(double *)(iVar1 + 0x20) - *(double *)(iVar3 + 0x20);
  dVar8 = *(double *)(iVar1 + 0x28) - *(double *)(iVar3 + 0x28);
  dVar9 = *(double *)(iVar1 + 0x30) - *(double *)(iVar3 + 0x30);
  dVar10 = *(double *)(iVar3 + 0x20) - *(double *)(iVar2 + 0x20);
  dVar11 = *(double *)(iVar3 + 0x28) - *(double *)(iVar2 + 0x28);
  dVar12 = *(double *)(iVar3 + 0x30) - *(double *)(iVar2 + 0x30);
  dVar13 = -dVar12 * dVar8 - -dVar11 * dVar9;
  dVar14 = -dVar10 * dVar9 - dVar7 * -dVar12;
  dVar15 = dVar7 * -dVar11 - -dVar10 * dVar8;
  fVar16 = SQRT((float10)dVar13 * (float10)dVar13 +
                (float10)dVar14 * (float10)dVar14 + (float10)dVar15 * (float10)dVar15) *
           (float10)_DAT_36227cd8;
  if (dVar13 * *param_1 + dVar14 * param_1[1] + dVar15 * param_1[2] < _DAT_36227d98) {
    fVar16 = -fVar16;
  }
  dVar4 = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6);
  fVar17 = SQRT((float10)dVar8 * (float10)dVar8 +
                (float10)dVar9 * (float10)dVar9 + (float10)dVar7 * (float10)dVar7);
  dVar5 = SQRT(dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12);
  if (fVar17 < (float10)dVar5) {
    fVar17 = (float10)dVar5;
  }
  if (fVar17 <= (float10)dVar4) {
    fVar17 = (float10)dVar4;
  }
  return fVar16 / (fVar17 * fVar17);
}

