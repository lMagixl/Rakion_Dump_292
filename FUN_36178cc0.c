
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36178cc0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  int *piVar6;
  int local_30 [4];
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_4;
  
  piVar1 = *(int **)(unaff_EBX + 0x2c);
  if (*piVar1 != 0) {
    iVar5 = 0;
    for (iVar4 = piVar1[0x15]; 2 < iVar4; iVar4 = iVar4 >> 1) {
      iVar5 = iVar5 + 1;
    }
    piVar1[0x16] = iVar5;
    piVar6 = local_30;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    piVar1[0x19] = local_30[1];
    fVar2 = _DAT_36223384 / (float)(piVar1[6] + -1);
    piVar1[0x1b] = local_30[3];
    piVar1[0x1c] = local_20;
    piVar1[0x1a] = local_30[2];
    piVar1[0x1f] = local_14;
    piVar1[0x20] = local_10;
    piVar1[0x1e] = local_18;
    piVar1[0x23] = local_4;
    piVar1[0x21] = local_c;
    piVar1[0x22] = 0x3f800000;
    fVar3 = _DAT_36223384 / (float)(piVar1[7] + -1);
    piVar1[0x18] = (int)fVar2;
    piVar1[0x1d] = (int)fVar3;
    piVar1[0x25] = local_30[1];
    piVar1[0x26] = local_30[2];
    piVar1[0x24] = (int)fVar2;
    piVar1[0x27] = local_30[3];
    piVar1[0x29] = (int)fVar3;
    piVar1[0x28] = local_20;
    piVar1[0x2a] = local_18;
    piVar1[0x2b] = local_14;
    piVar1[0x2c] = local_10;
    piVar1[0x2d] = local_c;
    piVar1[0x2f] = local_4;
    piVar1[0x2e] = 0x3f800000;
    piVar1[0x30] = (int)fVar2;
    piVar1[0x31] = local_30[1];
    piVar1[0x35] = (int)fVar3;
    piVar1[0x32] = local_30[2];
    piVar1[0x33] = local_30[3];
    piVar1[0x34] = local_20;
    piVar1[0x36] = local_18;
    piVar1[0x37] = local_14;
    piVar1[0x38] = local_10;
    piVar1[0x39] = local_c;
    piVar1[0x3a] = 0x3f800000;
    piVar1[0x3b] = local_4;
    FUN_36177bf0((int)piVar1);
    FUN_361768e0(unaff_EBX);
    FUN_36178ca0();
    *(uint *)(unaff_EBX + 8) = *(uint *)(unaff_EBX + 8) | 0x200;
  }
  return;
}

