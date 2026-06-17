
/* private: bool __thiscall Xenesis::xFile::saveBlock(unsigned char *) */

bool __thiscall Xenesis::xFile::saveBlock(xFile *this,uchar *param_1)

{
  ushort uVar1;
  LPCRITICAL_SECTION p_Var2;
  uint *puVar3;
  uchar *puVar4;
  bool bVar5;
  bool bVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  LPCRITICAL_SECTION local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1a43b0  4290  ?saveBlock@xFile@Xenesis@@AAE_NPAE@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b89c;
  local_c = ExceptionList;
  p_Var2 = *(LPCRITICAL_SECTION *)(this + 0x30);
  local_10 = 0;
  ExceptionList = &local_c;
  local_14 = p_Var2;
  FUN_361a3220(p_Var2);
  puVar3 = *(uint **)(this + 0x20);
  local_4 = 0;
  bVar5 = FUN_361a2f10(*(void **)(this + 0x1c),puVar3[3] + *puVar3,
                       puVar3[1] + (uint)CARRY4(puVar3[3],*puVar3));
  puVar4 = param_1;
  if (!bVar5) {
    local_4 = 0xffffffff;
    FUN_361a3230(p_Var2);
    ExceptionList = local_c;
    return false;
  }
  if (*(char *)(*(int *)(this + 0x20) + 0x10) == '\0') {
    bVar5 = FUN_361a2fe0(*(void **)(this + 0x1c),param_1,*(DWORD *)(this + 0x10));
    *(int *)(*(int *)(this + 0x20) + 0xc) =
         *(int *)(*(int *)(this + 0x20) + 0xc) + *(int *)(this + 0x10);
    local_4 = 0xffffffff;
    FUN_361a3230(p_Var2);
    ExceptionList = local_c;
    return bVar5;
  }
  if (*(char *)(*(int *)(this + 0x20) + 0x11) == '\x01') {
    uVar11 = 8 - (*(uint *)(this + 0x10) & 7);
    if (uVar11 != 8) {
      puVar12 = (undefined4 *)(*(uint *)(this + 0x10) + *(int *)(this + 0x18));
      for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      for (uVar10 = uVar11 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(uint *)(this + 0x10) = *(int *)(this + 0x10) + uVar11;
    }
    FUN_361a3cb0(*(void **)(this + 0x24),(uint *)param_1,*(uint *)(this + 0x10));
  }
  local_24 = *(uint *)(this + 0x10);
  local_18 = 0;
  if (puVar4 != puVar4 + (local_24 & 0xfffffffe)) {
    puVar7 = (ushort *)puVar4;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      local_18 = local_18 + (uint)uVar1;
    } while (puVar7 != (ushort *)(puVar4 + (local_24 & 0xfffffffe)));
  }
  local_24 = local_24 * 2;
  FUN_361a4b10(&param_1,local_24);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar8 = FUN_36149a00(param_1,&local_24,(int)puVar4,*(undefined4 *)(this + 0x10));
  bVar5 = iVar8 != 0;
  iVar8 = 5;
  if ((bVar5) || (uVar11 = *(uint *)(this + 0x10), 0x1ffff < uVar11)) {
    local_20 = local_24;
    if (bVar5) {
      local_20 = *(uint *)(this + 0x10) | 0x400000;
    }
    if (0x1fffc < local_24) {
      local_20 = 0x420000;
    }
    bVar6 = FUN_361a2fe0(*(void **)(this + 0x1c),&local_20,3);
    if (!bVar6) goto LAB_361a4608;
  }
  else {
    local_1c = uVar11 | 0x800000;
    if (uVar11 - 3 <= local_24) {
      local_1c = uVar11 | 0xc00000;
    }
    bVar6 = FUN_361a2fe0(*(void **)(this + 0x1c),&local_1c,3);
    if (!bVar6) goto LAB_361a4608;
    if (local_24 < *(int *)(this + 0x10) - 3U) {
      bVar6 = FUN_361a2fe0(*(void **)(this + 0x1c),&local_24,3);
      if (!bVar6) goto LAB_361a4608;
      iVar8 = 8;
    }
  }
  bVar6 = FUN_361a2fe0(*(void **)(this + 0x1c),&local_18,2);
  if (bVar6) {
    if ((bVar5) || (*(int *)(this + 0x10) - 3U <= local_24)) {
      bVar5 = FUN_361a2fe0(*(void **)(this + 0x1c),puVar4,*(DWORD *)(this + 0x10));
      if (bVar5) {
        iVar9 = *(int *)(this + 0x20);
        iVar8 = *(int *)(iVar9 + 0xc) + *(int *)(this + 0x10) + iVar8;
        goto LAB_361a466c;
      }
    }
    else {
      bVar5 = FUN_361a2fe0(*(void **)(this + 0x1c),param_1,local_24);
      if (bVar5) {
        iVar9 = *(int *)(this + 0x20);
        iVar8 = *(int *)(iVar9 + 0xc) + iVar8 + local_24;
LAB_361a466c:
        *(int *)(iVar9 + 0xc) = iVar8;
        *(undefined4 *)(this + 0x10) = 0;
        local_4 = local_4 & 0xffffff00;
        FUN_36018d70(&param_1);
        local_4 = 0xffffffff;
        FUN_361a3230(local_14);
        ExceptionList = local_c;
        return true;
      }
    }
  }
LAB_361a4608:
  local_4 = local_4 & 0xffffff00;
  FUN_36018d70(&param_1);
  local_4 = 0xffffffff;
  FUN_361a3230(local_14);
  ExceptionList = local_c;
  return false;
}

