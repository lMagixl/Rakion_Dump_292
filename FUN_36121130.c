
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36121130(void *this,undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  *(undefined4 *)(param_2 + 0xb8 + param_3 * 4) = 0;
  iVar2 = param_1[param_3 * 0xe + 0xc];
  if ((iVar2 != 0) && (*(int *)(&DAT_362fcbd0 + param_3 * 4) != 0)) {
    iVar3 = *(int *)*param_1;
    *(undefined4 **)(param_2 + 0xb8 + param_3 * 4) = param_1 + param_3 * 0xe + 7;
    iVar1 = *(int *)(*(int *)((int)this + 4) + 0xc) +
            (uint)*(byte *)((int)param_1 + param_3 * 0x38 + 0x4d) * 0xc;
    bVar6 = *(byte *)(iVar1 + 4) | *(byte *)((int)param_1 + param_3 * 0x38 + 0x4e) & 0xb;
    *(byte *)(param_3 + 0xb4 + param_2) = bVar6;
    if ((*(byte *)((int)param_1 + param_3 * 0x38 + 0x4e) & 0x10) != 0) {
      *(byte *)(param_3 + 0xb4 + param_2) = bVar6 | 4;
    }
    uVar7 = MulColors(param_1[param_3 * 0xe + 0x14],*(ulong *)(iVar1 + 8));
    *(ulong *)(param_2 + 0xa4 + param_3 * 4) = uVar7;
    bVar6 = *(byte *)(param_1 + param_3 * 0xe + 0x13);
    if (bVar6 == 0) {
      if ((*(byte *)((int)param_1 + param_3 * 0x38 + 0x4e) & 3) == 0) {
        local_24 = (float)param_1[param_3 * 0xe + 0xd];
        local_20 = (float)param_1[param_3 * 0xe + 0xe];
        local_1c = (float)param_1[param_3 * 0xe + 0xf];
        local_18 = (float)param_1[param_3 * 0xe + 0x10];
        uVar9 = *(int *)(iVar2 + 0x20) - 1;
        uVar10 = *(int *)(iVar2 + 0x24) - 1;
        local_14 = (float)(int)((int)ROUND((float)param_1[param_3 * 0xe + 0x11] * _DAT_362280ec) &
                               uVar9) * _DAT_362265a4;
        local_10 = (float)(int)((int)ROUND((float)param_1[param_3 * 0xe + 0x12] * _DAT_362280ec) &
                               uVar10) * _DAT_362265a4;
        pfVar8 = (float *)FUN_3605f960((void *)(iVar3 + 0x34),&local_30);
        local_30 = *pfVar8 - *(float *)(iVar3 + 0x44);
        local_2c = pfVar8[1] - *(float *)(iVar3 + 0x48);
        local_28 = pfVar8[2] - *(float *)(iVar3 + 0x4c);
        fVar4 = local_30 * *(float *)(iVar3 + 0x50) +
                local_28 * *(float *)(iVar3 + 0x58) + local_2c * *(float *)(iVar3 + 0x54);
        fVar5 = local_30 * *(float *)(iVar3 + 0x5c) +
                local_28 * *(float *)(iVar3 + 100) + local_2c * *(float *)(iVar3 + 0x60);
        local_14 = (float)(int)(~uVar9 & (int)ROUND((local_24 * fVar4 + local_20 * fVar5 + local_14)
                                                    * _DAT_362280ec)) * _DAT_362265a4 + local_14;
        local_10 = (float)(int)(~uVar10 &
                               (int)ROUND((local_1c * fVar4 + local_18 * fVar5 + local_10) *
                                          _DAT_362280ec)) * _DAT_362265a4 + local_10;
        CMappingDefinition::MakeMappingVectors
                  ((CMappingDefinition *)&local_24,(CMappingVectors *)(iVar3 + 0x44),
                   (CMappingVectors *)(param_2 + 0x14 + param_3 * 0x24));
        return;
      }
      CMappingDefinition::MakeMappingVectors
                ((CMappingDefinition *)(param_1 + param_3 * 0xe + 0xd),
                 (CMappingVectors *)(iVar3 + 0x44),
                 (CMappingVectors *)(param_2 + 0x14 + param_3 * 0x24));
      return;
    }
    iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
    CMappingDefinition::MakeMappingVectors
              ((CMappingDefinition *)(param_1 + param_3 * 0xe + 0xd),
               (CMappingVectors *)(iVar3 + 0x44),(CMappingVectors *)&local_24);
    CMappingDefinition::TransformMappingVectors
              ((CMappingDefinition *)(iVar2 + 4 + (uint)bVar6 * 0x1c),(CMappingVectors *)&local_24,
               (CMappingVectors *)(param_2 + 0x14 + param_3 * 0x24));
  }
  return;
}

