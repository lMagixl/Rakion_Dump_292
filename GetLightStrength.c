
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CBrushShadowLayer::GetLightStrength(long,long,float,float) */

float __thiscall
CBrushShadowLayer::GetLightStrength
          (CBrushShadowLayer *this,long param_1,long param_2,float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float local_8;
  
                    /* 0x140870  1950  ?GetLightStrength@CBrushShadowLayer@@QAEMJJMM@Z */
  if ((*(uint *)this & 4) != 0) {
    return _DAT_3622376c;
  }
  iVar4 = *(int *)(this + 0x30);
  fVar5 = _DAT_36223384;
  if (((((iVar4 != 0) && ((*(uint *)this & 8) == 0)) &&
       (iVar10 = *(int *)(this + 0x1c), iVar10 <= param_1)) &&
      ((iVar7 = *(int *)(this + 0x20), iVar7 <= param_2 &&
       (param_1 < *(int *)(this + 0x24) + iVar10)))) && (param_2 < *(int *)(this + 0x28) + iVar7)) {
    iVar10 = param_1 - iVar10;
    iVar8 = *(int *)(this + 0x24) + -1;
    iVar9 = iVar10 + 1;
    if (iVar8 < iVar10 + 1) {
      iVar9 = iVar8;
    }
    iVar8 = (param_2 - iVar7) + 1;
    if (*(int *)(this + 0x28) + -1 < iVar8) {
      iVar8 = *(int *)(this + 0x28) + -1;
    }
    iVar7 = *(int *)(this + 0x24) * (param_2 - iVar7);
    uVar1 = iVar7 + iVar10;
    uVar2 = iVar7 + iVar9;
    iVar8 = *(int *)(this + 0x24) * iVar8;
    uVar3 = iVar8 + iVar9;
    uVar11 = iVar10 + iVar8;
    param_2 = 0;
    local_8 = 0.0;
    param_1 = 0;
    if ((*(byte *)((uVar1 >> 3) + iVar4) & (byte)(1 << ((byte)uVar1 & 7))) != 0) {
      param_2 = 0x3f800000;
    }
    if ((*(byte *)((uVar2 >> 3) + iVar4) & (byte)(1 << ((byte)uVar2 & 7))) != 0) {
      local_8 = 1.0;
    }
    if ((*(byte *)((uVar11 >> 3) + iVar4) & (byte)(1 << ((byte)uVar11 & 7))) != 0) {
      param_1 = 0x3f800000;
    }
    fVar5 = _DAT_3622376c;
    if ((*(byte *)(iVar4 + (uVar3 >> 3)) & (byte)(1 << ((byte)uVar3 & 7))) != 0) {
      fVar5 = _DAT_36223384;
    }
    fVar6 = (float)param_1;
    if ((param_3 != _DAT_3622376c) && (fVar6 = fVar5, param_3 != _DAT_36223384)) {
      fVar6 = (fVar5 - (float)param_1) * param_3 + (float)param_1;
    }
    param_1 = (long)fVar6;
    fVar5 = (float)param_2;
    if ((param_3 != _DAT_3622376c) && (fVar5 = local_8, param_3 != _DAT_36223384)) {
      fVar5 = (local_8 - (float)param_2) * param_3 + (float)param_2;
    }
    if (param_4 != _DAT_3622376c) {
      if (param_4 != _DAT_36223384) {
        return ((float)param_1 - fVar5) * param_4 + fVar5;
      }
      return (float)param_1;
    }
  }
  return fVar5;
}

