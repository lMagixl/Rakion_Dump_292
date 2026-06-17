
/* void __cdecl TR_GetMatrixFromEntity(float (&)[12],class CTerrain const *) */

void __cdecl TR_GetMatrixFromEntity(float *param_1,CTerrain *param_2)

{
  int iVar1;
  
                    /* 0x17b890  3761  ?TR_GetMatrixFromEntity@@YAXAAY0M@MPBVCTerrain@@@Z */
  iVar1 = *(int *)(param_2 + 0x28);
  *param_1 = *(float *)(iVar1 + 0x54);
  param_1[1] = *(float *)(iVar1 + 0x58);
  param_1[2] = *(float *)(iVar1 + 0x5c);
  param_1[3] = *(float *)(iVar1 + 0x3c);
  param_1[4] = *(float *)(iVar1 + 0x60);
  param_1[5] = *(float *)(iVar1 + 100);
  param_1[6] = *(float *)(iVar1 + 0x68);
  param_1[7] = *(float *)(iVar1 + 0x40);
  param_1[8] = *(float *)(iVar1 + 0x6c);
  param_1[9] = *(float *)(iVar1 + 0x70);
  param_1[10] = *(float *)(iVar1 + 0x74);
  param_1[0xb] = *(float *)(iVar1 + 0x44);
  return;
}

