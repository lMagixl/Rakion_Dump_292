
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class AABBox<float,3> __cdecl TR_GetStretchedTerrainBBox(class CTerrain const *) */

void __cdecl TR_GetStretchedTerrainBBox(CTerrain *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int in_stack_00000008;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
                    /* 0x1737a0  3766
                       ?TR_GetStretchedTerrainBBox@@YA?AV?$AABBox@M$02@@PBVCTerrain@@@Z */
  TR_GetTerrainBBox((CTerrain *)&local_48);
  iVar3 = *(int *)(in_stack_00000008 + 0x2c);
  fVar1 = *(float *)(iVar3 + 0x34);
  fVar2 = *(float *)(iVar3 + 0x38);
  fVar4 = *(float *)(iVar3 + 0x3c);
  fVar5 = local_40 * _DAT_3622376c;
  *(float *)param_1 = local_44 * _DAT_3622376c + local_48 * fVar1 + fVar5;
  local_48 = local_48 * _DAT_3622376c;
  *(float *)(param_1 + 4) = local_44 * fVar2 + local_48 + fVar5;
  *(float *)(param_1 + 8) = local_44 * _DAT_3622376c + local_40 * fVar4 + local_48;
  fVar5 = local_34 * _DAT_3622376c;
  *(float *)(param_1 + 0xc) = local_38 * _DAT_3622376c + local_3c * fVar1 + fVar5;
  local_3c = local_3c * _DAT_3622376c;
  *(float *)(param_1 + 0x10) = local_38 * fVar2 + local_3c + fVar5;
  *(float *)(param_1 + 0x14) = local_38 * _DAT_3622376c + local_34 * fVar4 + local_3c;
  return;
}

