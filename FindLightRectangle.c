
/* public: void __thiscall CBrushShadowMap::FindLightRectangle(class CLightSource &,class
   CLightRectangle &) */

void __thiscall
CBrushShadowMap::FindLightRectangle
          (CBrushShadowMap *this,CLightSource *param_1,CLightRectangle *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x141a40  1637
                       ?FindLightRectangle@CBrushShadowMap@@QAEXAAVCLightSource@@AAVCLightRectangle@@@Z
                        */
  iVar3 = *(int *)(this + -0xd0);
  bVar4 = (byte)*(undefined4 *)(this + 0x14);
  if (((byte)param_1[0x1c] & 1) == 0) {
    iVar6 = *(int *)(param_1 + 0xc);
    local_60 = *(float *)(iVar6 + 0x3c);
    local_5c = *(float *)(iVar6 + 0x40);
    local_58 = *(float *)(iVar6 + 0x44);
    FUN_3605fbc0((float *)(iVar3 + 4),&local_54,&local_60);
    *(float *)(param_2 + 0x18) =
         (local_60 * *(float *)(iVar3 + 4) +
         local_58 * *(float *)(iVar3 + 0xc) + local_5c * *(float *)(iVar3 + 8)) -
         *(float *)(iVar3 + 0x10);
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0xdc) + 0x38) + 0x14) + 0x668);
    local_48[0] = *(float *)(iVar3 + 0x54);
    local_48[1] = (float)*(undefined4 *)(iVar3 + 0x60);
    local_48[2] = (float)*(undefined4 *)(iVar3 + 0x6c);
    local_48[3] = (float)*(undefined4 *)(iVar3 + 0x58);
    local_38 = *(undefined4 *)(iVar3 + 100);
    local_34 = *(undefined4 *)(iVar3 + 0x70);
    local_30 = *(undefined4 *)(iVar3 + 0x5c);
    local_2c = *(undefined4 *)(iVar3 + 0x68);
    local_60 = local_54 - *(float *)(iVar3 + 0x3c);
    local_28 = *(undefined4 *)(iVar3 + 0x74);
    pfVar10 = local_48;
    pfVar12 = local_24;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar12 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_5c = local_50 - *(float *)(iVar3 + 0x40);
    local_58 = local_4c - *(float *)(iVar3 + 0x44);
    local_6c = local_58 * local_24[2] + local_60 * local_24[0] + local_5c * local_24[1];
    local_68 = local_24[3] * local_60 + local_14 * local_5c + local_10 * local_58;
    local_64 = local_c * local_60 + local_8 * local_5c + local_4 * local_58;
    local_54 = local_6c;
    local_50 = local_68;
    local_4c = local_64;
    CMappingDefinition::GetTextureCoordinates
              ((CMappingDefinition *)(this + 0xa0),
               (CMappingVectors *)(**(int **)(this + -0xd0) + 0x10),(Vector<float,3> *)&local_54,
               (Vector<long,2> *)&local_78);
    if ((*(uint *)(this + -8) & 0x40000) == 0) {
      iVar3 = 1 << (bVar4 & 0x1f);
      *(float *)(param_2 + 0x10) = (float)(*(int *)(this + 0x20) + iVar3 + local_78) / (float)iVar3;
      *(float *)(param_2 + 0x14) = (float)(*(int *)(this + 0x24) + iVar3 + local_74) / (float)iVar3;
    }
    else {
      fVar1 = (float)(1 << (bVar4 & 0x1f));
      *(float *)(param_2 + 0x10) = (float)(*(int *)(this + 0x20) + local_78) / fVar1;
      *(float *)(param_2 + 0x14) = (float)(*(int *)(this + 0x24) + local_74) / fVar1;
    }
    uVar14 = FUN_361bfd6c();
    iVar3 = (int)uVar14;
    uVar8 = (*(int *)(this + 0x20) - iVar3) + local_78 >> (bVar4 & 0x1f);
    uVar11 = (*(int *)(this + 0x24) - iVar3) + local_74 >> (bVar4 & 0x1f);
    uVar13 = (*(int *)(this + 0x20) + iVar3 + local_78 >> (bVar4 & 0x1f)) + 1;
    uVar2 = *(int *)(this + 0x28) >> (bVar4 & 0x1f);
    uVar7 = *(int *)(this + 0x50) + 0x10;
    uVar5 = (*(int *)(this + 0x24) + local_74 + iVar3 >> (bVar4 & 0x1f)) + 1;
    local_7c = uVar2;
    if ((int)uVar7 <= (int)uVar2) {
      local_7c = uVar7;
    }
    uVar8 = ((int)uVar8 < 0) - 1 & uVar8;
    if ((int)uVar8 <= (int)local_7c) {
      local_7c = uVar8;
    }
    uVar9 = *(int *)(this + 0x2c) >> (bVar4 & 0x1f);
    uVar8 = *(int *)(this + 0x54) + 0x10;
    local_80 = uVar9;
    if ((int)uVar8 <= (int)uVar9) {
      local_80 = uVar8;
    }
    uVar11 = ((int)uVar11 < 0) - 1 & uVar11;
    if ((int)uVar11 <= (int)local_80) {
      local_80 = uVar11;
    }
    if ((int)uVar7 <= (int)uVar2) {
      uVar2 = uVar7;
    }
    uVar13 = ((int)uVar13 < 0) - 1 & uVar13;
    if ((int)uVar13 <= (int)uVar2) {
      uVar2 = uVar13;
    }
    if ((int)uVar8 <= (int)uVar9) {
      uVar9 = uVar8;
    }
    uVar5 = ((int)uVar5 < 0) - 1 & uVar5;
  }
  else {
    uVar2 = *(int *)(this + 0x28) >> (bVar4 & 0x1f);
    local_7c = 0;
    local_80 = 0;
    if ((int)(*(int *)(this + 0x50) + 0x10U) <= (int)uVar2) {
      uVar2 = *(int *)(this + 0x50) + 0x10U;
    }
    uVar9 = *(int *)(this + 0x2c) >> (bVar4 & 0x1f);
    uVar5 = *(int *)(this + 0x54) + 0x10;
  }
  if ((int)uVar9 < (int)uVar5) {
    uVar5 = uVar9;
  }
  *(uint *)param_2 = local_7c;
  *(uint *)(param_2 + 4) = local_80;
  *(uint *)(param_2 + 8) = uVar2 - local_7c;
  *(uint *)(param_2 + 0xc) = uVar5 - local_80;
  return;
}

