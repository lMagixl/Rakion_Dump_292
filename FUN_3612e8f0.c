
undefined4 __thiscall FUN_3612e8f0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float local_3c [6];
  float local_24 [6];
  float local_c [3];
  
  fVar1 = *param_1 - *(float *)this;
  fVar2 = param_1[1] - *(float *)((int)this + 4);
  fVar3 = param_1[2] - *(float *)((int)this + 8);
  iVar13 = 3;
  local_3c[0] = fVar1 * *(float *)((int)this + 0xc) +
                fVar3 * *(float *)((int)this + 0x14) + fVar2 * *(float *)((int)this + 0x10);
  local_3c[1] = fVar1 * *(float *)((int)this + 0x18) +
                fVar3 * *(float *)((int)this + 0x20) + fVar2 * *(float *)((int)this + 0x1c);
  local_3c[2] = fVar1 * *(float *)((int)this + 0x24) +
                fVar3 * *(float *)((int)this + 0x2c) + fVar2 * *(float *)((int)this + 0x28);
  pfVar10 = (float *)((int)this + 0x10);
  pfVar12 = local_24 + 1;
  do {
    iVar13 = iVar13 + -1;
    pfVar12[-1] = pfVar10[-1] * param_1[3] + param_1[4] * *pfVar10 + param_1[5] * pfVar10[1];
    *pfVar12 = pfVar10[-1] * param_1[6] + param_1[7] * *pfVar10 + param_1[8] * pfVar10[1];
    pfVar12[1] = pfVar10[-1] * param_1[9] + param_1[10] * *pfVar10 + param_1[0xb] * pfVar10[1];
    pfVar10 = pfVar10 + 3;
    pfVar12 = pfVar12 + 3;
  } while (iVar13 != 0);
  pfVar10 = (float *)((int)this + 0x30);
  iVar13 = 0;
  pfVar12 = local_24 + 1;
  pfVar11 = pfVar10;
  do {
    if (ABS(*pfVar12) * param_1[0xd] +
        ABS(pfVar12[-1]) * param_1[0xc] + ABS(pfVar12[1]) * param_1[0xe] + *pfVar11 <
        ABS(local_3c[iVar13])) {
      return 0;
    }
    iVar13 = iVar13 + 1;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 3;
  } while (iVar13 < 3);
  iVar13 = 0;
  pfVar12 = param_1 + 0xc;
  do {
    if (ABS(local_24[iVar13]) * *pfVar10 +
        ABS(local_24[iVar13 + 6]) * *(float *)((int)this + 0x38) +
        ABS(local_24[iVar13 + 3]) * *(float *)((int)this + 0x34) + *pfVar12 <
        ABS(local_3c[0] * local_24[iVar13] +
            local_3c[2] * local_24[iVar13 + 6] + local_3c[1] * local_24[iVar13 + 3])) {
      return 0;
    }
    iVar13 = iVar13 + 1;
    pfVar12 = pfVar12 + 1;
  } while (iVar13 < 3);
  fVar1 = ABS(local_24[3]);
  fVar2 = ABS(local_c[0]);
  fVar3 = ABS(local_24[1]);
  fVar4 = ABS(local_24[2]);
  if (ABS(local_24[3] * local_3c[2] - local_c[0] * local_3c[1]) <=
      fVar2 * *(float *)((int)this + 0x34) + fVar1 * *(float *)((int)this + 0x38) +
      fVar3 * param_1[0xe] + fVar4 * param_1[0xd]) {
    pfVar12 = param_1 + 0xc;
    fVar5 = ABS(local_24[4]);
    fVar6 = ABS(local_c[1]);
    fVar7 = ABS(local_24[0]);
    if (ABS(local_24[4] * local_3c[2] - local_c[1] * local_3c[1]) <=
        fVar6 * *(float *)((int)this + 0x34) + fVar5 * *(float *)((int)this + 0x38) +
        fVar4 * *pfVar12 + fVar7 * param_1[0xe]) {
      fVar8 = ABS(local_24[5]);
      fVar9 = ABS(local_c[2]);
      if ((((ABS(local_24[5] * local_3c[2] - local_c[2] * local_3c[1]) <=
             fVar3 * *pfVar12 + fVar7 * param_1[0xd] +
             fVar9 * *(float *)((int)this + 0x34) + fVar8 * *(float *)((int)this + 0x38)) &&
           (ABS(local_c[0] * local_3c[0] - local_24[0] * local_3c[2]) <=
            fVar5 * param_1[0xe] + fVar8 * param_1[0xd] +
            fVar2 * *pfVar10 + fVar7 * *(float *)((int)this + 0x38))) &&
          (ABS(local_c[1] * local_3c[0] - local_24[1] * local_3c[2]) <=
           fVar1 * param_1[0xe] + fVar8 * *pfVar12 +
           fVar3 * *(float *)((int)this + 0x38) + fVar6 * *pfVar10)) &&
         (((ABS(local_c[2] * local_3c[0] - local_24[2] * local_3c[2]) <=
            fVar9 * *pfVar10 + fVar4 * *(float *)((int)this + 0x38) +
            fVar5 * *pfVar12 + fVar1 * param_1[0xd] &&
           (ABS(local_24[0] * local_3c[1] - local_24[3] * local_3c[0]) <=
            fVar7 * *(float *)((int)this + 0x34) + fVar1 * *pfVar10 +
            fVar9 * param_1[0xd] + fVar6 * param_1[0xe])) &&
          ((ABS(local_24[1] * local_3c[1] - local_24[4] * local_3c[0]) <=
            fVar3 * *(float *)((int)this + 0x34) + fVar5 * *pfVar10 +
            fVar2 * param_1[0xe] + fVar9 * *pfVar12 &&
           (ABS(local_24[2] * local_3c[1] - local_24[5] * local_3c[0]) <=
            fVar6 * *pfVar12 + fVar2 * param_1[0xd] +
            fVar4 * *(float *)((int)this + 0x34) + fVar8 * *pfVar10)))))) {
        return 1;
      }
    }
  }
  return 0;
}

