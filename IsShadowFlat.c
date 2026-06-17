
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall CBrushShadowMap::IsShadowFlat(unsigned long &) */

int __thiscall CBrushShadowMap::IsShadowFlat(CBrushShadowMap *this,ulong *param_1)

{
  float fVar1;
  int *piVar2;
  CLightSource *this_00;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint local_54;
  uint local_50;
  int *local_4c;
  float fStack_48;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [20];
  int iStack_c;
  uint uStack_8;
  uint uStack_4;
  
                    /* 0x1412f0  2471  ?IsShadowFlat@CBrushShadowMap@@UAEHAAK@Z */
  if (DAT_362c53bc < 0) {
    DAT_362c53bc = 0;
  }
  else if (2 < DAT_362c53bc) {
    DAT_362c53bc = 2;
  }
  if (((DAT_362a40a4 == 0) && (DAT_362c53bc < 1)) || (this[0xba] != (CBrushShadowMap)0x1)) {
    return 0;
  }
  uVar9 = *(uint *)(*(int *)(this + 0xdc) + 0x40);
  local_50 = uVar9 >> 8 & 0xff;
  local_54 = uVar9 >> 0x10 & 0xff;
  uVar9 = uVar9 >> 0x18;
  if (((this[0xbc] != (CBrushShadowMap)0x0) &&
      (piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(this + 0xdc) + 0x38) + 0x14) + 0x668),
      piVar2 != (int *)0x0)) &&
     (iVar6 = (**(code **)(*piVar2 + 0xd4))(this[0xbc],local_20), iVar6 != 0)) {
    if (DAT_362c53bc < 1) {
      return 0;
    }
    uVar7 = (uStack_4 >> 0x18) + (uStack_8 >> 0x18) >> 1;
    if (iStack_c != 0) {
      uVar7 = -uVar7;
    }
    uVar9 = uVar9 + uVar7;
    local_54 = local_54 + uVar7;
    local_50 = local_50 + uVar7;
  }
  local_4c = *(int **)(this + 0x90);
  bVar5 = false;
  do {
    while( true ) {
      if (*local_4c == 0) {
        if ((0 < DAT_362c53bc) && (!bVar5)) {
          fVar3 = _DAT_36238b14;
          fVar4 = _DAT_36238b14;
          fVar1 = _DAT_36238b14;
          if ((float10)_DAT_36223438 <= SQRT((float10)_DAT_36238b18)) {
            fVar1 = (float)((float10)_DAT_36223384 / SQRT((float10)_DAT_36238b18));
            fVar3 = fVar1 * _DAT_36238b10;
            fVar4 = fVar1 * _DAT_36227d20;
            fVar1 = fVar1 * _DAT_36228838;
          }
          iVar6 = *(int *)(this + -0xd0);
          fVar3 = -(fVar3 * *(float *)(iVar6 + 4) +
                   fVar1 * *(float *)(iVar6 + 8) + fVar4 * *(float *)(iVar6 + 0xc));
          if (_DAT_362280f0 < fVar3) {
            uVar7 = (int)ROUND(fVar3 * _DAT_36238b0c * 255.0) & 0xff;
            local_54 = local_54 + uVar7;
            uVar9 = uVar9 + uVar7;
            local_50 = local_50 + uVar7;
          }
        }
        if ((int)uVar9 < 0) {
          uVar9 = 0;
        }
        else if (0xff < (int)uVar9) {
          uVar9 = 0xff;
        }
        if ((int)local_54 < 0) {
          local_54 = 0;
        }
        else if (0xff < (int)local_54) {
          local_54 = 0xff;
        }
        if ((int)local_50 < 0) {
          local_50 = 0;
        }
        else if (0xff < (int)local_50) {
          local_50 = 0xff;
        }
        *param_1 = (uint)CONCAT21(CONCAT11((char)uVar9,(undefined1)local_54),(undefined1)local_50)
                   << 8;
        return 1;
      }
      this_00 = (CLightSource *)local_4c[5];
      if (-1 < (char)*(uint *)(this_00 + 0x1c)) break;
LAB_361415c6:
      local_4c = (int *)*local_4c;
    }
    if ((*(uint *)(this_00 + 0x1c) & 1) == 0) {
      if (((*(byte *)(local_4c + -1) & 4) == 0) && (DAT_362c53bc < 1)) {
        return 0;
      }
      goto LAB_361415c6;
    }
    if ((((local_4c[-1] & 1U) != 0) && ((local_4c[-1] & 0xcU) == 0)) && (DAT_362c53bc < 1)) {
      return 0;
    }
    uVar10 = 0xffffff00;
    fStack_48 = 1.0;
    if ((*(uint *)(this + -8) & 0x100000) == 0) {
      AnglesToDirectionVector
                ((Vector<float,3> *)(*(int *)(this_00 + 0xc) + 0x48),(Vector<float,3> *)&fStack_2c);
      iVar6 = *(int *)(this + -0xd0);
      fVar3 = fStack_2c * *(float *)(iVar6 + 4) +
              fStack_24 * *(float *)(iVar6 + 0xc) + fStack_28 * *(float *)(iVar6 + 8);
      if (fVar3 <= _DAT_3622376c) {
        uVar7 = (uint)ROUND(-fVar3 * 255.0);
        uVar10 = ((uVar7 << 8 | uVar7) << 8 | uVar7) << 8;
      }
      else {
        uVar10 = 0;
        fStack_48 = _DAT_36223384 - fVar3;
      }
    }
    if ((*(uint *)(this + -8) & 0x1000000) != 0) {
      uVar8 = CLightSource::GetLightAmbient(this_00);
      if (_DAT_362280f0 < *(float *)(this_00 + 0x30)) {
        uVar7 = (uint)ROUND(((fStack_48 - _DAT_36223384) * *(float *)(this_00 + 0x30) +
                            _DAT_36223384) * 255.0);
        uVar8 = MulColors(uVar8,((uVar7 << 8 | uVar7) << 8 | uVar7) << 8);
      }
      uVar9 = uVar9 + (uVar8 >> 0x18);
      local_54 = local_54 + (uVar8 >> 0x10 & 0xff);
      local_50 = local_50 + (uVar8 >> 8 & 0xff);
    }
    if (((*(byte *)(local_4c + -1) & 4) != 0) || ((*(uint *)(this + -8) & 0x10000) == 0))
    goto LAB_361415c6;
    uVar8 = CLightSource::GetLightColor(this_00);
    uVar10 = MulColors(uVar8,uVar10);
    uVar9 = uVar9 + (uVar10 >> 0x18);
    local_50 = local_50 + (uVar10 >> 8 & 0xff);
    local_4c = (int *)*local_4c;
    local_54 = local_54 + (uVar10 >> 0x10 & 0xff);
    bVar5 = true;
  } while( true );
}

