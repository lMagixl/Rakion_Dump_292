
/* void __cdecl TR_SetShadowMapSize(class CTerrain *,long,long) */

void __cdecl TR_SetShadowMapSize(CTerrain *param_1,long param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
                    /* 0x1774b0  3783  ?TR_SetShadowMapSize@@YAXPAVCTerrain@@JJ@Z */
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(iVar1 + 0x18) + -1;
  bVar2 = (byte)param_2;
  if (param_2 < 0) {
    uVar6 = iVar5 >> (-bVar2 & 0x1f);
    uVar4 = *(int *)(iVar1 + 0x1c) + -1 >> (-bVar2 & 0x1f);
  }
  else {
    uVar6 = iVar5 << (bVar2 & 0x1f);
    uVar4 = *(int *)(iVar1 + 0x1c) + -1 << (bVar2 & 0x1f);
  }
  FUN_36176aa0(*(CAnimData **)(iVar1 + 0x10),uVar6,uVar4,2);
  puVar7 = *(undefined4 **)(*(int *)(iVar1 + 0x10) + 0x60);
  for (uVar3 = uVar4 * uVar6 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  FUN_361754e0(*(CTextureData **)(iVar1 + 0x10),uVar6,uVar4);
  *(long *)(iVar1 + 0x28) = param_2;
  *(long *)(iVar1 + 0x2c) = param_3;
  TR_DiscardShadingInfos(param_1);
  return;
}

