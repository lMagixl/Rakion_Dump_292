
/* public: void __thiscall CEditModel::CalculateMappingForMips(void) */

void __thiscall CEditModel::CalculateMappingForMips(CEditModel *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  CTString *this_00;
  undefined4 *puVar10;
  CTString *pCVar11;
  int *piVar12;
  CEditModel *pCVar13;
  int local_48;
  int local_40;
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  
                    /* 0xab030  1131  ?CalculateMappingForMips@CEditModel@@QAEXXZ */
  local_38 = 1;
  if (1 < *(int *)(this + 0x6c)) {
    pCVar13 = this + 0x170;
    do {
      local_2c = 0;
      iVar6 = FUN_3600c0e0((undefined4 *)pCVar13);
      if (0 < iVar6) {
        local_40 = 0;
        do {
          this_00 = (CTString *)(*(int *)(pCVar13 + 4) + local_40);
          local_48 = 0;
          iVar6 = FUN_3600bef0((undefined4 *)(this_00 + 0x5c));
          if (0 < iVar6) {
            do {
              iVar6 = *(int *)(*(int *)(this_00 + 0x60) + local_48 * 4) * 0x34;
              puVar10 = (undefined4 *)(iVar6 + *(int *)(pCVar13 + -4));
              pfVar1 = (float *)(*(int *)(this + 0x58) +
                                *(int *)(iVar6 + 0x18 + *(int *)(pCVar13 + -4)) * 0xc);
              fVar2 = *pfVar1;
              fVar3 = pfVar1[1];
              fVar4 = pfVar1[2];
              iVar8 = 0;
              iVar6 = FUN_3600c0e0((undefined4 *)(pCVar13 + -0x60));
              if (iVar6 < 1) {
LAB_360ab283:
                WarningMessage(s_Mip_model__d_has_surface_that_do_36231540,local_38);
                break;
              }
              iVar6 = 0;
              do {
                pCVar11 = (CTString *)(*(int *)(pCVar13 + -0x5c) + iVar6);
                iVar7 = CTString::operator==(this_00,pCVar11);
                if (iVar7 != 0) break;
                iVar8 = iVar8 + 1;
                iVar6 = iVar6 + 0x70;
                iVar7 = FUN_3600c0e0((undefined4 *)(pCVar13 + -0x60));
              } while (iVar8 < iVar7);
              if (pCVar11 == (CTString *)0x0) goto LAB_360ab283;
              local_34 = 1e+08;
              puVar9 = (undefined4 *)0x0;
              local_30 = FUN_3600bef0((undefined4 *)(pCVar11 + 0x5c));
              if (0 < local_30) {
                piVar12 = *(int **)(pCVar11 + 0x60);
                do {
                  pfVar1 = (float *)(*(int *)(this + 0x58) +
                                    *(int *)(*piVar12 * 0x34 + 0x18 + *(int *)(pCVar13 + -100)) *
                                    0xc);
                  fVar5 = ABS(SQRT((*pfVar1 - fVar2) * (*pfVar1 - fVar2) +
                                   (pfVar1[1] - fVar3) * (pfVar1[1] - fVar3) +
                                   (pfVar1[2] - fVar4) * (pfVar1[2] - fVar4)));
                  if (fVar5 < local_34) {
                    puVar9 = (undefined4 *)(*piVar12 * 0x34 + *(int *)(pCVar13 + -100));
                    local_34 = fVar5;
                  }
                  piVar12 = piVar12 + 1;
                  local_30 = local_30 + -1;
                } while (local_30 != 0);
              }
              *puVar10 = *puVar9;
              puVar10[1] = puVar9[1];
              puVar10[2] = puVar9[2];
              puVar10[3] = puVar9[3];
              puVar10[4] = puVar9[4];
              puVar10[7] = puVar9[7];
              puVar10[8] = puVar9[8];
              puVar10[9] = puVar9[9];
              puVar10[10] = puVar9[10];
              puVar10[0xb] = puVar9[0xb];
              puVar10[0xc] = puVar9[0xc];
              local_48 = local_48 + 1;
              iVar6 = FUN_3600bef0((undefined4 *)(this_00 + 0x5c));
            } while (local_48 < iVar6);
          }
          local_40 = local_40 + 0x70;
          local_2c = local_2c + 1;
          iVar6 = FUN_3600c0e0((undefined4 *)pCVar13);
        } while (local_2c < iVar6);
      }
      local_38 = local_38 + 1;
      pCVar13 = pCVar13 + 0x60;
    } while (local_38 < *(int *)(this + 0x6c));
  }
  return;
}

