
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360bcfd0(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int *unaff_EBX;
  float *pfVar14;
  float *pfVar15;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar12 = DAT_362cabb8;
  pfVar2 = (float *)(DAT_362cabb8 + 0xf8);
  pfVar1 = (float *)(DAT_362cabb8 + 0x40);
  pfVar15 = (float *)(unaff_EBX + 0x1c);
  if ((*(uint *)(*unaff_EBX + 0x1260) & 8) == 0) {
    if ((*(uint *)(*unaff_EBX + 0x1260) & 1) != 0) {
      fVar3 = _DAT_36223384 - -(float)unaff_EBX[0x15] * -(float)unaff_EBX[0x15];
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      fVar6 = _DAT_3622376c;
      fVar4 = _DAT_36223384;
      if (_DAT_362253e4 < SQRT(fVar3)) {
        fVar3 = _DAT_36223384 / SQRT(fVar3);
        fVar6 = fVar3 * (float)unaff_EBX[0x13];
        fVar4 = fVar3 * (float)unaff_EBX[0x14];
      }
      *pfVar15 = fVar4;
      unaff_EBX[0x1e] = 0;
      unaff_EBX[0x21] = 0;
      unaff_EBX[0x1d] = (int)-fVar6;
      unaff_EBX[0x22] = 0;
      unaff_EBX[0x23] = 0;
      unaff_EBX[0x1f] = (int)fVar6;
      unaff_EBX[0x24] = 0x3f800000;
      unaff_EBX[0x20] = (int)fVar4;
      goto LAB_360bd3f7;
    }
    local_24[0] = (float)unaff_EBX[0x16] * *(float *)(DAT_362cabb8 + 0x100) +
                  *(float *)(DAT_362cabb8 + 0xfc) * (float)unaff_EBX[0x13] +
                  (float)unaff_EBX[0x10] * *pfVar2;
    local_24[1] = (float)unaff_EBX[0x11] * *pfVar2 +
                  *(float *)(DAT_362cabb8 + 0xfc) * (float)unaff_EBX[0x14] +
                  (float)unaff_EBX[0x17] * *(float *)(DAT_362cabb8 + 0x100);
    local_24[2] = (float)unaff_EBX[0x18] * *(float *)(DAT_362cabb8 + 0x100) +
                  *pfVar2 * (float)unaff_EBX[0x12] +
                  (float)unaff_EBX[0x15] * *(float *)(DAT_362cabb8 + 0xfc);
    local_24[3] = (float)unaff_EBX[0x16] * *(float *)(DAT_362cabb8 + 0x10c) +
                  *(float *)(DAT_362cabb8 + 0x104) * (float)unaff_EBX[0x10] +
                  *(float *)(DAT_362cabb8 + 0x108) * (float)unaff_EBX[0x13];
    local_14 = (float)unaff_EBX[0x11] * *(float *)(DAT_362cabb8 + 0x104) +
               (float)unaff_EBX[0x14] * *(float *)(DAT_362cabb8 + 0x108) +
               (float)unaff_EBX[0x17] * *(float *)(DAT_362cabb8 + 0x10c);
    local_10 = (float)unaff_EBX[0x15] * *(float *)(DAT_362cabb8 + 0x108) +
               (float)unaff_EBX[0x18] * *(float *)(DAT_362cabb8 + 0x10c) +
               *(float *)(DAT_362cabb8 + 0x104) * (float)unaff_EBX[0x12];
    local_c = (float)unaff_EBX[0x16] * *(float *)(DAT_362cabb8 + 0x118) +
              *(float *)(DAT_362cabb8 + 0x114) * (float)unaff_EBX[0x13] +
              *(float *)(DAT_362cabb8 + 0x110) * (float)unaff_EBX[0x10];
    local_8 = *(float *)(DAT_362cabb8 + 0x114) * (float)unaff_EBX[0x14] +
              *(float *)(DAT_362cabb8 + 0x110) * (float)unaff_EBX[0x11] +
              (float)unaff_EBX[0x17] * *(float *)(DAT_362cabb8 + 0x118);
    fVar3 = *(float *)(DAT_362cabb8 + 0x110) * (float)unaff_EBX[0x12] +
            (float)unaff_EBX[0x15] * *(float *)(DAT_362cabb8 + 0x114);
    fVar6 = (float)unaff_EBX[0x18] * *(float *)(DAT_362cabb8 + 0x118);
  }
  else {
    fVar3 = (float)unaff_EBX[0x11];
    fVar4 = (float)unaff_EBX[0x14];
    fVar5 = (float)unaff_EBX[0x17];
    fVar7 = -*(float *)(DAT_362cabb8 + 0x114) * fVar5 - -*(float *)(DAT_362cabb8 + 0x118) * fVar4;
    fVar8 = -*(float *)(DAT_362cabb8 + 0x118) * fVar3 - -*(float *)(DAT_362cabb8 + 0x110) * fVar5;
    fVar9 = -*(float *)(DAT_362cabb8 + 0x110) * fVar4 - -*(float *)(DAT_362cabb8 + 0x114) * fVar3;
    fVar6 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar10 = _DAT_3622376c;
    if ((float)_DAT_36223438 <= fVar6) {
      fVar10 = _DAT_36223384 / fVar6;
    }
    fVar9 = fVar9 * fVar10;
    fVar8 = fVar8 * fVar10;
    fVar7 = fVar7 * fVar10;
    fVar6 = fVar9 * fVar4 - fVar8 * fVar5;
    fVar10 = fVar7 * fVar5 - fVar9 * fVar3;
    unaff_EBX[0x1e] = (int)fVar6;
    fVar11 = fVar8 * fVar3 - fVar7 * fVar4;
    *pfVar15 = fVar7;
    unaff_EBX[0x1d] = (int)fVar3;
    unaff_EBX[0x21] = (int)fVar10;
    unaff_EBX[0x24] = (int)fVar11;
    unaff_EBX[0x1f] = (int)fVar8;
    unaff_EBX[0x20] = (int)fVar4;
    unaff_EBX[0x22] = (int)fVar9;
    unaff_EBX[0x23] = (int)fVar5;
    local_24[0] = fVar7 * *pfVar2 +
                  fVar9 * *(float *)(iVar12 + 0x100) + fVar8 * *(float *)(iVar12 + 0xfc);
    local_24[1] = fVar3 * *pfVar2 +
                  fVar5 * *(float *)(iVar12 + 0x100) + fVar4 * *(float *)(iVar12 + 0xfc);
    local_24[2] = fVar6 * *pfVar2 +
                  fVar11 * *(float *)(iVar12 + 0x100) + fVar10 * *(float *)(iVar12 + 0xfc);
    local_24[3] = fVar8 * *(float *)(iVar12 + 0x108) +
                  fVar9 * *(float *)(iVar12 + 0x10c) + fVar7 * *(float *)(iVar12 + 0x104);
    local_14 = fVar4 * *(float *)(iVar12 + 0x108) +
               fVar5 * *(float *)(iVar12 + 0x10c) + fVar3 * *(float *)(iVar12 + 0x104);
    local_10 = fVar10 * *(float *)(iVar12 + 0x108) +
               fVar11 * *(float *)(iVar12 + 0x10c) + fVar6 * *(float *)(iVar12 + 0x104);
    local_c = fVar7 * *(float *)(iVar12 + 0x110) +
              fVar9 * *(float *)(iVar12 + 0x118) + fVar8 * *(float *)(iVar12 + 0x114);
    local_8 = fVar3 * *(float *)(iVar12 + 0x110) +
              fVar5 * *(float *)(iVar12 + 0x118) + fVar4 * *(float *)(iVar12 + 0x114);
    fVar3 = fVar11 * *(float *)(iVar12 + 0x118) + fVar10 * *(float *)(iVar12 + 0x114);
    fVar6 = fVar6 * *(float *)(iVar12 + 0x110);
  }
  local_4 = fVar6 + fVar3;
  pfVar14 = local_24;
  for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
    *pfVar15 = *pfVar14;
    pfVar14 = pfVar14 + 1;
    pfVar15 = pfVar15 + 1;
  }
