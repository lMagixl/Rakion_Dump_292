
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36145090(int *param_1)

{
  Vector<float,3> *pVVar1;
  Vector<float,3> *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 *puVar14;
  int iVar15;
  byte bVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  float local_78;
  float local_6c [4];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar15 = param_1[1];
  param_1[5] = *(int *)(iVar15 + 0x28);
  param_1[6] = *(int *)(iVar15 + 0x2c);
  param_1[7] = *(int *)(iVar15 + 0x20);
  param_1[8] = *(int *)(iVar15 + 0x24);
  iVar15 = *(int *)(iVar15 + 0x14);
  param_1[9] = iVar15;
  bVar16 = (byte)iVar15;
  iVar17 = param_1[5] >> (bVar16 & 0x1f);
  iVar15 = param_1[6] >> (bVar16 & 0x1f);
  param_1[10] = iVar17;
  param_1[0xb] = iVar15;
  FUN_3608b220(iVar17,iVar15,param_1 + 0xc);
  puVar14 = (undefined4 *)*param_1;
  iVar15 = *(int *)(*(int *)(*(int *)(puVar14[0x6b] + 0x38) + 0x14) + 0x668);
  local_10 = -param_1[7];
  local_c = -param_1[8];
  pVVar1 = (Vector<float,3> *)(param_1 + 0x34);
  CMappingDefinition::GetSpaceCoordinates
            ((CMappingDefinition *)(puVar14 + 0x5c),(CMappingVectors *)(*(int *)*puVar14 + 0x10),
             (Vector<long,2> *)&local_10,pVVar1);
  fVar3 = *(float *)(iVar15 + 0x68);
  fVar4 = *(float *)(iVar15 + 100);
  fVar5 = *(float *)pVVar1;
  fVar6 = *(float *)(iVar15 + 0x60);
  fVar7 = *(float *)(iVar15 + 0x74);
  fVar8 = *(float *)(iVar15 + 0x6c);
  fVar9 = *(float *)pVVar1;
  fVar10 = (float)param_1[0x35];
  fVar11 = *(float *)(iVar15 + 0x70);
  fVar12 = *(float *)(iVar15 + 0x40);
  fVar13 = *(float *)(iVar15 + 0x44);
  *(float *)pVVar1 =
       *(float *)pVVar1 * *(float *)(iVar15 + 0x54) +
       *(float *)(iVar15 + 0x58) * (float)param_1[0x35] +
       (float)param_1[0x36] * *(float *)(iVar15 + 0x5c) + *(float *)(iVar15 + 0x3c);
  param_1[0x35] =
       (int)(fVar5 * fVar6 + (float)param_1[0x35] * fVar4 + (float)param_1[0x36] * fVar3 + fVar12);
  param_1[0x36] = (int)(fVar10 * fVar11 + fVar8 * fVar9 + (float)param_1[0x36] * fVar7 + fVar13);
  bVar16 = (byte)param_1[9];
  local_8 = (1 << (bVar16 & 0x1f)) - param_1[7];
  local_4 = (0 << (bVar16 & 0x1f)) - param_1[8];
  local_18 = (0 << (bVar16 & 0x1f)) - param_1[7];
  pVVar1 = (Vector<float,3> *)(param_1 + 0x37);
  local_14 = (1 << (bVar16 & 0x1f)) - param_1[8];
  CMappingDefinition::GetSpaceCoordinates
            ((CMappingDefinition *)((undefined4 *)*param_1 + 0x5c),
             (CMappingVectors *)(**(int **)*param_1 + 0x10),(Vector<long,2> *)&local_8,pVVar1);
  fVar3 = *(float *)(iVar15 + 0x68);
  fVar4 = *(float *)(iVar15 + 100);
  fVar5 = *(float *)pVVar1;
  fVar6 = *(float *)(iVar15 + 0x60);
  fVar7 = *(float *)(iVar15 + 0x74);
  fVar8 = (float)param_1[0x38];
  fVar9 = *(float *)(iVar15 + 0x70);
  fVar10 = *(float *)(iVar15 + 0x6c);
  fVar11 = *(float *)pVVar1;
  pVVar2 = (Vector<float,3> *)(param_1 + 0x3a);
  fVar12 = *(float *)(iVar15 + 0x40);
  fVar13 = *(float *)(iVar15 + 0x44);
  *(float *)pVVar1 =
       *(float *)pVVar1 * *(float *)(iVar15 + 0x54) +
       (float)param_1[0x39] * *(float *)(iVar15 + 0x5c) +
       *(float *)(iVar15 + 0x58) * (float)param_1[0x38] + *(float *)(iVar15 + 0x3c);
  param_1[0x38] =
       (int)(fVar5 * fVar6 + (float)param_1[0x38] * fVar4 + (float)param_1[0x39] * fVar3 + fVar12);
  param_1[0x39] = (int)(fVar10 * fVar11 + fVar8 * fVar9 + (float)param_1[0x39] * fVar7 + fVar13);
  CMappingDefinition::GetSpaceCoordinates
            ((CMappingDefinition *)((undefined4 *)*param_1 + 0x5c),
             (CMappingVectors *)(**(int **)*param_1 + 0x10),(Vector<long,2> *)&local_18,pVVar2);
  fVar3 = *(float *)(iVar15 + 0x68);
  fVar4 = *(float *)(iVar15 + 100);
  fVar5 = *(float *)pVVar2;
  fVar6 = *(float *)(iVar15 + 0x60);
  fVar7 = *(float *)(iVar15 + 0x74);
  fVar8 = *(float *)(iVar15 + 0x70);
  fVar9 = (float)param_1[0x3b];
  fVar10 = *(float *)(iVar15 + 0x6c);
  fVar11 = *(float *)pVVar2;
  fVar12 = *(float *)(iVar15 + 0x40);
  fVar13 = *(float *)(iVar15 + 0x44);
  *(float *)pVVar2 =
       (float)param_1[0x3c] * *(float *)(iVar15 + 0x5c) +
       *(float *)(iVar15 + 0x58) * (float)param_1[0x3b] +
       *(float *)pVVar2 * *(float *)(iVar15 + 0x54) + *(float *)(iVar15 + 0x3c);
  param_1[0x3b] =
       (int)(fVar5 * fVar6 + (float)param_1[0x3b] * fVar4 + (float)param_1[0x3c] * fVar3 + fVar12);
  param_1[0x3c] = (int)(fVar10 * fVar11 + fVar8 * fVar9 + fVar7 * (float)param_1[0x3c] + fVar13);
  *(float *)pVVar1 = *(float *)pVVar1 - (float)param_1[0x34];
  param_1[0x38] = (int)((float)param_1[0x38] - (float)param_1[0x35]);
  param_1[0x39] = (int)((float)param_1[0x39] - (float)param_1[0x36]);
  *(float *)pVVar2 = *(float *)pVVar2 - (float)param_1[0x34];
  param_1[0x3b] = (int)((float)param_1[0x3b] - (float)param_1[0x35]);
  param_1[0x3c] = (int)((float)param_1[0x3c] - (float)param_1[0x36]);
  local_78 = *(float *)pVVar1;
  local_6c[3] = (float)param_1[0x38];
  local_54 = (float)param_1[0x39];
  local_6c[1] = -*(float *)pVVar2;
  local_5c = -(float)param_1[0x3b];
  local_50 = -(float)param_1[0x3c];
  local_24 = local_50 * local_6c[3] - local_5c * local_54;
  local_20 = local_6c[1] * local_54 - local_78 * local_50;
  local_1c = local_78 * local_5c - local_6c[1] * local_6c[3];
  fVar3 = SQRT(local_6c[3] * local_6c[3] + local_54 * local_54 + local_78 * local_78);
  fVar4 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar3) {
    fVar4 = _DAT_36223384 / fVar3;
  }
  local_78 = local_78 * fVar4;
  local_54 = local_54 * fVar4;
  local_6c[3] = local_6c[3] * fVar4;
  fVar3 = SQRT(local_50 * local_50 + local_5c * local_5c + local_6c[1] * local_6c[1]);
  fVar4 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar3) {
    fVar4 = _DAT_36223384 / fVar3;
  }
  local_50 = local_50 * fVar4;
  local_5c = local_5c * fVar4;
  local_6c[1] = local_6c[1] * fVar4;
  fVar3 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
  local_6c[2] = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar3) {
    local_6c[2] = _DAT_36223384 / fVar3;
  }
  local_58 = local_20 * local_6c[2];
  local_4c = local_1c * local_6c[2];
  local_6c[2] = local_24 * local_6c[2];
  local_6c[0] = local_78;
  local_48 = -local_78;
  local_40 = -local_6c[2];
  local_3c = -local_6c[3];
  local_34 = -local_58;
  local_30 = -local_54;
  local_28 = -local_4c;
  local_44 = local_6c[1];
  local_38 = local_5c;
  local_2c = local_50;
  DecomposeRotationMatrixNoSnap((Vector<float,3> *)(param_1 + 0x3d),(Matrix<float,3,3> *)local_6c);
  DecomposeRotationMatrixNoSnap((Vector<float,3> *)(param_1 + 0x40),(Matrix<float,3,3> *)&local_48);
  local_6c[2] = local_30;
  local_6c[0] = local_48;
  local_6c[1] = local_3c;
  local_58 = local_2c;
  local_6c[3] = local_44;
  local_5c = local_38;
  local_4c = local_28;
  local_54 = local_40;
  local_50 = local_34;
  pfVar18 = local_6c;
  pfVar19 = (float *)(param_1 + 0x43);
  for (iVar15 = 9; iVar15 != 0; iVar15 = iVar15 + -1) {
    *pfVar19 = *pfVar18;
    pfVar18 = pfVar18 + 1;
    pfVar19 = pfVar19 + 1;
  }
  return;
}

