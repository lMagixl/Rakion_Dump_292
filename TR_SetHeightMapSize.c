
/* void __cdecl TR_SetHeightMapSize(class CTerrain *,long,long) */

void __cdecl TR_SetHeightMapSize(CTerrain *param_1,long param_2,long param_3)

{
  int iVar1;
  ulonglong uVar2;
  
                    /* 0x178ea0  3782  ?TR_SetHeightMapSize@@YAXPAVCTerrain@@JJ@Z */
  uVar2 = FUN_361bfd6c();
  if ((float)(param_2 + -1) * 1.0 == (float)(int)uVar2) {
    uVar2 = FUN_361bfd6c();
    if ((float)(param_3 + -1) * 1.0 == (float)(int)uVar2) {
      iVar1 = *(int *)(param_1 + 0x2c);
      FUN_36177740(param_1,param_2,param_3);
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200;
      TR_SetTerrainSize(param_1,*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                        *(undefined4 *)(iVar1 + 0x48));
      TR_RegenerateAll(param_1);
    }
  }
  return;
}

