
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CCollisionCapsule::BoundOut(class Vector<float,3>,class
   Vector<float,3>,float,class Vector<float,3> &,class Vector<float,3> &) */

int __thiscall
CCollisionCapsule::BoundOut
          (CCollisionCapsule *this,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,CCollisionCapsule *param_8,float *param_9,float *param_10)

{
  CCollisionCapsule *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  
  fVar2 = param_4;
  local_38 = param_3;
                    /* 0x18c6e0  1088  ?BoundOut@CCollisionCapsule@@QAEHV?$Vector@M$02@@0MAAV2@1@Z
                        */
  local_3c = param_2;
  if (_DAT_3623dbfc <= (float)param_8) {
    fVar3 = *(float *)(this + 0x10) - *(float *)(this + 0x1c);
    pCVar1 = this + 0x1c;
    if (SQRT(fVar3 * fVar3 +
             (*(float *)(this + 0x14) - *(float *)(this + 0x20)) *
             (*(float *)(this + 0x14) - *(float *)(this + 0x20)) +
             (*(float *)(this + 0x18) - *(float *)(this + 0x24)) *
             (*(float *)(this + 0x18) - *(float *)(this + 0x24))) < _DAT_3623dbfc) {
      *(float *)pCVar1 = *(float *)pCVar1;
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x20);
      *(float *)(this + 0x24) = *(float *)(this + 0x24) + _DAT_36228818;
    }
    local_30 = param_5 * (float)param_8;
    local_2c = param_6 * (float)param_8;
    local_28 = param_7 * (float)param_8;
    pfVar5 = (float *)GetRelitiveVelocity(this,&param_2,param_2,param_3,param_4,param_2 - local_30,
                                          param_3 - local_2c,param_4 - local_28,param_8);
    param_5 = *pfVar5;
    param_6 = pfVar5[1];
    param_7 = pfVar5[2];
    param_8 = this + 0x28;
    FUN_3618d060(&param_2,*(float *)(this + 0x10),*(float *)(this + 0x14),*(float *)(this + 0x18),
                 (float *)param_8);
    FUN_3618d060(&local_30,*(float *)pCVar1,*(float *)(this + 0x20),*(float *)(this + 0x24),
                 (float *)param_8);
    fVar3 = ((local_30 - param_2) * (local_3c - param_2) +
            (local_2c - param_3) * (local_38 - param_3) + (local_28 - param_4) * (fVar2 - param_4))
            / ((local_30 - param_2) * (local_30 - param_2) +
              (local_2c - param_3) * (local_2c - param_3) +
              (local_28 - param_4) * (local_28 - param_4));
    local_48 = (local_30 - param_2) * fVar3 + param_2;
    local_44 = (local_2c - param_3) * fVar3 + param_3;
    local_40 = (local_28 - param_4) * fVar3 + param_4;
    if ((SQRT((local_48 - local_3c) * (local_48 - local_3c) +
              (local_44 - local_38) * (local_44 - local_38) +
              (local_40 - fVar2) * (local_40 - fVar2)) < *(float *)(this + 0xc)) &&
       ((((_DAT_3622376c <= fVar3 && (fVar3 < _DAT_36223384 != (fVar3 == _DAT_36223384))) ||
         (SQRT((local_3c - param_2) * (local_3c - param_2) +
               (local_38 - param_3) * (local_38 - param_3) + (fVar2 - param_4) * (fVar2 - param_4))
          < *(float *)(this + 0xc))) ||
        (SQRT((local_3c - local_30) * (local_3c - local_30) +
              (local_38 - local_2c) * (local_38 - local_2c) +
              (fVar2 - local_28) * (fVar2 - local_28)) < *(float *)(this + 0xc))))) {
      fVar4 = param_4;
      if ((fVar3 < _DAT_3622376c) ||
         (param_2 = local_30, param_3 = local_2c, fVar4 = local_28, _DAT_36223384 < fVar3)) {
        local_40 = fVar4;
        local_48 = param_2;
        local_44 = param_3;
      }
      local_38 = local_38 - local_44;
      local_3c = local_3c - local_48;
      fVar2 = fVar2 - local_40;
      fVar3 = SQRT(local_3c * local_3c + local_38 * local_38 + fVar2 * fVar2);
      param_2 = _DAT_3622376c;
      if ((float)_DAT_36223438 <= fVar3) {
        param_2 = _DAT_36223384 / fVar3;
      }
      param_4 = fVar2 * param_2;
      param_3 = local_38 * param_2;
      param_2 = local_3c * param_2;
      fVar2 = *(float *)(this + 0xc);
      *param_9 = param_2 * fVar2 + local_48;
      param_9[1] = param_3 * fVar2 + local_44;
      param_9[2] = param_4 * fVar2 + local_40;
      fVar3 = param_2 * param_5 + param_3 * param_6 + param_4 * param_7;
      fVar2 = *(float *)(this + 4);
      *param_10 = (param_5 - (param_2 * fVar3 + param_2 * fVar3)) * fVar2;
      param_10[1] = (param_6 - (param_3 * fVar3 + param_3 * fVar3)) * fVar2;
      param_10[2] = fVar2 * (param_7 - (fVar3 * param_4 + fVar3 * param_4));
      return 1;
    }
  }
  return 0;
}

