
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __fastcall FUN_361234b0(void *param_1)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int iVar10;
  undefined3 extraout_var;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  *(undefined4 *)((int)param_1 + 0xfa4) = 1;
  *(int *)((int)param_1 + 0xfa8) = (int)param_1 + 0xe6c;
  iVar10 = CListHead::IsEmpty((CListHead *)&DAT_362fcac4);
  if ((iVar10 == 0) && (DAT_362fcac4 != DAT_362fcacc)) {
    iVar10 = FUN_3611f7f0(0x362fcac4);
    FUN_36121fa0(&DAT_362fcac4);
    FUN_36121f50(&DAT_362fcac4,iVar10);
  }
  piVar2 = DAT_362fcb3c;
  DAT_362fcad8 = 0;
  if ((DAT_362fcb3c[2] == (int)param_1 + 0xe6c) &&
     (iVar10 = FUN_3611f5c0(0x362fcb38), piVar2[iVar10 * 4 + -2] == (int)param_1 + 0xe8c)) {
    iVar10 = FUN_3611f5c0(0x362fcb38);
    piVar8 = piVar2;
    while (piVar7 = piVar8 + 4, piVar7 < piVar2 + iVar10 * 4 + -4) {
      piVar3 = (int *)piVar8[6];
      iVar4 = *piVar7;
      *piVar3 = iVar4;
      *(int *)((int)param_1 + 0xe64) = iVar4;
      *(float *)(DAT_362bef74 + 0x84) = *(float *)(DAT_362bef74 + 0x84) + _DAT_36223384;
      pfVar5 = (float *)piVar3[2];
      piVar8 = piVar7;
      if ((pfVar5 == (float *)0x0) || (pfVar5[0x3b] == 0.0)) {
        *piVar3 = 0x7fffffff;
      }
      else if (piVar3[5] == 0) {
        pfVar1 = pfVar5 + 0x3e;
        *pfVar1 = (float)((int)*pfVar1 + -1);
        if (*pfVar1 == 0.0) {
          if (*(int *)((int)pfVar5[0x3d] + 4) == 0) {
            CListNode::Remove((CListNode *)(pfVar5 + 0x3c));
            if (((pfVar5[0x3a] != 0.0) && ((*(byte *)((int)pfVar5[0x3a] + 200) & 0x40) != 0)) &&
               ((*(char *)((int)param_1 + 0xd5c) == '\0' ||
                (*(char *)((int)param_1 + 0xd5c) != *(char *)(pfVar5 + 0x40))))) {
              return pfVar5;
            }
            FUN_36123350(param_1,(int)pfVar5,(int *)pfVar5[0x3f],piVar3);
            *(int **)(*(int *)((int)param_1 + 0xfd4) + 0xc) = piVar3;
          }
          else {
            CListNode::Remove((CListNode *)(pfVar5 + 0x3c));
          }
        }
      }
      else {
        bVar9 = FUN_361204e0(param_1,pfVar5);
        if (CONCAT31(extraout_var,bVar9) != 0) {
          fVar6 = pfVar5[0x3c];
          if (((*(int *)((int)fVar6 + -8) == 0) ||
              ((*(byte *)(*(int *)((int)fVar6 + -8) + 200) & 0x40) == 0)) ||
             ((*(char *)((int)param_1 + 0xd5c) != '\0' &&
              (*(char *)((int)param_1 + 0xd5c) == *(char *)((int)fVar6 + 0x10))))) {
            FUN_36123350(param_1,(int)fVar6 + -0xf0,*(int **)((int)fVar6 + 0xc),piVar3);
            pfVar5[0x3f] = (float)piVar3;
          }
          else {
            uVar13 = **(int **)((int)fVar6 + 0xc) + 0xffffU >> 0x10;
            uVar12 = *(int *)((int)param_1 + 0xe64) + 0xffffU >> 0x10;
            if (uVar12 != uVar13 && -1 < (int)(uVar12 - uVar13)) {
              return (float *)((int)fVar6 + -0xf0);
            }
            pfVar5[0x3f] = (float)piVar3;
          }
        }
      }
    }
    iVar4 = *(int *)((int)param_1 + 0xfd4);
    iVar14 = iVar4 + -0xf0;
    iVar10 = (int)param_1 + 0xeac;
    if (iVar10 != iVar14) {
      iVar11 = FUN_36113cb0(iVar14);
      if ((iVar11 == 0) ||
         ((*(char *)((int)param_1 + 0xd5c) != '\0' &&
          (*(char *)((int)param_1 + 0xd5c) == *(char *)(iVar4 + 0x10))))) {
        FUN_36123350(param_1,iVar14,*(int **)(iVar4 + 0xc),(int *)((int)param_1 + 0xe8c));
      }
      do {
        piVar2 = (int *)(iVar14 + 0xf8);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          CListNode::Remove((CListNode *)(iVar14 + 0xf0));
        }
        iVar14 = *(int *)((int)param_1 + 0xfd4) + -0xf0;
      } while (iVar10 != iVar14);
      *(int *)((int)param_1 + 0xfa8) = (int)param_1 + 0xe8c;
    }
    FUN_36123350(param_1,iVar10,*(int **)((int)param_1 + 0xfa8),(int *)((int)param_1 + 0xe8c));
  }
  return (float *)0x0;
}

