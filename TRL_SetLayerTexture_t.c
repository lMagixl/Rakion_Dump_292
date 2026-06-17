
/* void __cdecl TRL_SetLayerTexture_t(class CTerrain *,long,class CTFileName const &) */

void __cdecl TRL_SetLayerTexture_t(CTerrain *param_1,long param_2,CTFileName *param_3)

{
                    /* 0x17a020  3731  ?TRL_SetLayerTexture_t@@YAXPAVCTerrain@@JABVCTFileName@@@Z */
  TRL_SetLayerTexture_t
            (param_1,(CTerrainLayer *)(param_2 * 0x94 + *(int *)(*(int *)(param_1 + 0x2c) + 0x10c)),
             param_3);
  return;
}

