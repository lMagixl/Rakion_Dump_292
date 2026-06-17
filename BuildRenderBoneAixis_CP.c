
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPonytail::BuildRenderBoneAixis_CP(long) */

void __thiscall CPonytail::BuildRenderBoneAixis_CP(CPonytail *this,long param_1)

{
  CPonytail *this_00;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
                    /* 0x18fa40  1095  ?BuildRenderBoneAixis_CP@CPonytail@@QAEXJ@Z */
  this_00 = this + 0xc;
  iVar3 = FUN_36190440((int)this_00);
  if (param_1 == iVar3 + -1) {
    iVar3 = FUN_361905c0(this_00,param_1);
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
    if (-1 < param_1 + -1) {
      iVar4 = FUN_361905c0(this_00,param_1 + -1);
      local_24 = *(float *)(iVar4 + 4);
      local_20 = *(float *)(iVar4 + 8);
      local_1c = *(float *)(iVar4 + 0xc);
    }
    local_24 = *(float *)(iVar3 + 4) - local_24;
    local_20 = *(float *)(iVar3 + 8) - local_20;
    local_1c = *(float *)(iVar3 + 0xc) - local_1c;
    local_40 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
    if (local_40 < (float)_DAT_36223438) {
      local_48 = local_24 * _DAT_3622376c;
      local_44 = local_20 * _DAT_3622376c;
      local_40 = local_1c * _DAT_3622376c;
    }
    else {
      local_40 = _DAT_36223384 / local_40;
      local_48 = local_24 * local_40;
      local_44 = local_20 * local_40;
      local_40 = local_1c * local_40;
    }
  }
  else {
    iVar3 = FUN_361905c0(this_00,param_1);
    fVar8 = *(float *)(iVar3 + 4);
    fVar6 = *(float *)(iVar3 + 8);
    fVar7 = *(float *)(iVar3 + 0xc);
    iVar3 = FUN_361905c0(this_00,param_1 + 1);
    fVar5 = *(float *)(iVar3 + 4);
    fVar1 = *(float *)(iVar3 + 8);
    fVar2 = *(float *)(iVar3 + 0xc);
    iVar3 = FUN_361905c0(this_00,param_1);
    local_40 = _DAT_36223384 / *(float *)(iVar3 + 0x5c);
    local_48 = (fVar5 - fVar8) * local_40;
    local_44 = (fVar1 - fVar6) * local_40;
    local_40 = (fVar2 - fVar7) * local_40;
  }
  if (param_1 == 0) {
    local_3c = *(float *)(this + 0x58);
    local_38 = *(float *)(this + 0x5c);
    local_34 = *(float *)(this + 0x60);
    fVar8 = *(float *)(this + 100);
    fVar6 = *(float *)(this + 0x68);
    fVar7 = *(float *)(this + 0x6c);
    local_18 = *(float *)(this + 0x70);
    local_14 = *(float *)(this + 0x74);
    fVar5 = *(float *)(this + 0x78);
  }
  else {
    iVar3 = param_1 + -1;
    iVar4 = FUN_361905c0(this_00,iVar3);
    local_3c = *(float *)(iVar4 + 0x38);
    local_38 = *(float *)(iVar4 + 0x3c);
    local_34 = *(float *)(iVar4 + 0x40);
    iVar4 = FUN_361905c0(this_00,iVar3);
    fVar8 = *(float *)(iVar4 + 0x44);
    fVar6 = *(float *)(iVar4 + 0x48);
    fVar7 = *(float *)(iVar4 + 0x4c);
    iVar3 = FUN_361905c0(this_00,iVar3);
    local_18 = *(float *)(iVar3 + 0x50);
    local_14 = *(float *)(iVar3 + 0x54);
    fVar5 = *(float *)(iVar3 + 0x58);
  }
  fVar1 = fVar8 * local_48 + fVar6 * local_44 + fVar7 * local_40;
  if ((fVar1 <= _DAT_3623dc14) || (_DAT_3623dbfc <= fVar1)) {
    fVar1 = -((local_3c * local_48 + local_38 * local_44 + local_34 * local_40) / fVar1);
    fVar8 = local_3c + fVar8 * fVar1;
    fVar6 = local_38 + fVar6 * fVar1;
    fVar7 = local_34 + fVar7 * fVar1;
  }
  local_34 = fVar7;
  local_38 = fVar6;
  local_3c = fVar8;
  fVar8 = SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
  fVar6 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar8) {
    fVar6 = _DAT_36223384 / fVar8;
  }
  local_34 = local_34 * fVar6;
  local_38 = local_38 * fVar6;
  local_3c = local_3c * fVar6;
  local_30 = local_34 * local_44 - local_38 * local_40;
  local_2c = local_3c * local_40 - local_34 * local_48;
  local_28 = local_38 * local_48 - local_3c * local_44;
  if (local_18 * local_30 + local_14 * local_2c + fVar5 * local_28 < _DAT_3622376c) {
    local_3c = -local_3c;
    local_38 = -local_38;
    local_34 = -local_34;
    local_30 = -local_30;
    local_2c = -local_2c;
    local_28 = -local_28;
  }
  fVar8 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  fVar6 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar8) {
    fVar6 = _DAT_36223384 / fVar8;
  }
  local_28 = local_28 * fVar6;
  local_2c = local_2c * fVar6;
  local_30 = local_30 * fVar6;
  iVar3 = FUN_361905c0(this_00,param_1);
  *(float *)(iVar3 + 0x38) = local_48;
  *(float *)(iVar3 + 0x3c) = local_44;
  *(float *)(iVar3 + 0x40) = local_40;
  iVar3 = FUN_361905c0(this_00,param_1);
  *(float *)(iVar3 + 0x44) = local_3c;
  *(float *)(iVar3 + 0x48) = local_38;
  *(float *)(iVar3 + 0x4c) = local_34;
  iVar3 = FUN_361905c0(this_00,param_1);
  *(float *)(iVar3 + 0x50) = local_30;
  *(float *)(iVar3 + 0x54) = local_2c;
  *(float *)(iVar3 + 0x58) = local_28;
  return;
}

