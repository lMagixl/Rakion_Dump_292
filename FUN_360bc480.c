
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_360bc480(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  pfVar4 = (float *)&DAT_362a5304;
  iVar5 = 2;
  fVar2 = _DAT_3622376c;
  do {
    fVar3 = param_1[1] * *pfVar4 + pfVar4[1] * param_1[2] + pfVar4[-1] * *param_1;
    if (fVar2 < fVar3) {
      iVar6 = iVar5 + -2;
      fVar2 = fVar3;
    }
    fVar3 = pfVar4[3] * param_1[1] + pfVar4[4] * param_1[2] + pfVar4[2] * *param_1;
    if (fVar2 < fVar3) {
      iVar6 = iVar5 + -1;
      fVar2 = fVar3;
    }
    fVar3 = pfVar4[6] * param_1[1] + pfVar4[7] * param_1[2] + pfVar4[5] * *param_1;
    if (fVar2 < fVar3) {
      iVar6 = iVar5;
      fVar2 = fVar3;
    }
    fVar3 = pfVar4[9] * param_1[1] + pfVar4[10] * param_1[2] + pfVar4[8] * *param_1;
    if (fVar2 < fVar3) {
      iVar6 = iVar5 + 1;
      fVar2 = fVar3;
    }
    fVar3 = pfVar4[0xc] * param_1[1] + pfVar4[0xd] * param_1[2] + pfVar4[0xb] * *param_1;
    if (fVar2 < fVar3) {
      iVar6 = iVar5 + 2;
      fVar2 = fVar3;
    }
    fVar3 = pfVar4[0xf] * param_1[1] + pfVar4[0x10] * param_1[2] + pfVar4[0xe] * *param_1;
    if (fVar2 < fVar3) {
      iVar6 = iVar5 + 3;
      fVar2 = fVar3;
    }
    fVar3 = pfVar4[0x12] * param_1[1] + pfVar4[0x13] * param_1[2] + pfVar4[0x11] * *param_1;
    if (fVar2 < fVar3) {
      iVar6 = iVar5 + 4;
      fVar2 = fVar3;
    }
    fVar3 = pfVar4[0x15] * param_1[1] + pfVar4[0x16] * param_1[2] + pfVar4[0x14] * *param_1;
    if (fVar2 < fVar3) {
      iVar6 = iVar5 + 5;
      fVar2 = fVar3;
    }
    iVar1 = iVar5 + 6;
    pfVar4 = pfVar4 + 0x18;
    iVar5 = iVar5 + 8;
  } while (iVar1 < 0x100);
  return iVar6;
}

