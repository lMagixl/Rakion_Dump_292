
/* class Vector<float,3> __cdecl TR_GetTerrainSize(class CTerrain const *) */

void __cdecl TR_GetTerrainSize(CTerrain *param_1)

{
  int iVar1;
  int in_stack_00000008;
  
                    /* 0x1730e0  3769  ?TR_GetTerrainSize@@YA?AV?$Vector@M$02@@PBVCTerrain@@@Z */
  iVar1 = *(int *)(in_stack_00000008 + 0x2c);
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x40);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x48);
  return;
}

