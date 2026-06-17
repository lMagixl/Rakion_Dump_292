
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_3616b810(int *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  fVar3 = (float)FUN_36162460(0x362fe990);
  iVar4 = FUN_36162460(0x362fe990);
  iVar12 = DAT_362fe998 + 1;
  DAT_362fe998 = iVar12;
  iVar5 = FUN_3616e1f0((undefined4 *)&DAT_362fe990);
  if (iVar5 < iVar12) {
    iVar12 = FUN_3616e1f0((undefined4 *)&DAT_362fe990);
    FUN_3616ea80(&DAT_362fe990,iVar12 + _DAT_362fe99c);
    iVar12 = DAT_362fe998;
  }
  iVar5 = DAT_362fe994;
  piVar10 = (int *)(DAT_362fe994 + -0x8c + iVar12 * 0x8c);
  piVar10[1] = (int)param_2;
  puVar14 = (undefined4 *)((int)param_2 * 0x8c + iVar5);
  *piVar10 = (int)param_1;
  piVar10[0x21] = -1;
  piVar10[0x1b] = -1;
  iVar12 = FUN_3615fda0(0x362fe9b0);
  piVar10[0x1c] = iVar12;
  piVar10[0x1d] = 0;
  if (param_1[0x3a] == -1) {
    if (0 < (int)puVar14[0x1d]) {
      piVar10[2] = puVar14[0x1c];
LAB_3616b912:
      iVar12 = *piVar10;
      piVar10[0x22] =
           (uint)((uint)((*(float *)(iVar12 + 0x90) < _DAT_3622376c !=
                         *(float *)(iVar12 + 0x94) < _DAT_3622376c) !=
                        *(float *)(iVar12 + 0x98) < _DAT_3622376c) != puVar14[0x22]);
      if ((DAT_362a4124 != 0) && (*param_1 != 0)) {
        param_2 = DAT_362fe0e4;
        if ((param_1[0x24] != 0x3f800000) ||
           ((param_1[0x25] != 0x3f800000 || (param_1[0x26] != 0x3f800000)))) {
          fVar2 = (float)param_1[0x26];
          if ((float)param_1[0x26] <= (float)param_1[0x25]) {
            fVar2 = (float)param_1[0x25];
          }
          if (fVar2 <= (float)param_1[0x24]) {
            fVar2 = (float)param_1[0x24];
          }
          param_2 = DAT_362fe0e4 / fVar2;
        }
        iVar12 = FUN_361631f0(*param_1,param_2);
        piVar10[0x1b] = iVar12;
        if (-1 < iVar12) {
          iVar12 = *(int *)(*param_1 + 0x18) + iVar12 * 0x18;
          local_18 = FUN_3600c550((undefined4 *)(iVar12 + 4));
          if (0 < local_18) {
            param_2 = 0.0;
            do {
              iVar5 = *(int *)(iVar12 + 8) + (int)param_2;
              piVar6 = (int *)FUN_3616f880((undefined4 *)&DAT_362fe9b0);
              *piVar6 = iVar5;
              *(undefined4 *)(iVar5 + 8) = 0;
              piVar6[2] = (int)fVar3;
              piVar6[0x15] = *(int *)(iVar5 + 0x58);
              piVar10[0x1d] = piVar10[0x1d] + 1;
              piVar6[4] = *(int *)(iVar5 + 0x3c);
              piVar6[5] = *(int *)(iVar5 + 0x40);
              piVar6[6] = *(int *)(iVar5 + 0x44);
              piVar6[8] = *(int *)(iVar5 + 0x48);
              piVar6[9] = *(int *)(iVar5 + 0x4c);
              piVar6[10] = *(int *)(iVar5 + 0x50);
              piVar6[0xb] = *(int *)(iVar5 + 0x54);
              piVar6[0xd] = piVar6[4];
              piVar6[0xe] = piVar6[5];
              piVar6[0xf] = piVar6[6];
              piVar6[0x11] = piVar6[8];
              piVar6[0x12] = piVar6[9];
              piVar6[0x13] = piVar6[10];
              piVar6[0x14] = piVar6[0xb];
              if (*(int *)(iVar5 + 4) == -1) {
                iVar5 = piVar10[2];
              }
              else {
                lVar9 = CSkeleton::FindBoneInLOD
                                  ((CSkeleton *)*param_1,*(int *)(iVar5 + 4),piVar10[0x1b]);
                iVar5 = piVar10[0x1c] + lVar9;
              }
              piVar6[1] = iVar5;
              param_2 = (float)((int)param_2 + 0x60);
              local_18 = local_18 + -1;
            } while (local_18 != 0);
          }
        }
        *(float *)(DAT_362bef74 + 0x214) = *(float *)(DAT_362bef74 + 0x214) + _DAT_36223384;
      }
      iVar12 = FUN_3616e100(0x362fe9a0);
      piVar10[0x1e] = iVar12;
      piVar10[0x1f] = 0;
      local_8 = FUN_36035f70(param_1 + 1);
      if (0 < local_8) {
        param_2 = 0.0;
        do {
          local_14 = DAT_362fe0e4;
          if (((param_1[0x24] != 0x3f800000) || (param_1[0x25] != 0x3f800000)) ||
             (param_1[0x26] != 0x3f800000)) {
            local_14 = (float)param_1[0x26];
            if ((float)param_1[0x26] <= (float)param_1[0x25]) {
              local_14 = (float)param_1[0x25];
            }
            if (local_14 <= (float)param_1[0x24]) {
              local_14 = (float)param_1[0x24];
            }
            local_14 = DAT_362fe0e4 / local_14;
          }
          iVar12 = FUN_36163380(*(int *)(param_1[2] + (int)param_2),local_14);
          if (-1 < iVar12) {
            iVar5 = param_1[2];
            iVar11 = iVar12 * 0x54 + *(int *)(*(int *)(iVar5 + (int)param_2) + 0x18);
            if ((DAT_362fe1a8 == 0) || ((*(byte *)(iVar11 + 0x48) & 2) == 0)) {
              iVar13 = DAT_362fe9a8 + 1;
              DAT_362fe9a8 = iVar13;
              iVar7 = FUN_3616e210((undefined4 *)&DAT_362fe9a0);
              if (iVar7 < iVar13) {
                iVar13 = FUN_3616e210((undefined4 *)&DAT_362fe9a0);
                FUN_3616eb30(&DAT_362fe9a0,iVar13 + _DAT_362fe9ac);
                iVar13 = DAT_362fe9a8;
              }
              piVar6 = (int *)(iVar13 * 0x7c + -0x7c + DAT_362fe9a4);
              piVar10[0x1f] = piVar10[0x1f] + 1;
              piVar6[1] = (int)fVar3;
              *piVar6 = iVar5 + (int)param_2;
              iVar5 = FUN_3616e120(0x362fe9c0);
              piVar6[4] = iVar5;
              iVar5 = FUN_3616e140(0x362fe9d0);
              piVar6[2] = iVar5;
              piVar6[5] = 0;
              piVar6[3] = 0;
              piVar6[6] = iVar12;
              if (DAT_362a4124 != 0) {
                local_10 = FUN_3615a300((undefined4 *)(iVar11 + 0x28));
                if (0 < local_10) {
                  local_18 = 0;
                  do {
                    iVar12 = *(int *)(iVar11 + 0x2c);
                    iVar5 = DAT_362fe9c8 + 1;
                    DAT_362fe9c8 = iVar5;
                    iVar13 = FUN_3616e240((undefined4 *)&DAT_362fe9c0);
                    if (iVar13 < iVar5) {
                      iVar5 = FUN_3616e240((undefined4 *)&DAT_362fe9c0);
                      FUN_3616ebe0(&DAT_362fe9c0,iVar5 + _DAT_362fe9cc);
                      iVar5 = DAT_362fe9c8;
                    }
                    piVar1 = (int *)(DAT_362fe9c4 + -0xc + iVar5 * 0xc);
                    piVar6[5] = piVar6[5] + 1;
                    piVar1[1] = 0;
                    piVar1[2] = 0;
                    *piVar1 = iVar12 + local_18;
                    local_18 = local_18 + 0x10;
                    local_10 = local_10 + -1;
                  } while (local_10 != 0);
                }
                local_c = FUN_3615a2c0((undefined4 *)(iVar11 + 0x20));
                if (0 < local_c) {
                  local_18 = 0;
                  do {
                    iVar5 = DAT_362fe9d8 + 1;
                    DAT_362fe9d8 = iVar5;
                    iVar12 = FUN_3616e270((undefined4 *)&DAT_362fe9d0);
                    if (iVar12 < iVar5) {
                      iVar12 = FUN_3616e270((undefined4 *)&DAT_362fe9d0);
                      FUN_3616eca0(&DAT_362fe9d0,iVar12 + _DAT_362fe9dc);
                    }
                    puVar14 = (undefined4 *)(DAT_362fe9d4 + -8 + DAT_362fe9d8 * 8);
                    plVar8 = (long *)(*(int *)(iVar11 + 0x24) + local_18);
                    *puVar14 = plVar8;
                    piVar6[3] = piVar6[3] + 1;
                    puVar14[1] = piVar10[0x1c];
                    if ((((CSkeleton *)*param_1 == (CSkeleton *)0x0) || (piVar10[0x1b] == -1)) ||
                       (lVar9 = CSkeleton::FindBoneInLOD
                                          ((CSkeleton *)*param_1,*plVar8,piVar10[0x1b]), lVar9 == -1
                       )) {
                      puVar14[1] = 0xffffffff;
                    }
                    else {
                      puVar14[1] = puVar14[1] + lVar9;
                    }
                    local_18 = local_18 + 0xc;
                    local_c = local_c + -1;
                  } while (local_c != 0);
                }
              }
            }
          }
          param_2 = (float)((int)param_2 + 0xc);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      piVar10[0x20] = -1;
      iVar12 = FUN_36036010((int)(param_1 + 0x13));
      iVar5 = 0;
      if (0 < iVar12) {
        do {
          piVar10 = (int *)FUN_36036020(param_1 + 0x13,iVar5);
          iVar11 = FUN_3616b810(piVar10,fVar3);
          if (iVar11 != -1) {
            *(undefined4 *)(iVar11 * 0x8c + 0x84 + DAT_362fe994) =
                 *(undefined4 *)(iVar4 * 0x8c + 0x80 + DAT_362fe994);
            *(int *)(iVar4 * 0x8c + 0x80 + DAT_362fe994) = iVar11;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar12);
      }
      return (int)fVar3;
    }
  }
  else if ((((DAT_362a4124 != 0) && (*(CSkeleton **)*puVar14 != (CSkeleton *)0x0)) &&
           (-1 < (int)puVar14[0x1b])) &&
          (lVar9 = CSkeleton::FindBoneInLOD(*(CSkeleton **)*puVar14,param_1[0x3a],puVar14[0x1b]),
          lVar9 != -1)) {
    piVar10[2] = puVar14[0x1c] + lVar9;
    goto LAB_3616b912;
  }
  DAT_362fe998 = DAT_362fe998 + -1;
  return -1;
}

