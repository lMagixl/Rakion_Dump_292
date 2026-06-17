
/* void __cdecl TR_UnbindTerrainTextures(class CTerrain *) */

void __cdecl TR_UnbindTerrainTextures(CTerrain *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x173660  3790  ?TR_UnbindTerrainTextures@@YAXPAVCTerrain@@@Z */
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 8) & 0x200) != 0) {
    iVar5 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar5 + 0x38) = 0;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined4 *)(iVar5 + 0x48) = 0;
    *(undefined4 *)(iVar5 + 0x44) = 0;
    CTextureData::Unbind(*(CTextureData **)(iVar1 + 0xc));
    iVar5 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)(iVar5 + 0x38) = 0;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined4 *)(iVar5 + 0x48) = 0;
    *(undefined4 *)(iVar5 + 0x44) = 0;
    CTextureData::Unbind(*(CTextureData **)(iVar1 + 0x10));
    iVar5 = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(iVar5 + 0x38) = 0;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined4 *)(iVar5 + 0x48) = 0;
    *(undefined4 *)(iVar5 + 0x44) = 0;
    CTextureData::Unbind(*(CTextureData **)(iVar1 + 0x14));
    param_1 = (CTerrain *)FUN_36172d20((undefined4 *)(iVar1 + 0x108));
    if (0 < (int)param_1) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(iVar1 + 0x10c);
        iVar3 = *(int *)(iVar2 + 4 + iVar5);
        iVar4 = *(int *)(iVar2 + iVar5);
        *(undefined4 *)(iVar3 + 0x38) = 0;
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined4 *)(iVar3 + 0x48) = 0;
        *(undefined4 *)(iVar3 + 0x44) = 0;
        CTextureData::Unbind(*(CTextureData **)(iVar2 + iVar5 + 4));
        iVar2 = *(int *)(iVar4 + 0x38);
        *(undefined4 *)(iVar2 + 0x38) = 0;
        *(undefined4 *)(iVar2 + 0x3c) = 0;
        *(undefined4 *)(iVar2 + 0x48) = 0;
        *(undefined4 *)(iVar2 + 0x44) = 0;
        CTextureData::Unbind(*(CTextureData **)(iVar4 + 0x38));
        iVar5 = iVar5 + 0x94;
        param_1 = param_1 + -1;
      } while (param_1 != (CTerrain *)0x0);
    }
  }
  return;
}

