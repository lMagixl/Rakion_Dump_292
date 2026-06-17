
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36152730(ushort *param_1,ushort *param_2,ushort *param_3,float param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float local_58 [9];
  Vector<float,3> local_34 [16];
  Matrix<float,3,3> local_24 [36];
  
  uVar7 = (uint)*param_1;
  uVar3 = *param_2;
  uVar4 = *param_3;
  FUN_36154050((float *)local_34,(float)(int)(uVar3 - uVar7) / (float)(int)(uVar4 - uVar7),
               (float *)(param_1 + 2),(float *)(param_3 + 2));
  puVar1 = (undefined4 *)(DAT_362fdd10 + uVar7 * 0xc);
  local_58[6] = (float)*puVar1;
  local_58[7] = (float)puVar1[1];
  local_58[8] = (float)puVar1[2];
  pfVar2 = (float *)(DAT_362fdd10 + (uint)uVar3 * 0xc);
  local_58[0] = *pfVar2;
  local_58[1] = pfVar2[1];
  local_58[2] = pfVar2[2];
  puVar1 = (undefined4 *)(DAT_362fdd10 + (uint)uVar4 * 0xc);
  local_58[3] = (float)*puVar1;
  local_58[4] = (float)puVar1[1];
  local_58[5] = (float)puVar1[2];
  FUN_36153be0(local_34,(float *)local_24);
  DecomposeRotationMatrixNoSnap(local_34,local_24);
  iVar6 = 0;
  while (((((*(float *)((int)local_58 + iVar6 + 0xc) <= *(float *)((int)local_58 + iVar6) ||
            (*(float *)((int)local_58 + iVar6 + 0x18) <= *(float *)((int)local_58 + iVar6))) &&
           ((*(float *)((int)local_58 + iVar6) <= *(float *)((int)local_58 + iVar6 + 0xc) ||
            (*(float *)((int)local_58 + iVar6) <= *(float *)((int)local_58 + iVar6 + 0x18))))) ||
          (ABS(*(float *)((int)local_58 + iVar6)) <= _DAT_362287b0)) &&
         ((fVar5 = ABS(*(float *)((int)local_58 + iVar6) - *(float *)(local_34 + iVar6)),
          fVar5 < _DAT_362287b0 ||
          (fVar5 / ABS(*(float *)((int)local_58 + iVar6 + 0xc) -
                       *(float *)((int)local_58 + iVar6 + 0x18)) <= param_4))))) {
    iVar6 = iVar6 + 4;
    if (0xb < iVar6) {
      return 1;
    }
  }
  return 0;
}

