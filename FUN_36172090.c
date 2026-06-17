
void __cdecl FUN_36172090(CTerrain *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  CTStream *unaff_EBX;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  char *local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined1 local_3c;
  undefined4 *local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  undefined4 *local_24;
  undefined1 local_20;
  uint local_1c;
  undefined1 local_18;
  undefined4 *local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a717;
  local_c = ExceptionList;
  piVar8 = *(int **)(unaff_EBX + 0x14);
  iVar1 = *piVar8;
  puVar14 = *(undefined4 **)(param_1 + 0x2c);
  ExceptionList = &local_c;
  *(int **)(unaff_EBX + 0x14) = piVar8 + 1;
  iVar2 = piVar8[1];
  *(int **)(unaff_EBX + 0x14) = piVar8 + 2;
  puVar14[0xd] = piVar8[2];
  puVar14[0xe] = piVar8[3];
  puVar14[0xf] = piVar8[4];
  iVar4 = *(int *)(unaff_EBX + 0x14);
  *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 0xc);
  puVar14[0xc] = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(unaff_EBX + 0x14);
  *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
  puVar14[0x10] = *(undefined4 *)(iVar4 + 4);
  puVar14[0x11] = *(undefined4 *)(iVar4 + 8);
  puVar14[0x12] = *(undefined4 *)(iVar4 + 0xc);
  *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + 0xc;
  local_14 = (undefined4 *)DAT_3623cebc;
  local_10 = DAT_3623cec0;
  local_38 = puVar14;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_14);
  piVar8 = *(int **)(unaff_EBX + 0x14);
  iVar4 = *piVar8;
  *(int **)(unaff_EBX + 0x14) = piVar8 + 1;
  iVar5 = piVar8[1];
  *(int **)(unaff_EBX + 0x14) = piVar8 + 2;
  TR_SetHeightMapSize(param_1,iVar1,iVar2);
  TR_SetShadowMapSize(param_1,iVar4,iVar5);
  TR_FillEdgeMap(param_1,0xff);
  local_2c = iVar1 + -1;
  local_34 = iVar2 + -1;
  bVar3 = (byte)iVar4;
  if (iVar4 < 0) {
    uVar11 = local_2c >> (-bVar3 & 0x1f);
    uVar12 = local_2c >> (-bVar3 & 0x1f);
  }
  else {
    uVar11 = local_2c << (bVar3 & 0x1f);
    uVar12 = local_2c << (bVar3 & 0x1f);
  }
  bVar3 = (byte)iVar5;
  if (iVar5 < 0) {
    iVar4 = (int)uVar11 >> (-bVar3 & 0x1f);
    iVar5 = (int)uVar12 >> (-bVar3 & 0x1f);
  }
  else {
    iVar4 = uVar11 << (bVar3 & 0x1f);
    iVar5 = uVar12 << (bVar3 & 0x1f);
  }
  uVar15 = iVar2 * iVar1;
  local_1c = uVar15 * 2;
  local_14 = (undefined4 *)*puVar14;
  local_48 = (char *)(iVar5 * iVar4 * 2);
  local_24 = (undefined4 *)puVar14[2];
  puVar6 = AllocMemory(uVar15);
  puVar7 = AllocMemory(uVar15);
  local_40 = AllocMemory((long)local_48);
  FUN_36176aa0((CAnimData *)puVar14[4],uVar11,uVar12,2);
  puVar13 = *(undefined4 **)(unaff_EBX + 0x14);
  puVar14 = *(undefined4 **)(puVar14[4] + 0x60);
  for (uVar10 = uVar12 * uVar11 & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *(uint *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + uVar12 * uVar11 * 4;
  FUN_361754e0((CTextureData *)local_38[4],uVar11,uVar12);
  puVar14 = *(undefined4 **)(unaff_EBX + 0x14);
  puVar13 = local_40;
  for (uVar11 = (uint)local_48 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar11 = (uint)local_48 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  *(char **)(unaff_EBX + 0x14) = local_48 + *(int *)(unaff_EBX + 0x14);
  FreeMemory(local_40);
  local_40 = (undefined4 *)DAT_3623cec4;
  local_3c = DAT_3623cec8;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_40);
  iVar4 = DAT_3623cecc;
  local_3c = DAT_3623ced0;
  piVar8 = (int *)CTStream::PeekID_t(unaff_EBX);
  if (*piVar8 == iVar4) {
    local_3c = DAT_3623ced8;
    local_40 = (undefined4 *)DAT_3623ced4;
    CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_40);
    puVar14 = *(undefined4 **)(unaff_EBX + 0x14);
    puVar13 = puVar6;
    for (uVar11 = uVar15 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar13 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar11 = uVar15 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar14;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    *(uint *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + uVar15;
    local_3c = DAT_3623cee0;
    local_40 = (undefined4 *)DAT_3623cedc;
    CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_40);
    FUN_361795b0(local_24,local_2c,local_34,(int)puVar6,iVar1,iVar2,0xff);
    FUN_361731d0((byte *)param_1,1);
  }
  local_20 = DAT_3623cee8;
  local_24 = (undefined4 *)DAT_3623cee4;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_24);
  puVar14 = *(undefined4 **)(unaff_EBX + 0x14);
  for (uVar11 = local_1c >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *local_14 = *puVar14;
    puVar14 = puVar14 + 1;
    local_14 = local_14 + 1;
  }
  for (uVar11 = local_1c & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)local_14 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    local_14 = (undefined4 *)((int)local_14 + 1);
  }
  *(uint *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + local_1c;
  local_10 = DAT_3623cef0;
  local_14 = (undefined4 *)DAT_3623ceec;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_14);
  local_10 = DAT_3623cef8;
  local_14 = (undefined4 *)DAT_3623cef4;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_14);
  puVar14 = (undefined4 *)**(int **)(unaff_EBX + 0x14);
  *(int **)(unaff_EBX + 0x14) = *(int **)(unaff_EBX + 0x14) + 1;
  if (0 < (int)puVar14) {
    do {
      local_40 = puVar14;
      local_48 = StringDuplicate(&DAT_36222fa0);
      local_44 = 0;
      local_4 = 0;
      local_18 = DAT_3623cf00;
      local_1c = DAT_3623cefc;
      CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_1c);
      operator>>(unaff_EBX,(CTFileName *)&local_48);
      local_24 = (undefined4 *)DAT_3623cf04;
      local_20 = DAT_3623cf08;
      CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_24);
      *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + 8;
      lVar9 = TRL_CreateLayer_t(param_1,(CTFileName *)&local_48);
      local_14 = (undefined4 *)lVar9;
      TRL_FillLayerData(param_1,lVar9,0xff);
      iVar4 = *(int *)(lVar9 * 0x94 + local_38[0x43]);
      iVar5 = lVar9 * 0x94 + local_38[0x43];
      puVar14 = *(undefined4 **)(unaff_EBX + 0x14);
      puVar13 = puVar7;
      for (uVar11 = uVar15 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar13 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar11 = uVar15 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      *(uint *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + uVar15;
      FUN_361795b0(*(undefined4 **)(iVar4 + 0x30),iVar1 + -1,iVar2 + -1,(int)puVar7,iVar1,iVar2,0xff
                  );
      puVar14 = local_14;
      FUN_361733b0((byte *)param_1,(int)local_14,1);
      local_2c = DAT_3623cf0c;
      local_28 = DAT_3623cf10;
      CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_2c);
      operator>>(unaff_EBX,(CTString *)(iVar5 + 8));
      *(undefined4 *)(iVar5 + 0xc) = **(undefined4 **)(unaff_EBX + 0x14);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 100) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x68) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x6c) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x84) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x88) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)(iVar4 + 4);
      iVar4 = *(int *)(unaff_EBX + 0x14);
      *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar4 + 4);
      *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + 0x28;
      TRL_ApplyLayerMatrix(param_1,(long)puVar14);
      local_4 = 0xffffffff;
      StringFree(local_48);
      local_40 = (undefined4 *)((int)local_40 + -1);
      puVar14 = local_40;
    } while (local_40 != (undefined4 *)0x0);
  }
  FreeMemory(puVar6);
  FreeMemory(puVar7);
  local_10 = DAT_3623cf18;
  local_14 = (undefined4 *)DAT_3623cf14;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_14);
  if (_bWorldEditorApp == 0) {
    uVar11 = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  else {
    FUN_36176c10((int)param_1);
    uVar11 = *(uint *)(param_1 + 8) | 1;
  }
  *(uint *)(param_1 + 8) = uVar11;
  local_30 = DAT_3623cf20;
  local_34 = DAT_3623cf1c;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_34);
  ExceptionList = local_c;
  return;
}

