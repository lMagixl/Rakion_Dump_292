
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360cfc80(void *this,int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int local_54;
  float *local_50;
  float *local_4c;
  float local_48;
  float local_44;
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [4];
  
  pfVar11 = param_2;
  *(undefined4 *)((int)this + 0x110) = 0;
  FUN_360bbab0(&local_20,param_2,param_3,param_4);
  pfVar13 = (float *)(param_1 + 0x10);
  pfVar8 = (float *)(param_1 + 0x1c);
  fVar1 = ((local_20 * *pfVar13 +
           local_18 * *(float *)(param_1 + 0x18) + local_1c * *(float *)(param_1 + 0x14)) - local_14
          ) - *(float *)(param_1 + 0xc);
  local_50 = (float *)(((local_20 * *pfVar8 +
                        local_18 * *(float *)(param_1 + 0x24) +
                        local_1c * *(float *)(param_1 + 0x20)) - local_14) -
                      *(float *)(param_1 + 0xc));
  local_4c = pfVar8;
  if (((_DAT_3622376c <= fVar1) && ((float)local_50 < _DAT_3622376c)) &&
     (fVar1 = fVar1 / (fVar1 - (float)local_50), fVar1 < *(float *)((int)this + 0x1c8))) {
    local_30 = (*pfVar8 - *pfVar13) * fVar1;
    local_2c = (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x14)) * fVar1;
    local_28 = (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x18)) * fVar1;
    local_48 = local_30 + *pfVar13;
    local_44 = local_2c + *(float *)(param_1 + 0x14);
    local_40[0] = local_28 + *(float *)(param_1 + 0x18);
    local_40[1] = local_48;
    local_40[2] = local_44;
    local_40[3] = local_40[0];
    FUN_3605fbc0(&local_20,local_40 + 1,&local_48);
    FUN_360cd910(&local_20,&local_50,&local_54);
    local_30 = local_40[(int)local_50];
    local_2c = local_40[local_54];
    local_28 = 0.0;
    CIntersector::AddEdge
              ((CIntersector *)&local_30,param_2[(int)local_50 + -1],param_2[local_54 + -1],
               param_3[(int)local_50 + -1],param_3[local_54 + -1]);
    CIntersector::AddEdge
              ((CIntersector *)&local_30,param_3[(int)local_50 + -1],param_3[local_54 + -1],
               param_4[(int)local_50 + -1],param_4[local_54 + -1]);
    CIntersector::AddEdge
              ((CIntersector *)&local_30,param_4[(int)local_50 + -1],param_4[local_54 + -1],
               param_2[(int)local_50 + -1],param_2[local_54 + -1]);
    uVar5 = (uint)local_28 & 0x80000001;
    bVar9 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar9 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((!bVar9) && (iVar6 = FUN_360d17c0(this,*(CEntity **)((int)this + 0x10c)), iVar6 == 0)) {
      *(float *)((int)this + 0x1c8) = fVar1;
      local_40[2] = *(float *)(param_1 + 0x20);
      local_40[3] = *(float *)(param_1 + 0x24);
      local_40[1] = *pfVar8 - local_48;
      *(float *)((int)this + 0x1dc) = local_40[1];
      local_40[2] = local_40[2] - local_44;
      *(float *)((int)this + 0x1e0) = local_40[2];
      local_40[3] = local_40[3] - local_40[0];
      pfVar12 = (float *)((int)this + 0x178);
      *(float *)((int)this + 0x1e4) = local_40[3];
      pfVar10 = &local_20;
      puVar7 = FUN_36059090(&local_20,&local_30,(float *)((int)this + 0x184));
      puVar7 = (undefined4 *)FUN_36058f40(puVar7,pfVar10,pfVar12);
      *(undefined4 *)((int)this + 0x1cc) = *puVar7;
      *(undefined4 *)((int)this + 0x1d0) = puVar7[1];
      *(undefined4 *)((int)this + 0x1d4) = puVar7[2];
      *(undefined4 *)((int)this + 0x1d8) = puVar7[3];
      *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)((int)this + 0x10c);
      *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x110);
    }
  }
  FUN_360d1da0(this,pfVar13,pfVar8,param_2,param_3,*(float *)(param_1 + 0xc));
  FUN_360d1da0(this,pfVar13,pfVar8,param_3,param_4,*(float *)(param_1 + 0xc));
  FUN_360d1da0(this,pfVar13,pfVar8,param_4,param_2,*(float *)(param_1 + 0xc));
  local_30 = *pfVar13 - *param_2;
  local_2c = *(float *)(param_1 + 0x14) - param_2[1];
  local_28 = *(float *)(param_1 + 0x18) - param_2[2];
  local_48 = *pfVar8 - *pfVar13;
  local_44 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x14);
  local_40[0] = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x18);
  fVar1 = _DAT_36223384 / (local_48 * local_48 + local_44 * local_44 + local_40[0] * local_40[0]);
  fVar2 = (local_30 * local_48 + local_2c * local_44 + local_28 * local_40[0]) * fVar1;
  fVar1 = fVar2 * fVar2 -
          ((local_30 * local_30 + local_2c * local_2c + local_28 * local_28) -
          *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc)) * fVar1;
  if (_DAT_3622376c <= fVar1) {
    fVar1 = SQRT(fVar1);
    local_50 = (float *)(fVar1 - fVar2);
    pfVar12 = (float *)(-fVar2 - fVar1);
    param_2 = local_50;
    if ((float)pfVar12 < (float)local_50) {
      param_2 = pfVar12;
    }
    if (((_DAT_3622376c < (float)param_2 != (_DAT_3622376c == (float)param_2)) &&
        ((float)param_2 < *(float *)((int)this + 0x1c8))) &&
       (local_40[1] = local_48, local_40[2] = local_44, local_40[3] = local_40[0],
       iVar6 = FUN_360d17c0(this,*(CEntity **)((int)this + 0x10c)), iVar6 == 0)) {
      fVar1 = _DAT_36223384 - (float)param_2;
      *(float **)((int)this + 0x1c8) = param_2;
      fVar2 = local_48 * fVar1;
      fVar3 = local_44 * fVar1;
      fVar1 = fVar1 * local_40[0];
      *(float *)((int)this + 0x1dc) =
           fVar2 * *(float *)((int)this + 0x184) +
           fVar1 * *(float *)((int)this + 0x18c) + fVar3 * *(float *)((int)this + 0x188);
      *(float *)((int)this + 0x1e0) =
           fVar1 * *(float *)((int)this + 0x198) +
           fVar3 * *(float *)((int)this + 0x194) + fVar2 * *(float *)((int)this + 400);
      *(float *)((int)this + 0x1e4) =
           fVar1 * *(float *)((int)this + 0x1a4) +
           fVar3 * *(float *)((int)this + 0x1a0) + fVar2 * *(float *)((int)this + 0x19c);
      local_48 = (float)param_2 * local_48 + *pfVar13;
      local_44 = (float)param_2 * local_44 + *(float *)(param_1 + 0x14);
      local_40[0] = (float)param_2 * local_40[0] + *(float *)(param_1 + 0x18);
      local_40[1] = local_48 - *pfVar11;
      local_40[2] = local_44 - pfVar11[1];
      local_40[3] = local_40[0] - pfVar11[2];
      local_30 = local_40[1];
      local_2c = local_40[2];
      local_28 = local_40[3];
      FUN_3605f8b0(&local_20,local_40 + 1,&local_48);
      pfVar8 = (float *)((int)this + 0x178);
      pfVar11 = local_10;
      puVar7 = FUN_36059090(&local_20,&local_30,(float *)((int)this + 0x184));
      puVar7 = (undefined4 *)FUN_36058f40(puVar7,pfVar11,pfVar8);
      *(undefined4 *)((int)this + 0x1cc) = *puVar7;
      *(undefined4 *)((int)this + 0x1d0) = puVar7[1];
      *(undefined4 *)((int)this + 0x1d4) = puVar7[2];
      *(undefined4 *)((int)this + 0x1d8) = puVar7[3];
      *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)((int)this + 0x10c);
      *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x110);
      pfVar8 = local_4c;
    }
  }
  local_40[1] = *pfVar13 - *param_3;
  local_40[2] = *(float *)(param_1 + 0x14) - param_3[1];
  local_40[3] = *(float *)(param_1 + 0x18) - param_3[2];
  fVar1 = *pfVar8 - *pfVar13;
  local_44 = pfVar8[1] - *(float *)(param_1 + 0x14);
  local_40[0] = pfVar8[2] - *(float *)(param_1 + 0x18);
  fVar2 = _DAT_36223384 / (fVar1 * fVar1 + local_44 * local_44 + local_40[0] * local_40[0]);
  fVar3 = (local_40[1] * fVar1 + local_40[2] * local_44 + local_40[3] * local_40[0]) * fVar2;
  fVar2 = fVar3 * fVar3 -
          ((local_40[1] * local_40[1] + local_40[2] * local_40[2] + local_40[3] * local_40[3]) -
          *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc)) * fVar2;
  if (_DAT_3622376c <= fVar2) {
    fVar2 = SQRT(fVar2);
    local_50 = (float *)(fVar2 - fVar3);
    pfVar11 = (float *)(-fVar3 - fVar2);
    param_2 = local_50;
    if ((float)pfVar11 < (float)local_50) {
      param_2 = pfVar11;
    }
    if (((_DAT_3622376c < (float)param_2 != (_DAT_3622376c == (float)param_2)) &&
        ((float)param_2 < *(float *)((int)this + 0x1c8))) &&
       (local_48 = fVar1, local_30 = fVar1, local_2c = local_44, local_28 = local_40[0],
       iVar6 = FUN_360d17c0(this,*(CEntity **)((int)this + 0x10c)), iVar6 == 0)) {
      fVar2 = _DAT_36223384 - (float)param_2;
      fVar3 = fVar1 * fVar2;
      *(float **)((int)this + 0x1c8) = param_2;
      fVar4 = local_44 * fVar2;
      fVar2 = local_40[0] * fVar2;
      *(float *)((int)this + 0x1dc) =
           fVar3 * *(float *)((int)this + 0x184) +
           fVar2 * *(float *)((int)this + 0x18c) + fVar4 * *(float *)((int)this + 0x188);
      *(float *)((int)this + 0x1e0) =
           fVar2 * *(float *)((int)this + 0x198) +
           fVar4 * *(float *)((int)this + 0x194) + fVar3 * *(float *)((int)this + 400);
      *(float *)((int)this + 0x1e4) =
           fVar2 * *(float *)((int)this + 0x1a4) +
           fVar4 * *(float *)((int)this + 0x1a0) + fVar3 * *(float *)((int)this + 0x19c);
      local_48 = fVar1 * (float)param_2 + *pfVar13;
      local_44 = local_44 * (float)param_2 + *(float *)(param_1 + 0x14);
      local_40[0] = local_40[0] * (float)param_2 + *(float *)(param_1 + 0x18);
      local_40[1] = local_48 - *param_3;
      local_40[2] = local_44 - param_3[1];
      local_40[3] = local_40[0] - param_3[2];
      local_30 = local_40[1];
      local_2c = local_40[2];
      local_28 = local_40[3];
      FUN_3605f8b0(&local_20,local_40 + 1,&local_48);
      pfVar8 = (float *)((int)this + 0x178);
      pfVar11 = local_10;
      puVar7 = FUN_36059090(&local_20,&local_30,(float *)((int)this + 0x184));
      puVar7 = (undefined4 *)FUN_36058f40(puVar7,pfVar11,pfVar8);
      *(undefined4 *)((int)this + 0x1cc) = *puVar7;
      *(undefined4 *)((int)this + 0x1d0) = puVar7[1];
      *(undefined4 *)((int)this + 0x1d4) = puVar7[2];
      *(undefined4 *)((int)this + 0x1d8) = puVar7[3];
      *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)((int)this + 0x10c);
      *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x110);
      pfVar8 = local_4c;
    }
  }
  local_40[1] = *pfVar13 - *param_4;
  local_40[2] = *(float *)(param_1 + 0x14) - param_4[1];
  local_40[3] = *(float *)(param_1 + 0x18) - param_4[2];
  fVar1 = *pfVar8 - *pfVar13;
  fVar2 = pfVar8[1] - *(float *)(param_1 + 0x14);
  local_40[0] = pfVar8[2] - *(float *)(param_1 + 0x18);
  fVar3 = _DAT_36223384 / (fVar1 * fVar1 + fVar2 * fVar2 + local_40[0] * local_40[0]);
  fVar4 = (local_40[1] * fVar1 + local_40[2] * fVar2 + local_40[3] * local_40[0]) * fVar3;
  fVar3 = fVar4 * fVar4 -
          ((local_40[1] * local_40[1] + local_40[2] * local_40[2] + local_40[3] * local_40[3]) -
          *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc)) * fVar3;
  if (_DAT_3622376c <= fVar3) {
    fVar3 = SQRT(fVar3);
    param_3 = (float *)(fVar3 - fVar4);
    pfVar8 = (float *)(-fVar4 - fVar3);
    if ((float)pfVar8 < (float)param_3) {
      param_3 = pfVar8;
    }
    if (((_DAT_3622376c < (float)param_3 != (_DAT_3622376c == (float)param_3)) &&
        ((float)param_3 < *(float *)((int)this + 0x1c8))) &&
       (local_48 = fVar1, local_44 = fVar2, local_30 = fVar1, local_2c = fVar2,
       local_28 = local_40[0], iVar6 = FUN_360d17c0(this,*(CEntity **)((int)this + 0x10c)),
       iVar6 == 0)) {
      fVar3 = _DAT_36223384 - (float)param_3;
      *(float **)((int)this + 0x1c8) = param_3;
      fVar4 = fVar1 * fVar3;
      fVar2 = fVar2 * fVar3;
      fVar3 = fVar3 * local_40[0];
      *(float *)((int)this + 0x1dc) =
           fVar4 * *(float *)((int)this + 0x184) +
           fVar3 * *(float *)((int)this + 0x18c) + fVar2 * *(float *)((int)this + 0x188);
      *(float *)((int)this + 0x1e0) =
           fVar3 * *(float *)((int)this + 0x198) +
           fVar2 * *(float *)((int)this + 0x194) + fVar4 * *(float *)((int)this + 400);
      *(float *)((int)this + 0x1e4) =
           fVar3 * *(float *)((int)this + 0x1a4) +
           fVar2 * *(float *)((int)this + 0x1a0) + fVar4 * *(float *)((int)this + 0x19c);
      local_48 = fVar1 * (float)param_3 + *pfVar13;
      local_44 = local_44 * (float)param_3 + *(float *)(param_1 + 0x14);
      local_40[0] = local_40[0] * (float)param_3 + *(float *)(param_1 + 0x18);
      local_40[1] = local_48 - *param_4;
      local_40[2] = local_44 - param_4[1];
      local_40[3] = local_40[0] - param_4[2];
      local_30 = local_40[1];
      local_2c = local_40[2];
      local_28 = local_40[3];
      FUN_3605f8b0(&local_20,local_40 + 1,&local_48);
      pfVar13 = (float *)((int)this + 0x178);
      pfVar8 = local_10;
      puVar7 = FUN_36059090(&local_20,&local_30,(float *)((int)this + 0x184));
      puVar7 = (undefined4 *)FUN_36058f40(puVar7,pfVar8,pfVar13);
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

