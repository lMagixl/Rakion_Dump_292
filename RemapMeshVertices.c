
/* void __cdecl RemapMeshVertices(struct MeshLOD &,long const *,long) */

void __cdecl RemapMeshVertices(MeshLOD *param_1,long *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  MeshLOD *pMVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  size_t sVar11;
  undefined4 *puVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  int local_30;
  long local_2c;
  void *local_28;
  long local_24;
  void *local_20;
  long local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  lVar5 = param_3;
                    /* 0x155320  3112  ?RemapMeshVertices@@YAXAAUMeshLOD@@PBJJ@Z */
  pMVar4 = param_1;
  puStack_8 = &LAB_36219c3b;
  local_c = ExceptionList;
  local_1c = 0;
  local_18 = (void *)0x0;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_2c = 0;
  local_28 = (void *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 3;
  ExceptionList = &local_c;
  iVar6 = FUN_3615a370((undefined4 *)(param_1 + 0x30));
  if (param_3 != 0) {
    sVar11 = (param_3 * 3 + 3) * 4;
    local_1c = param_3;
    local_18 = (void *)thunk_FUN_361bf99c(sVar11);
    local_24 = param_3;
    local_20 = (void *)thunk_FUN_361bf99c(sVar11);
    local_2c = param_3;
    local_28 = (void *)thunk_FUN_361bf99c(param_3 * 8 + 8);
  }
  if (0 < iVar6) {
    local_14 = iVar6;
    local_10 = (void *)thunk_FUN_361bf99c(iVar6 * 8 + 8);
  }
  iVar8 = 0;
  if (0 < param_3) {
    param_3 = 0;
    do {
      iVar9 = param_2[iVar8];
      puVar12 = (undefined4 *)(*(int *)(param_1 + 4) + param_3);
      puVar10 = (undefined4 *)((int)local_18 + iVar9 * 0xc);
      *puVar10 = *puVar12;
      puVar10[1] = puVar12[1];
      puVar10[2] = puVar12[2];
      puVar12 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_3);
      puVar10 = (undefined4 *)(iVar9 * 0xc + (int)local_20);
      *puVar10 = *puVar12;
      puVar10[1] = puVar12[1];
      iVar8 = iVar8 + 1;
      param_3 = param_3 + 0xc;
      puVar10[2] = puVar12[2];
    } while (iVar8 < lVar5);
  }
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      iVar9 = *(int *)(param_1 + 0x34);
      iVar2 = param_2[iVar8];
      *(undefined4 *)((int)local_10 + iVar2 * 8) = *(undefined4 *)(iVar9 + iVar8 * 8);
      *(undefined4 *)((int)local_10 + iVar2 * 8 + 4) = *(undefined4 *)(iVar9 + 4 + iVar8 * 8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  FUN_3615a8f0(param_1,&local_1c);
  FUN_3615a9a0(param_1 + 8,&local_24);
  FUN_3615aa50(param_1 + 0x30,&local_14);
  local_30 = FUN_3615a240((undefined4 *)(param_1 + 0x10));
  if (0 < local_30) {
    param_3 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x14);
      iVar8 = 0;
      if (0 < lVar5) {
        do {
          iVar2 = *(int *)(iVar6 + param_3 + 0xc);
          iVar3 = param_2[iVar8];
          *(undefined4 *)((int)local_28 + iVar3 * 8) = *(undefined4 *)(iVar2 + iVar8 * 8);
          iVar9 = iVar8 * 8;
          iVar8 = iVar8 + 1;
          *(undefined4 *)((int)local_28 + iVar3 * 8 + 4) = *(undefined4 *)(iVar2 + 4 + iVar9);
        } while (iVar8 < lVar5);
      }
      FUN_36010290((void *)(iVar6 + param_3 + 8),&local_2c);
      param_3 = param_3 + 0x10;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  param_3 = FUN_3615a2c0((undefined4 *)(param_1 + 0x20));
  if (0 < param_3) {
    param_1 = (MeshLOD *)0x0;
    do {
      iVar6 = *(int *)(pMVar4 + 0x24);
      iVar8 = FUN_3600c3d0((undefined4 *)(param_1 + iVar6 + 4));
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          iVar2 = iVar9 * 8;
          iVar3 = iVar9 * 8;
          iVar9 = iVar9 + 1;
          *(long *)(*(int *)(param_1 + iVar6 + 8) + iVar3) =
               param_2[*(int *)(*(int *)(param_1 + iVar6 + 8) + iVar2)];
        } while (iVar9 < iVar8);
      }
      param_1 = param_1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  param_3 = FUN_3615a300((undefined4 *)(pMVar4 + 0x28));
  if (0 < param_3) {
    param_1 = (MeshLOD *)0x0;
    do {
      iVar6 = *(int *)(pMVar4 + 0x2c);
      iVar8 = FUN_3600c450((undefined4 *)(param_1 + iVar6 + 8));
      if (0 < iVar8) {
        iVar9 = 0;
        do {
          piVar1 = (int *)(*(int *)(param_1 + iVar6 + 0xc) + iVar9);
          plVar7 = (long *)(*(int *)(param_1 + iVar6 + 0xc) + iVar9);
          iVar9 = iVar9 + 0x1c;
          iVar8 = iVar8 + -1;
          *plVar7 = param_2[*piVar1];
        } while (iVar8 != 0);
      }
      param_1 = param_1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  pvVar13 = local_18;
  if (local_1c != 0) {
    operator_delete__(local_18);
    local_1c = 0;
    pvVar13 = (void *)0x0;
  }
  pvVar15 = local_20;
  if (local_24 != 0) {
    operator_delete__(local_20);
    local_24 = 0;
    pvVar15 = (void *)0x0;
  }
  pvVar14 = local_28;
  if (local_2c != 0) {
    operator_delete__(local_28);
    local_2c = 0;
    pvVar14 = (void *)0x0;
  }
  if (local_14 != 0) {
    operator_delete__(local_10);
  }
  if (local_2c != 0) {
    operator_delete__(pvVar14);
  }
  if (local_24 != 0) {
    operator_delete__(pvVar15);
  }
  if (local_1c != 0) {
    operator_delete__(pvVar13);
  }
  ExceptionList = local_c;
  return;
}

