
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::TestModelFull(class CEntity *,class CModelObject &) */

void __thiscall CCastRay::TestModelFull(CCastRay *this,CEntity *param_1,CModelObject *param_2)

{
  CEntity *pCVar1;
  CModelObject *pCVar2;
  int iVar3;
  ModelPolygon *pMVar4;
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
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0xdc8e0  3809  ?TestModelFull@CCastRay@@QAEXPAVCEntity@@AAVCModelObject@@@Z
                        */
  pCVar2 = param_2;
  local_18 = 3e+38;
  local_c = -3e+38;
  local_14 = 3e+38;
  local_8 = -3e+38;
  local_10 = 3e+38;
  local_4 = -3e+38;
  CModelObject::GetAllFramesBBox(param_2,(AABBox<float,3> *)&local_18);
  local_c = local_c * ABS(*(float *)(pCVar2 + 0x84) * _DAT_3622dd0c);
  local_18 = ABS(*(float *)(pCVar2 + 0x84) * _DAT_3622dd0c) * local_18;
  local_8 = local_8 * ABS(*(float *)(pCVar2 + 0x88) * _DAT_3622dd0c);
  local_14 = ABS(*(float *)(pCVar2 + 0x88) * _DAT_3622dd0c) * local_14;
  local_4 = local_4 * ABS(*(float *)(pCVar2 + 0x8c) * _DAT_3622dd0c);
  local_10 = ABS(*(float *)(pCVar2 + 0x8c) * _DAT_3622dd0c) * local_10;
  local_3c = local_c - local_18;
  local_38 = local_8 - local_14;
  local_34 = local_4 - local_10;
  local_30 = local_3c;
  local_2c = local_38;
  local_28 = local_34;
  FUN_3605cd80(&local_18,&local_3c);
  pCVar1 = param_1;
  local_24 = local_3c * *(float *)(param_1 + 0x54) +
             local_34 * *(float *)(param_1 + 0x5c) + local_38 * *(float *)(param_1 + 0x58);
  local_20 = local_34 * *(float *)(param_1 + 0x68) +
             local_38 * *(float *)(param_1 + 100) + local_3c * *(float *)(param_1 + 0x60);
  local_1c = local_34 * *(float *)(param_1 + 0x74) +
             local_38 * *(float *)(param_1 + 0x70) + local_3c * *(float *)(param_1 + 0x6c);
  local_3c = local_24 + *(float *)(param_1 + 0x3c);
  local_38 = local_20 + *(float *)(param_1 + 0x40);
  local_34 = local_1c + *(float *)(param_1 + 0x44);
  iVar3 = FUN_360dbfc0((float *)(this + 0x2c),&local_3c,
                       SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28) *
                       _DAT_36227cf0 + *(float *)(this + 0x80),(float *)&param_1);
  if (iVar3 != 0) {
    pMVar4 = CModelObject::PolygonHit
                       (pCVar2,*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14),
                        *(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                        *(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x24),
                        *(undefined4 *)(pCVar1 + 0x3c),*(undefined4 *)(pCVar1 + 0x40),
                        *(undefined4 *)(pCVar1 + 0x44),*(undefined4 *)(pCVar1 + 0x48),
                        *(undefined4 *)(pCVar1 + 0x4c),*(undefined4 *)(pCVar1 + 0x50),0,&param_2);
    if ((pMVar4 != (ModelPolygon *)0x0) && ((float)param_2 < *(float *)(this + 0x94))) {
      *(CModelObject **)(this + 0x94) = param_2;
      *(CEntity **)(this + 0x84) = pCVar1;
      *(undefined4 *)(this + 0xa8) = 0;
      *(undefined4 *)(this + 0xa4) = 0;
    }
  }
  return;
}

