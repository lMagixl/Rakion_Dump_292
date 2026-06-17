
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36183a20(float param_1,float param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *unaff_ESI;
  ulonglong uVar15;
  float local_48;
  
  uVar15 = FUN_361bfd6c();
  iVar13 = (int)uVar15;
  uVar15 = FUN_361bfd6c();
  iVar12 = (int)uVar15;
  fVar9 = (float)iVar13;
  iVar1 = *unaff_ESI;
  fVar8 = param_1 - fVar9;
  iVar14 = unaff_ESI[6] * iVar12 + iVar13;
  fVar2 = param_2 - (float)iVar12;
  iVar13 = (iVar12 + 1) * unaff_ESI[6] + iVar13;
  pfVar3 = (float *)(float)*(ushort *)(iVar1 + iVar14 * 2);
  pfVar4 = (float *)(float)*(ushort *)(iVar1 + iVar14 * 2 + 2);
  pfVar5 = (float *)(float)*(ushort *)(iVar1 + iVar13 * 2);
  pfVar6 = (float *)(float)*(ushort *)(iVar1 + iVar13 * 2 + 2);
  fVar10 = (float)pfVar6 * (float)unaff_ESI[0xe] - (float)pfVar5 * (float)unaff_ESI[0xe];
  fVar7 = (float)pfVar4 * (float)unaff_ESI[0xe] - (float)pfVar3 * (float)unaff_ESI[0xe];
  local_48 = fVar7;
  if ((fVar2 != _DAT_3622376c) && (local_48 = fVar10, fVar2 != _DAT_36223384)) {
    local_48 = (fVar10 - fVar7) * fVar2 + fVar7;
  }
  fVar10 = (float)pfVar4 * (float)unaff_ESI[0xe] - (float)pfVar6 * (float)unaff_ESI[0xe];
  fVar7 = (float)pfVar3 * (float)unaff_ESI[0xe] - (float)pfVar5 * (float)unaff_ESI[0xe];
  fVar11 = fVar7;
  if ((fVar8 != _DAT_3622376c) && (fVar11 = fVar10, fVar8 != _DAT_36223384)) {
    fVar11 = (fVar10 - fVar7) * fVar8 + fVar7;
  }
  fVar7 = (fVar9 + (float)unaff_ESI[0xd]) - ((float)unaff_ESI[0xd] * _DAT_3622376c + fVar9);
  fVar9 = (float)iVar12 * (float)unaff_ESI[0xf] - (float)(iVar12 + 1) * (float)unaff_ESI[0xf];
  fVar9 = (fVar11 * fVar11) / (fVar9 * fVar9);
  fVar7 = (local_48 * local_48) / (fVar7 * fVar7);
  fVar10 = SQRT(_DAT_36223384 / (fVar9 + fVar7 + _DAT_36223384));
  param_4[1] = fVar10;
  fVar7 = SQRT(fVar7 * fVar10 * fVar10);
  *param_4 = fVar7;
  fVar9 = SQRT(fVar9 * fVar10 * fVar10);
  param_4[2] = fVar9;
  if (_DAT_3622376c < local_48) {
    *param_4 = -fVar7;
  }
  if (fVar11 < _DAT_3622376c) {
    param_4[2] = -fVar9;
  }
  param_4 = pfVar3;
  if ((fVar8 != _DAT_3622376c) && (param_4 = pfVar4, fVar8 != _DAT_36223384)) {
    param_4 = (float *)(((float)pfVar4 - (float)pfVar3) * fVar8 + (float)pfVar3);
  }
  pfVar3 = pfVar5;
  if ((fVar8 != _DAT_3622376c) && (pfVar3 = pfVar6, fVar8 != _DAT_36223384)) {
    pfVar3 = (float *)(((float)pfVar6 - (float)pfVar5) * fVar8 + (float)pfVar5);
  }
  pfVar4 = param_4;
  if ((fVar2 != _DAT_3622376c) && (pfVar4 = pfVar3, fVar2 != _DAT_36223384)) {
    pfVar4 = (float *)(((float)pfVar3 - (float)param_4) * fVar2 + (float)param_4);
  }
  *param_3 = param_1 * (float)unaff_ESI[0xd];
  param_3[1] = (float)pfVar4 * (float)unaff_ESI[0xe];
  param_3[2] = param_2 * (float)unaff_ESI[0xf];
  return;
}

