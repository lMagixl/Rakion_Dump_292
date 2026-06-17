
/* class AABBox<float,3> __cdecl TR_GetTerrainBBox(class CTerrain const *) */

void __cdecl TR_GetTerrainBBox(CTerrain *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  
                    /* 0x173740  3767  ?TR_GetTerrainBBox@@YA?AV?$AABBox@M$02@@PBVCTerrain@@@Z */
  iVar1 = *(int *)(in_stack_00000008 + 0x2c);
  iVar2 = FUN_361743a0((undefined4 *)(iVar1 + 0xf8));
  iVar2 = *(int *)(iVar2 * 0x10 + -0x10 + *(int *)(iVar1 + 0xfc)) * 0x2c;
  iVar3 = iVar2 + *(int *)(iVar1 + 0xf4);
  *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + *(int *)(iVar1 + 0xf4));
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
  return;
}

