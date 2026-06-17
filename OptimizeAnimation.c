
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CAnimSet::OptimizeAnimation(struct Animation &,float) */

void __thiscall CAnimSet::OptimizeAnimation(CAnimSet *this,Animation *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  void *local_4c;
  int local_48;
  int local_44;
  int local_40;
  void *local_3c;
  int local_38;
  int local_34;
  Matrix<float,3,3> local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x152ae0  2726  ?OptimizeAnimation@CAnimSet@@QAEXAAUAnimation@@M@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219b0a;
  local_c = ExceptionList;
  uVar1 = *(uint *)(param_1 + 4);
  ExceptionList = &local_c;
  local_58 = FUN_3600cac0((undefined4 *)(param_1 + 0x20));
  if (DAT_362fdd04 != 0) {
    operator_delete__(DAT_362fdd08);
    DAT_362fdd04 = 0;
    DAT_362fdd08 = (undefined4 *)0x0;
  }
  if (uVar1 != 0) {
    DAT_362fdd04 = uVar1;
    DAT_362fdd08 = (undefined4 *)thunk_FUN_361bf99c(uVar1 * 4 + 4);
  }
  if (DAT_362fdd0c != 0) {
    operator_delete__(DAT_362fdd10);
    DAT_362fdd0c = 0;
    DAT_362fdd10 = (undefined4 *)0x0;
  }
  FUN_3604f220(&DAT_362fdd0c,uVar1);
  if (0 < local_58) {
    local_5c = 0;
    do {
      iVar11 = *(int *)(param_1 + 0x24) + local_5c;
      puVar12 = DAT_362fdd08;
      for (uVar7 = uVar1 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar12 = DAT_362fdd10;
      for (uVar7 = uVar1 * 0xc >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      if (0 < (int)uVar1) {
        iVar13 = 0;
        iVar8 = 0;
        uVar7 = uVar1;
        do {
          FUN_36153be0((void *)(*(int *)(iVar11 + 0x20) + 4 + iVar8),(float *)local_30);
          DecomposeRotationMatrixNoSnap((Vector<float,3> *)(iVar13 + (int)DAT_362fdd10),local_30);
          iVar8 = iVar8 + 0x14;
          iVar13 = iVar13 + 0xc;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      local_64 = 0;
      if (0 < (int)uVar1) {
        do {
          iVar8 = 0;
          local_60 = 0;
          do {
            iVar13 = FUN_36152250(iVar8);
            iVar4 = FUN_36152250(iVar13 + 1);
            iVar5 = FUN_36152250(iVar4 + 1);
            if (((iVar13 < 0) || (iVar4 < 0)) || (iVar5 < 0)) break;
            iVar2 = *(int *)(iVar11 + 0x20);
            iVar13 = FUN_36152730((ushort *)(iVar2 + iVar13 * 0x14),(ushort *)(iVar2 + iVar4 * 0x14)
                                  ,(ushort *)(iVar2 + iVar5 * 0x14),param_2);
            if (iVar13 != 0) {
              local_60 = local_60 + 1;
              DAT_362fdd08[iVar4] = 1;
            }
            iVar8 = iVar8 + 2;
          } while (iVar8 < (int)uVar1);
        } while ((local_60 != 0) && (local_64 = local_64 + 1, local_64 < (int)uVar1));
      }
      iVar8 = 0;
      pvVar10 = (void *)0x0;
      local_50 = 0;
      local_4c = (void *)0x0;
      local_48 = 0;
      local_44 = 0x10;
      iVar13 = 0;
      local_4 = 0;
      if (0 < (int)uVar1) {
        local_60 = 0;
        do {
          if (DAT_362fdd08[iVar13] == 0) {
            iVar8 = iVar8 + 1;
            local_48 = iVar8;
            iVar4 = FUN_3600cc40(&local_50);
            if (iVar4 < iVar8) {
              iVar8 = FUN_3600cc40(&local_50);
              FUN_36154390(&local_50,iVar8 + local_44);
              pvVar10 = local_4c;
              iVar8 = local_48;
            }
            puVar12 = (undefined4 *)((int)pvVar10 + iVar8 * 0x14 + -0x14);
            puVar9 = (undefined4 *)(*(int *)(iVar11 + 0x20) + local_60);
            *puVar12 = *puVar9;
            puVar12[1] = puVar9[1];
            puVar12[2] = puVar9[2];
            puVar12[3] = puVar9[3];
            puVar12[4] = puVar9[4];
          }
          iVar13 = iVar13 + 1;
          local_60 = local_60 + 0x14;
        } while (iVar13 < (int)uVar1);
      }
      iVar8 = FUN_36153e20((int)&local_50);
      if (*(int *)(iVar11 + 0x1c) != 0) {
        operator_delete__(*(void **)(iVar11 + 0x20));
        *(undefined4 *)(iVar11 + 0x1c) = 0;
        *(undefined4 *)(iVar11 + 0x20) = 0;
      }
      if (iVar8 != 0) {
        *(int *)(iVar11 + 0x1c) = iVar8;
        uVar6 = thunk_FUN_361bf99c((iVar8 * 5 + 5) * 4);
        *(undefined4 *)(iVar11 + 0x20) = uVar6;
        if (0 < iVar8) {
          iVar13 = 0;
          do {
            puVar9 = (undefined4 *)(*(int *)(iVar11 + 0x20) + iVar13);
            puVar12 = (undefined4 *)((int)pvVar10 + iVar13);
            *puVar9 = *puVar12;
            puVar9[1] = puVar12[1];
            puVar9[2] = puVar12[2];
            puVar9[3] = puVar12[3];
            iVar13 = iVar13 + 0x14;
            iVar8 = iVar8 + -1;
            puVar9[4] = puVar12[4];
          } while (iVar8 != 0);
        }
      }
      iVar8 = FUN_3600cc40(&local_50);
      if (iVar8 != 0) {
        operator_delete__(pvVar10);
        local_50 = 0;
        local_4c = (void *)0x0;
        local_48 = 0;
      }
      puVar12 = DAT_362fdd08;
      for (uVar7 = uVar1 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      local_64 = 0;
      if (0 < (int)uVar1) {
        do {
          iVar8 = 0;
          local_60 = 0;
          do {
            iVar13 = FUN_36152250(iVar8);
            iVar4 = FUN_36152250(iVar13 + 1);
            iVar5 = FUN_36152250(iVar4 + 1);
            if (((iVar13 < 0) || (iVar4 < 0)) || (iVar5 < 0)) break;
            iVar2 = *(int *)(iVar11 + 0x18);
            iVar13 = FUN_36152890((ushort *)(iVar13 * 0x10 + iVar2),(ushort *)(iVar4 * 0x10 + iVar2)
                                  ,(ushort *)(iVar5 * 0x10 + iVar2),param_2);
            if (iVar13 != 0) {
              DAT_362fdd08[iVar4] = 1;
              local_60 = local_60 + 1;
            }
            iVar8 = iVar8 + 2;
          } while (iVar8 < (int)uVar1);
        } while ((local_60 != 0) && (local_64 = local_64 + 1, local_64 < (int)uVar1));
      }
      iVar13 = 0;
      pvVar10 = (void *)0x0;
      iVar8 = 0;
      local_40 = 0;
      local_3c = (void *)0x0;
      local_38 = 0;
      local_34 = 0x10;
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0 < (int)uVar1) {
        local_60 = 0;
        do {
          if (DAT_362fdd08[iVar13] == 0) {
            iVar8 = iVar8 + 1;
            local_38 = iVar8;
            iVar4 = FUN_3600cbf0(&local_40);
            if (iVar4 < iVar8) {
              iVar8 = FUN_3600cbf0(&local_40);
              FUN_361542b0(&local_40,iVar8 + local_34);
              pvVar10 = local_3c;
              iVar8 = local_38;
            }
            puVar12 = (undefined4 *)(iVar8 * 0x10 + -0x10 + (int)pvVar10);
            puVar9 = (undefined4 *)(*(int *)(iVar11 + 0x18) + local_60);
            *puVar12 = *puVar9;
            puVar12[1] = puVar9[1];
            puVar12[2] = puVar9[2];
            puVar12[3] = puVar9[3];
          }
          iVar13 = iVar13 + 1;
          local_60 = local_60 + 0x10;
        } while (iVar13 < (int)uVar1);
      }
      iVar8 = FUN_36153e40((int)&local_40);
      if (*(int *)(iVar11 + 0x14) != 0) {
        operator_delete__(*(void **)(iVar11 + 0x18));
        *(undefined4 *)(iVar11 + 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x18) = 0;
      }
      if (iVar8 != 0) {
        *(int *)(iVar11 + 0x14) = iVar8;
        uVar6 = thunk_FUN_361bf99c((iVar8 + 1) * 0x10);
        *(undefined4 *)(iVar11 + 0x18) = uVar6;
        if (0 < iVar8) {
          iVar13 = 0;
          do {
            puVar12 = (undefined4 *)((int)pvVar10 + iVar13);
            puVar9 = (undefined4 *)(*(int *)(iVar11 + 0x18) + iVar13);
            *puVar9 = *puVar12;
            puVar9[1] = puVar12[1];
            puVar9[2] = puVar12[2];
            iVar13 = iVar13 + 0x10;
            iVar8 = iVar8 + -1;
            puVar9[3] = puVar12[3];
          } while (iVar8 != 0);
        }
      }
      iVar11 = FUN_3600cbf0(&local_40);
      if (iVar11 == 0) {
        if (local_40 != 0) {
          operator_delete__(pvVar10);
          goto LAB_3615300b;
        }
      }
      else {
        operator_delete__(pvVar10);
        local_38 = 0;
LAB_3615300b:
        local_40 = 0;
        local_3c = (void *)0x0;
      }
      local_4 = 0xffffffff;
      if (local_50 != 0) {
        operator_delete__(local_4c);
        local_50 = 0;
        local_4c = (void *)0x0;
      }
      local_5c = local_5c + 0x2c;
      local_58 = local_58 + -1;
    } while (local_58 != 0);
  }
  if (DAT_362fdd04 != 0) {
    operator_delete__(DAT_362fdd08);
    DAT_362fdd04 = 0;
    DAT_362fdd08 = (undefined4 *)0x0;
  }
  pvVar10 = (void *)0x0;
  iVar11 = 0;
  local_40 = 0;
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0x10;
  local_4 = 2;
  local_58 = FUN_3600caa0((undefined4 *)(param_1 + 0x18));
  if (0 < local_58) {
    param_2 = 0.0;
    do {
      puVar12 = (undefined4 *)(*(int *)(param_1 + 0x1c) + (int)param_2);
      iVar8 = FUN_3600cba0(puVar12 + 1);
      iVar13 = 0;
      do {
        if (iVar8 <= iVar13) goto LAB_36153157;
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
      } while (*(float *)(puVar12[2] + iVar4) == _DAT_3622376c);
      iVar11 = iVar11 + 1;
      local_38 = iVar11;
      iVar8 = FUN_3600caa0(&local_40);
      if (iVar8 < iVar11) {
        iVar11 = FUN_3600caa0(&local_40);
        FUN_36154590(&local_40,iVar11 + local_34);
        pvVar10 = local_3c;
        iVar11 = local_38;
      }
      puVar9 = (undefined4 *)((int)pvVar10 + iVar11 * 0xc + -0xc);
      *puVar9 = *puVar12;
      FUN_36010b30(puVar9 + 1,puVar12 + 1);
LAB_36153157:
      param_2 = (float)((int)param_2 + 0xc);
      local_58 = local_58 + -1;
    } while (local_58 != 0);
  }
  iVar11 = FUN_36153e60((int)&local_40);
  if (*(int *)(param_1 + 0x18) != 0) {
    pvVar3 = *(void **)(param_1 + 0x1c);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,0xc,*(int *)((int)pvVar3 + -4),FUN_36010a40);
      operator_delete__((void *)((int)pvVar3 + -4));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_36014780(param_1 + 0x18,iVar11);
  if (0 < iVar11) {
    iVar8 = 0;
    do {
      iVar13 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar13 + iVar8) = *(undefined4 *)((int)pvVar10 + iVar8);
      FUN_36010b30((undefined4 *)(iVar13 + iVar8) + 1,(undefined4 *)((int)pvVar10 + iVar8 + 4));
      iVar8 = iVar8 + 0xc;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  local_4 = 0xffffffff;
  if ((local_40 != 0) && (pvVar10 != (void *)0x0)) {
    _eh_vector_destructor_iterator_(pvVar10,0xc,*(int *)((int)pvVar10 + -4),FUN_36010a40);
    operator_delete__((void *)((int)pvVar10 + -4));
  }
  ExceptionList = local_c;
  return;
}

