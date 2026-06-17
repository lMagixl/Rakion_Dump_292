
void __cdecl FUN_36166580(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int unaff_EDI;
  float *pfVar4;
  
  iVar2 = FUN_360918e0((undefined4 *)(unaff_EBX + 0x38));
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = *(int *)(DAT_362fe9d4 +
                       ((uint)*(byte *)(*(int *)(unaff_EBX + 0x3c) + iVar3) +
                       *(int *)(unaff_EDI + 8)) * 8 + 4);
      if (iVar1 == -1) {
        pfVar4 = (float *)(*(int *)(unaff_EDI + 4) * 0x8c + 0x3c + DAT_362fe994);
      }
      else {
        pfVar4 = (float *)(iVar1 * 0xe8 + 0x88 + *(int *)(param_1 + 0x10));
      }
      shaSetBoneMatrix(pfVar4,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

