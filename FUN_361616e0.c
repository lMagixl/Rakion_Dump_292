
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361616e0(void)

{
  float fVar1;
  float fVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  
  iVar4 = in_EAX[1];
  if (0 < iVar4) {
    iVar3 = *in_EAX * 0xc;
    do {
      fVar1 = *(float *)(iVar3 + 4 + DAT_362fdfd8);
      fVar2 = *(float *)(iVar3 + 8 + DAT_362fdfd8);
      CDrawPort::DrawLine3D
                (DAT_362fdfe8,*(float *)(iVar3 + DAT_362fdfd8),fVar1,fVar2,
                 *(float *)(iVar3 + DAT_362fdfd8) + *(float *)(iVar3 + DAT_362fdfd4) * _DAT_362287a8
                 ,fVar1 + *(float *)(iVar3 + 4 + DAT_362fdfd4) * _DAT_362287a8,
                 fVar2 + *(float *)(iVar3 + 8 + DAT_362fdfd4) * _DAT_362287a8,0xffffffff);
      iVar3 = iVar3 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

