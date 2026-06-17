
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_36102d40(void *this,int param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CEntity *pCVar6;
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
  
  iVar5 = param_1 * 0x34;
  fVar1 = (param_2 - *(float *)(iVar5 + 4 + (int)this)) / CTimer::TickQuantum;
  pCVar6 = CWorld::EntityFromID((CWorld *)(_pNetwork + 0x11e4),*(ulong *)this);
  if (pCVar6 != (CEntity *)0x0) {
    local_c = *(float *)((int)this + iVar5 + 0x2c) * CTimer::TickQuantum;
    local_8 = *(float *)((int)this + iVar5 + 0x30) * CTimer::TickQuantum;
    local_4 = *(float *)((int)this + iVar5 + 0x34) * CTimer::TickQuantum;
    local_18 = *(float *)((int)this + iVar5 + 0x20) * CTimer::TickQuantum;
    local_14 = *(float *)((int)this + iVar5 + 0x24) * CTimer::TickQuantum;
    local_10 = *(float *)((int)this + iVar5 + 0x28) * CTimer::TickQuantum;
    CPlacement3D::Extrapolate
              ((CPlacement3D *)&local_30,(CPlacement3D *)((int)this + iVar5 + 8),
               (CPlacement3D *)&local_18,fVar1);
    local_30 = local_30 - *(float *)(pCVar6 + 0x3c);
    fVar1 = SQRT(local_30 * local_30 +
                 (local_2c - *(float *)(pCVar6 + 0x40)) * (local_2c - *(float *)(pCVar6 + 0x40)) +
                 (local_28 - *(float *)(pCVar6 + 0x44)) * (local_28 - *(float *)(pCVar6 + 0x44)));
    fVar2 = ABS(local_1c - *(float *)(pCVar6 + 0x50)) +
            ABS(local_20 - *(float *)(pCVar6 + 0x4c)) + ABS(local_24 - *(float *)(pCVar6 + 0x48));
    fVar3 = *(float *)(pCVar6 + 0x3c) - *param_3;
    fVar3 = (SQRT(fVar3 * fVar3 +
                  (*(float *)(pCVar6 + 0x40) - param_3[1]) *
                  (*(float *)(pCVar6 + 0x40) - param_3[1]) +
                  (*(float *)(pCVar6 + 0x44) - param_3[2]) *
                  (*(float *)(pCVar6 + 0x44) - param_3[2])) + _DAT_36223384) * 1.0;
    fVar4 = fVar3 * _DAT_362a604c;
    if ((fVar4 < fVar1 != (fVar4 == fVar1)) ||
       (fVar3 = fVar3 * _DAT_362a6050, fVar3 < fVar2 != (fVar3 == fVar2))) {
      return 1;
    }
  }
  return 0;
}

