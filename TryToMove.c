
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CMovableEntity::TryToMove(class CMovableEntity *,int,int) */

int __thiscall
CMovableEntity::TryToMove(CMovableEntity *this,CMovableEntity *param_1,int param_2,int param_3)

{
  CEntity *pCVar1;
  Vector<float,3> *pVVar2;
  CSurfaceType *pCVar3;
  bool bVar4;
  float fVar5;
  CEntityEvent *pCVar6;
  CEntity *pCVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  CMovableEntity *pCVar12;
  CMovableEntity *pCVar13;
  CMovableEntity *pCVar14;
  DamageType DVar15;
  float fVar16;
  Vector<float,3> *pVVar17;
  Vector<float,3> *pVVar18;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218 [5];
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  CClipMove local_1f4 [448];
  CMovableEntity *local_34;
  int *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1afbc0  3863  ?TryToMove@CMovableEntity@@QAEHPAV1@HH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bf78;
  local_c = ExceptionList;
  if (param_1 == (CMovableEntity *)0x0) {
    iVar11 = -4;
  }
  else {
    iVar11 = -1;
  }
  DAT_363825bc = DAT_363825bc + iVar11;
  if (DAT_363825bc < 0) {
    return 0;
  }
  pCVar12 = this + 0x3c;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    *(float *)(this + 700) = *(float *)pCVar12;
    *(undefined4 *)(this + 0x2c0) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x2c4) = *(undefined4 *)(this + 0x44);
  }
  else {
    local_258 = *(float *)pCVar12 + *(float *)(this + 0x2ec);
    local_254 = *(float *)(this + 0x40) + *(float *)(this + 0x2f0);
    local_250 = *(float *)(this + 0x44) + *(float *)(this + 0x2f4);
    ExceptionList = &local_c;
    *(float *)(this + 700) = local_258;
    *(float *)(this + 0x2c0) = local_254;
    *(float *)(this + 0x2c4) = local_250;
  }
  if (param_3 == 0) {
    pCVar13 = this + 0x54;
  }
  else {
    local_218[0] = *(float *)(this + 0x6c) * *(float *)(this + 0x300) +
                   *(float *)(this + 0x54) * *(float *)(this + 0x2f8) +
                   *(float *)(this + 0x60) * *(float *)(this + 0x2fc);
    local_218[1] = *(float *)(this + 0x58) * *(float *)(this + 0x2f8) +
                   *(float *)(this + 0x70) * *(float *)(this + 0x300) +
                   *(float *)(this + 100) * *(float *)(this + 0x2fc);
    local_218[2] = *(float *)(this + 0x68) * *(float *)(this + 0x2fc) +
                   *(float *)(this + 0x5c) * *(float *)(this + 0x2f8) +
                   *(float *)(this + 0x74) * *(float *)(this + 0x300);
    local_218[3] = *(float *)(this + 0x54) * *(float *)(this + 0x304) +
                   *(float *)(this + 0x308) * *(float *)(this + 0x60) +
                   *(float *)(this + 0x30c) * *(float *)(this + 0x6c);
    local_218[4] = *(float *)(this + 0x58) * *(float *)(this + 0x304) +
                   *(float *)(this + 100) * *(float *)(this + 0x308) +
                   *(float *)(this + 0x70) * *(float *)(this + 0x30c);
    local_204 = *(float *)(this + 0x308) * *(float *)(this + 0x68) +
                *(float *)(this + 0x30c) * *(float *)(this + 0x74) +
                *(float *)(this + 0x5c) * *(float *)(this + 0x304);
    local_200 = *(float *)(this + 0x54) * *(float *)(this + 0x310) +
                *(float *)(this + 0x314) * *(float *)(this + 0x60) +
                *(float *)(this + 0x318) * *(float *)(this + 0x6c);
    local_1fc = *(float *)(this + 0x58) * *(float *)(this + 0x310) +
                *(float *)(this + 100) * *(float *)(this + 0x314) +
                *(float *)(this + 0x70) * *(float *)(this + 0x318);
    local_1f8 = *(float *)(this + 0x314) * *(float *)(this + 0x68) +
                *(float *)(this + 0x318) * *(float *)(this + 0x74) +
                *(float *)(this + 0x5c) * *(float *)(this + 0x310);
    pCVar13 = (CMovableEntity *)local_218;
  }
  iVar11 = *(int *)(this + 0x84);
  pCVar14 = this + 0x2c8;
  for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pCVar14 = *(undefined4 *)pCVar13;
    pCVar13 = pCVar13 + 4;
    pCVar14 = pCVar14 + 4;
  }
  if (((param_3 == 0) || ((*(uint *)(iVar11 + 0x30) & 2) != 0)) ||
     (((*(uint *)(iVar11 + 0x30) & 1) != 0 &&
      (((*(float *)(this + 0x2fc) == _DAT_3622376c && (*(int *)(this + 0x308) == 0x3f800000)) &&
       (*(float *)(this + 0x314) == _DAT_3622376c)))))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  FUN_360cdd50(local_1f4,this);
  if ((param_2 == 0) && (bVar4)) {
    local_2c = 2.0;
LAB_361afe79:
    SetPlacementFromNextPosition(this);
    if ((param_2 != 0) && ((param_1 == (CMovableEntity *)0x0 || (*(int *)(this + 0x240) == 0)))) {
      *(float *)(this + 0x31c) = *(float *)(this + 0x2ec) + *(float *)(this + 0x31c);
      *(float *)(this + 800) = *(float *)(this + 0x2f0) + *(float *)(this + 800);
      *(float *)(this + 0x324) = *(float *)(this + 0x2f4) + *(float *)(this + 0x324);
    }
    if (0 < *(int *)(this + 0x240)) {
      *(int *)(this + 0x240) = *(int *)(this + 0x240) + -1;
    }
    if (param_3 != 0) {
      pCVar12 = this + 0x328;
      local_218[0] = *(float *)(this + 0x340) * *(float *)(this + 0x300) +
                     *(float *)pCVar12 * *(float *)(this + 0x2f8) +
                     *(float *)(this + 0x2fc) * *(float *)(this + 0x334);
      local_218[1] = *(float *)(this + 0x344) * *(float *)(this + 0x300) +
                     *(float *)(this + 0x2fc) * *(float *)(this + 0x338) +
                     *(float *)(this + 0x32c) * *(float *)(this + 0x2f8);
      local_218[2] = *(float *)(this + 0x348) * *(float *)(this + 0x300) +
                     *(float *)(this + 0x2f8) * *(float *)(this + 0x330) +
                     *(float *)(this + 0x2fc) * *(float *)(this + 0x33c);
      local_218[3] = *(float *)(this + 0x304) * *(float *)pCVar12 +
                     *(float *)(this + 0x30c) * *(float *)(this + 0x340) +
                     *(float *)(this + 0x308) * *(float *)(this + 0x334);
      local_218[4] = *(float *)(this + 0x32c) * *(float *)(this + 0x304) +
                     *(float *)(this + 0x338) * *(float *)(this + 0x308) +
                     *(float *)(this + 0x344) * *(float *)(this + 0x30c);
      local_204 = *(float *)(this + 0x304) * *(float *)(this + 0x330) +
                  *(float *)(this + 0x308) * *(float *)(this + 0x33c) +
                  *(float *)(this + 0x30c) * *(float *)(this + 0x348);
      local_200 = *(float *)(this + 0x310) * *(float *)pCVar12 +
                  *(float *)(this + 0x318) * *(float *)(this + 0x340) +
                  *(float *)(this + 0x314) * *(float *)(this + 0x334);
      local_1fc = *(float *)(this + 0x310) * *(float *)(this + 0x32c) +
                  *(float *)(this + 0x338) * *(float *)(this + 0x314) +
                  *(float *)(this + 0x344) * *(float *)(this + 0x318);
      local_1f8 = *(float *)(this + 0x310) * *(float *)(this + 0x330) +
                  *(float *)(this + 0x314) * *(float *)(this + 0x33c) +
                  *(float *)(this + 0x318) * *(float *)(this + 0x348);
      pfVar9 = local_218;
      for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(float *)pCVar12 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pCVar12 = pCVar12 + 4;
      }
    }
    iVar11 = 1;
  }
  else {
    CWorld::ClipMove(*(CWorld **)(this + 0xa8),local_1f4);
    if (local_2c <= _DAT_36223384) {
      if (0 < DAT_363825bc) {
        if (local_30 != (int *)0x0) {
          if (((char)local_30[0x32] < '\0') && ((*(uint *)(this + 8) & 0xe0000000) == 0x40000000)) {
            local_258 = -*(float *)(this + 0x180);
            local_254 = -*(float *)(this + 0x184);
            local_250 = -*(float *)(this + 0x188);
            local_218[3] = 0.0;
            local_1c = 0;
            local_28 = local_258;
            local_24 = local_254;
            local_20 = local_250;
          }
          if ((*(byte *)(*(int *)(*(int *)(this + 0xa8) + 0x14) + 0x20 +
                        (uint)*(byte *)(local_30 + 0x62) * 0x28) & 2) != 0) {
            *(uint *)(this + 8) = *(uint *)(this + 8) | 0x800;
          }
        }
        if ((((*(uint *)(this + 8) & 2) != 0) && (-1 < (char)(*(uint *)(this + 8) >> 8))) &&
           (local_28 * *(float *)(this + 0x180) +
            local_20 * *(float *)(this + 0x188) + local_24 * *(float *)(this + 0x184) <
            *(float *)(this + 0x180) * *(float *)(this + 0x14c) +
            *(float *)(this + 0x184) * *(float *)(this + 0x150) +
            *(float *)(this + 0x188) * *(float *)(this + 0x154))) {
          FUN_3600db90(this + 0x148,(int)local_34);
          *(float *)(this + 0x14c) = local_28;
          *(float *)(this + 0x150) = local_24;
          *(float *)(this + 0x154) = local_20;
          *(int **)(this + 0x2a8) = local_30;
          if (local_30 == (int *)0x0) {
            *(undefined4 *)(this + 0x158) = 0;
          }
          else {
            *(uint *)(this + 0x158) = (uint)*(byte *)(local_30 + 0x62);
          }
        }
        SendTouchEvent(this,local_1f4);
        pVVar2 = (Vector<float,3> *)(this + 0x2ec);
        local_234 = *(float *)pVVar2;
        local_230 = *(float *)(this + 0x2f0);
        local_22c = *(float *)(this + 0x2f4);
        local_258 = *(float *)(this + 0x14c);
        local_254 = *(float *)(this + 0x150);
        local_250 = *(float *)(this + 0x154);
        fVar16 = SQRT(local_234 * local_234 + local_230 * local_230 + local_22c * local_22c);
        fVar5 = _DAT_3622376c;
        if ((float)_DAT_36223438 <= fVar16) {
          fVar5 = _DAT_36223384 / fVar16;
        }
        local_22c = local_22c * fVar5;
        local_230 = local_230 * fVar5;
        local_234 = local_234 * fVar5;
        fVar16 = SQRT(local_258 * local_258 + local_254 * local_254 + local_250 * local_250);
        if ((float)_DAT_36223438 <= fVar16) {
          fVar16 = _DAT_36223384 / fVar16;
          local_258 = local_258 * fVar16;
          local_254 = local_254 * fVar16;
          local_250 = local_250 * fVar16;
        }
        else {
          local_240 = 0.0;
          local_23c = 0.0;
          local_238 = -1.0;
          local_258 = 0.0;
          local_254 = 0.0;
          local_250 = -1.0;
        }
        if (((_DAT_36238bec <
              SQRT(*(float *)(this + 0x2f4) * *(float *)(this + 0x2f4) +
                   *(float *)(this + 0x2f0) * *(float *)(this + 0x2f0) +
                   *(float *)pVVar2 * *(float *)pVVar2)) &&
            (_DAT_3622881c < (local_250 + local_258) * _DAT_3622376c + local_254)) &&
           (local_258 * local_234 + local_254 * local_230 + local_250 * local_22c < _DAT_3622dd08))
        {
          local_240 = *(float *)pCVar12;
          local_23c = *(float *)(this + 0x40);
          local_238 = *(float *)(this + 0x44);
          if ((float)_DAT_36223438 <=
              SQRT(*(float *)(this + 0x2f4) * *(float *)(this + 0x2f4) +
                   *(float *)(this + 0x2f0) * *(float *)(this + 0x2f0) +
                   *(float *)pVVar2 * *(float *)pVVar2)) {
            fVar16 = _DAT_36223384 /
                     SQRT(*(float *)(this + 0x2f4) * *(float *)(this + 0x2f4) +
                          *(float *)(this + 0x2f0) * *(float *)(this + 0x2f0) +
                          *(float *)pVVar2 * *(float *)pVVar2);
            *(float *)pVVar2 = fVar16 * *(float *)pVVar2;
            *(float *)(this + 0x2f0) = fVar16 * *(float *)(this + 0x2f0);
            fVar16 = fVar16 * *(float *)(this + 0x2f4);
          }
          else {
            *(float *)pVVar2 = *(float *)pVVar2 * _DAT_3622376c;
            *(float *)(this + 0x2f0) = *(float *)(this + 0x2f0) * _DAT_3622376c;
            fVar16 = *(float *)(this + 0x2f4) * _DAT_3622376c;
          }
          *(float *)(this + 0x2f4) = fVar16;
          local_258 = -*(float *)pVVar2;
          local_254 = -*(float *)(this + 0x2f0);
          pVVar18 = (Vector<float,3> *)&local_228;
          local_250 = -*(float *)(this + 0x2f4);
          pVVar17 = (Vector<float,3> *)&local_240;
          fVar16 = 10.0;
          DVar15 = 0xb;
          local_228 = local_258;
          local_224 = local_254;
          local_220 = local_250;
          pCVar7 = MiscDamageInflictor(this);
          CEntity::InflictDirectDamage
                    ((CEntity *)this,(CEntity *)this,pCVar7,DVar15,fVar16,pVVar17,pVVar18);
        }
        if ((local_30 != (int *)0x0) &&
           (iVar11 = CTString::operator==
                               ((CTString *)
                                (*(int *)(*(int *)(this + 0xa8) + 0x14) +
                                 (uint)*(byte *)(local_30 + 0x62) * 0x28 + 0x24),
                                s_Standard___PushWall_36243adc), iVar11 != 0)) {
          EBouncedWall::EBouncedWall((EBouncedWall *)local_218);
          local_218[2] = *(float *)pVVar2;
          local_218[3] = *(float *)(this + 0x2f0);
          local_218[4] = *(float *)(this + 0x2f4);
          iVar11 = *local_30;
          local_204 = *(float *)(iVar11 + 4);
          local_200 = *(float *)(iVar11 + 8);
          local_1fc = *(float *)(iVar11 + 0xc);
          local_4 = 1;
          CEntity::SendEvent((CEntity *)this,(CEntityEvent *)local_218,0);
          local_4 = 0xffffffff;
        }
        if ((*(uint *)(local_34 + 8) & 0x400) != 0) {
          *(uint *)(this + 8) = *(uint *)(this + 8) | 0x800;
        }
        local_234 = 0.0;
        pCVar12 = local_34;
        if (((*(uint *)(this + 8) & 0xe0000000) == 0x60000000) && (param_2 != 0)) {
          FUN_361ab300((float *)pVVar2,&local_258);
          fVar16 = -*(float *)(this + 0x1c8);
          local_258 = local_258 * fVar16;
          local_254 = local_254 * fVar16;
          local_250 = local_250 * fVar16;
          fVar16 = *(float *)(this + 0x1c4);
          local_23c = local_23c * fVar16;
          local_238 = local_238 * fVar16;
          local_24c = local_258 + local_240 * fVar16;
          local_248 = local_254 + local_23c;
          local_244 = local_250 + local_238;
          if (_DAT_362287b0 <
              SQRT(local_258 * local_258 + local_254 * local_254 + local_250 * local_250)) {
            local_234 = 1.4013e-45;
          }
          fVar16 = *(float *)(this + 0x1c4);
          *(float *)(this + 300) = fVar16 * *(float *)(this + 300);
          *(float *)(this + 0x130) = fVar16 * *(float *)(this + 0x130);
          *(float *)(this + 0x134) = fVar16 * *(float *)(this + 0x134);
          pCVar12 = local_34;
          local_228 = local_24c;
          local_224 = local_248;
          local_220 = local_244;
          if (SQRT(*(float *)(this + 0x134) * *(float *)(this + 0x134) +
                   *(float *)(this + 0x130) * *(float *)(this + 0x130) +
                   *(float *)(this + 300) * *(float *)(this + 300)) < _DAT_36230180) {
            local_240 = 0.0;
            local_23c = 0.0;
            local_238 = 0.0;
            *(undefined4 *)(this + 300) = 0;
            *(undefined4 *)(this + 0x130) = 0;
            *(undefined4 *)(this + 0x134) = 0;
          }
        }
        iVar11 = DAT_363825b8;
        if ((param_1 == (CMovableEntity *)0x0) || (((byte)pCVar12[8] & 4) == 0)) {
          uVar8 = *(uint *)(this + 8) & 0xe0000000;
          if ((uVar8 == 0x20000000) ||
             (((uVar8 == 0x60000000 || (uVar8 == 0x40000000)) || (uVar8 == 0xa0000000)))) {
            if (param_2 == 0) {
              if (param_3 != 0) {
                if (uVar8 == 0x60000000) {
                  fVar16 = *(float *)(this + 0x1c4);
                  pCVar12 = this + 300;
                  *(float *)pCVar12 = fVar16 * *(float *)pCVar12;
                  *(float *)(this + 0x130) = fVar16 * *(float *)(this + 0x130);
                  *(float *)(this + 0x134) = fVar16 * *(float *)(this + 0x134);
                  if (SQRT(*(float *)(this + 0x134) * *(float *)(this + 0x134) +
                           *(float *)(this + 0x130) * *(float *)(this + 0x130) +
                           *(float *)pCVar12 * *(float *)pCVar12) < _DAT_36230180) {
                    *(float *)pCVar12 = 0.0;
                    *(undefined4 *)(this + 0x130) = 0;
                    *(undefined4 *)(this + 0x134) = 0;
                  }
                }
                else {
                  local_24c = local_18 * _DAT_36243b14;
                  *(float *)pVVar2 = local_24c;
                  local_248 = local_14 * _DAT_36243b14;
                  *(float *)(this + 0x2f0) = local_248;
                  local_244 = local_10 * _DAT_36243b14;
                  *(float *)(this + 0x2f4) = local_244;
                  ClearNextPosition(this);
                  TryToMove(this,param_1,1,param_3);
                }
              }
            }
            else {
              if (DAT_363825b8 == 0) {
                local_244 = _DAT_36223384 - local_2c;
                DAT_363826bc = local_28;
                DAT_363826c0 = local_24;
                DAT_363826c4 = local_20;
                local_24c = *(float *)pVVar2 * local_244;
                local_248 = *(float *)(this + 0x2f0) * local_244;
                local_244 = *(float *)(this + 0x2f4) * local_244;
                local_240 = local_24c;
                local_23c = local_248;
                local_238 = local_244;
                pfVar9 = (float *)FUN_3605fd00(&local_28,local_218,&local_240);
                local_258 = *pfVar9;
                local_254 = pfVar9[1];
                local_250 = pfVar9[2];
                DAT_363825b8 = 1;
              }
              else {
                DAT_363826bc = local_28 + DAT_363826bc;
                DAT_363826c0 = local_24 + DAT_363826c0;
                DAT_363826c4 = local_20 + DAT_363826c4;
                if (DAT_363825b8 == 1) {
                  _DAT_363826c8 = local_20 * DAT_363826c0 - local_24 * DAT_363826c4;
                  _DAT_363826cc = local_28 * DAT_363826c4 - local_20 * DAT_363826bc;
                  _DAT_363826d0 = local_24 * DAT_363826bc - local_28 * DAT_363826c0;
                  local_21c = SQRT(_DAT_363826c8 * _DAT_363826c8 +
                                   _DAT_363826cc * _DAT_363826cc + _DAT_363826d0 * _DAT_363826d0);
                  if (_DAT_362253e4 < local_21c) {
                    fVar16 = _DAT_3622376c;
                    if ((float)_DAT_36223438 <= local_21c) {
                      fVar16 = _DAT_36223384 / local_21c;
                    }
                    _DAT_363826cc = _DAT_363826cc * fVar16;
                    _DAT_363826c8 = _DAT_363826c8 * fVar16;
                    _DAT_363826d0 = _DAT_363826d0 * fVar16;
                  }
                  local_244 = _DAT_36223384 - local_2c;
                  local_24c = *(float *)pVVar2 * local_244;
                  local_248 = *(float *)(this + 0x2f0) * local_244;
                  local_244 = *(float *)(this + 0x2f4) * local_244;
                  local_240 = local_24c;
                  local_23c = local_248;
                  local_238 = local_244;
                  FUN_361ab1f0(&local_258,&local_240);
                  DAT_363825b8 = 2;
                }
                else {
                  pfVar9 = (float *)FUN_3605fd00(&local_28,local_218,(float *)&DAT_363826c8);
                  _DAT_363826c8 = *pfVar9;
                  local_244 = _DAT_36223384 - local_2c;
                  _DAT_363826cc = pfVar9[1];
                  _DAT_363826d0 = pfVar9[2];
                  local_24c = *(float *)pVVar2 * local_244;
                  DAT_363825b8 = iVar11 + 1;
                  local_248 = *(float *)(this + 0x2f0) * local_244;
                  local_244 = *(float *)(this + 0x2f4) * local_244;
                  local_240 = local_24c;
                  local_23c = local_248;
                  local_238 = local_244;
                  FUN_361ab1f0(&local_258,&local_240);
                }
              }
              if (((((local_30 == (int *)0x0) ||
                    (pCVar3 = (CSurfaceType *)
                              (*(int *)(*(int *)(this + 0xa8) + 0x14) +
                              (uint)*(byte *)(local_30 + 0x62) * 0x28),
                    param_1 != (CMovableEntity *)0x0)) ||
                   (((*(uint *)(this + 8) & 0xe0000000) != 0x40000000 ||
                    ((local_28 * *(float *)(this + 0x180) +
                      local_20 * *(float *)(this + 0x188) + local_24 * *(float *)(this + 0x184) <=
                      -*(float *)(pCVar3 + 8) && ((local_30[0x32] & 0x80U) == 0)))))) ||
                  (fVar16 = *(float *)pVVar2 * *(float *)(this + 0x180) +
                            *(float *)(this + 0x2f0) * *(float *)(this + 0x184) +
                            *(float *)(this + 0x2f4) * *(float *)(this + 0x188),
                  fVar16 = fVar16 * fVar16,
                  *(float *)pVVar2 * *(float *)pVVar2 +
                  *(float *)(this + 0x2f0) * *(float *)(this + 0x2f0) +
                  *(float *)(this + 0x2f4) * *(float *)(this + 0x2f4) < fVar16 + fVar16)) ||
                 (iVar11 = TryToGoUpstairs(this,pVVar2,pCVar3,local_30[0x32] & 0x80U), iVar11 == 0))
              {
                if ((*(uint *)(this + 8) & 0xe0000000) == 0xa0000000) {
                  local_258 = 0.0;
                  local_254 = 0.0;
                  local_250 = 0.0;
                }
                local_238 = SQRT(*(float *)(this + 0x2f4) * *(float *)(this + 0x2f4) +
                                 *(float *)(this + 0x2f0) * *(float *)(this + 0x2f0) +
                                 *(float *)pVVar2 * *(float *)pVVar2);
                if (local_238 < _DAT_36227cf0 == (local_238 == _DAT_36227cf0)) {
                  local_238 = _DAT_36227cf0;
                }
                local_238 = local_238 * _DAT_362280f0;
                local_240 = DAT_363826bc * local_238;
                local_23c = DAT_363826c0 * local_238;
                local_238 = DAT_363826c4 * local_238;
                local_258 = local_258 + local_240;
                local_254 = local_254 + local_23c;
                local_250 = local_250 + local_238;
                if ((_DAT_362253e4 <
                     SQRT(*(float *)(this + 0x2f4) * *(float *)(this + 0x2f4) +
                          *(float *)(this + 0x2f0) * *(float *)(this + 0x2f0) +
                          *(float *)pVVar2 * *(float *)pVVar2)) && (_DAT_36243b18 < local_2c)) {
                  local_2c = local_2c * _DAT_36243b10;
                  local_240 = *(float *)pVVar2 * local_2c;
                  local_23c = *(float *)(this + 0x2f0) * local_2c;
                  local_238 = *(float *)(this + 0x2f4) * local_2c;
                  local_258 = local_258 + local_240;
                  local_254 = local_254 + local_23c;
                  local_250 = local_250 + local_238;
                }
                local_21c = ABS(local_250);
                if (_DAT_362253e4 <= local_21c + ABS(local_254) + ABS(local_258)) {
                  *(float *)pVVar2 = local_258;
                  *(float *)(this + 0x2f0) = local_254;
                  *(float *)(this + 0x2f4) = local_250;
                  local_24c = local_240;
                  local_248 = local_23c;
                  local_244 = local_238;
                  ClearNextPosition(this);
                  TryToMove(this,param_1,param_2,param_3);
                  if (local_234 != 0.0) {
                    *(float *)(this + 0x31c) = local_228;
                    *(float *)(this + 800) = local_224;
                    *(float *)(this + 0x324) = local_220;
                    pCVar7 = *(CEntity **)(this + 0x148);
                    if (pCVar7 != (CEntity *)0x0) {
                      pCVar1 = pCVar7 + 0x18;
                      *(int *)pCVar1 = *(int *)pCVar1 + -1;
                      if (*(int *)pCVar1 == 0) {
                        CEntity::DeleteSelf(pCVar7);
                      }
                    }
                    *(undefined4 *)(this + 0x148) = 0;
                    *(undefined4 *)(this + 0x14c) = 0;
                    *(undefined4 *)(this + 0x150) = 0;
                    *(undefined4 *)(this + 0x154) = 0;
                    *(undefined4 *)(this + 0x158) = 0;
                  }
                }
              }
            }
          }
          else {
            SendBlockEvent(this,local_1f4);
            ClearNextPosition(this);
          }
        }
        else {
          local_24c = *(float *)(pCVar12 + 0x3c) - *(float *)(param_1 + 0x3c);
          local_248 = *(float *)(pCVar12 + 0x40) - *(float *)(param_1 + 0x40);
          local_244 = *(float *)(pCVar12 + 0x44) - *(float *)(param_1 + 0x44);
          local_240 = local_24c * *(float *)(param_1 + 0x2f8) +
                      local_244 * *(float *)(param_1 + 0x300) +
                      local_248 * *(float *)(param_1 + 0x2fc);
          local_23c = local_244 * *(float *)(param_1 + 0x30c) +
                      local_248 * *(float *)(param_1 + 0x308) +
                      local_24c * *(float *)(param_1 + 0x304);
          local_238 = local_244 * *(float *)(param_1 + 0x318) +
                      local_248 * *(float *)(param_1 + 0x314) +
                      local_24c * *(float *)(param_1 + 0x310);
          local_24c = local_240 - local_24c;
          local_248 = local_23c - local_248;
          local_244 = local_238 - local_244;
          local_258 = local_24c + *(float *)(param_1 + 0x2ec);
          local_254 = local_248 + *(float *)(param_1 + 0x2f0);
          local_250 = local_244 + *(float *)(param_1 + 0x2f4);
          *(float *)(pCVar12 + 0x2ec) = local_258;
          *(float *)(pCVar12 + 0x2f0) = local_254;
          *(float *)(pCVar12 + 0x2f4) = local_250;
          pCVar13 = param_1 + 0x2f8;
          pCVar14 = pCVar12 + 0x2f8;
          for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
            *(float *)pCVar14 = *(float *)pCVar13;
            pCVar13 = pCVar13 + 4;
            pCVar14 = pCVar14 + 4;
          }
          AddToMoversDuringMoving(pCVar12);
          iVar11 = TryToMove(pCVar12,param_1,param_2,param_3);
          if (iVar11 != 0) {
            ClearNextPosition(this);
            iVar11 = TryToMove(this,param_1,param_2,param_3);
            ExceptionList = local_c;
            return iVar11;
          }
          SendBlockEvent(this,local_1f4);
          ClearNextPosition(this);
        }
      }
    }
    else {
      if (((((param_2 == 0) || (*(int *)(this + 0x148) == 0)) || ((*(uint *)(this + 8) & 2) == 0))
          || (((*(uint *)(this + 8) & 0xe000) != 0 || (param_1 != (CMovableEntity *)0x0)))) ||
         (iVar11 = WouldFallInNextPosition(this), iVar11 == 0)) goto LAB_361afe79;
      pCVar6 = (CEntityEvent *)EWouldFall::EWouldFall((EWouldFall *)&local_234);
      local_4 = 0;
      CEntity::SendEvent((CEntity *)this,pCVar6,0);
    }
    iVar11 = 0;
  }
  ExceptionList = local_c;
  return iVar11;
}

