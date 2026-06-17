
/* void __cdecl TR_UpdateShadowMap(class CTerrain *,float const (&)[12],class AABBox<float,3>,int)
    */

void __cdecl
TR_UpdateShadowMap(CTerrain *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  int param_9)

{
                    /* 0x172fe0  3791
                       ?TR_UpdateShadowMap@@YAXPAVCTerrain@@AAY0M@$$CBMV?$AABBox@M$02@@H@Z */
  if (DAT_362fcbc8 == 0xff) {
    TRS_BeginShadowMapUpdate(param_1);
    TRS_SetTerrainPlacement(param_2);
    if (param_9 != 0) {
      TRS_ColectLightsFromWorld(param_1);
    }
    TRS_UpdateShadowMap(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
    TRS_EndShadowMapUpdate(param_1);
  }
  return;
}

