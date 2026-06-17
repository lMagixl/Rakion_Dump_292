
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEditModel::CorrectCollisionBoxSize(void) */

void __thiscall CEditModel::CorrectCollisionBoxSize(CEditModel *this)

{
  CEditModel *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_30;
  float local_2c;
  
                    /* 0xac3f0  1402  ?CorrectCollisionBoxSize@CEditModel@@QAEXXZ */
  if (*(int *)(this + 0x12bc) == 0) {
    lVar5 = GetCollisionBoxDimensionEquality(this);
    iVar8 = *(int *)(this + 0x14);
    this_00 = this + 0x12a8;
    pfVar6 = (float *)FUN_360b0e00(this_00,iVar8);
    local_30 = *pfVar6;
    fVar1 = pfVar6[1];
    fVar2 = pfVar6[2];
    iVar7 = FUN_360b0e00(this_00,iVar8);
    fVar3 = (local_30 + *(float *)(iVar7 + 0xc)) * _DAT_36227cf0;
    fVar4 = (fVar2 + *(float *)(iVar7 + 0x14)) * _DAT_36227cf0;
    local_30 = *(float *)(iVar7 + 0xc) - local_30;
    local_2c = *(float *)(iVar7 + 0x10) - fVar1;
    fVar2 = *(float *)(iVar7 + 0x14) - fVar2;
    if (local_30 < _DAT_362287b0) {
      local_30 = 0.01;
    }
    if (local_2c < _DAT_362287b0) {
      local_2c = 0.01;
    }
    if (fVar2 < _DAT_362287b0) {
      fVar2 = _DAT_362280f0;
    }
    if (lVar5 == 0) {
      if (fVar2 < local_30) {
        fVar2 = local_30;
      }
      local_2c = local_30;
    }
    else if (lVar5 == 1) {
      fVar2 = local_30;
      if (local_2c < local_30) {
        local_2c = local_30;
      }
    }
    else if ((lVar5 == 2) && (fVar2 = local_2c, local_30 < local_2c)) {
      local_30 = local_2c;
    }
    local_30 = local_30 * _DAT_36227cf0;
    fVar2 = fVar2 * _DAT_36227cf0;
    pfVar6 = (float *)FUN_360b0e00(this_00,iVar8);
    *pfVar6 = fVar3 - local_30;
    pfVar6[1] = fVar1;
    pfVar6[2] = fVar4 - fVar2;
    iVar8 = FUN_360b0e00(this_00,*(int *)(this + 0x14));
    *(float *)(iVar8 + 0xc) = local_30 + fVar3;
    *(float *)(iVar8 + 0x10) = local_2c + fVar1;
    *(float *)(iVar8 + 0x14) = fVar2 + fVar4;
  }
  return;
}

