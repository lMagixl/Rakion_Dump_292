
/* void __cdecl TR_FillEdgeMap(class CTerrain *,unsigned char) */

void __cdecl TR_FillEdgeMap(CTerrain *param_1,uchar param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  
                    /* 0x1738d0  3756  ?TR_FillEdgeMap@@YAXPAVCTerrain@@E@Z */
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = (*(int *)(iVar1 + 0x1c) + -1) * (*(int *)(iVar1 + 0x18) + -1);
  puVar4 = *(uchar **)(iVar1 + 8);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)puVar4 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    puVar4 = puVar4 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = param_2;
    puVar4 = puVar4 + 1;
  }
  FUN_361731d0((byte *)param_1,1);
  return;
}

