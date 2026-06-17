
/* WARNING: Removing unreachable block (ram,0x36092ffa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGfxLibrary::ReduceShadows(void) */

void __thiscall CGfxLibrary::ReduceShadows(CGfxLibrary *this)

{
  int *piVar1;
  CShadowMap *this_00;
  int *piVar2;
  float fVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  float local_2c;
  uint local_18;
  int local_14;
  
                    /* 0x92d30  3075  ?ReduceShadows@CGfxLibrary@@QAEXXZ */
  iVar10 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar10 + 0x1f0) = *puVar4;
    *(undefined4 *)(iVar10 + 500) = puVar4[1];
  }
  if (_DAT_362a408c < _DAT_362287b0) {
    _DAT_362a408c = 0.1;
  }
  else if (_DAT_362a408c < _DAT_3622880c == (_DAT_362a408c == _DAT_3622880c)) {
    _DAT_362a408c = 128.0;
  }
  if (DAT_362a4090 < _DAT_36223384) {
    DAT_362a4090 = 1.0;
  }
  else if (DAT_362a4090 < _DAT_3622e4e8 == (DAT_362a4090 == _DAT_3622e4e8)) {
    DAT_362a4090 = 120.0;
  }
  uVar13 = FUN_361bfd6c();
  uVar9 = (uint)uVar13;
  CTimer::GetHighPrecisionTimer(_pTimer);
  iVar10 = 0;
  if (DAT_362c9a34 != 0) {
    DAT_362c9a34 = 0;
    DAT_362c9a38 = 0;
    DAT_362c9a3c = 0;
    DAT_362c9a40 = 0;
    _DAT_362c9a44 = 0;
    DAT_362c9a48 = 0;
    iVar11 = 4;
    piVar6 = *(int **)(this + 0xb0c);
    while (piVar2 = (int *)*piVar6, piVar2 != (int *)0x0) {
      if (((((float10)CONCAT44((local_14 - piVar6[0x11]) - (uint)(local_18 < (uint)piVar6[0x10]),
                               local_18 - piVar6[0x10]) / (float10)*(longlong *)_pTimer <=
             (float10)_DAT_3622e4e4) || ((piVar6[2] & 0x200000U) != 0)) || (iVar11 < 1)) ||
         (DAT_362c53b8 != 0)) {
        if (piVar6[0xb] != 0) {
          DAT_362c9a3c = DAT_362c9a3c + piVar6[0xc];
          DAT_362c9a48 = DAT_362c9a48 + 1;
        }
        if ((int *)piVar6[10] == piVar6 + 5) {
          _DAT_362c9a44 = _DAT_362c9a44 + 1;
          piVar6 = piVar2;
        }
        else {
          uVar5 = piVar6[0xc];
          DAT_362c9a38 = DAT_362c9a38 + uVar5;
          DAT_362c9a40 = DAT_362c9a40 + 1;
          piVar1 = piVar6 + 0x17;
          piVar6 = piVar2;
          if (*piVar1 != 0) {
            if (DAT_362a4094 == 0) {
              uVar5 = (int)uVar5 / 2;
            }
            if ((uVar5 & 0xfff) != 0) {
              uVar5 = uVar5 + (0x1000 - (uVar5 & 0xfff));
            }
            DAT_362c9a38 = DAT_362c9a38 + uVar5;
          }
        }
      }
      else {
        CShadowMap::Uncache((CShadowMap *)(piVar6 + -2));
        iVar11 = iVar11 + -1;
        piVar6 = piVar2;
      }
    }
  }
  *(float *)(DAT_362bef74 + 0x110) = (float)DAT_362c9a3c + *(float *)(DAT_362bef74 + 0x110);
  *(float *)(DAT_362bef74 + 0xe8) = (float)DAT_362c9a38 + *(float *)(DAT_362bef74 + 0xe8);
  *(float *)(DAT_362bef74 + 0xfc) = (float)DAT_362c9a48 + *(float *)(DAT_362bef74 + 0xfc);
  *(float *)(DAT_362bef74 + 0xc0) = (float)DAT_362c9a40 + *(float *)(DAT_362bef74 + 0xc0);
  *(float *)(DAT_362bef74 + 0xd4) = (float)_DAT_362c9a44 + *(float *)(DAT_362bef74 + 0xd4);
  iVar11 = DAT_362bef7c;
  if (DAT_362c53b8 == 0) {
    uVar12 = uVar9 >> 1;
    uVar5 = DAT_362c9a3c + DAT_362c9a38;
    if (uVar12 <= uVar5) {
      fVar3 = (float)(int)(uVar5 - uVar12);
      if ((int)(uVar5 - uVar12) < 0) {
        fVar3 = fVar3 + _DAT_362265a8;
      }
      fVar3 = fVar3 / (float)uVar12;
      if (fVar3 < _DAT_36223384 == (fVar3 == _DAT_36223384)) {
        fVar3 = _DAT_36223384;
      }
      fVar3 = SQRT(fVar3);
      if (fVar3 == _DAT_3622376c) {
        local_2c = DAT_362a4090;
      }
      else if (fVar3 == _DAT_36223384) {
        local_2c = 0.2;
      }
      else {
        local_2c = (_DAT_362287a8 - DAT_362a4090) * fVar3 + DAT_362a4090;
      }
      uVar13 = FUN_361bfd6c();
      piVar6 = *(int **)(_pGfx + 0xb0c);
      while (((piVar2 = (int *)*piVar6, iVar11 = DAT_362bef7c, piVar2 != (int *)0x0 &&
              ((this_00 = (CShadowMap *)(piVar6 + -2), uVar9 <= uVar5 || (iVar10 <= (int)uVar13))))
             && (uVar9 >> 2 <= uVar5))) {
        puVar8 = (uint *)(piVar6 + 0x10);
        piVar1 = piVar6 + 0x11;
        piVar6 = piVar2;
        if ((float10)local_2c <
            (float10)CONCAT44((local_14 - *piVar1) - (uint)(local_18 < *puVar8),local_18 - *puVar8)
            / (float10)*(longlong *)_pTimer) {
          lVar7 = CShadowMap::Uncache(this_00);
          uVar5 = uVar5 - lVar7;
          iVar10 = iVar10 + 1;
        }
      }
    }
  }
  DAT_362bef7c = iVar11;
  if (1 < _iStatsMode) {
    puVar8 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar9 = *puVar8 - *(uint *)(iVar11 + 0x1f0);
    *(int *)(iVar11 + 0x1fc) =
         *(int *)(iVar11 + 0x1fc) +
         ((puVar8[1] - *(int *)(iVar11 + 500)) - (uint)(*puVar8 < *(uint *)(iVar11 + 0x1f0))) +
         (uint)CARRY4(*(uint *)(iVar11 + 0x1f8),uVar9);
    *(uint *)(iVar11 + 0x1f8) = *(uint *)(iVar11 + 0x1f8) + uVar9;
    *(undefined4 *)(iVar11 + 0x1f0) = 0xffffffff;
    *(undefined4 *)(iVar11 + 500) = 0xffffffff;
  }
  return;
}

