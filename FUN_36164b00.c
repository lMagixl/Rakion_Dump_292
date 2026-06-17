
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36164b00(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int *in_EAX;
  float *pfVar15;
  int iVar16;
  int iVar17;
  undefined4 unaff_EDI;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar17 = in_EAX[0x31];
  iVar8 = in_EAX[0x39];
  fVar1 = *(float *)(*in_EAX + 0x5c);
  iVar9 = in_EAX[0x35];
  fVar12 = ((float)in_EAX[0x30] + (float)in_EAX[0x2f]) * _DAT_3622376c;
  fVar2 = (float)in_EAX[0x2e];
  fVar3 = (float)in_EAX[0x31];
  fVar11 = ((float)in_EAX[0x34] + (float)in_EAX[0x33]) * _DAT_3622376c;
  fVar4 = (float)in_EAX[0x32];
  fVar5 = (float)in_EAX[0x35];
  fVar10 = ((float)in_EAX[0x38] + (float)in_EAX[0x37]) * _DAT_3622376c;
  fVar6 = (float)in_EAX[0x36];
  fVar7 = (float)in_EAX[0x39];
  fVar13 = *(float *)(*in_EAX + 0x5c) * _DAT_362253e8;
  fVar14 = -fVar13;
  local_30 = fVar13 * (float)in_EAX[0x2e] +
             fVar14 * (float)in_EAX[0x2f] + fVar14 * (float)in_EAX[0x30] + (float)in_EAX[0x31];
  local_2c = fVar13 * (float)in_EAX[0x32] +
             fVar14 * (float)in_EAX[0x33] + fVar14 * (float)in_EAX[0x34] + (float)in_EAX[0x35];
  local_28 = fVar13 * (float)in_EAX[0x36] +
             fVar14 * (float)in_EAX[0x37] + fVar14 * (float)in_EAX[0x38] + (float)in_EAX[0x39];
  local_24 = fVar13 * (float)in_EAX[0x2e] +
             fVar13 * (float)in_EAX[0x2f] + fVar14 * (float)in_EAX[0x30] + (float)in_EAX[0x31];
  local_20 = fVar13 * (float)in_EAX[0x32] +
             fVar13 * (float)in_EAX[0x33] + fVar14 * (float)in_EAX[0x34] + (float)in_EAX[0x35];
  local_1c = fVar13 * (float)in_EAX[0x36] +
             fVar13 * (float)in_EAX[0x37] + fVar14 * (float)in_EAX[0x38] + (float)in_EAX[0x39];
  local_18 = fVar13 * (float)in_EAX[0x2e] +
             fVar13 * (float)in_EAX[0x2f] + fVar13 * (float)in_EAX[0x30] + (float)in_EAX[0x31];
  pfVar15 = &local_30;
  iVar16 = 4;
  local_14 = fVar13 * (float)in_EAX[0x32] +
             fVar13 * (float)in_EAX[0x33] + fVar13 * (float)in_EAX[0x34] + (float)in_EAX[0x35];
  local_10 = fVar13 * (float)in_EAX[0x36] +
             fVar13 * (float)in_EAX[0x37] + fVar13 * (float)in_EAX[0x38] + (float)in_EAX[0x39];
  local_c = fVar13 * (float)in_EAX[0x2e] +
            fVar13 * (float)in_EAX[0x30] + fVar14 * (float)in_EAX[0x2f] + (float)in_EAX[0x31];
  local_8 = fVar13 * (float)in_EAX[0x34] +
            fVar13 * (float)in_EAX[0x32] + fVar14 * (float)in_EAX[0x33] + (float)in_EAX[0x35];
  local_4 = fVar13 * (float)in_EAX[0x38] +
            fVar13 * (float)in_EAX[0x36] + fVar14 * (float)in_EAX[0x37] + (float)in_EAX[0x39];
  do {
    CDrawPort::DrawLine3D(DAT_362fe0d0,iVar17,iVar9,iVar8,*pfVar15,pfVar15[1],pfVar15[2],unaff_EDI);
    CDrawPort::DrawLine3D
              (DAT_362fe0d0,fVar1 * fVar2 + fVar12 + fVar3,fVar1 * fVar4 + fVar11 + fVar5,
               fVar1 * fVar6 + fVar10 + fVar7,*pfVar15,pfVar15[1],pfVar15[2],unaff_EDI);
    pfVar15 = pfVar15 + 3;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  iVar17 = 3;
  pfVar15 = &local_30;
  do {
    CDrawPort::DrawLine3D
              (DAT_362fe0d0,*pfVar15,pfVar15[1],pfVar15[2],pfVar15[3],pfVar15[4],pfVar15[5],
               unaff_EDI);
    iVar17 = iVar17 + -1;
    pfVar15 = pfVar15 + 3;
  } while (iVar17 != 0);
  CDrawPort::DrawLine3D(DAT_362fe0d0,local_30,local_2c,local_28,local_c,local_8,local_4,unaff_EDI);
  return;
}

