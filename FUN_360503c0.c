
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_360503c0(int param_1)

{
  void *this;
  double *pdVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  
  this = (void *)(param_1 + 0x50);
  iVar9 = 0;
  iVar3 = FUN_3604a760((int)this);
  if (0 < iVar3) {
    do {
      iVar4 = FUN_3604a750(this,iVar9);
      iVar8 = 0;
      iVar5 = FUN_3604aa50(iVar4 + 0x4c);
      if (0 < iVar5) {
        fVar2 = _DAT_362a29a0 * (float)_DAT_362280b0;
        do {
          piVar6 = (int *)FUN_3604a700((void *)(iVar4 + 0x4c),iVar8);
          if (piVar6[1] == 0) {
            pdVar10 = *(double **)(*piVar6 + 0x10);
          }
          else {
            pdVar10 = *(double **)(*piVar6 + 0x14);
          }
          iVar7 = FUN_3604a750(this,iVar9);
          pdVar1 = *(double **)(iVar7 + 0x48);
          if ((double)fVar2 <
              ABS((*pdVar1 * *pdVar10 + pdVar1[1] * pdVar10[1] + pdVar1[2] * pdVar10[2]) - pdVar1[3]
                 )) {
            return 0;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar5);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
  return 1;
}

