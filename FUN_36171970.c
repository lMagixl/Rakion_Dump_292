
void __cdecl FUN_36171970(CTerrain *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  CTStream *unaff_EBX;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int local_4c;
  undefined1 local_48;
  int local_44;
  undefined1 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined1 local_30;
  uint local_2c;
  undefined1 local_28;
  uint local_24;
  undefined1 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a6f3;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  local_14 = DAT_3623ce54;
  local_10 = DAT_3623ce58;
  ExceptionList = &local_c;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_14);
  piVar2 = *(int **)(unaff_EBX + 0x14);
  iVar11 = *piVar2;
  *(int **)(unaff_EBX + 0x14) = piVar2 + 1;
  local_4c = piVar2[1];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 2;
  uVar3 = piVar2[2];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 3;
  uVar4 = piVar2[3];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 4;
  local_38 = (undefined4 *)piVar2[4];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 5;
  local_3c = (undefined4 *)piVar2[5];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 6;
  local_44 = piVar2[6];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 7;
  local_14 = piVar2[7];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 8;
  puVar1[0xc] = piVar2[8];
  iVar10 = *(int *)(unaff_EBX + 0x14);
  *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar10 + 4);
  puVar1[0xd] = *(undefined4 *)(iVar10 + 4);
  puVar1[0xe] = *(undefined4 *)(iVar10 + 8);
  puVar1[0xf] = *(undefined4 *)(iVar10 + 0xc);
  iVar10 = *(int *)(unaff_EBX + 0x14);
  *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar10 + 0xc);
  puVar1[0x10] = *(undefined4 *)(iVar10 + 0xc);
  puVar1[0x11] = *(undefined4 *)(iVar10 + 0x10);
  puVar1[0x12] = *(undefined4 *)(iVar10 + 0x14);
  *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + 0xc;
  iVar10 = local_4c + -1;
  bVar5 = (byte)local_38;
  if ((int)local_38 < 0) {
    uVar6 = iVar11 + -1 >> (-bVar5 & 0x1f);
    uVar7 = iVar10 >> (-bVar5 & 0x1f);
  }
  else {
    uVar6 = iVar11 + -1 << (bVar5 & 0x1f);
    uVar7 = iVar10 << (bVar5 & 0x1f);
  }
  local_24 = uVar7 * uVar6 * 4;
  local_2c = iVar10 * (iVar11 + -1);
  local_1c = (char *)(uVar4 * uVar3 * 4);
  uVar12 = local_4c * iVar11 * 2;
  local_34 = uVar12;
  TR_SetHeightMapSize(param_1,iVar11,local_4c);
  TR_SetShadowMapSize(param_1,(long)local_38,(long)local_3c);
  local_38 = (undefined4 *)puVar1[2];
  local_3c = *(undefined4 **)(puVar1[4] + 0x60);
  puVar14 = (undefined4 *)*puVar1;
  local_4c = DAT_3623ce5c;
  local_48 = DAT_3623ce60;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_4c);
  puVar13 = *(undefined4 **)(unaff_EBX + 0x14);
  for (uVar9 = uVar12 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  for (uVar9 = uVar12 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *(uint *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + uVar12;
  local_34 = DAT_3623ce64;
  local_30 = DAT_3623ce68;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_34);
  puVar14 = *(undefined4 **)(unaff_EBX + 0x14);
  puVar13 = local_38;
  for (uVar9 = local_2c >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar9 = local_2c & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  *(uint *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + local_2c;
  FUN_361731d0((byte *)param_1,1);
  puVar1[8] = uVar3;
  puVar1[9] = uVar4;
  puVar1[0x17] = local_44;
  FUN_36176aa0((CAnimData *)puVar1[4],uVar6,uVar7,2);
  local_2c = DAT_3623ce6c;
  local_28 = DAT_3623ce70;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_2c);
  puVar14 = *(undefined4 **)(unaff_EBX + 0x14);
  puVar13 = local_3c;
  for (uVar9 = local_24 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar9 = local_24 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  *(uint *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + local_24;
  FUN_361754e0((CTextureData *)puVar1[4],uVar6,uVar7);
  local_20 = DAT_3623ce78;
  local_24 = DAT_3623ce74;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_24);
  if (local_44 < 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  else {
    FUN_36176aa0((CAnimData *)puVar1[5],uVar3,uVar4,2);
    puVar14 = *(undefined4 **)(unaff_EBX + 0x14);
    puVar13 = *(undefined4 **)(puVar1[5] + 0x60);
    for (uVar6 = (uint)local_1c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar13 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar6 = (uint)local_1c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar14;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    *(char **)(unaff_EBX + 0x14) = local_1c + *(int *)(unaff_EBX + 0x14);
    FUN_361754e0((CTextureData *)puVar1[5],uVar3,uVar4);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  iVar11 = local_14;
  if (0 < local_14) {
    do {
      local_1c = StringDuplicate(&DAT_36222fa0);
      local_18 = 0;
      local_10 = DAT_3623ce80;
      local_4 = 0;
      local_14 = DAT_3623ce7c;
      CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_14);
      operator>>(unaff_EBX,(CTFileName *)&local_1c);
      lVar8 = TRL_CreateLayer_t(param_1,(CTFileName *)&local_1c);
      TRL_ReadLayerData_t(param_1,lVar8,unaff_EBX);
      local_4 = 0xffffffff;
      StringFree(local_1c);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  local_40 = DAT_3623ce88;
  local_44 = DAT_3623ce84;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_44);
  ExceptionList = local_c;
  return;
}

