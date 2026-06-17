
/* public: void __thiscall CMesh::OptimizeLod(struct MeshLOD &) */

void __thiscall CMesh::OptimizeLod(CMesh *this,MeshLOD *param_1)

{
  void *pvVar1;
  int *piVar2;
  short *psVar3;
  size_t sVar4;
  undefined4 *puVar5;
  ushort uVar6;
  uint uVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  int local_24;
  int local_20;
  int local_1c;
  int local_c;
  int local_8;
  
                    /* 0x156cf0  2727  ?OptimizeLod@CMesh@@QAEXAAUMeshLOD@@@Z */
  sVar8 = FUN_3615a190((undefined4 *)param_1);
  local_c = FUN_3615a280((undefined4 *)(param_1 + 0x18));
  iVar9 = FUN_3615a240((undefined4 *)(param_1 + 0x10));
  iVar10 = FUN_3615a2c0((undefined4 *)(param_1 + 0x20));
  iVar11 = FUN_3615a300((undefined4 *)(param_1 + 0x28));
  if ((int)sVar8 < 1) {
    return;
  }
  FUN_3615b840(&DAT_362fde04,sVar8);
  sVar4 = sVar8 * 4 + 4;
  DAT_362fddf4 = sVar8;
  DAT_362fddf8 = (int *)thunk_FUN_361bf99c(sVar4);
  DAT_362fddfc = sVar8;
  DAT_362fde00 = (int *)thunk_FUN_361bf99c(sVar4);
  iVar12 = 0;
  if (0 < (int)sVar8) {
    do {
      DAT_362fddf8[iVar12] = iVar12;
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)sVar8);
  }
  iVar12 = 0;
  if (0 < local_c) {
    local_20 = 0;
    do {
      iVar15 = *(int *)(param_1 + 0x1c);
      iVar13 = FUN_3615a400((undefined4 *)(iVar15 + local_20 + 0x40));
      if (0 < iVar13) {
        iVar18 = 0;
        do {
          iVar16 = *(int *)(iVar15 + local_20 + 0x44);
          iVar14 = iVar16 + iVar18;
          *(int *)(DAT_362fde08 + 4 + (uint)*(ushort *)(iVar16 + iVar18) * 0x18) = iVar12;
          *(int *)(DAT_362fde08 + 4 + (uint)*(ushort *)(iVar14 + 2) * 0x18) = iVar12;
          iVar18 = iVar18 + 6;
          iVar13 = iVar13 + -1;
          *(int *)(DAT_362fde08 + 4 + (uint)*(ushort *)(iVar14 + 4) * 0x18) = iVar12;
        } while (iVar13 != 0);
      }
      iVar12 = iVar12 + 1;
      local_20 = local_20 + 0x48;
    } while (iVar12 < local_c);
  }
  local_20 = 0;
  if (0 < iVar10) {
    local_24 = 0;
    do {
      iVar12 = *(int *)(param_1 + 0x24);
      iVar15 = FUN_3600c3d0((undefined4 *)(iVar12 + local_24 + 4));
      iVar13 = 0;
      if (0 < iVar15) {
        do {
          iVar18 = *(int *)(iVar12 + local_24 + 8);
          puVar5 = (undefined4 *)(DAT_362fde08 + 8 + *(int *)(iVar18 + iVar13 * 8) * 0x18);
          iVar16 = FUN_3615a560(puVar5);
          FUN_3615ab50(puVar5,iVar16 + 1);
          piVar2 = (int *)(*(int *)(DAT_362fde08 + 0xc + *(int *)(iVar18 + iVar13 * 8) * 0x18) +
                          iVar16 * 8);
          piVar2[1] = iVar13;
          *piVar2 = local_20;
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar15);
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + 0xc;
    } while (local_20 < iVar10);
  }
  local_1c = 0;
  if (0 < iVar11) {
    local_20 = 0;
    do {
      iVar12 = FUN_3600c450((undefined4 *)(*(int *)(param_1 + 0x2c) + 8 + local_20));
      iVar15 = 0;
      if (0 < iVar12) {
        local_24 = 0;
        do {
          iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 0xc + local_20);
          puVar5 = (undefined4 *)(DAT_362fde08 + 0x10 + *(int *)(iVar13 + local_24) * 0x18);
          iVar18 = FUN_3615a560(puVar5);
          FUN_3615ab50(puVar5,iVar18 + 1);
          piVar2 = (int *)(*(int *)(DAT_362fde08 + 0x14 + *(int *)(iVar13 + local_24) * 0x18) +
                          iVar18 * 8);
          *piVar2 = local_1c;
          piVar2[1] = iVar15;
          iVar15 = iVar15 + 1;
          local_24 = local_24 + 0x1c;
        } while (iVar15 < iVar12);
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 0x10;
    } while (local_1c < iVar11);
  }
  DAT_362fdd24 = param_1;
  qsort(DAT_362fddf8,sVar8,4,(_PtFuncCompare *)&LAB_36155670);
  iVar12 = *DAT_362fddf8;
  iVar15 = 1;
  *(undefined4 *)(DAT_362fde08 + iVar12 * 0x18) = 0;
  local_20 = 1;
  *DAT_362fde00 = iVar12;
  iVar13 = 1;
  if (1 < (int)sVar8) {
    do {
      iVar18 = DAT_362fddf8[iVar13];
      uVar23 = FUN_36154a40(iVar12);
      if ((int)uVar23 != 0) {
        DAT_362fde00[iVar15] = iVar18;
        iVar15 = iVar15 + 1;
        iVar12 = iVar18;
      }
      *(int *)(DAT_362fde08 + iVar18 * 0x18) = iVar15 + -1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)sVar8);
    local_20 = iVar15;
    if (iVar15 == 0) goto LAB_3615704e;
  }
  sVar8 = (local_20 * 3 + 3) * 4;
  DAT_362fde18 = local_20;
  DAT_362fde1c = (void *)thunk_FUN_361bf99c(sVar8);
  DAT_362fde20 = local_20;
  DAT_362fde24 = (void *)thunk_FUN_361bf99c(sVar8);
