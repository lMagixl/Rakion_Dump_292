
/* void __cdecl TRL_FillLayerData(class CTerrain *,long,unsigned char) */

void __cdecl TRL_FillLayerData(CTerrain *param_1,long param_2,uchar param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  
                    /* 0x17a100  3724  ?TRL_FillLayerData@@YAXPAVCTerrain@@JE@Z */
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = (*(int *)(iVar1 + 0x1c) + -1) * (*(int *)(iVar1 + 0x18) + -1);
  puVar4 = *(uchar **)(*(int *)(*(int *)(iVar1 + 0x10c) + param_2 * 0x94) + 0x30);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)puVar4 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
    puVar4 = puVar4 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
  }
  FUN_361733b0((byte *)param_1,param_2,1);
  return;
}

