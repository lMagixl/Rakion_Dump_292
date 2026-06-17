
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36134950(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  CRelationDst *pCVar6;
  int *piVar7;
  float *this;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_30 = 0;
  iVar5 = FUN_360de560(0x362fd5d8);
  if (0 < iVar5) {
    do {
      iVar5 = *(int *)(DAT_362fd5dc + local_30 * 4);
      local_20 = 0;
      local_24 = iVar5;
      if (0 < *(int *)(iVar5 + 0x18)) {
        local_38 = 0;
        do {
          piVar7 = (int *)(*(int *)(iVar5 + 0x1c) + local_38);
          if ((*(uint *)(*(int *)(iVar5 + 0x1c) + 200 + local_38) & 0x400000) == 0) {
            iVar2 = *piVar7;
            this = (float *)(iVar2 + 4);
            fVar4 = (_DAT_362fd5b0 * *this +
                    _DAT_362fd5b8 * *(float *)(iVar2 + 0xc) + _DAT_362fd5b4 * *(float *)(iVar2 + 8))
                    - *(float *)(iVar2 + 0x10);
            if (((((_DAT_3622376c <= fVar4) && (fVar4 <= _DAT_362fd5a4)) &&
                 (FUN_3605fbc0(this,&local_18,(float *)&DAT_362fd5b0),
                 (float)piVar7[0x65] - _DAT_362280f0 <= local_18)) &&
                ((local_18 <= (float)piVar7[0x68] + _DAT_362280f0 &&
                 ((float)piVar7[0x66] - _DAT_362280f0 <= local_14)))) &&
               ((local_14 <= (float)piVar7[0x69] + _DAT_362280f0 &&
                (((float)piVar7[0x67] - _DAT_362280f0 <= local_10 &&
                 (local_10 <= (float)piVar7[0x6a] + _DAT_362280f0)))))) {
              FUN_360cd910(this,&local_2c,&local_28);
              local_c = *(undefined4 *)(&DAT_362fd5ac + local_2c * 4);
              local_34 = piVar7[1];
              local_8 = *(undefined4 *)(&DAT_362fd5ac + local_28 * 4);
              local_4 = 0;
              if (0 < local_34) {
                piVar8 = (int *)piVar7[2];
                iVar2 = local_28 * 4;
                iVar1 = local_2c * 4 + -4;
                do {
                  iVar5 = *(int *)*piVar8;
                  iVar3 = ((int *)*piVar8)[1];
                  CIntersector::AddEdge
                            ((CIntersector *)&local_c,*(float *)(iVar1 + iVar5 + 4),
                             *(float *)(iVar2 + iVar5),*(float *)(iVar1 + iVar3 + 4),
                             *(float *)(iVar2 + iVar3));
                  piVar8 = piVar8 + 2;
                  local_34 = local_34 + -1;
                  iVar5 = local_24;
                } while (local_34 != 0);
              }
              uVar9 = local_4 & 0x80000001;
              bVar10 = uVar9 == 0;
              if ((int)uVar9 < 0) {
                bVar10 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
              }
              if (!bVar10) {
                DAT_362fd5bc = local_18;
                DAT_362fd5c0 = local_14;
                DAT_362fd5c4 = local_10;
                _DAT_362fd5a4 = fVar4;
                DAT_362fd5a8 = piVar7;
              }
            }
          }
          local_20 = local_20 + 1;
          local_38 = local_38 + 0x1d0;
        } while (local_20 < *(int *)(iVar5 + 0x18));
      }
      for (piVar7 = *(int **)(iVar5 + 0x9c); *piVar7 != 0; piVar7 = (int *)*piVar7) {
        pCVar6 = CRelationLnk::GetDst((CRelationLnk *)(piVar7 + -2));
        if (*(int *)(pCVar6 + -0xa8) == 4) {
          FUN_361348d0(*(CBrush3D **)(pCVar6 + -0x30));
        }
      }
      local_30 = local_30 + 1;
      iVar5 = FUN_360de560(0x362fd5d8);
    } while (local_30 < iVar5);
  }
  return;
}

