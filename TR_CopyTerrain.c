
/* void __cdecl TR_CopyTerrain(class CTerrain *,class CTerrain const *) */

void __cdecl TR_CopyTerrain(CTerrain *param_1,CTerrain *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  CTerrain *pCVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pCVar5 = param_1;
                    /* 0x173bf0  3749  ?TR_CopyTerrain@@YAXPAVCTerrain@@PBV1@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a7e4;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_2 + 0x2c);
  puVar13 = *(undefined4 **)(param_1 + 0x2c);
  ExceptionList = &local_c;
  TR_ClearTerrain(param_1);
  uVar6 = FUN_36176bb0();
  puVar13[3] = uVar6;
  uVar6 = FUN_36176bb0();
  puVar13[4] = uVar6;
  uVar6 = FUN_36176bb0();
  puVar13[5] = uVar6;
  iVar15 = puVar1[6];
  iVar2 = puVar1[7];
  uVar9 = (iVar2 + -1) * (iVar15 + -1);
  lVar3 = puVar1[10];
  lVar4 = puVar1[0xb];
  uVar12 = iVar2 * iVar15 * 2;
  FUN_36177740(param_1,iVar15,iVar2);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200;
  puVar11 = (undefined4 *)puVar1[2];
  puVar14 = (undefined4 *)puVar13[2];
  puVar10 = (undefined4 *)*puVar1;
  puVar13 = (undefined4 *)*puVar13;
  for (uVar8 = uVar12 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar14 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar14 = puVar14 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar14 = *(undefined1 *)puVar11;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  FUN_361731d0((byte *)param_1,1);
  param_1 = (CTerrain *)FUN_36172d20(puVar1 + 0x42);
  if (0 < (int)param_1) {
    iVar15 = 0;
    do {
      iVar2 = puVar1[0x43];
      local_14 = StringDuplicate(s_I_EFNMTextures_Editor_Default_te_3623d05e + 6);
      local_10 = 0;
      local_4 = 0;
      lVar7 = TRL_CreateLayer_t(pCVar5,(CTFileName *)&local_14);
      local_4 = 0xffffffff;
      StringFree(local_14);
      uVar6 = DAT_36300a94;
      DAT_36300a94 = 1;
      local_4 = 1;
      FUN_36179be0((byte *)pCVar5,lVar7,(undefined4 *)(iVar2 + iVar15));
      iVar15 = iVar15 + 0x94;
      param_1 = param_1 + -1;
      local_4 = 0xffffffff;
      DAT_36300a94 = uVar6;
    } while (param_1 != (CTerrain *)0x0);
  }
  TR_SetShadowMapSize(pCVar5,lVar3,lVar4);
  TR_SetTerrainSize(pCVar5,puVar1[0x10],puVar1[0x11],puVar1[0x12]);
  TR_RegenerateAll(pCVar5);
  ExceptionList = local_c;
  return;
}

