
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360bd750(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  CModelData *pCVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *unaff_ESI;
  CModelObject *unaff_EDI;
  float local_8;
  
  if ((*(byte *)(unaff_ESI + 0x31) & 0x20) == 0) {
    pCVar5 = CModelObject::GetData(unaff_EDI);
    *unaff_ESI = (int)pCVar5;
    CAnimObject::GetFrame
              ((CAnimObject *)unaff_EDI,unaff_ESI + 3,unaff_ESI + 4,(float *)(unaff_ESI + 5));
    fVar9 = _DAT_3622376c;
    pfVar3 = (float *)(*(int *)(*unaff_ESI + 0x38) + unaff_ESI[3] * 0x18);
    pfVar4 = (float *)(*(int *)(*unaff_ESI + 0x38) + unaff_ESI[4] * 0x18);
    fVar8 = (float)unaff_ESI[5];
    pfVar1 = pfVar3 + 3;
    if (fVar8 == _DAT_3622376c) {
      local_8 = pfVar3[1];
      fVar6 = *pfVar3;
      fVar8 = pfVar3[2];
    }
    else {
      fVar6 = *pfVar4;
      if (fVar8 == _DAT_36223384) {
        local_8 = pfVar4[1];
        fVar8 = pfVar4[2];
      }
      else {
        fVar6 = *pfVar3 + (fVar6 - *pfVar3) * fVar8;
        local_8 = pfVar3[1] + (pfVar4[1] - pfVar3[1]) * fVar8;
        fVar8 = pfVar3[2] + (pfVar4[2] - pfVar3[2]) * fVar8;
      }
    }
    pfVar2 = (float *)(unaff_ESI + 0x2b);
    *pfVar2 = fVar6;
    unaff_ESI[0x2c] = (int)local_8;
    unaff_ESI[0x2d] = (int)fVar8;
    fVar8 = (float)unaff_ESI[5];
    if (fVar8 == fVar9) {
      fVar9 = *pfVar1;
      fVar6 = pfVar3[4];
      fVar7 = pfVar3[5];
    }
    else {
      fVar6 = pfVar4[4];
      fVar9 = pfVar4[3];
      fVar7 = pfVar4[5];
      if (fVar8 != _DAT_36223384) {
        fVar9 = *pfVar1 + (fVar9 - *pfVar1) * fVar8;
        fVar6 = pfVar3[4] + (fVar6 - pfVar3[4]) * fVar8;
        fVar7 = pfVar3[5] + (fVar7 - pfVar3[5]) * fVar8;
      }
    }
    pfVar1 = (float *)(unaff_ESI + 0x2e);
    *pfVar1 = fVar9;
    unaff_ESI[0x2f] = (int)fVar6;
    unaff_ESI[0x30] = (int)fVar7;
    *pfVar2 = *(float *)(unaff_EDI + 0x84) * *pfVar2;
    *pfVar1 = *(float *)(unaff_EDI + 0x84) * *pfVar1;
    unaff_ESI[0x2c] = (int)(*(float *)(unaff_EDI + 0x88) * (float)unaff_ESI[0x2c]);
    unaff_ESI[0x2f] = (int)((float)unaff_ESI[0x2f] * *(float *)(unaff_EDI + 0x88));
    unaff_ESI[0x2d] = (int)((float)unaff_ESI[0x2d] * *(float *)(unaff_EDI + 0x8c));
    unaff_ESI[0x30] = (int)((float)unaff_ESI[0x30] * *(float *)(unaff_EDI + 0x8c));
    unaff_ESI[0x31] = unaff_ESI[0x31] | 0x20;
  }
  return;
}

