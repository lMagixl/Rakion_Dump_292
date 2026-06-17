
void __cdecl FUN_360352b0(CTStream *param_1,CModelInstance *param_2)

{
  CTStream *pCVar1;
  int iVar2;
  CTStream *pCVar3;
  CMesh *pCVar4;
  long lVar5;
  CSkeleton *pCVar6;
  CAnimSet *pCVar7;
  undefined4 *puVar8;
  CModelInstance *pCVar9;
  int *piVar10;
  int iVar11;
  CModelInstance *pCVar12;
  undefined4 *puVar13;
  int iVar14;
  int local_30;
  char *local_2c;
  char *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pCVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ff79;
  local_c = ExceptionList;
  local_10 = CONCAT31(local_10._1_3_,DAT_36225a0c);
  local_14 = DAT_36225a08;
  ExceptionList = &local_c;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_14);
  local_28 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  operator>>(pCVar3,(CTString *)&local_28);
  pCVar12 = param_2;
  CModelInstance::SetName(param_2,(CTString *)&local_28);
  iVar14 = **(int **)(pCVar3 + 0x14);
  *(int **)(pCVar3 + 0x14) = *(int **)(pCVar3 + 0x14) + 1;
  FUN_36036860(pCVar12 + 4,iVar14);
  if (0 < iVar14) {
    local_30 = 0;
    local_20 = iVar14;
    do {
      puVar13 = (undefined4 *)(*(int *)(pCVar12 + 8) + local_30);
      local_1c = StringDuplicate(&DAT_36222fa0);
      local_18 = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      operator>>(pCVar3,(CTFileName *)&local_1c);
      pCVar4 = CStock_CMesh::Obtain_t(_pMeshStock,(CTFileName *)&local_1c);
      *puVar13 = pCVar4;
      iVar14 = **(int **)(pCVar3 + 0x14);
      *(int **)(pCVar3 + 0x14) = *(int **)(pCVar3 + 0x14) + 1;
      FUN_36036260(puVar13 + 1,iVar14);
      if (0 < iVar14) {
        iVar11 = 0;
        local_24 = iVar14;
        do {
          iVar14 = puVar13[2];
          local_14 = StringDuplicate(&DAT_36222fa0);
          local_10 = 0;
          local_4._0_1_ = 2;
          param_1 = (CTStream *)StringDuplicate(&DAT_36222fa0);
          local_4._0_1_ = 3;
          operator>>(pCVar3,(CTFileName *)&local_14);
          operator>>(pCVar3,(CTString *)&param_1);
          lVar5 = ska_StringToID((CTString *)&param_1);
          *(long *)((CTextureObject *)(iVar14 + iVar11) + 0x18) = lVar5;
          CTextureObject::SetData_t((CTextureObject *)(iVar14 + iVar11),(CTFileName *)&local_14);
          local_4._0_1_ = 2;
          StringFree((char *)param_1);
          local_4 = CONCAT31(local_4._1_3_,1);
          StringFree(local_14);
          iVar11 = iVar11 + 0x1c;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        local_24 = 0;
        pCVar12 = param_2;
      }
      local_4 = local_4 & 0xffffff00;
      StringFree(local_1c);
      local_30 = local_30 + 0xc;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_20 = 0;
  }
  *(undefined4 *)pCVar12 = 0;
  iVar14 = **(int **)(pCVar3 + 0x14);
  *(int **)(pCVar3 + 0x14) = *(int **)(pCVar3 + 0x14) + 1;
  if (iVar14 != 0) {
    local_14 = StringDuplicate(&DAT_36222fa0);
    local_10 = 0;
    local_4._0_1_ = 4;
    operator>>(pCVar3,(CTFileName *)&local_14);
    pCVar6 = CStock_CSkeleton::Obtain_t(_pSkeletonStock,(CTFileName *)&local_14);
    *(CSkeleton **)pCVar12 = pCVar6;
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_14);
  }
  iVar14 = **(int **)(pCVar3 + 0x14);
  *(int **)(pCVar3 + 0x14) = *(int **)(pCVar3 + 0x14) + 1;
  if (0 < iVar14) {
    do {
      local_14 = StringDuplicate(&DAT_36222fa0);
      local_10 = 0;
      local_4._0_1_ = 5;
      operator>>(pCVar3,(CTFileName *)&local_14);
      pCVar7 = CStock_CAnimSet::Obtain_t(_pAnimSetStock,(CTFileName *)&local_14);
      FUN_360368e0(pCVar12 + 0x34,pCVar7);
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(local_14);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  pCVar1 = (CTStream *)**(int **)(pCVar3 + 0x14);
  *(int **)(pCVar3 + 0x14) = *(int **)(pCVar3 + 0x14) + 1;
  FUN_36036300(pCVar12 + 0x1c,(int)pCVar1);
  if (0 < (int)pCVar1) {
    iVar14 = 0;
    param_1 = pCVar1;
    do {
      puVar13 = *(undefined4 **)(pCVar3 + 0x14);
      puVar8 = (undefined4 *)(*(int *)(pCVar12 + 0x20) + iVar14);
      *puVar8 = *puVar13;
      puVar8[1] = puVar13[1];
      puVar8[2] = puVar13[2];
      iVar11 = *(int *)(pCVar3 + 0x14);
      *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar11 + 0xc);
      puVar8[3] = *(undefined4 *)(iVar11 + 0xc);
      puVar8[4] = *(undefined4 *)(iVar11 + 0x10);
      puVar8[5] = *(undefined4 *)(iVar11 + 0x14);
      iVar14 = iVar14 + 0x20;
      param_1 = param_1 + -1;
      *(int *)(pCVar3 + 0x14) = *(int *)(pCVar3 + 0x14) + 0xc;
    } while (param_1 != (CTStream *)0x0);
  }
  *(undefined4 *)(pCVar12 + 0xec) = **(undefined4 **)(pCVar3 + 0x14);
  iVar14 = *(int *)(pCVar3 + 0x14);
  *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar14 + 4);
  *(undefined4 *)(pCVar12 + 0x90) = *(undefined4 *)(iVar14 + 4);
  *(undefined4 *)(pCVar12 + 0x94) = *(undefined4 *)(iVar14 + 8);
  *(undefined4 *)(pCVar12 + 0x98) = *(undefined4 *)(iVar14 + 0xc);
  iVar14 = *(int *)(pCVar3 + 0x14);
  *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar14 + 0xc);
  *(undefined4 *)(pCVar12 + 0xf0) = *(undefined4 *)(iVar14 + 0xc);
  iVar14 = *(int *)(pCVar3 + 0x14);
  piVar10 = (int *)(iVar14 + 4);
  *(int **)(pCVar3 + 0x14) = piVar10;
  iVar11 = *piVar10;
  pCVar9 = pCVar12 + 0xbc;
  *(int *)(pCVar3 + 0x14) = iVar14 + 8;
  if (0 < iVar11) {
    *(int *)(pCVar12 + 0xc4) = *(int *)(pCVar12 + 0xc4) + iVar11;
    iVar14 = FUN_36036060((undefined4 *)pCVar9);
    if (iVar14 < *(int *)(pCVar12 + 0xc4)) {
      param_1 = *(CTStream **)(pCVar12 + 200);
      local_20 = (iVar11 + -1) / (int)param_1 + 1;
      iVar14 = FUN_36036060((undefined4 *)pCVar9);
      FUN_36036b40(pCVar9,iVar14 + (int)param_1 * local_20);
    }
    if (0 < iVar11) {
      local_30 = 0;
      local_24 = iVar11;
      do {
        puVar13 = (undefined4 *)(*(int *)(pCVar12 + 0xc0) + local_30);
        *puVar13 = **(undefined4 **)(pCVar3 + 0x14);
        iVar14 = *(int *)(pCVar3 + 0x14);
        *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar14 + 4);
        puVar13[1] = *(undefined4 *)(iVar14 + 4);
        iVar14 = *(int *)(pCVar3 + 0x14);
        piVar10 = (int *)(iVar14 + 4);
        *(int **)(pCVar3 + 0x14) = piVar10;
        local_20 = *piVar10;
        *(int *)(pCVar3 + 0x14) = iVar14 + 8;
        if (0 < local_20) {
          puVar8 = puVar13 + 2;
          puVar13[4] = puVar13[4] + local_20;
          iVar14 = FUN_36036080(puVar8);
          if (iVar14 < (int)puVar13[4]) {
            local_1c = (char *)puVar13[5];
            local_14 = (char *)((local_20 + -1) / (int)local_1c + 1);
            iVar14 = FUN_36036080(puVar8);
            FUN_36036480(puVar8,iVar14 + (int)local_1c * (int)local_14);
          }
          if (0 < local_20) {
            iVar14 = 0;
            do {
              iVar11 = puVar13[3];
              *(undefined4 *)(iVar11 + 8 + iVar14) = **(undefined4 **)(pCVar3 + 0x14);
              iVar2 = *(int *)(pCVar3 + 0x14);
              iVar11 = iVar11 + iVar14;
              *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar2 + 4);
              *(undefined4 *)(iVar11 + 0x14) = *(undefined4 *)(iVar2 + 4);
              iVar2 = *(int *)(pCVar3 + 0x14);
              *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar2 + 4);
              *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(iVar2 + 4);
              iVar2 = *(int *)(pCVar3 + 0x14);
              *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar2 + 4);
              *(undefined4 *)(iVar11 + 0x1c) = *(undefined4 *)(iVar2 + 4);
              *(int *)(pCVar3 + 0x14) = *(int *)(pCVar3 + 0x14) + 4;
              param_1 = (CTStream *)StringDuplicate(&DAT_36222fa0);
              local_4._0_1_ = 6;
              operator>>(pCVar3,(CTString *)&param_1);
              lVar5 = ska_StringToID((CTString *)&param_1);
              *(long *)(iVar11 + 0x10) = lVar5;
              local_4 = (uint)local_4._1_3_ << 8;
              StringFree((char *)param_1);
              iVar14 = iVar14 + 0x20;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            local_20 = 0;
            pCVar12 = param_2;
          }
        }
        local_30 = local_30 + 0x18;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  pCVar12 = param_2;
  puVar13 = *(undefined4 **)(pCVar3 + 0x14);
  pCVar9 = param_2 + 0xcc;
  for (iVar14 = 7; iVar14 != 0; iVar14 = iVar14 + -1) {
    *(undefined4 *)pCVar9 = *puVar13;
    puVar13 = puVar13 + 1;
    pCVar9 = pCVar9 + 4;
  }
  *(int *)(pCVar3 + 0x14) = *(int *)(pCVar3 + 0x14) + 0x1c;
  local_2c = StringDuplicate(&DAT_36222fa0);
  local_4 = CONCAT31(local_4._1_3_,7);
  operator>>(pCVar3,(CTString *)&local_2c);
  lVar5 = ska_StringToID((CTString *)&local_2c);
  *(long *)(pCVar12 + 0xe8) = lVar5;
  iVar14 = **(int **)(pCVar3 + 0x14);
  *(int **)(pCVar3 + 0x14) = *(int **)(pCVar3 + 0x14) + 1;
  if (0 < iVar14) {
    do {
      param_2 = (CModelInstance *)&stack0xffffffbc;
      StringDuplicate(&DAT_36225a0d);
      pCVar9 = CreateModelInstance();
      FUN_36036920(pCVar12 + 0x4c,pCVar9);
      ReadModelInstance_t(pCVar3,pCVar9,0);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  local_4 = local_4 & 0xffffff00;
  StringFree(local_2c);
  local_4 = 0xffffffff;
  StringFree(local_28);
  ExceptionList = local_c;
  return;
}

