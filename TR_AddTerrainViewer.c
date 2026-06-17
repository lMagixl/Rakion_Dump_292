
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TR_AddTerrainViewer(class CTerrain const *,class Vector<float,3>,float) */

void __cdecl
TR_AddTerrainViewer(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   float param_5)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x182530  3742  ?TR_AddTerrainViewer@@YAXPBVCTerrain@@V?$Vector@M$02@@M@Z */
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar5 = DAT_36301540 + 1;
  DAT_36301540 = iVar5;
  iVar4 = FUN_36182aa0((undefined4 *)&DAT_36301538);
  if (iVar4 < iVar5) {
    iVar5 = FUN_36182aa0((undefined4 *)&DAT_36301538);
    FUN_36182b90(&DAT_36301538,iVar5 + _DAT_36301544);
    iVar5 = DAT_36301540;
  }
  bVar3 = param_5 == _DAT_36227d20;
  puVar1 = (undefined4 *)(iVar5 * 0x10 + -0x10 + DAT_3630153c);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  if (bVar3) {
    puVar1[3] = *(undefined4 *)(iVar2 + 0x30);
    return;
  }
  puVar1[3] = param_5;
  return;
}

