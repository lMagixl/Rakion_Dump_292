
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36127470(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int unaff_ESI;
  float fVar8;
  
  iVar1 = *(int *)(unaff_ESI + 0x28);
  fVar2 = (*(float *)(iVar1 + 0x5c) + *(float *)(iVar1 + 0x54)) * _DAT_3622376c;
  fVar3 = *(float *)(iVar1 + 0x58) * _DAT_36223384;
  fVar4 = (*(float *)(iVar1 + 0x68) + *(float *)(iVar1 + 0x60)) * _DAT_3622376c;
  fVar5 = *(float *)(iVar1 + 100) * _DAT_36223384;
  fVar6 = (*(float *)(iVar1 + 0x74) + *(float *)(iVar1 + 0x6c)) * _DAT_3622376c;
  fVar7 = *(float *)(iVar1 + 0x70) * _DAT_36223384;
  fVar8 = TR_TestRayCastHit();
  if (fVar8 < DAT_362fcc08) {
    DAT_362fcc08 = fVar8;
    DAT_362fcd2c = fVar2 - fVar3;
    DAT_362fcd30 = fVar4 - fVar5;
    DAT_362fcd34 = fVar6 - fVar7;
    DAT_362fcc0c = unaff_ESI;
    return;
  }
  return;
}

