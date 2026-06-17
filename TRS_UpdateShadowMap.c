
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TRS_UpdateShadowMap(class CTerrain *,class AABBox<float,3>) */

void __cdecl TRS_UpdateShadowMap(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float local_78 [6];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  float local_48 [6];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  CTerrain local_18 [8];
  float local_10;
  
                    /* 0x184a00  3741  ?TRS_UpdateShadowMap@@YAXPAVCTerrain@@V?$AABBox@M$02@@@Z */
  iVar1 = *(int *)(param_1 + 0x2c);
  local_48[0] = *(float *)(iVar1 + 0x34);
  local_48[5] = *(float *)(iVar1 + 0x38);
  local_20 = *(float *)(iVar1 + 0x3c);
  local_78[0] = _DAT_36223384 / local_48[0];
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_48[4] = 0.0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 0.0;
  local_78[4] = 0.0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_78[5] = _DAT_36223384 / local_48[5];
  local_50 = _DAT_36223384 / local_20;
  local_10 = local_50;
  FUN_36162680((float *)&DAT_3630164c,(float *)&DAT_3630161c,local_48);
  FUN_3608d7d0((float *)&DAT_3630167c,(float *)&DAT_3630161c);
  FUN_36162680((float *)&DAT_363016ac,local_78,(float *)&DAT_3630167c);
  puVar2 = (undefined4 *)TR_GetTerrainBBox(local_18);
  _DAT_362a6c58 = *puVar2;
  _DAT_362a6c5c = puVar2[1];
  _DAT_362a6c60 = puVar2[2];
  _DAT_362a6c64 = puVar2[3];
  _DAT_362a6c68 = puVar2[4];
  _DAT_362a6c6c = puVar2[5];
  iVar3 = 1;
  do {
    if (*(float *)(&stack0x00000010 + iVar3 * 4) < (float)(&param_1)[iVar3]) {
      DAT_3630170c = *(int *)(iVar1 + 0x18) + -1;
      DAT_36301710 = *(int *)(iVar1 + 0x1c) + -1;
      DAT_36301704 = 0;
      DAT_36301708 = 0;
      goto LAB_36184bd9;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  puVar2 = (undefined4 *)
           FUN_36183570((undefined4 *)local_18,iVar1,(float *)&stack0x00000008,
                        (float *)&DAT_3630167c);
  DAT_36301704 = *puVar2;
  DAT_36301708 = puVar2[1];
  DAT_3630170c = puVar2[2];
  DAT_36301710 = puVar2[3];
LAB_36184bd9:
  FUN_36183020(iVar1);
  FUN_36184910(iVar1);
  return;
}

