
/* void __cdecl TR_SetDistanceFactor(class CTerrain *,float) */

void __cdecl TR_SetDistanceFactor(CTerrain *param_1,float param_2)

{
                    /* 0x1730d0  3781  ?TR_SetDistanceFactor@@YAXPAVCTerrain@@M@Z */
  *(float *)(*(int *)(param_1 + 0x2c) + 0x30) = param_2;
  return;
}

