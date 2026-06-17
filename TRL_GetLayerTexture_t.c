
/* class CTextureData * __cdecl TRL_GetLayerTexture_t(class CTerrain *,long) */

CTextureData * __cdecl TRL_GetLayerTexture_t(CTerrain *param_1,long param_2)

{
                    /* 0x17a050  3725  ?TRL_GetLayerTexture_t@@YAPAVCTextureData@@PAVCTerrain@@J@Z
                        */
  return *(CTextureData **)
          (*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10c) + param_2 * 0x94) + 0x34);
}

