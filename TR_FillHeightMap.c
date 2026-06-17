
/* void __cdecl TR_FillHeightMap(class CTerrain *,unsigned short) */

void __cdecl TR_FillHeightMap(CTerrain *param_1,ushort param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
                    /* 0x173080  3757  ?TR_FillHeightMap@@YAXPAVCTerrain@@G@Z */
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  uVar2 = puVar1[7] * puVar1[6];
  if (0 < (int)uVar2) {
    puVar4 = (ushort *)*puVar1;
    for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint *)puVar4 = CONCAT22(param_2,param_2);
      puVar4 = puVar4 + 2;
    }
    for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = param_2;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

