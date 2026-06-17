
int __cdecl FUN_361631f0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  iVar6 = -1;
  iVar3 = FUN_3600c5c0((undefined4 *)(param_1 + 0x14));
  fVar1 = 3e+38;
  iVar4 = 0;
  if (3 < iVar3) {
    pfVar5 = (float *)(*(int *)(param_1 + 0x18) + 0x30);
    do {
      fVar2 = ska_fLODMul * pfVar5[-0xc] + ska_fLODAdd;
      if ((param_2 < fVar2) && (fVar2 < fVar1)) {
        iVar6 = iVar4;
        fVar1 = fVar2;
      }
      fVar2 = ska_fLODMul * pfVar5[-6] + ska_fLODAdd;
      if ((param_2 < fVar2) && (fVar2 < fVar1)) {
        iVar6 = iVar4 + 1;
        fVar1 = fVar2;
      }
      fVar2 = ska_fLODMul * *pfVar5 + ska_fLODAdd;
      if ((param_2 < fVar2) && (fVar2 < fVar1)) {
        iVar6 = iVar4 + 2;
        fVar1 = fVar2;
      }
      fVar2 = ska_fLODMul * pfVar5[6] + ska_fLODAdd;
      if ((param_2 < fVar2) && (fVar2 < fVar1)) {
        iVar6 = iVar4 + 3;
        fVar1 = fVar2;
      }
      iVar4 = iVar4 + 4;
      pfVar5 = pfVar5 + 0x18;
    } while (iVar4 < iVar3 + -3);
  }
  if (iVar4 < iVar3) {
    pfVar5 = (float *)(*(int *)(param_1 + 0x18) + iVar4 * 0x18);
    do {
      fVar2 = ska_fLODMul * *pfVar5 + ska_fLODAdd;
      if ((param_2 < fVar2) && (fVar2 < fVar1)) {
        iVar6 = iVar4;
        fVar1 = fVar2;
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 6;
    } while (iVar4 < iVar3);
  }
  return iVar6;
}

