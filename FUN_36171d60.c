
void __cdecl FUN_36171d60(CTerrain *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  CTStream *unaff_EBX;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint local_44;
  undefined1 local_40;
  int local_3c;
  undefined1 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
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
  puStack_8 = &LAB_3621a705;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  local_14 = DAT_3623ce8c;
  local_10 = DAT_3623ce90;
  ExceptionList = &local_c;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_14);
  piVar2 = *(int **)(unaff_EBX + 0x14);
  iVar11 = *piVar2;
  *(int **)(unaff_EBX + 0x14) = piVar2 + 1;
  local_3c = piVar2[1];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 2;
  local_30 = (undefined4 *)piVar2[2];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 3;
  local_34 = (undefined4 *)piVar2[3];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 4;
  local_14 = piVar2[4];
  *(int **)(unaff_EBX + 0x14) = piVar2 + 5;
  puVar1[0xc] = piVar2[5];
  iVar7 = *(int *)(unaff_EBX + 0x14);
  *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar7 + 4);
  puVar1[0xd] = *(undefined4 *)(iVar7 + 4);
  puVar1[0xe] = *(undefined4 *)(iVar7 + 8);
  puVar1[0xf] = *(undefined4 *)(iVar7 + 0xc);
  iVar7 = *(int *)(unaff_EBX + 0x14);
  *(undefined4 **)(unaff_EBX + 0x14) = (undefined4 *)(iVar7 + 0xc);
  puVar1[0x10] = *(undefined4 *)(iVar7 + 0xc);
  puVar1[0x11] = *(undefined4 *)(iVar7 + 0x10);
  puVar1[0x12] = *(undefined4 *)(iVar7 + 0x14);
  *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + 0xc;
  iVar7 = local_3c + -1;
  bVar3 = (byte)local_30;
  if ((int)local_30 < 0) {
    local_44 = iVar11 + -1 >> (-bVar3 & 0x1f);
    uVar4 = iVar7 >> (-bVar3 & 0x1f);
  }
  else {
    local_44 = iVar11 + -1 << (bVar3 & 0x1f);
    uVar4 = iVar7 << (bVar3 & 0x1f);
  }
  local_24 = iVar7 * (iVar11 + -1);
  local_1c = (char *)(uVar4 * local_44 * 4);
  uVar8 = local_3c * iVar11 * 2;
  local_2c = uVar8;
  TR_SetHeightMapSize(param_1,iVar11,local_3c);
  TR_SetShadowMapSize(param_1,(long)local_30,(long)local_34);
  local_30 = (undefined4 *)puVar1[2];
  local_34 = *(undefined4 **)(puVar1[4] + 0x60);
  puVar10 = (undefined4 *)*puVar1;
  local_3c = DAT_3623ce94;
  local_38 = DAT_3623ce98;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_3c);
  puVar9 = *(undefined4 **)(unaff_EBX + 0x14);
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  *(uint *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + uVar8;
  local_2c = DAT_3623ce9c;
  local_28 = DAT_3623cea0;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_2c);
  puVar10 = *(undefined4 **)(unaff_EBX + 0x14);
  puVar9 = local_30;
  for (uVar6 = local_24 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = local_24 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *(uint *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + local_24;
  FUN_361731d0((byte *)param_1,1);
  FUN_36176aa0((CAnimData *)puVar1[4],local_44,uVar4,2);
  local_24 = DAT_3623cea4;
  local_20 = DAT_3623cea8;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_24);
  puVar10 = *(undefined4 **)(unaff_EBX + 0x14);
  puVar9 = local_34;
  for (uVar6 = (uint)local_1c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = (uint)local_1c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *(char **)(unaff_EBX + 0x14) = local_1c + *(int *)(unaff_EBX + 0x14);
  FUN_361754e0((CTextureData *)puVar1[4],local_44,uVar4);
  iVar11 = local_14;
  if (0 < local_14) {
    do {
      local_1c = StringDuplicate(&DAT_36222fa0);
      local_18 = 0;
      local_10 = DAT_3623ceb0;
      local_4 = 0;
      local_14 = DAT_3623ceac;
      CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_14);
      operator>>(unaff_EBX,(CTFileName *)&local_1c);
      lVar5 = TRL_CreateLayer_t(param_1,(CTFileName *)&local_1c);
      TRL_ReadLayerData_t(param_1,lVar5,unaff_EBX);
      local_4 = 0xffffffff;
      StringFree(local_1c);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (_bWorldEditorApp == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  else {
    FUN_36176c10((int)param_1);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  local_40 = DAT_3623ceb8;
  local_44 = DAT_3623ceb4;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_44);
  ExceptionList = local_c;
  return;
}

