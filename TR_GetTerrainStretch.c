
/* class Vector<float,3> __cdecl TR_GetTerrainStretch(class CTerrain const *) */

void __cdecl TR_GetTerrainStretch(CTerrain *param_1)

{
  int iVar1;
  int in_stack_00000008;
  
                    /* 0x173150  3770  ?TR_GetTerrainStretch@@YA?AV?$Vector@M$02@@PBVCTerrain@@@Z */
  iVar1 = *(int *)(in_stack_00000008 + 0x2c);
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x3c);
  return;
}

