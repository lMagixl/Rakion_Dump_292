
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_360d1da0(void *this,float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  local_30 = *param_4 - *param_3;
  local_2c = param_4[1] - param_3[1];
  local_28 = param_4[2] - param_3[2];
  fVar4 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  local_8 = _DAT_36223384 / fVar4;
  local_10 = local_30 * local_8;
  local_c = local_2c * local_8;
  local_8 = local_28 * local_8;
  fVar5 = fVar1 * local_10 + fVar2 * local_c + fVar3 * local_8;
  fVar6 = fVar1 - local_10 * fVar5;
  fVar7 = fVar2 - local_c * fVar5;
  fVar5 = fVar3 - local_8 * fVar5;
  fVar8 = (*param_1 - *param_3) * local_10 +
          (param_1[1] - param_3[1]) * local_c + (param_1[2] - param_3[2]) * local_8;
  local_10 = local_10 * fVar8;
  local_c = local_c * fVar8;
  local_8 = local_8 * fVar8;
  local_58 = (*param_1 - *param_3) - local_10;
  local_54 = (param_1[1] - param_3[1]) - local_c;
  local_50 = (param_1[2] - param_3[2]) - local_8;
  fVar8 = _DAT_36223384 / (fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
  fVar5 = (local_58 * fVar6 + local_54 * fVar7 + local_50 * fVar5) * fVar8;
  fVar6 = fVar5 * fVar5 -
          ((local_58 * local_58 + local_54 * local_54 + local_50 * local_50) - param_5 * param_5) *
          fVar8;
  if (_DAT_3622376c <= fVar6) {
    fVar6 = SQRT(fVar6);
    param_5 = fVar6 - fVar5;
    fVar6 = -fVar5 - fVar6;
    if (fVar6 < param_5) {
      param_5 = fVar6;
    }
    if ((_DAT_3622376c < param_5 != (_DAT_3622376c == param_5)) &&
       (param_5 < *(float *)((int)this + 0x1c8))) {
      local_3c = fVar1 * param_5;
      local_38 = fVar2 * param_5;
      local_34 = fVar3 * param_5;
      local_48 = local_3c + *param_1;
      local_44 = local_38 + param_1[1];
      local_40 = local_34 + param_1[2];
      local_20 = local_48;
      local_1c = local_44;
      local_18 = local_40;
      FUN_3605f8b0(&local_58,&local_30,param_3);
      local_4c = (local_20 * local_58 + local_1c * local_54 + local_18 * local_50) - local_4c;
      if ((_DAT_3622376c < local_4c != (_DAT_3622376c == local_4c)) &&
         ((local_4c < fVar4 &&
          (iVar9 = FUN_360d17c0(this,*(CEntity **)((int)this + 0x10c)), iVar9 == 0)))) {
        local_40 = _DAT_36223384 - param_5;
        local_48 = fVar1 * local_40;
        *(float *)((int)this + 0x1c8) = param_5;
        local_44 = fVar2 * local_40;
        local_40 = fVar3 * local_40;
        local_10 = local_48 * *(float *)((int)this + 0x184) +
                   local_40 * *(float *)((int)this + 0x18c) +
                   local_44 * *(float *)((int)this + 0x188);
        local_c = local_40 * *(float *)((int)this + 0x198) +
                  local_44 * *(float *)((int)this + 0x194) + local_48 * *(float *)((int)this + 400);
        *(float *)((int)this + 0x1dc) = local_10;
        *(float *)((int)this + 0x1e0) = local_c;
        local_8 = local_40 * *(float *)((int)this + 0x1a4) +
                  local_44 * *(float *)((int)this + 0x1a0) +
                  local_48 * *(float *)((int)this + 0x19c);
        *(float *)((int)this + 0x1e4) = local_8;
        local_3c = local_48;
        local_38 = local_44;
        local_34 = local_40;
        FUN_3605fbc0(&local_58,&local_10,&local_20);
        local_3c = local_10 - *param_3;
        local_38 = local_c - param_3[1];
        local_34 = local_8 - param_3[2];
        local_10 = local_3c;
        local_c = local_38;
        local_8 = local_34;
        FUN_3605f8b0(&local_30,&local_10,&local_20);
        pfVar12 = (float *)((int)this + 0x178);
        pfVar11 = &local_20;
        puVar10 = FUN_36059090(&local_30,&local_10,(float *)((int)this + 0x184));
        puVar10 = (undefined4 *)FUN_36058f40(puVar10,pfVar11,pfVar12);
        *(undefined4 *)((int)this + 0x1cc) = *puVar10;
        *(undefined4 *)((int)this + 0x1d0) = puVar10[1];
        *(undefined4 *)((int)this + 0x1d4) = puVar10[2];
        *(undefined4 *)((int)this + 0x1d8) = puVar10[3];
        *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)((int)this + 0x10c);
        *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x110);
        return;
      }
    }
  }
  return;
}

