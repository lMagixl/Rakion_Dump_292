
/* class CTextureData * __cdecl TRL_GetLayerThumbnail(class CTerrain *,long,long,long) */

CTextureData * __cdecl
TRL_GetLayerThumbnail(CTerrain *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
                    /* 0x17a410  3726  ?TRL_GetLayerThumbnail@@YAPAVCTextureData@@PAVCTerrain@@JJJ@Z
                        */
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(iVar1 + 0x10c);
  iVar6 = param_2 * 0x94;
  iVar3 = *(int *)(iVar6 + iVar2);
  iVar7 = iVar6 + iVar2;
  uVar4 = *(int *)(iVar1 + 0x18) - 1;
  uVar5 = *(int *)(iVar1 + 0x1c) - 1;
  FUN_36176aa0(*(CAnimData **)(iVar6 + 4 + iVar2),uVar4,uVar5,0);
  iVar1 = *(int *)(iVar3 + 0x30);
  iVar3 = 0;
  iVar2 = *(int *)(*(int *)(iVar7 + 4) + 0x60);
  if (0 < (int)(uVar5 * uVar4)) {
    do {
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0xffffff;
      *(uint *)(iVar2 + iVar3 * 4) = (uint)*(byte *)(iVar3 + iVar1) << 0x18 | 0xffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uVar5 * uVar4));
  }
  FUN_361754e0(*(CTextureData **)(iVar7 + 4),uVar4,uVar5);
  return *(CTextureData **)(iVar7 + 4);
}

