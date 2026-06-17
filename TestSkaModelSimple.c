
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::TestSkaModelSimple(class CEntity *,class CModelInstance &) */

void __thiscall
CCastRay::TestSkaModelSimple(CCastRay *this,CEntity *param_1,CModelInstance *param_2)

{
  CModelInstance *pCVar1;
  int iVar2;
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
  
                    /* 0xdcc30  3815
                       ?TestSkaModelSimple@CCastRay@@QAEXPAVCEntity@@AAVCModelInstance@@@Z */
  pCVar1 = param_2;
  local_18 = 3e+38;
  local_c = -3e+38;
  local_14 = 3e+38;
  local_8 = -3e+38;
  local_10 = 3e+38;
  local_4 = -3e+38;
  CModelInstance::GetCurrentColisionBox(param_2,(AABBox<float,3> *)&local_18);
  local_c = local_c * ABS(*(float *)(pCVar1 + 0x90));
  local_18 = ABS(*(float *)(pCVar1 + 0x90)) * local_18;
  local_8 = local_8 * ABS(*(float *)(pCVar1 + 0x94));
  local_14 = ABS(*(float *)(pCVar1 + 0x94)) * local_14;
  local_4 = local_4 * ABS(*(float *)(pCVar1 + 0x98));
  local_10 = ABS(*(float *)(pCVar1 + 0x98)) * local_10;
  local_3c = local_c - local_18;
  local_38 = local_8 - local_14;
  local_34 = local_4 - local_10;
  local_30 = local_3c;
  local_2c = local_38;
  local_28 = local_34;
  FUN_3605cd80(&local_18,&local_3c);
  local_24 = local_3c * *(float *)(param_1 + 0x54) +
             local_34 * *(float *)(param_1 + 0x5c) + local_38 * *(float *)(param_1 + 0x58);
  local_20 = local_34 * *(float *)(param_1 + 0x68) +
             local_38 * *(float *)(param_1 + 100) + local_3c * *(float *)(param_1 + 0x60);
  local_1c = local_34 * *(float *)(param_1 + 0x74) +
             local_38 * *(float *)(param_1 + 0x70) + local_3c * *(float *)(param_1 + 0x6c);
  local_3c = local_24 + *(float *)(param_1 + 0x3c);
  local_38 = local_20 + *(float *)(param_1 + 0x40);
  local_34 = local_1c + *(float *)(param_1 + 0x44);
  iVar2 = FUN_360dbfc0((float *)(this + 0x2c),&local_3c,
                       SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28) *
                       _DAT_36227cf0 + *(float *)(this + 0x80),(float *)&param_2);
  if (((iVar2 != 0) && ((float)param_2 < *(float *)(this + 0x94))) &&
     (_DAT_3622376c < (float)param_2)) {
    *(CModelInstance **)(this + 0x94) = param_2;
    *(CEntity **)(this + 0x84) = param_1;
    *(undefined4 *)(this + 0xa8) = 0;
    *(undefined4 *)(this + 0xa4) = 0;
  }
  return;
}