LAB_360bd3f7:
  pfVar15 = (float *)(unaff_EBX + 0x19);
  fVar3 = *(float *)(iVar12 + 0x44);
  fVar6 = *(float *)(iVar12 + 0x48);
  *pfVar15 = (float)unaff_EBX[0xd] - *pfVar1;
  unaff_EBX[0x1a] = (int)((float)unaff_EBX[0xe] - fVar3);
  unaff_EBX[0x1b] = (int)((float)unaff_EBX[0xf] - fVar6);
  fVar3 = *(float *)(iVar12 + 0x10c);
  fVar6 = *(float *)(iVar12 + 0x108);
  fVar4 = *(float *)(iVar12 + 0x104);
  fVar5 = *pfVar15;
  fVar7 = *(float *)(iVar12 + 0x118);
  fVar8 = *(float *)(iVar12 + 0x114);
  fVar9 = (float)unaff_EBX[0x1a];
  fVar10 = *(float *)(iVar12 + 0x110);
  fVar11 = *pfVar15;
  *pfVar15 = *pfVar15 * *pfVar2 +
             *(float *)(iVar12 + 0xfc) * (float)unaff_EBX[0x1a] +
             *(float *)(iVar12 + 0x100) * (float)unaff_EBX[0x1b];
  unaff_EBX[0x1a] =
       (int)(fVar4 * fVar5 + fVar6 * (float)unaff_EBX[0x1a] + fVar3 * (float)unaff_EBX[0x1b]);
  unaff_EBX[0x1b] = (int)(fVar10 * fVar11 + fVar8 * fVar9 + fVar7 * (float)unaff_EBX[0x1b]);
  return;
}

