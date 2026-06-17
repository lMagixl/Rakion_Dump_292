
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360cee20(void *this,float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_10 [4];
  
  fVar5 = param_1;
  pfVar9 = (float *)((int)param_1 + 0x10);
  fVar2 = *(float *)((int)param_1 + 0xc) + param_2[3];
  local_20 = *pfVar9 - *param_2;
  local_1c = *(float *)((int)param_1 + 0x14) - param_2[1];
  local_18 = *(float *)((int)param_1 + 0x18) - param_2[2];
  fVar1 = *(float *)((int)param_1 + 0x1c) - *pfVar9;
  local_38 = *(float *)((int)param_1 + 0x20) - *(float *)((int)param_1 + 0x14);
  local_34 = *(float *)((int)param_1 + 0x24) - *(float *)((int)param_1 + 0x18);
  fVar4 = _DAT_36223384 / (fVar1 * fVar1 + local_38 * local_38 + local_34 * local_34);
  fVar3 = (local_20 * fVar1 + local_1c * local_38 + local_18 * local_34) * fVar4;
  fVar2 = fVar3 * fVar3 -
          ((local_20 * local_20 + local_1c * local_1c + local_18 * local_18) - fVar2 * fVar2) *
          fVar4;
  if (_DAT_3622376c <= fVar2) {
    fVar2 = SQRT(fVar2);
    param_1 = fVar2 - fVar3;
    fVar2 = -fVar3 - fVar2;
    if (fVar2 < param_1) {
      param_1 = fVar2;
    }
    if (((_DAT_3622376c < param_1 != (_DAT_3622376c == param_1)) &&
        (param_1 < *(float *)((int)this + 0x1c8))) &&
       (local_3c = fVar1, local_30 = fVar1, local_2c = local_38, local_28 = local_34,
       iVar6 = FUN_360d17c0(this,*(CEntity **)((int)this + 0x10c)), iVar6 == 0)) {
      fVar2 = _DAT_36223384 - param_1;
      fVar1 = fVar1 * fVar2;
      *(float *)((int)this + 0x1c8) = param_1;
      fVar3 = local_38 * fVar2;
      fVar2 = local_34 * fVar2;
      *(float *)((int)this + 0x1dc) =
           fVar1 * *(float *)((int)this + 0x184) +
           fVar2 * *(float *)((int)this + 0x18c) + fVar3 * *(float *)((int)this + 0x188);
      *(float *)((int)this + 0x1e0) =
           fVar2 * *(float *)((int)this + 0x198) +
           fVar3 * *(float *)((int)this + 0x194) + fVar1 * *(float *)((int)this + 400);
      *(float *)((int)this + 0x1e4) =
           fVar2 * *(float *)((int)this + 0x1a4) +
           fVar3 * *(float *)((int)this + 0x1a0) + fVar1 * *(float *)((int)this + 0x19c);
      local_3c = local_3c * param_1 + *pfVar9;
      local_38 = local_38 * param_1 + *(float *)((int)fVar5 + 0x14);
      local_34 = local_34 * param_1 + *(float *)((int)fVar5 + 0x18);
      local_30 = local_3c - *param_2;
      local_2c = local_38 - param_2[1];
      local_28 = local_34 - param_2[2];
      local_20 = local_30;
      local_1c = local_2c;
      local_18 = local_28;
      FUN_3605f8b0(&local_20,&local_30,&local_3c);
      pfVar9 = (float *)((int)this + 0x178);
      pfVar8 = local_10;
      puVar7 = FUN_36059090(&local_20,&local_30,(float *)((int)this + 0x184));
      puVar7 = (undefined4 *)FUN_36058f40(puVar7,pfVar8,pfVar9);
      *(undefined4 *)((int)this + 0x1cc) = *puVar7;
      *(undefined4 *)((int)this + 0x1d0) = puVar7[1];
      *(undefined4 *)((int)this + 0x1d4) = puVar7[2];
      *(undefined4 *)((int)this + 0x1d8) = puVar7[3];
      *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)((int)this + 0x10c);
      *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x110);
      return;
    }
  }
  return;
}

