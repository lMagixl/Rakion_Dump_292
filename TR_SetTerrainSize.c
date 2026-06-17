
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TR_SetTerrainSize(class CTerrain *,class Vector<float,3>) */

void __cdecl TR_SetTerrainSize(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  
                    /* 0x173920  3786  ?TR_SetTerrainSize@@YAXPAVCTerrain@@V?$Vector@M$02@@@Z */
  iVar1 = *(int *)(param_1 + 0x2c);
  *(float *)(iVar1 + 0x40) = param_2;
  *(float *)(iVar1 + 0x44) = param_3;
  *(float *)(iVar1 + 0x48) = param_4;
  param_3 = param_3 * _DAT_3622dcfc;
  *(float *)(iVar1 + 0x34) = param_2 / (float)(*(int *)(iVar1 + 0x18) + -1);
  *(float *)(iVar1 + 0x38) = param_3;
  *(float *)(iVar1 + 0x3c) = param_4 / (float)(*(int *)(iVar1 + 0x1c) + -1);
  return;
}

