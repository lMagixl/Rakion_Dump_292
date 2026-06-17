
/* void __cdecl TR_BindTerrainTextures(class CTerrain *) */

void __cdecl TR_BindTerrainTextures(CTerrain *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x1735e0  3745  ?TR_BindTerrainTextures@@YAXPAVCTerrain@@@Z */
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 8) & 0x200) != 0) {
    FUN_361731d0((byte *)param_1,1);
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x4c) = DAT_362c9b54;
    CTextureData::SetAsCurrent(*(CTextureData **)(iVar1 + 0x10),0,1);
    *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x4c) = DAT_362c9b54;
    CTextureData::SetAsCurrent(*(CTextureData **)(iVar1 + 0x14),0,1);
    iVar1 = FUN_36172d20((undefined4 *)(iVar1 + 0x108));
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_361733b0((byte *)param_1,iVar2,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return;
}

