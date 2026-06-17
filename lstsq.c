
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __cdecl lstsq(class CStaticArray<float> *,class CStaticArray<float> *,long,long,class
   CStaticArray<float> *) */

long __cdecl
lstsq(CStaticArray<float> *param_1,CStaticArray<float> *param_2,long param_3,long param_4,
     CStaticArray<float> *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int local_800;
  float local_7fc;
  float local_7f8;
  float *local_7f4;
  int local_7f0;
  int local_7e8;
  float local_7e0 [42];
  float local_738 [23];
  float afStack_6dc [439];
  
                    /* 0x18dd30  4241  ?lstsq@@YAJPAV?$CStaticArray@M@@0JJ0@Z */
  if (param_4 < 1) {
    return -1;
  }
  if ((param_4 < param_3) && (param_4 < 0x15)) {
    iVar11 = 0;
    if (0 < param_4 * 2) {
      do {
        iVar10 = 0;
        local_7fc = 0.0;
        if (0 < param_3) {
          do {
            pfVar3 = (float *)FUN_360c5b40(param_1,iVar10);
            fVar1 = *pfVar3;
            iVar8 = 0;
            fVar2 = fVar1;
            if (7 < iVar11) {
              iVar4 = (iVar11 - 8U >> 3) + 1;
              iVar8 = iVar4 * 8;
              do {
                iVar4 = iVar4 + -1;
                fVar2 = fVar2 * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * fVar1;
              } while (iVar4 != 0);
            }
            if (iVar8 < iVar11) {
              iVar8 = iVar11 - iVar8;
              do {
                iVar8 = iVar8 + -1;
                fVar2 = fVar2 * fVar1;
              } while (iVar8 != 0);
            }
            local_7fc = fVar2 + local_7fc;
            iVar10 = iVar10 + 1;
          } while (iVar10 < param_3);
        }
        iVar10 = iVar11 + 1;
        local_7e0[iVar11] = local_7fc;
        iVar11 = iVar10;
      } while (iVar10 < param_4 * 2);
    }
    iVar11 = param_4 + 1;
    iVar10 = 0;
    if (0 < iVar11) {
      pfVar3 = local_7e0;
      pfVar5 = local_738 + 1;
      local_7f8 = 0.0;
      do {
        iVar8 = 0;
        if (3 < iVar11) {
          iVar4 = (param_4 - 3U >> 2) + 1;
          iVar8 = iVar4 * 4;
          pfVar7 = pfVar3;
          pfVar9 = pfVar5;
          do {
            pfVar9[-1] = pfVar7[-1];
            *pfVar9 = *pfVar7;
            pfVar9[1] = pfVar7[1];
            pfVar9[2] = pfVar7[2];
            pfVar7 = pfVar7 + 4;
            pfVar9 = pfVar9 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (iVar8 < iVar11) {
          pfVar7 = local_7e0 + iVar8 + iVar10 + -1;
          pfVar9 = local_738 + (int)local_7f8 + iVar8;
          for (iVar4 = iVar11 - iVar8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar9 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            pfVar9 = pfVar9 + 1;
          }
        }
        iVar10 = iVar10 + 1;
        pfVar5 = pfVar5 + 0x16;
        pfVar3 = pfVar3 + 1;
        local_7f8 = (float)((int)local_7f8 + 0x16);
      } while (iVar10 < iVar11);
    }
    iVar10 = 0;
    local_738[0] = (float)param_3;
    local_7fc = 0.0;
    if (0 < param_3) {
      do {
        pfVar3 = (float *)FUN_360c5b40(param_2,iVar10);
        local_7fc = local_7fc + *pfVar3;
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_3);
    }
    pfVar3 = local_738 + param_4 + 1;
    iVar10 = 0;
    *pfVar3 = local_7fc;
    if (0 < param_4) {
      local_7f4 = afStack_6dc + param_4;
      do {
        iVar8 = 0;
        local_7fc = 0.0;
        if (0 < param_3) {
          do {
            pfVar5 = (float *)FUN_360c5b40(param_1,iVar8);
            fVar1 = *pfVar5;
            iVar4 = 0;
            local_7f8 = fVar1;
            if (7 < iVar10) {
              iVar6 = (iVar10 - 8U >> 3) + 1;
              iVar4 = iVar6 * 8;
              do {
                iVar6 = iVar6 + -1;
                local_7f8 = local_7f8 * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * fVar1 *
                            fVar1;
              } while (iVar6 != 0);
            }
            if (iVar4 < iVar10) {
              iVar4 = iVar10 - iVar4;
              do {
                iVar4 = iVar4 + -1;
                local_7f8 = local_7f8 * fVar1;
              } while (iVar4 != 0);
            }
            pfVar5 = (float *)FUN_360c5b40(param_2,iVar8);
            iVar8 = iVar8 + 1;
            local_7fc = local_7f8 * *pfVar5 + local_7fc;
          } while (iVar8 < param_3);
        }
        *local_7f4 = local_7fc;
        local_7f4 = local_7f4 + 0x16;
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_4);
    }
    iVar10 = 0;
    if (0 < iVar11) {
      local_7f4 = local_738;
      iVar8 = param_4 + 2;
      local_7f8 = 0.0;
      local_800 = 0;
      do {
        local_7f4 = local_7f4 + 1;
        fVar1 = *(float *)((int)local_738 + local_800);
        iVar4 = iVar10;
        if (3 < iVar8 - iVar10) {
          fVar2 = _DAT_36223384 / fVar1;
          iVar6 = ((iVar8 - iVar10) - 4U >> 2) + 1;
          iVar4 = iVar10 + iVar6 * 4;
          pfVar5 = (float *)((int)local_738 + local_800 + 4);
          do {
            iVar6 = iVar6 + -1;
            pfVar5[-1] = fVar2 * pfVar5[-1];
            *pfVar5 = fVar2 * *pfVar5;
            pfVar5[1] = fVar2 * pfVar5[1];
            pfVar5[2] = fVar2 * pfVar5[2];
            pfVar5 = pfVar5 + 4;
          } while (iVar6 != 0);
        }
        if (iVar4 < iVar8) {
          iVar6 = iVar8 - iVar4;
          pfVar5 = local_738 + (int)local_7f8 + iVar4;
          do {
            iVar6 = iVar6 + -1;
            *pfVar5 = (_DAT_36223384 / fVar1) * *pfVar5;
            pfVar5 = pfVar5 + 1;
          } while (iVar6 != 0);
        }
        local_7e8 = 0;
        if (0 < iVar11) {
          local_7f0 = 0;
          pfVar5 = local_7f4;
          do {
            if (local_7e8 != iVar10) {
              fVar1 = pfVar5[-1];
              iVar4 = iVar10;
              if (3 < iVar8 - iVar10) {
                iVar6 = ((iVar8 - iVar10) - 4U >> 2) + 1;
                iVar4 = iVar10 + iVar6 * 4;
                pfVar7 = pfVar5;
                pfVar9 = (float *)((int)local_738 + local_800 + 4);
                do {
                  iVar6 = iVar6 + -1;
                  pfVar7[-1] = pfVar7[-1] - fVar1 * pfVar9[-1];
                  *pfVar7 = *pfVar7 - fVar1 * *pfVar9;
                  pfVar7[1] = pfVar7[1] - fVar1 * pfVar9[1];
                  pfVar7[2] = pfVar7[2] - fVar1 * pfVar9[2];
                  pfVar7 = pfVar7 + 4;
                  pfVar9 = pfVar9 + 4;
                } while (iVar6 != 0);
              }
              if (iVar4 < iVar8) {
                iVar6 = iVar8 - iVar4;
                pfVar7 = local_738 + local_7f0 + iVar4;
                pfVar9 = local_738 + (int)local_7f8 + iVar4;
                do {
                  iVar6 = iVar6 + -1;
                  *pfVar7 = *pfVar7 - fVar1 * *pfVar9;
                  pfVar7 = pfVar7 + 1;
                  pfVar9 = pfVar9 + 1;
                } while (iVar6 != 0);
              }
            }
            local_7e8 = local_7e8 + 1;
            local_7f0 = local_7f0 + 0x16;
            pfVar5 = pfVar5 + 0x16;
          } while (local_7e8 < iVar11);
        }
        iVar4 = 0;
        iVar10 = iVar10 + 1;
        local_800 = local_800 + 0x5c;
        local_7f8 = (float)((int)local_7f8 + 0x16);
      } while (iVar10 < iVar11);
      if (0 < iVar11) {
        do {
          pfVar5 = (float *)FUN_360c5b40(param_5,iVar4);
          fVar1 = *pfVar3;
          iVar4 = iVar4 + 1;
          pfVar3 = pfVar3 + 0x16;
          *pfVar5 = fVar1;
        } while (iVar4 < iVar11);
      }
    }
    return 0;
  }
  return -1;
}

