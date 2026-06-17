
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEditModel::CalculateUnwrappedMapping(class CObject3D &,class CObject3D
   &,class CObject3D &) */

void __thiscall
CEditModel::CalculateUnwrappedMapping
          (CEditModel *this,CObject3D *param_1,CObject3D *param_2,CObject3D *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  void *pvVar7;
  double *pdVar8;
  int iVar9;
  int *piVar10;
  void *pvVar11;
  int iVar12;
  float *pfVar13;
  CTString *pCVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_b8;
  
                    /* 0xaabd0  1137  ?CalculateUnwrappedMapping@CEditModel@@QAEXAAVCObject3D@@00@Z
                        */
  local_b8 = 0;
  iVar6 = FUN_3600c0e0((undefined4 *)(this + 0x110));
  if (0 < iVar6) {
    local_cc = 0;
    do {
      pCVar14 = (CTString *)(*(int *)(this + 0x114) + local_cc);
      local_c8 = 0;
      iVar6 = FUN_3600bef0((undefined4 *)(pCVar14 + 0x5c));
      if (0 < iVar6) {
        do {
          iVar12 = *(int *)(*(int *)(pCVar14 + 0x60) + local_c8 * 4) * 0x34;
          iVar6 = *(int *)(iVar12 + 0x18 + *(int *)(this + 0x10c));
          pfVar13 = (float *)(iVar12 + *(int *)(this + 0x10c));
          local_c0 = 0;
          iVar12 = FUN_3604a790(param_2,0);
          iVar12 = FUN_3604a760(iVar12 + 0x50);
          if (0 < iVar12) {
            do {
              pvVar7 = (void *)FUN_3604a790(param_1,0);
              pdVar8 = (double *)FUN_3604a710(pvVar7,iVar6);
              dVar1 = *pdVar8;
              dVar2 = pdVar8[1];
              dVar3 = pdVar8[2];
              iVar12 = local_c0;
              iVar9 = FUN_3604a790(param_2,0);
              iVar12 = FUN_3604a750((void *)(iVar9 + 0x50),iVar12);
              iVar9 = CTString::operator!=((CTString *)(*(int *)(iVar12 + 0x60) + 8),pCVar14);
              if (iVar9 == 0) {
                pvVar7 = (void *)(iVar12 + 0x4c);
                iVar12 = FUN_3604aa50((int)pvVar7);
                if (0 < iVar12) {
                  local_c4 = 0;
                  do {
                    iVar12 = FUN_3604a700(pvVar7,local_c4);
                    if (*(int *)(iVar12 + 4) == 0) {
                      piVar10 = (int *)FUN_3604a700(pvVar7,local_c4);
                      pdVar8 = *(double **)(*piVar10 + 0x10);
                    }
                    else {
                      piVar10 = (int *)FUN_3604a700(pvVar7,local_c4);
                      pdVar8 = *(double **)(*piVar10 + 0x14);
                    }
                    if (ABS(SQRT((dVar1 - *pdVar8) * (dVar1 - *pdVar8) +
                                 (dVar2 - pdVar8[1]) * (dVar2 - pdVar8[1]) +
                                 (dVar3 - pdVar8[2]) * (dVar3 - pdVar8[2]))) < (double)_DAT_36228818
                       ) {
                      pvVar11 = (void *)FUN_3604a790(param_2,0);
                      iVar12 = thunk_FUN_360b1400(pvVar11,(int)pdVar8);
                      pvVar11 = (void *)FUN_3604a790(param_3,0);
                      pdVar8 = (double *)FUN_3604a710(pvVar11,iVar12);
                      dVar4 = pdVar8[1];
                      dVar5 = pdVar8[2];
                      *pfVar13 = (float)*pdVar8;
                      pfVar13[1] = (float)dVar4;
                      pfVar13[2] = (float)dVar5;
                      pfVar13[1] = -pfVar13[1];
                      uVar15 = FUN_361bfd6c();
                      uVar16 = FUN_361bfd6c();
                      pfVar13[3] = (float)uVar15;
                      pfVar13[4] = (float)uVar16;
                    }
                    local_c4 = local_c4 + 1;
                    iVar12 = FUN_3604aa50((int)pvVar7);
                  } while (local_c4 < iVar12);
                }
              }
              local_c0 = local_c0 + 1;
              iVar12 = FUN_3604a790(param_2,0);
              iVar12 = FUN_3604a760(iVar12 + 0x50);
            } while (local_c0 < iVar12);
          }
          *(undefined4 *)(pCVar14 + 0x14) = 0;
          *(undefined4 *)(pCVar14 + 0x18) = 0;
          *(undefined4 *)(pCVar14 + 0x1c) = 0;
          *(undefined4 *)(pCVar14 + 8) = 0;
          *(undefined4 *)(pCVar14 + 0xc) = 0;
          *(undefined4 *)(pCVar14 + 0x10) = 0;
          local_c8 = local_c8 + 1;
          *(undefined4 *)(pCVar14 + 0x20) = 0x3f800000;
          iVar6 = FUN_3600bef0((undefined4 *)(pCVar14 + 0x5c));
        } while (local_c8 < iVar6);
      }
      local_cc = local_cc + 0x70;
      local_b8 = local_b8 + 1;
      iVar6 = FUN_3600c0e0((undefined4 *)(this + 0x110));
    } while (local_b8 < iVar6);
  }
  return;
}

