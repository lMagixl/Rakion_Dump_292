
/* public: void __thiscall CEntity::FindEntitiesInRange(class AABBox<float,3> const &,class
   CDynamicContainer<class CEntity> &,int) */

void __thiscall
CEntity::FindEntitiesInRange
          (CEntity *this,AABBox<float,3> *param_1,CDynamicContainer<class_CEntity> *param_2,
          int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  int iVar10;
  CBrushMip *this_00;
  CRelationDst *pCVar11;
  float *pfVar12;
  int iVar13;
  CBrushMip *pCVar14;
  int iVar15;
  void *this_01;
  CRelationDst *pCVar16;
  int *local_fc;
  int local_d8;
  int local_c8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x12c2c0  1631
                       ?FindEntitiesInRange@CEntity@@QAEXABV?$AABBox@M$02@@AAV?$CDynamicContainer@VCEntity@@@@H@Z
                        */
  puStack_8 = &LAB_36218b55;
  local_c = ExceptionList;
  this_01 = (void *)(*(int *)(this + 0xa8) + 0x15c);
  local_d8 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar10 = FUN_360caf20((int)this_01);
  if (0 < iVar10) {
    do {
      iVar10 = FUN_360cafb0(this_01,local_d8);
      if ((*(int *)(iVar10 + 4) == 4) &&
         (iVar10 = FUN_360cafb0(this_01,local_d8), (*(byte *)(iVar10 + 0x10) & 2) != 0)) {
        iVar10 = FUN_360cafb0(this_01,local_d8);
        this_00 = CBrush3D::GetFirstMip(*(CBrush3D **)(iVar10 + 0x7c));
        if ((~(((uint)(*(float *)(this_00 + 0x30) - *(float *)param_1) |
                (uint)(*(float *)(param_1 + 0xc) - *(float *)(this_00 + 0x24)) |
                (uint)(*(float *)(this_00 + 0x34) - *(float *)(param_1 + 4)) |
                (uint)(*(float *)(param_1 + 0x10) - *(float *)(this_00 + 0x28)) |
                (uint)(*(float *)(this_00 + 0x38) - *(float *)(param_1 + 8)) |
               (uint)(*(float *)(param_1 + 0x14) - *(float *)(this_00 + 0x2c))) >> 0x1f) & 1) != 0)
        {
          local_c8 = 0;
          local_4._0_1_ = 1;
          iVar10 = FUN_36043600((int)this_00);
          if (0 < iVar10) {
            do {
              iVar10 = FUN_36043710(this_00,local_c8);
              if ((~(((uint)(*(float *)(iVar10 + 0x60) - *(float *)param_1) |
                      (uint)(*(float *)(param_1 + 0xc) - *(float *)(iVar10 + 0x54)) |
                      (uint)(*(float *)(iVar10 + 100) - *(float *)(param_1 + 4)) |
                      (uint)(*(float *)(param_1 + 0x10) - *(float *)(iVar10 + 0x58)) |
                      (uint)(*(float *)(iVar10 + 0x68) - *(float *)(param_1 + 8)) |
                     (uint)(*(float *)(param_1 + 0x14) - *(float *)(iVar10 + 0x5c))) >> 0x1f) & 1)
                  != 0) {
                iVar10 = FUN_36043710(this_00,local_c8);
                local_fc = *(int **)(iVar10 + 0x9c);
LAB_3612c460:
                if (*local_fc != 0) {
                  pCVar11 = CRelationLnk::GetDst((CRelationLnk *)(local_fc + -2));
                  iVar10 = *(int *)(pCVar11 + -0xa8);
                  pCVar16 = pCVar11 + -0xac;
                  if (((iVar10 == 3) || (iVar10 == 5)) &&
                     (fVar1 = *(float *)(pCVar11 + -0x24),
                     (~(((uint)(*(float *)(param_1 + 0xc) - (*(float *)(pCVar11 + -0x70) - fVar1)) |
                         (uint)((fVar1 + *(float *)(pCVar11 + -0x70)) - *(float *)param_1) |
                         (uint)(*(float *)(param_1 + 0x10) - (*(float *)(pCVar11 + -0x6c) - fVar1))
                         | (uint)((fVar1 + *(float *)(pCVar11 + -0x6c)) - *(float *)(param_1 + 4)) |
                         (uint)(*(float *)(param_1 + 0x14) - (*(float *)(pCVar11 + -0x68) - fVar1))
                        | (uint)((fVar1 + *(float *)(pCVar11 + -0x68)) - *(float *)(param_1 + 8)))
                       >> 0x1f) & 1) != 0)) {
                    piVar9 = *(int **)(pCVar11 + -0x28);
                    if (piVar9 == (int *)0x0) {
LAB_3612cb96:
                      if (param_3 == 0) {
LAB_3612cba1:
                        iVar10 = FUN_360caf60(param_2,(int)pCVar16);
                        if (iVar10 == 0) {
                          FUN_360ccb70(param_2,pCVar16);
                        }
                      }
                      goto LAB_3612cbbf;
                    }
                    iVar10 = 0;
                    local_4 = CONCAT31(local_4._1_3_,2);
                    if (0 < *piVar9) {
                      iVar15 = 0;
                      do {
                        pfVar12 = (float *)(piVar9[1] + iVar15);
                        fVar1 = *(float *)(pCVar11 + -0x4c);
                        fVar2 = *(float *)(pCVar11 + -0x44);
                        fVar3 = *(float *)(pCVar11 + -0x48);
                        fVar4 = *(float *)(pCVar11 + -0x40);
                        fVar5 = *(float *)(pCVar11 + -0x3c);
                        fVar6 = *(float *)(pCVar11 + -0x38);
                        fVar7 = *(float *)(pCVar11 + -0x6c);
                        fVar8 = *(float *)(pCVar11 + -0x68);
                        pfVar12[4] = *(float *)(pCVar11 + -0x58) * *pfVar12 +
                                     pfVar12[2] * *(float *)(pCVar11 + -0x50) +
                                     *(float *)(pCVar11 + -0x54) *
                                     *(float *)(piVar9[1] + 4 + iVar15) +
                                     *(float *)(pCVar11 + -0x70);
                        pfVar12[5] = pfVar12[1] * fVar3 + pfVar12[2] * fVar2 + *pfVar12 * fVar1 +
                                     fVar7;
                        pfVar12[6] = fVar6 * pfVar12[2] + fVar5 * pfVar12[1] + *pfVar12 * fVar4 +
                                     fVar8;
                        fVar1 = *(float *)(piVar9[1] + 0xc + iVar15);
                        iVar13 = piVar9[1] + iVar15;
                        if ((~(((uint)(*(float *)(param_1 + 0xc) -
                                      (*(float *)(iVar13 + 0x10) - fVar1)) |
                                (uint)((fVar1 + *(float *)(iVar13 + 0x10)) - *(float *)param_1) |
                                (uint)(*(float *)(param_1 + 0x10) -
                                      (*(float *)(iVar13 + 0x14) - fVar1)) |
                                (uint)((fVar1 + *(float *)(iVar13 + 0x14)) - *(float *)(param_1 + 4)
                                      ) | (uint)(*(float *)(param_1 + 0x14) -
                                                (*(float *)(iVar13 + 0x18) - fVar1)) |
                               (uint)((fVar1 + *(float *)(iVar13 + 0x18)) - *(float *)(param_1 + 8))
                               ) >> 0x1f) & 1) != 0) {
                          iVar10 = FUN_360caf60(param_2,(int)pCVar16);
                          if (iVar10 == 0) {
                            FUN_360ccb70(param_2,pCVar16);
                          }
                          local_fc = (int *)*local_fc;
                          local_4._0_1_ = 1;
                          goto LAB_3612c460;
                        }
                        iVar10 = iVar10 + 1;
                        iVar15 = iVar15 + 0x40;
                      } while (iVar10 < *piVar9);
                    }
                    local_fc = (int *)*local_fc;
                    local_4._0_1_ = 1;
                  }
                  else {
                    if ((iVar10 == 4) &&
                       (fVar1 = *(float *)(pCVar11 + -0x24),
                       (~(((uint)(*(float *)(param_1 + 0xc) - (*(float *)(pCVar11 + -0x70) - fVar1))
                           | (uint)((fVar1 + *(float *)(pCVar11 + -0x70)) - *(float *)param_1) |
                           (uint)(*(float *)(param_1 + 0x10) - (*(float *)(pCVar11 + -0x6c) - fVar1)
                                 ) | (uint)((fVar1 + *(float *)(pCVar11 + -0x6c)) -
                                           *(float *)(param_1 + 4)) |
                           (uint)(*(float *)(param_1 + 0x14) - (*(float *)(pCVar11 + -0x68) - fVar1)
                                 ) |
                          (uint)((fVar1 + *(float *)(pCVar11 + -0x68)) - *(float *)(param_1 + 8)))
                         >> 0x1f) & 1) != 0)) {
                      pCVar14 = CBrush3D::GetFirstMip(*(CBrush3D **)(pCVar11 + -0x30));
                      if ((~(((uint)(*(float *)(pCVar14 + 0x38) - *(float *)(param_1 + 8)) |
                             (uint)(*(float *)(param_1 + 0xc) - *(float *)(pCVar14 + 0x24)) |
                             (uint)(*(float *)(pCVar14 + 0x30) - *(float *)param_1) |
                             (uint)(*(float *)(param_1 + 0x10) - *(float *)(pCVar14 + 0x28)) |
                             (uint)(*(float *)(pCVar14 + 0x34) - *(float *)(param_1 + 4)) |
                             (uint)(*(float *)(param_1 + 0x14) - *(float *)(pCVar14 + 0x2c))) >>
                            0x1f) & 1) != 0) goto LAB_3612cba1;
                    }
                    else if (((iVar10 == 9) || (iVar10 == 10)) &&
                            (fVar1 = *(float *)(pCVar11 + -0x24),
                            (~(((uint)(*(float *)(param_1 + 0xc) -
                                      (*(float *)(pCVar11 + -0x70) - fVar1)) |
                                (uint)((fVar1 + *(float *)(pCVar11 + -0x70)) - *(float *)param_1) |
                                (uint)(*(float *)(param_1 + 0x10) -
                                      (*(float *)(pCVar11 + -0x6c) - fVar1)) |
                                (uint)((fVar1 + *(float *)(pCVar11 + -0x6c)) -
                                      *(float *)(param_1 + 4)) |
                                (uint)(*(float *)(param_1 + 0x14) -
                                      (*(float *)(pCVar11 + -0x68) - fVar1)) |
                               (uint)((fVar1 + *(float *)(pCVar11 + -0x68)) -
                                     *(float *)(param_1 + 8))) >> 0x1f) & 1) != 0)) {
                      piVar9 = *(int **)(pCVar11 + -0x28);
                      if (piVar9 == (int *)0x0) goto LAB_3612cb96;
                      iVar10 = 0;
                      local_4 = CONCAT31(local_4._1_3_,3);
                      if (0 < *piVar9) {
                        iVar15 = 0;
                        do {
                          pfVar12 = (float *)(piVar9[1] + iVar15);
                          fVar1 = *(float *)(pCVar11 + -0x4c);
                          fVar2 = *(float *)(pCVar11 + -0x44);
                          fVar3 = *(float *)(pCVar11 + -0x48);
                          fVar4 = *(float *)(pCVar11 + -0x3c);
                          fVar5 = *(float *)(pCVar11 + -0x38);
                          fVar6 = *(float *)(pCVar11 + -0x40);
                          fVar7 = *(float *)(pCVar11 + -0x6c);
                          fVar8 = *(float *)(pCVar11 + -0x68);
                          pfVar12[4] = pfVar12[2] * *(float *)(pCVar11 + -0x50) +
                                       *(float *)(pCVar11 + -0x54) * pfVar12[1] +
                                       *(float *)(pCVar11 + -0x58) * *(float *)(piVar9[1] + iVar15)
                                       + *(float *)(pCVar11 + -0x70);
                          pfVar12[5] = pfVar12[1] * fVar3 + pfVar12[2] * fVar2 + fVar1 * *pfVar12 +
                                       fVar7;
                          pfVar12[6] = fVar6 * *pfVar12 + fVar5 * pfVar12[2] + fVar4 * pfVar12[1] +
                                       fVar8;
                          fVar1 = *(float *)(piVar9[1] + 0xc + iVar15);
                          iVar13 = piVar9[1] + iVar15;
                          if ((~(((uint)(*(float *)(param_1 + 0xc) -
                                        (*(float *)(iVar13 + 0x10) - fVar1)) |
                                  (uint)((fVar1 + *(float *)(iVar13 + 0x10)) - *(float *)param_1) |
                                  (uint)(*(float *)(param_1 + 0x10) -
                                        (*(float *)(iVar13 + 0x14) - fVar1)) |
                                  (uint)((fVar1 + *(float *)(iVar13 + 0x14)) -
                                        *(float *)(param_1 + 4)) |
                                  (uint)(*(float *)(param_1 + 0x14) -
                                        (*(float *)(iVar13 + 0x18) - fVar1)) |
                                 (uint)((fVar1 + *(float *)(iVar13 + 0x18)) -
                                       *(float *)(param_1 + 8))) >> 0x1f) & 1) != 0) {
                            iVar10 = FUN_360caf60(param_2,(int)pCVar16);
                            if (iVar10 == 0) {
                              FUN_360ccb70(param_2,pCVar16);
                            }
                            local_fc = (int *)*local_fc;
                            local_4._0_1_ = 1;
                            goto LAB_3612c460;
                          }
                          iVar10 = iVar10 + 1;
                          iVar15 = iVar15 + 0x40;
                        } while (iVar10 < *piVar9);
                      }
                      local_fc = (int *)*local_fc;
                      local_4._0_1_ = 1;
                      goto LAB_3612c460;
                    }
LAB_3612cbbf:
                    local_fc = (int *)*local_fc;
                  }
                  goto LAB_3612c460;
                }
              }
              local_c8 = local_c8 + 1;
              iVar10 = FUN_36043600((int)this_00);
            } while (local_c8 < iVar10);
          }
          local_4 = (uint)local_4._1_3_ << 8;
        }
      }
      local_d8 = local_d8 + 1;
      iVar10 = FUN_360caf20((int)this_01);
    } while (local_d8 < iVar10);
  }
  ExceptionList = local_c;
  return;
}

