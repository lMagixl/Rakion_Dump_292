
/* public: void __thiscall CEntity::UpdateSpatialRange(void) */

void __thiscall CEntity::UpdateSpatialRange(CEntity *this)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  CBrushMip *pCVar4;
  int iVar5;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x127810  3927  ?UpdateSpatialRange@CEntity@@QAEXXZ */
  *(undefined4 *)(this + 0x88) = 0xbf800000;
  if (((byte)this[0x10] & 2) == 0) {
    iVar5 = *(int *)(this + 4);
    local_30 = 3e+38;
    local_24 = -3e+38;
    local_2c = 3e+38;
    local_20 = -3e+38;
    local_28 = 3e+38;
    local_1c = -3e+38;
    if ((iVar5 == 3) || (iVar5 == 5)) {
      CModelObject::GetAllFramesBBox(*(CModelObject **)(this + 0x7c),(AABBox<float,3> *)&local_30);
      iVar5 = *(int *)(this + 0x7c);
      local_48 = *(float *)(iVar5 + 0x84);
      local_44 = *(float *)(iVar5 + 0x88);
      local_40 = *(float *)(iVar5 + 0x8c);
      local_24 = local_24 * ABS(local_48);
      local_30 = ABS(local_48) * local_30;
      local_20 = local_20 * ABS(local_44);
      local_2c = local_2c * ABS(local_44);
      local_1c = local_1c * ABS(local_40);
      local_28 = local_28 * ABS(local_40);
      (**(code **)(*(int *)this + 0xd8))(&local_3c);
      local_48 = local_3c;
      fStack_c = local_24 * ABS(local_3c);
      local_44 = fStack_38;
      local_18 = local_30 * ABS(local_3c);
      local_40 = fStack_34;
      fStack_8 = local_20 * ABS(fStack_38);
      fStack_14 = local_2c * ABS(fStack_38);
      fStack_4 = local_1c * ABS(fStack_34);
      *(float *)(this + 0x8c) = local_18;
      *(float *)(this + 0x90) = fStack_14;
      fStack_10 = local_28 * ABS(fStack_34);
      *(float *)(this + 0x94) = fStack_10;
      *(float *)(this + 0x98) = fStack_c;
      *(float *)(this + 0x9c) = fStack_8;
      *(float *)(this + 0xa0) = fStack_4;
    }
    else if ((iVar5 == 9) || (iVar5 == 10)) {
      CModelInstance::GetAllFramesBBox
                (*(CModelInstance **)(this + 0x7c),(AABBox<float,3> *)&local_30);
      iVar5 = *(int *)(this + 0x7c);
      FUN_360de4f0(&local_30,*(float *)(iVar5 + 0x90),*(float *)(iVar5 + 0x94),
                   *(float *)(iVar5 + 0x98));
      (**(code **)(*(int *)this + 0xd8))(&local_48);
      local_18 = local_30;
      fStack_14 = local_2c;
      fStack_c = local_24;
      fStack_10 = local_28;
      fStack_8 = local_20;
      fStack_4 = local_1c;
      FUN_360de4f0(&local_18,local_48,local_44,local_40);
      *(float *)(this + 0x8c) = local_18;
      *(float *)(this + 0x90) = fStack_14;
      *(float *)(this + 0x94) = fStack_10;
      *(float *)(this + 0x98) = fStack_c;
      *(float *)(this + 0x9c) = fStack_8;
      *(float *)(this + 0xa0) = fStack_4;
    }
    else if ((iVar5 == 4) || (iVar5 == 8)) {
      pCVar4 = CBrush3D::GetFirstMip(*(CBrush3D **)(this + 0x7c));
      local_30 = *(float *)(pCVar4 + 0x3c);
      local_2c = *(float *)(pCVar4 + 0x40);
      local_28 = *(float *)(pCVar4 + 0x44);
      local_24 = *(float *)(pCVar4 + 0x48);
      local_20 = *(float *)(pCVar4 + 0x4c);
      local_1c = *(float *)(pCVar4 + 0x50);
      *(float *)(this + 0x8c) = local_30;
      *(float *)(this + 0x90) = local_2c;
      *(float *)(this + 0x94) = local_28;
      *(float *)(this + 0x98) = local_24;
      *(float *)(this + 0x9c) = local_20;
      *(float *)(this + 0xa0) = local_1c;
    }
    else {
      if (iVar5 != 0xb) {
        return;
      }
      pfVar3 = (float *)TR_GetStretchedTerrainBBox((CTerrain *)&local_18);
      local_30 = *pfVar3;
      local_2c = pfVar3[1];
      local_28 = pfVar3[2];
      local_24 = pfVar3[3];
      local_20 = pfVar3[4];
      local_1c = pfVar3[5];
      *(float *)(this + 0x8c) = local_30;
      *(float *)(this + 0x90) = local_2c;
      *(float *)(this + 0x94) = local_28;
      *(float *)(this + 0x98) = local_24;
      *(float *)(this + 0x9c) = local_20;
      *(float *)(this + 0xa0) = local_1c;
    }
    fVar1 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
    fVar2 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
    if (fVar1 < fVar2) {
      fVar1 = fVar2;
    }
    *(float *)(this + 0x88) = fVar1;
    iVar5 = IsValidFloat(fVar1);
    if (iVar5 == 0) {
      *(undefined4 *)(this + 0x88) = 0x3f800000;
    }
  }
  return;
}