LAB_3615704e:
  FUN_3615b070(&DAT_362fde28,iVar9);
  if (0 < iVar9) {
    iVar12 = 0;
    local_1c = iVar9;
    do {
      piVar2 = (int *)(iVar12 + 8 + (int)DAT_362fde2c);
      if (local_20 != 0) {
        *piVar2 = local_20;
        iVar15 = thunk_FUN_361bf99c(local_20 * 8 + 8);
        piVar2[1] = iVar15;
      }
      iVar12 = iVar12 + 0x10;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar12 = 0;
  if (0 < local_20) {
    iVar15 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + DAT_362fde00[iVar12] * 0xc);
      puVar21 = (undefined4 *)((int)DAT_362fde1c + iVar15);
      *puVar21 = *puVar5;
      puVar21[1] = puVar5[1];
      puVar21[2] = puVar5[2];
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + DAT_362fde00[iVar12] * 0xc);
      puVar21 = (undefined4 *)((int)DAT_362fde24 + iVar15);
      *puVar21 = *puVar5;
      puVar21[1] = puVar5[1];
      puVar21[2] = puVar5[2];
      if (0 < iVar9) {
        iVar13 = 0;
        local_1c = iVar9;
        do {
          *(undefined4 *)(iVar13 + (int)DAT_362fde2c) =
               *(undefined4 *)(iVar13 + *(int *)(param_1 + 0x14));
          iVar18 = *(int *)(iVar13 + 0xc + *(int *)(param_1 + 0x14));
          iVar16 = DAT_362fde00[iVar12];
          iVar14 = *(int *)(iVar13 + 0xc + (int)DAT_362fde2c);
          *(undefined4 *)(iVar14 + iVar12 * 8) = *(undefined4 *)(iVar18 + iVar16 * 8);
          *(undefined4 *)(iVar14 + 4 + iVar12 * 8) = *(undefined4 *)(iVar18 + 4 + iVar16 * 8);
          iVar13 = iVar13 + 0x10;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      iVar12 = iVar12 + 1;
      iVar15 = iVar15 + 0xc;
    } while (iVar12 < local_20);
  }
  if (0 < local_c) {
    local_24 = 0;
    do {
      puVar22 = (uint *)(*(int *)(param_1 + 0x1c) + local_24);
      uVar19 = local_20 + 1;
      uVar20 = 0xffffffff;
      iVar9 = FUN_3615a400(puVar22 + 0x10);
      if (0 < iVar9) {
        local_1c = 0;
        local_8 = iVar9;
        do {
          uVar7 = puVar22[0x11];
          iVar12 = 0;
          do {
            uVar6 = *(ushort *)
                     (DAT_362fde08 + (uint)*(ushort *)(uVar7 + local_1c + iVar12 * 2) * 0x18);
            *(ushort *)(uVar7 + local_1c + iVar12 * 2) = uVar6;
            uVar17 = (uint)uVar6;
            if ((int)uVar17 < (int)uVar19) {
              uVar19 = uVar17;
            }
            if ((int)uVar20 < (int)uVar17) {
              uVar20 = uVar17;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < 3);
          local_1c = local_1c + 6;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      *puVar22 = uVar19;
      puVar22[1] = (uVar20 - uVar19) + 1;
      if (0 < iVar9) {
        iVar12 = 0;
        do {
          uVar19 = puVar22[0x11];
          iVar15 = 0;
          do {
            psVar3 = (short *)(uVar19 + iVar12 + iVar15 * 2);
            *psVar3 = *psVar3 - (short)*puVar22;
            iVar15 = iVar15 + 1;
          } while (iVar15 < 3);
          iVar12 = iVar12 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      local_24 = local_24 + 0x48;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  FUN_3615b170(&DAT_362fde38,iVar10);
  local_24 = 0;
  iVar9 = DAT_362fde08;
  if (0 < local_20) {
    do {
      iVar10 = DAT_362fde00[local_24] * 0x18;
      iVar15 = 0;
      iVar12 = FUN_3615a560((undefined4 *)(iVar10 + 8 + iVar9));
      if (0 < iVar12) {
        do {
          iVar9 = *(int *)(iVar10 + 0xc + iVar9);
          iVar18 = *(int *)(iVar9 + iVar15 * 8) * 0xc;
          puVar5 = (undefined4 *)((int)DAT_362fde3c + iVar18);
          iVar13 = FUN_3600c3d0(puVar5 + 1);
          iVar9 = *(int *)(iVar9 + iVar15 * 8 + 4);
          iVar12 = *(int *)(*(int *)(param_1 + 0x24) + 8 + iVar18);
          *puVar5 = *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar18);
          FUN_3615a410(puVar5 + 1,iVar13 + 1);
          *(undefined4 *)(puVar5[2] + 4 + iVar13 * 8) = *(undefined4 *)(iVar12 + iVar9 * 8 + 4);
          *(int *)(puVar5[2] + iVar13 * 8) = local_24;
          iVar9 = DAT_362fde08;
          iVar15 = iVar15 + 1;
          iVar12 = FUN_3615a560((undefined4 *)(iVar10 + 8 + DAT_362fde08));
        } while (iVar15 < iVar12);
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_20);
  }
  FUN_3615b1f0(&DAT_362fde40,iVar11);
  local_24 = 0;
  iVar9 = DAT_362fde08;
  if (0 < local_20) {
    do {
      iVar10 = DAT_362fde00[local_24] * 0x18;
      iVar12 = 0;
      iVar11 = FUN_3615a560((undefined4 *)(iVar10 + 0x10 + iVar9));
      if (0 < iVar11) {
        do {
          iVar9 = *(int *)(iVar10 + 0x14 + iVar9);
          iVar11 = *(int *)(iVar9 + iVar12 * 8) * 0x10;
          puVar5 = (undefined4 *)((int)DAT_362fde44 + iVar11);
          iVar15 = FUN_3600c450(puVar5 + 2);
          iVar9 = *(int *)(iVar9 + iVar12 * 8 + 4) * 0x1c +
                  ((undefined4 *)(*(int *)(param_1 + 0x2c) + iVar11))[3];
          *puVar5 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar11);
          puVar5[1] = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4 + iVar11);
          FUN_3615a4a0(puVar5 + 2,iVar15 + 1);
          iVar15 = iVar15 * 0x1c;
          *(int *)(iVar15 + puVar5[3]) = local_24;
          *(undefined4 *)(puVar5[3] + 4 + iVar15) = *(undefined4 *)(iVar9 + 4);
          *(undefined4 *)(puVar5[3] + 8 + iVar15) = *(undefined4 *)(iVar9 + 8);
          *(undefined4 *)(puVar5[3] + 0xc + iVar15) = *(undefined4 *)(iVar9 + 0xc);
          *(undefined4 *)(puVar5[3] + 0x10 + iVar15) = *(undefined4 *)(iVar9 + 0x10);
          *(undefined4 *)(puVar5[3] + 0x14 + iVar15) = *(undefined4 *)(iVar9 + 0x14);
          *(undefined4 *)(puVar5[3] + 0x18 + iVar15) = *(undefined4 *)(iVar9 + 0x18);
          iVar9 = DAT_362fde08;
          iVar12 = iVar12 + 1;
          iVar11 = FUN_3615a560((undefined4 *)(iVar10 + 0x10 + DAT_362fde08));
        } while (iVar12 < iVar11);
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_20);
  }
  FUN_3615a8f0(param_1,&DAT_362fde18);
  FUN_3615a9a0(param_1 + 8,&DAT_362fde20);
  FUN_3615b7b0(param_1 + 0x28,&DAT_362fde40);
  FUN_3615b6e0(param_1 + 0x20,&DAT_362fde38);
  FUN_3615b5d0(param_1 + 0x10,&DAT_362fde28);
  FUN_36156bf0();
  if (DAT_362fde18 != 0) {
    operator_delete__(DAT_362fde1c);
    DAT_362fde18 = 0;
    DAT_362fde1c = (void *)0x0;
  }
  if (DAT_362fde20 != 0) {
    operator_delete__(DAT_362fde24);
    DAT_362fde20 = 0;
    DAT_362fde24 = (void *)0x0;
  }
  if (DAT_362fde38 != 0) {
    if (DAT_362fde3c != (void *)0x0) {
      pvVar1 = (void *)((int)DAT_362fde3c + -4);
      _eh_vector_destructor_iterator_
                (DAT_362fde3c,0xc,*(int *)((int)DAT_362fde3c + -4),MeshWeightMap::~MeshWeightMap);
      operator_delete__(pvVar1);
    }
    DAT_362fde38 = 0;
    DAT_362fde3c = (void *)0x0;
  }
  if (DAT_362fde40 != 0) {
    if (DAT_362fde44 != (void *)0x0) {
      pvVar1 = (void *)((int)DAT_362fde44 + -4);
      _eh_vector_destructor_iterator_
                (DAT_362fde44,0x10,*(int *)((int)DAT_362fde44 + -4),MeshMorphMap::~MeshMorphMap);
      operator_delete__(pvVar1);
    }
    DAT_362fde40 = 0;
    DAT_362fde44 = (void *)0x0;
  }
  if (DAT_362fde28 != 0) {
    if (DAT_362fde2c != (void *)0x0) {
      pvVar1 = (void *)((int)DAT_362fde2c + -4);
      _eh_vector_destructor_iterator_
                (DAT_362fde2c,0x10,*(int *)((int)DAT_362fde2c + -4),MeshUVMap::~MeshUVMap);
      operator_delete__(pvVar1);
    }
    DAT_362fde28 = 0;
    DAT_362fde2c = (void *)0x0;
  }
  if (DAT_362fde48 != 0) {
    operator_delete__(DAT_362fde4c);
    DAT_362fde48 = 0;
    DAT_362fde4c = (void *)0x0;
  }
  if (DAT_362fde30 != 0) {
    if (DAT_362fde34 != (void *)0x0) {
      pvVar1 = (void *)((int)DAT_362fde34 + -4);
      _eh_vector_destructor_iterator_
                (DAT_362fde34,0x48,*(int *)((int)DAT_362fde34 + -4),MeshSurface::~MeshSurface);
      operator_delete__(pvVar1);
    }
    DAT_362fde30 = 0;
    DAT_362fde34 = (void *)0x0;
  }
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 8;
  FUN_36155690((undefined4 *)param_1);
  return;
}

