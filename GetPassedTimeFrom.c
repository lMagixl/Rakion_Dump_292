
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual float __thiscall CEntity::GetPassedTimeFrom(float &) */

float __thiscall CEntity::GetPassedTimeFrom(CEntity *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
                    /* 0x1248f0  2032  ?GetPassedTimeFrom@CEntity@@UAEMAAM@Z */
  if (*param_1 < _DAT_3622376c) {
    *param_1 = CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc);
  }
  fVar1 = CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc);
  iVar4 = CNetworkLibrary::IsPaused(_pNetwork);
  fVar3 = _DAT_362253e8;
  fVar2 = _DAT_3622376c;
  if (iVar4 == 0) {
    fVar2 = fVar1 - *param_1;
  }
  *param_1 = fVar1;
  if (fVar3 < fVar2) {
    fVar2 = _DAT_362253e8;
  }
  return fVar2;
}

