
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36152890(ushort *param_1,ushort *param_2,ushort *param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float local_30 [12];
  
  pfVar2 = (float *)(param_1 + 2);
  fVar1 = (float)(int)((uint)*param_2 - (uint)*param_1) /
          (float)(int)((uint)*param_3 - (uint)*param_1);
  if (fVar1 == _DAT_3622376c) {
    local_30[0] = *pfVar2;
    local_30[2] = *(float *)(param_1 + 6);
    local_30[1] = (float)*(undefined4 *)(param_1 + 4);
  }
  else {
    local_30[0] = *(float *)(param_3 + 2);
    local_30[1] = *(float *)(param_3 + 4);
    local_30[2] = *(float *)(param_3 + 6);
    if (fVar1 == _DAT_36223384) goto LAB_361529ff;
    local_30[0] = *pfVar2 + (local_30[0] - *pfVar2) * fVar1;
    local_30[1] = *(float *)(param_1 + 4) +
                  (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) * fVar1;
    local_30[2] = *(float *)(param_1 + 6) +
                  (*(float *)(param_3 + 6) - *(float *)(param_1 + 6)) * fVar1;
  }
LAB_361529ff:
  local_30[9] = *pfVar2;
  local_30[10] = (float)*(undefined4 *)(param_1 + 4);
  local_30[0xb] = (float)*(undefined4 *)(param_1 + 6);
  local_30[4] = (float)*(undefined4 *)(param_2 + 4);
  local_30[3] = (float)*(undefined4 *)(param_2 + 2);
  local_30[6] = *(float *)(param_3 + 2);
  local_30[5] = (float)*(undefined4 *)(param_2 + 6);
  local_30[8] = (float)*(undefined4 *)(param_3 + 6);
  local_30[7] = (float)*(undefined4 *)(param_3 + 4);
  iVar3 = 0;
  while (((((*(float *)((int)local_30 + iVar3 + 0x18) <= *(float *)((int)local_30 + iVar3 + 0xc) ||
            (*(float *)((int)local_30 + iVar3 + 0x24) <= *(float *)((int)local_30 + iVar3 + 0xc)))
           && ((*(float *)((int)local_30 + iVar3 + 0xc) <= *(float *)((int)local_30 + iVar3 + 0x18)
               || (*(float *)((int)local_30 + iVar3 + 0xc) <=
                   *(float *)((int)local_30 + iVar3 + 0x24))))) ||
          (ABS(*(float *)((int)local_30 + iVar3 + 0xc)) <= _DAT_362253e4)) &&
         ((fVar1 = ABS(*(float *)((int)local_30 + iVar3 + 0xc) - *(float *)((int)local_30 + iVar3)),
          fVar1 < _DAT_362253e4 ||
          (fVar1 / ABS(*(float *)((int)local_30 + iVar3 + 0x18) -
                       *(float *)((int)local_30 + iVar3 + 0x24)) <= param_4))))) {
    iVar3 = iVar3 + 4;
    if (0xb < iVar3) {
      return 1;
    }
  }
  return 0;
}

