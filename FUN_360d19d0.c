
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360d19d0(void *this,float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
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
  
  local_20 = *param_1 - *param_3;
  local_1c = param_1[1] - param_3[1];
  local_18 = param_1[2] - param_3[2];
  fVar1 = *param_2 - *param_1;
  local_38 = param_2[1] - param_1[1];
  local_34 = param_2[2] - param_1[2];
  fVar2 = _DAT_36223384 / (fVar1 * fVar1 + local_38 * local_38 + local_34 * local_34);
  fVar3 = (local_20 * fVar1 + local_1c * local_38 + local_18 * local_34) * fVar2;
  fVar2 = fVar3 * fVar3 -
          ((local_20 * local_20 + local_1c * local_1c + local_18 * local_18) - param_4 * param_4) *
          fVar2;
  if (_DAT_3622376c <= fVar2) {
    fVar2 = SQRT(fVar2);
    param_4 = fVar2 - fVar3;
    fVar2 = -fVar3 - fVar2;
    if (fVar2 < param_4) {
      param_4 = fVar2;
    }
    if (((_DAT_3622376c < param_4 != (_DAT_3622376c == param_4)) &&
        (param_4 < *(float *)((int)this + 0x1c8))) &&
       (local_3c = fVar1, local_30 = fVar1, local_2c = local_38, local_28 = local_34,
       iVar4 = FUN_360d17c0(this,*(CEntity **)((int)this + 0x10c)), iVar4 == 0)) {
      fVar2 = _DAT_36223384 - param_4;
      fVar1 = fVar1 * fVar2;
      *(float *)((int)this + 0x1c8) = param_4;
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
      local_3c = local_3c * param_4 + *param_1;
      local_38 = local_38 * param_4 + param_1[1];
      local_34 = local_34 * param_4 + param_1[2];
      local_30 = local_3c - *param_3;
      local_2c = local_38 - param_3[1];
      local_28 = local_34 - param_3[2];
      local_20 = local_30;
      local_1c = local_2c;
      local_18 = local_28;
      FUN_3605f8b0(&local_20,&local_30,&local_3c);
      pfVar7 = (float *)((int)this + 0x178);
      pfVar6 = local_10;
      puVar5 = FUN_36059090(&local_20,&local_30,(float *)((int)this + 0x184));
      puVar5 = (undefined4 *)FUN_36058f40(puVar5,pfVar6,pfVar7);
      *(undefined4 *)((int)this + 0x1cc) = *puVar5;
      *(undefined4 *)((int)this + 0x1d0) = puVar5[1];
      *(undefined4 *)((int)this + 0x1d4) = puVar5[2];
      *(undefined4 *)((int)this + 0x1d8) = puVar5[3];
      *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)((int)this + 0x10c);
      *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x110);
      return;
    }
  }
  return;
}

