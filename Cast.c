
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::Cast(class CWorld *) */

void __thiscall CCastRay::Cast(CCastRay *this,CWorld *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  CEntity *pCVar5;
  float fVar6;
  bool bVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  float local_18;
  float local_14;
  float local_10;
  
                    /* 0xde040  1147  ?Cast@CCastRay@@QAEXPAVCWorld@@@Z */
  iVar10 = DAT_362bef7c;
  if ((*(uint *)(DAT_362bef7c + 0x1a0) & *(uint *)(DAT_362bef7c + 0x1a4)) == 0xffffffff) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    if (1 < _iStatsMode) {
      puVar8 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar2 = *puVar8;
      uVar3 = puVar8[1];
      uVar11 = uVar2 - *(uint *)(iVar10 + 0x1a0);
      uVar4 = *(uint *)(iVar10 + 0x1a8);
      *(uint *)(iVar10 + 0x1a8) = uVar4 + uVar11;
      *(uint *)(iVar10 + 0x1ac) =
           *(int *)(iVar10 + 0x1ac) +
           ((uVar3 - *(int *)(iVar10 + 0x1a4)) - (uint)(uVar2 < *(uint *)(iVar10 + 0x1a0))) +
           (uint)CARRY4(uVar4,uVar11);
      *(undefined4 *)(iVar10 + 0x1a0) = 0xffffffff;
      *(undefined4 *)(iVar10 + 0x1a4) = 0xffffffff;
    }
  }
  iVar10 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar9 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar10 + 0x1c8) = *puVar9;
    *(undefined4 *)(iVar10 + 0x1cc) = puVar9[1];
  }
  pCVar5 = *(CEntity **)(this + 0x28);
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(uint *)(this + 4) = (-(uint)(*(int *)(this + 0x7c) != 0) & 0xbfc00810) + 0x40400000;
  if ((pCVar5 == (CEntity *)0x0) || (*(int *)(this + 0x60) != 0)) {
    TestWholeWorld(this,param_1);
  }
  else {
    iVar10 = FUN_360de560(0x362cc0c4);
    if (iVar10 == 0) {
      AddSectorsAroundEntity(this,pCVar5);
    }
    TestThroughSectors(this);
  }
  local_18 = *(float *)(this + 0x38) - *(float *)(this + 0x2c);
  local_14 = *(float *)(this + 0x3c) - *(float *)(this + 0x30);
  local_10 = *(float *)(this + 0x40) - *(float *)(this + 0x34);
  fVar1 = SQRT(local_14 * local_14 + local_18 * local_18 + local_10 * local_10);
  fVar6 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    fVar6 = _DAT_36223384 / fVar1;
  }
  local_10 = local_10 * fVar6;
  local_14 = local_14 * fVar6;
  local_18 = local_18 * fVar6;
  fVar1 = *(float *)(this + 0x94);
  *(float *)(this + 0x88) = *(float *)(this + 0x2c) + local_18 * fVar1;
  *(float *)(this + 0x8c) = *(float *)(this + 0x30) + local_14 * fVar1;
  *(float *)(this + 0x90) = *(float *)(this + 0x34) + local_10 * fVar1;
  iVar10 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar8 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    uVar11 = uVar2 - *(uint *)(iVar10 + 0x1c8);
    uVar4 = *(uint *)(iVar10 + 0x1d0);
    *(uint *)(iVar10 + 0x1d0) = uVar4 + uVar11;
    *(uint *)(iVar10 + 0x1d4) =
         *(int *)(iVar10 + 0x1d4) +
         ((uVar3 - *(int *)(iVar10 + 0x1cc)) - (uint)(uVar2 < *(uint *)(iVar10 + 0x1c8))) +
         (uint)CARRY4(uVar4,uVar11);
    *(undefined4 *)(iVar10 + 0x1c8) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x1cc) = 0xffffffff;
  }
  iVar10 = DAT_362bef7c;
  if ((bVar7) && (1 < _iStatsMode)) {
    puVar9 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar10 + 0x1a0) = *puVar9;
    *(undefined4 *)(iVar10 + 0x1a4) = puVar9[1];
  }
  return;
}

