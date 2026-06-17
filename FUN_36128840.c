
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36128840(Vector<float,3> *param_1,float *param_2,float *param_3)

{
  CEntity *pCVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  CEntity *unaff_ESI;
  Vector<float,3> *local_110;
  int local_f8;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  CCastRay local_b8 [104];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_3c;
  int local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362189c4;
  local_c = ExceptionList;
  piVar11 = *(int **)(unaff_ESI + 0x84);
  if (piVar11 == (int *)0x0) {
    return 0;
  }
  pCVar1 = unaff_ESI + 0x3c;
  ExceptionList = &local_c;
  iVar12 = FUN_360cd8a0(piVar11);
  if (0 < iVar12) {
    pfVar2 = (float *)(iVar12 * 0x40 + -0x40 + piVar11[1]);
    local_d0 = *(float *)(unaff_ESI + 0x54) * *pfVar2 +
               *(float *)(unaff_ESI + 0x5c) * pfVar2[2] +
               *(float *)(iVar12 * 0x40 + -0x3c + piVar11[1]) * *(float *)(unaff_ESI + 0x58) +
               *(float *)pCVar1;
    local_cc = pfVar2[1] * *(float *)(unaff_ESI + 100) +
               *(float *)(unaff_ESI + 0x68) * pfVar2[2] + *pfVar2 * *(float *)(unaff_ESI + 0x60) +
               *(float *)(unaff_ESI + 0x40);
    local_c8 = pfVar2[1] * *(float *)(unaff_ESI + 0x70) +
               *pfVar2 * *(float *)(unaff_ESI + 0x6c) + *(float *)(unaff_ESI + 0x74) * pfVar2[2] +
               *(float *)(unaff_ESI + 0x44);
    pfVar2 = (float *)piVar11[1];
    local_c4 = *(float *)(unaff_ESI + 0x54) * *pfVar2 +
               pfVar2[1] * *(float *)(unaff_ESI + 0x58) + *(float *)(unaff_ESI + 0x5c) * pfVar2[2] +
               *(float *)pCVar1;
    local_c0 = pfVar2[1] * *(float *)(unaff_ESI + 100) +
               pfVar2[2] * *(float *)(unaff_ESI + 0x68) + *(float *)(unaff_ESI + 0x60) * *pfVar2 +
               *(float *)(unaff_ESI + 0x40);
    local_f8 = 0;
    local_bc = *pfVar2 * *(float *)(unaff_ESI + 0x6c) +
               *(float *)(unaff_ESI + 0x70) * pfVar2[1] + *(float *)(unaff_ESI + 0x74) * pfVar2[2] +
               *(float *)(unaff_ESI + 0x44);
    local_dc = (local_c4 + local_d0) * _DAT_36227cf0;
    local_d8 = (local_cc + local_c0) * _DAT_36227cf0;
    local_110 = (Vector<float,3> *)&local_dc;
    local_d4 = (local_c8 + local_bc) * _DAT_36227cf0;
    do {
      CCastRay::CCastRay(local_b8,unaff_ESI,local_110,param_1);
      local_4 = 0;
      local_4c = 0;
      local_50 = 0;
      local_3c = 1;
      CWorld::CastRay(*(CWorld **)(unaff_ESI + 0xa8),local_b8);
      local_4 = 0xffffffff;
      if (local_34 == 0) {
        CCastRay::~CCastRay(local_b8);
        *param_2 = 3e+38;
        *param_3 = *(float *)pCVar1;
        param_3[1] = *(float *)(unaff_ESI + 0x40);
        param_3[2] = *(float *)(unaff_ESI + 0x44);
        local_110 = (Vector<float,3> *)0x0;
        if (0 < *piVar11) {
          iVar12 = 0;
          do {
            pfVar2 = (float *)(piVar11[1] + iVar12);
            fVar3 = *(float *)(unaff_ESI + 100);
            fVar4 = *(float *)(unaff_ESI + 0x68);
            fVar5 = *(float *)(unaff_ESI + 0x60);
            fVar6 = *(float *)(unaff_ESI + 0x6c);
            fVar7 = *(float *)(unaff_ESI + 0x70);
            fVar8 = *(float *)(unaff_ESI + 0x74);
            fVar9 = *(float *)(unaff_ESI + 0x40);
            fVar10 = *(float *)(unaff_ESI + 0x44);
            pfVar2[4] = *(float *)(unaff_ESI + 0x54) * *pfVar2 +
                        *(float *)(unaff_ESI + 0x5c) * pfVar2[2] +
                        *(float *)(piVar11[1] + 4 + iVar12) * *(float *)(unaff_ESI + 0x58) +
                        *(float *)pCVar1;
            pfVar2[5] = fVar5 * *pfVar2 + fVar4 * pfVar2[2] + pfVar2[1] * fVar3 + fVar9;
            pfVar2[6] = fVar8 * pfVar2[2] + pfVar2[1] * fVar7 + fVar6 * *pfVar2 + fVar10;
            iVar13 = piVar11[1] + iVar12;
            fVar3 = *(float *)(piVar11[1] + 0x10 + iVar12) - *(float *)param_1;
            fVar4 = *(float *)(iVar13 + 0x14) - *(float *)(param_1 + 4);
            fVar5 = *(float *)(iVar13 + 0x18) - *(float *)(param_1 + 8);
            fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) - *(float *)(iVar13 + 0xc);
            if (fVar3 < *param_2) {
              fVar4 = *param_2;
              if (fVar3 <= *param_2) {
                fVar4 = fVar3;
              }
              *param_2 = fVar4;
              pfVar2 = (float *)(piVar11[1] + 0x10 + iVar12);
              *param_3 = *pfVar2;
              param_3[1] = pfVar2[1];
              param_3[2] = pfVar2[2];
            }
            local_110 = (Vector<float,3> *)((int)local_110 + 1);
            iVar12 = iVar12 + 0x40;
          } while ((int)local_110 < *piVar11);
        }
        if (*param_2 < _DAT_3622376c) {
          *param_2 = 0.0;
        }
        ExceptionList = local_c;
        return 1;
      }
      CCastRay::~CCastRay(local_b8);
      local_f8 = local_f8 + 1;
      local_110 = local_110 + 0xc;
    } while (local_f8 < 3);
  }
  ExceptionList = local_c;
  return 0;
}

