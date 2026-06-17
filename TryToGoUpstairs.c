
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CMovableEntity::TryToGoUpstairs(class Vector<float,3> const &,class
   CSurfaceType const &,int) */

int __thiscall
CMovableEntity::TryToGoUpstairs
          (CMovableEntity *this,Vector<float,3> *param_1,CSurfaceType *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  CMovableEntity *pCVar8;
  CMovableEntity *pCVar9;
  int local_4a4;
  float local_4a0;
  float local_49c;
  float local_498;
  float local_494;
  float local_490;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  float local_458;
  float local_454;
  float local_450;
  float local_44c;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400 [4];
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc [3];
  CClipMove local_3d0 [452];
  int local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  CClipMove local_1e8 [456];
  float local_20;
  
                    /* 0x1af410  3861
                       ?TryToGoUpstairs@CMovableEntity@@QAEHABV?$Vector@M$02@@ABVCSurfaceType@@H@Z
                        */
  FUN_361ab250((float *)param_1,&local_4a0);
  fVar1 = SQRT(local_4a0 * local_4a0 + local_49c * local_49c + local_498 * local_498);
  if (fVar1 < _DAT_362253e4) {
    return 0;
  }
  local_448 = local_4a0;
  local_444 = local_49c;
  local_440 = local_498;
  if (param_3 == 0) {
    fVar2 = _DAT_3622376c;
    if ((float)_DAT_36223438 <= fVar1) {
      fVar2 = _DAT_36223384 / fVar1;
    }
    local_4a0 = local_4a0 * fVar2 * _DAT_36227cf0;
    local_49c = local_49c * fVar2 * _DAT_36227cf0;
    local_498 = local_498 * fVar2 * _DAT_36227cf0;
  }
  local_424 = *(undefined4 *)(this + 0x3c);
  local_420 = *(undefined4 *)(this + 0x40);
  local_41c = *(undefined4 *)(this + 0x44);
  local_418 = *(undefined4 *)(this + 0x48);
  local_414 = *(undefined4 *)(this + 0x4c);
  local_410 = *(undefined4 *)(this + 0x50);
  if (*(float *)(param_2 + 4) <= _DAT_3622376c) {
    fVar1 = _DAT_3622376c;
    if (_DAT_3622376c <= *(float *)(param_2 + 4)) goto LAB_361af5b3;
    fVar1 = *(float *)(this + 0x1bc);
    local_488 = *(float *)(param_2 + 4);
    if (fVar1 < local_488) goto LAB_361af5b3;
  }
  else {
    local_488 = *(float *)(param_2 + 4);
    fVar1 = *(float *)(this + 0x1bc);
    if (local_488 < *(float *)(this + 0x1bc)) goto LAB_361af5b3;
  }
  fVar1 = local_488;
LAB_361af5b3:
  local_488 = 0.0;
  if (((((*(byte *)(*(int *)(this + 0x178) * 0x38 + 4 + *(int *)(*(int *)(this + 0xa8) + 0x1c)) & 8)
         != 0) &&
       ((*(byte *)(*(int *)(this + 0x174) * 0x38 + 4 + *(int *)(*(int *)(this + 0xa8) + 0x1c)) & 8)
        == 0)) && (_DAT_36237a78 < *(float *)(this + 0x17c))) &&
     (iVar6 = *(int *)(this + 0x84), iVar6 != 0)) {
    local_488 = 1.4013e-45;
    fVar1 = fVar1 + fVar1 +
            (*(float *)(iVar6 + 0xc) - *(float *)(iVar6 + 8)) * *(float *)(this + 0x17c);
  }
  fVar2 = -fVar1;
  local_400[0] = *(float *)(this + 0x180) * fVar2;
  local_400[3] = local_4a0;
  local_400[1] = *(float *)(this + 0x184) * fVar2;
  local_3f0 = local_49c;
  local_400[2] = *(float *)(this + 0x188) * fVar2;
  local_3ec = local_498;
  local_3e8 = *(float *)(this + 0x180) * fVar1;
  local_3e4 = *(float *)(this + 0x184) * fVar1;
  local_3e0 = *(float *)(this + 0x188) * fVar1;
  local_4a4 = 0;
  do {
    local_494 = *(float *)(this + 0x3c) + local_400[local_4a4 * 3];
    pfVar5 = local_400 + local_4a4 * 3;
    local_490 = *(float *)(this + 0x40) + local_400[local_4a4 * 3 + 1];
    *(float *)(this + 700) = local_494;
    *(float *)(this + 0x2c0) = local_490;
    local_48c = *(float *)(this + 0x44) + local_400[local_4a4 * 3 + 2];
    *(float *)(this + 0x2c4) = local_48c;
    pCVar8 = this + 0x54;
    pCVar9 = this + 0x2c8;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pCVar9 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar9 = pCVar9 + 4;
    }
    FUN_360cdd50(local_3d0,this);
    CWorld::ClipMove(*(CWorld **)(this + 0xa8),local_3d0);
    if (local_208 < _DAT_36223384) {
      uVar4 = 0;
      uVar7 = 0;
      if (local_20c != 0) {
        uVar4 = (uint)*(byte *)(local_20c + 0x188);
        uVar7 = *(uint *)(local_20c + 200) & 0x80;
      }
      fVar1 = ABS(local_204 * *(float *)(this + 0x180) +
                  local_1fc * *(float *)(this + 0x188) + local_200 * *(float *)(this + 0x184));
      if (((fVar1 <= _DAT_362280fc) || (_DAT_3623ca30 <= fVar1)) || (param_3 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (local_4a4 != 0) {
        if (local_4a4 == 1) {
LAB_361af875:
          if (uVar7 != 0) goto LAB_361af881;
        }
        else if (local_4a4 == 2) {
          if (local_204 * *(float *)(this + 0x180) +
              local_1fc * *(float *)(this + 0x188) + local_200 * *(float *)(this + 0x184) <
              -*(float *)(*(int *)(*(int *)(this + 0xa8) + 0x14) + uVar4 * 0x28 + 8))
          goto LAB_361af881;
          goto LAB_361af875;
        }
        if (!bVar3) goto LAB_361afb10;
      }
LAB_361af881:
      local_498 = local_208 * _DAT_36243b10;
      local_4a0 = *pfVar5 * local_498;
      pCVar8 = this + 700;
      local_49c = local_400[local_4a4 * 3 + 1] * local_498;
      local_498 = local_400[local_4a4 * 3 + 2] * local_498;
      local_46c = *(float *)(this + 0x3c) + local_4a0;
      local_468 = *(float *)(this + 0x40) + local_49c;
      *(float *)pCVar8 = local_46c;
      *(float *)(this + 0x2c0) = local_468;
      local_464 = *(float *)(this + 0x44) + local_498;
      *(float *)(this + 0x2c4) = local_464;
      local_454 = local_4a0;
      local_450 = local_49c;
      local_44c = local_498;
      if ((bVar3) && (local_4a4 != 2)) {
        local_47c = SQRT(local_400[local_4a4 * 3 + 2] * local_400[local_4a4 * 3 + 2] +
                         local_400[local_4a4 * 3 + 1] * local_400[local_4a4 * 3 + 1] +
                         *pfVar5 * *pfVar5);
        if (local_47c < _DAT_36227cf0 == (local_47c == _DAT_36227cf0)) {
          local_47c = _DAT_36227cf0;
        }
        local_47c = local_47c * _DAT_362280f0;
        local_484 = local_204 * local_47c;
        local_480 = local_200 * local_47c;
        local_47c = local_1fc * local_47c;
        local_470 = _DAT_36223384 - local_208;
        local_478 = *pfVar5 * local_470;
        local_474 = local_400[local_4a4 * 3 + 1] * local_470;
        local_470 = local_400[local_4a4 * 3 + 2] * local_470;
        local_430 = local_484;
        local_42c = local_480;
        local_428 = local_47c;
        local_40c = local_478;
        local_408 = local_474;
        local_404 = local_470;
        pfVar5 = (float *)FUN_3605fd00(&local_204,local_3dc,&local_40c);
        local_460 = *pfVar5 + local_430;
        local_45c = pfVar5[1] + local_42c;
        local_458 = pfVar5[2] + local_428;
        *(float *)pCVar8 = local_460 + *(float *)pCVar8;
        *(float *)(this + 0x2c0) = local_45c + *(float *)(this + 0x2c0);
        *(float *)(this + 0x2c4) = local_458 + *(float *)(this + 0x2c4);
        local_43c = local_460;
        local_438 = local_45c;
        local_434 = local_458;
      }
      FUN_360cdd50(local_1e8,this);
      CWorld::ClipMove(*(CWorld **)(this + 0xa8),local_1e8);
      if (local_20 < _DAT_36223384 != (local_20 == _DAT_36223384)) {
LAB_361afb10:
        *(undefined4 *)(this + 700) = local_424;
        *(undefined4 *)(this + 0x2c0) = local_420;
        *(undefined4 *)(this + 0x2c4) = local_41c;
        SetPlacementFromNextPosition(this);
        return 0;
      }
    }
    SetPlacementFromNextPosition(this);
    local_4a4 = local_4a4 + 1;
    if (2 < local_4a4) {
      if (local_488 == 0.0) {
        *(float *)(this + 0x31c) = local_448 + *(float *)(this + 0x31c);
        *(float *)(this + 800) = local_444 + *(float *)(this + 800);
        *(float *)(this + 0x324) = local_440 + *(float *)(this + 0x324);
      }
      return 1;
    }
  } while( true );
}

