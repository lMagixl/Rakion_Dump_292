
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::TestBrushSector(class CBrushSector *) */

void __thiscall CCastRay::TestBrushSector(CCastRay *this,CBrushSector *param_1)

{
  CCastRay *pCVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  CRelationDst *pCVar11;
  uint uVar12;
  int *piVar13;
  bool bVar14;
  int local_8c;
  int local_48;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [4];
  uint local_1c;
  float local_18;
  float local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xdd5b0  3803  ?TestBrushSector@CCastRay@@QAEXPAVCBrushSector@@@Z */
  puStack_8 = &LAB_3621532a;
  local_c = ExceptionList;
  if ((*(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x14) + 0x668) + 0x10) & 0x200000) ==
      0) {
    local_2c[0] = *(float *)(this + 0x98) + *(float *)(this + 0x94);
    local_48 = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        piVar2 = (int *)(local_48 * 0x1d0 + *(int *)(param_1 + 0x1c));
        if (piVar2 != *(int **)(this + 8)) {
          local_1c = piVar2[0x32];
          if (*(int *)(this + 0x28) == 0) {
            if ((local_1c & 0x400000) != 0) {
              if ((local_1c & 0x8120) == 0) {
                iVar10 = *(int *)(this + 100);
              }
              else {
                iVar10 = *(int *)(this + 0x68);
              }
              if (iVar10 == 0) goto LAB_360dd9f0;
            }
            if (((local_1c & 0x200000) != 0) && (DAT_362a4170 == 0)) goto LAB_360dd9f0;
          }
          iVar10 = *piVar2;
          pCVar1 = this + 0x2c;
          local_30 = (*(float *)pCVar1 * *(float *)(iVar10 + 4) +
                     *(float *)(this + 0x30) * *(float *)(iVar10 + 8) +
                     *(float *)(this + 0x34) * *(float *)(iVar10 + 0xc)) - *(float *)(iVar10 + 0x10)
          ;
          fVar6 = (*(float *)(this + 0x38) * *(float *)(iVar10 + 4) +
                  *(float *)(this + 0x3c) * *(float *)(iVar10 + 8) +
                  *(float *)(this + 0x40) * *(float *)(iVar10 + 0xc)) - *(float *)(iVar10 + 0x10);
          if ((_DAT_3622376c <= local_30) && (fVar6 < local_30)) {
            local_30 = local_30 / (local_30 - fVar6);
            local_38 = (*(float *)(this + 0x38) - *(float *)pCVar1) * local_30;
            local_34 = (*(float *)(this + 0x3c) - *(float *)(this + 0x30)) * local_30;
            local_30 = (*(float *)(this + 0x40) - *(float *)(this + 0x34)) * local_30;
            fVar6 = *(float *)pCVar1 + local_38;
            fVar7 = *(float *)(this + 0x30) + local_34;
            fVar8 = *(float *)(this + 0x34) + local_30;
            local_2c[1] = fVar6;
            local_2c[2] = fVar7;
            local_2c[3] = fVar8;
            iVar10 = FUN_360de4a0(piVar2 + 0x65,local_2c + 1,0.1);
            if ((iVar10 != 0) &&
               (fVar6 = fVar6 - *(float *)pCVar1, fVar7 = fVar7 - *(float *)(this + 0x30),
               fVar8 = fVar8 - *(float *)(this + 0x34),
               fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8), fVar6 <= local_2c[0])) {
              FUN_360cd910((float *)(*piVar2 + 4),&local_40,&local_3c);
              local_8c = piVar2[1];
              local_18 = local_2c[local_40];
              local_14 = local_2c[local_3c];
              local_10 = 0;
              if (0 < local_8c) {
                iVar10 = local_40 * 4 + -4;
                piVar13 = (int *)piVar2[2];
                iVar3 = local_3c * 4 + -4;
                do {
                  iVar4 = *(int *)*piVar13;
                  iVar5 = ((int *)*piVar13)[1];
                  CIntersector::AddEdge
                            ((CIntersector *)&local_18,*(float *)(iVar4 + 4 + iVar10),
                             *(float *)(iVar4 + 4 + iVar3),*(float *)(iVar5 + 4 + iVar10),
                             *(float *)(iVar5 + 4 + iVar3));
                  piVar13 = piVar13 + 2;
                  local_8c = local_8c + -1;
                } while (local_8c != 0);
              }
              uVar9 = local_1c;
              uVar12 = local_10 & 0x80000001;
              bVar14 = uVar12 == 0;
              if ((int)uVar12 < 0) {
                bVar14 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
              }
              if (!bVar14) {
                if (((*(uint *)(this + 4) & local_1c) == 0) || (*(int *)(this + 0x28) == 0)) {
                  if (fVar6 < *(float *)(this + 0x94) != (fVar6 == *(float *)(this + 0x94))) {
                    *(float *)(this + 0x94) = fVar6;
                  }
                  *(undefined4 *)(this + 0x84) =
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x14) + 0x668);
                }
                else {
                  for (piVar13 = (int *)piVar2[0x6c]; *piVar13 != 0; piVar13 = (int *)*piVar13) {
                    pCVar11 = CRelationLnk::GetDst((CRelationLnk *)(piVar13 + -2));
                    AddSector(this,(CBrushSector *)(pCVar11 + -0x90));
                  }
                  if (((*(int *)(this + 100) == 0) || ((uVar9 & 0x8020) == 0)) ||
                     (*(int *)(this + 0x7c) != 0)) goto LAB_360dd9f0;
                  if (fVar6 < *(float *)(this + 0x94) != (fVar6 == *(float *)(this + 0x94))) {
                    *(float *)(this + 0x94) = fVar6;
                  }
                  *(undefined4 *)(this + 0x84) =
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x14) + 0x668);
                }
                *(CBrushSector **)(this + 0xa8) = param_1;
                *(int **)(this + 0xa4) = piVar2;
              }
            }
          }
        }
LAB_360dd9f0:
        local_48 = local_48 + 1;
      } while (local_48 < *(int *)(param_1 + 0x18));
    }
  }
  ExceptionList = local_c;
  return;
}

