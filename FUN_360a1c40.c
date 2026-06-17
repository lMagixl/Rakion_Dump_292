
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360a1c40(float param_1,int param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  fVar8 = param_1;
  iVar3 = *(int *)((int)param_1 + 8);
  if (((*(byte *)(iVar3 + 0x44) & 1) == 0) ||
     ((*(int **)((int)param_1 + 0x9c) != (int *)0x0 &&
      (iVar9 = FUN_3609d930(*(int **)((int)param_1 + 0x9c)), iVar9 != 0)))) {
    sVar2 = *(short *)(iVar3 + 0x16);
    if (((sVar2 == 1) || (sVar2 == 2)) && (*(ushort *)(iVar3 + 0x22) >> 3 == 2)) {
      DAT_362ca23c = *(undefined4 **)(iVar3 + 0x2c);
      _DAT_362ca21c = (float)*(int *)(iVar3 + 0x18);
      if (*(int *)(iVar3 + 0x18) < 0) {
        _DAT_362ca21c = _DAT_362ca21c + _DAT_362265a8;
      }
      _DAT_362ca21c = _DAT_362ca21c * *(float *)((int)param_1 + 0x7c);
      DAT_362ca220 = *(int *)(iVar3 + 0x3c);
      _DAT_362ca208 = (_DAT_36223384 / (float)_DAT_362ca248) * _DAT_362ca21c;
      if (((*(byte *)((int)param_1 + 0x2c) & 1) == 0) && (1 < DAT_362ca220)) {
        DAT_362ca220 = DAT_362ca220 + -1;
      }
      local_18 = *(float *)((int)param_1 + 0x84);
      if (local_18 < _DAT_3622376c) {
        local_18 = 0.0;
      }
      local_14 = *(float *)((int)param_1 + 0x88);
      if (local_14 < _DAT_3622376c) {
        local_14 = 0.0;
      }
      fVar6 = _DAT_36223384;
      if (param_2 != 0) {
        fVar6 = _DAT_3622376c;
      }
      fVar1 = *(float *)((int)param_1 + 0x6c);
      if (fVar1 < _DAT_3622376c) {
        param_1 = 0.0;
      }
      else {
        param_1 = fVar6;
        if (fVar1 < fVar6 != (fVar1 == fVar6)) {
          param_1 = fVar1;
        }
      }
      local_1c = *(float *)((int)fVar8 + 0x70);
      if (local_1c < _DAT_3622376c) {
        local_1c = 0.0;
      }
      else if (local_1c < fVar6 == (local_1c == fVar6)) {
        local_1c = fVar6;
      }
      _DAT_362ca20c = _DAT_362ca208;
      DAT_362ca210 = _DAT_362ca208;
      if ((((_DAT_362253e4 <= local_18) || (_DAT_362253e4 <= local_14)) ||
          (_DAT_362253e4 <= param_1)) || (_DAT_362253e4 <= local_1c)) {
        DAT_362ca1d4 = ~*(uint *)((int)fVar8 + 0x2c) & 1;
        _DAT_362ca218 = *(float *)((int)fVar8 + 0x80);
        _DAT_362ca204 = *(float *)((int)fVar8 + 0x90);
        _DAT_362ca200 = *(float *)((int)fVar8 + 0x94);
        _DAT_362ca214 = *(float *)((int)fVar8 + 0x98);
        DAT_362ca238 = (int)ROUND(local_18 * _DAT_362301a4);
        DAT_362ca234 = (int)ROUND(local_14 * _DAT_362301a4);
        DAT_362ca1d8._0_4_ =
             (int)ROUND((param_1 - local_18) * (_DAT_362301a4 / (float)DAT_362ca244));
        DAT_362ca1d8._4_4_ =
             (int)ROUND((local_1c - local_14) * (_DAT_362301a4 / (float)DAT_362ca244));
        if (_DAT_362253e4 < param_1) {
          param_1 = (float)((int)DAT_362ca1d8 * DAT_362ca244 + DAT_362ca238) * _DAT_362301a0;
        }
        if (_DAT_362253e4 < local_1c) {
          local_1c = (float)(DAT_362ca1d8._4_4_ * DAT_362ca244 + DAT_362ca234) * _DAT_362301a0;
        }
        if (((byte)_pSound[0x44] & 2) == 0) {
          DAT_362ca238 = DAT_362ca238 >> 1;
          DAT_362ca234 = DAT_362ca234 >> 1;
        }
        DAT_362ca230 = *(undefined4 *)((int)fVar8 + 0x74);
        DAT_362ca22c = *(undefined4 *)((int)fVar8 + 0x78);
        local_10 = 0;
        if ((*(byte *)(iVar3 + 0x44) & 1) != 0) {
          puVar4 = *(undefined4 **)(_pSound + 100);
          uVar5 = (int)ROUND((float)*(ushort *)(iVar3 + 0x16) * (float)DAT_362ca244 * _DAT_362ca208)
                  * 2;
          uVar10 = FUN_3609d9d0(*(void **)((int)fVar8 + 0x9c),puVar4,uVar5);
          if (DAT_362ca1d4 == 0) {
            for (; (int)uVar10 < (int)uVar5; uVar10 = uVar10 + uVar11) {
              FUN_3609d8b0(*(int **)((int)fVar8 + 0x9c));
              uVar11 = FUN_3609d9d0(*(void **)((int)fVar8 + 0x9c),
                                    (undefined4 *)(uVar10 + (int)puVar4),uVar5 - uVar10);
            }
          }
          else if ((int)uVar10 < (int)uVar5) {
            local_10 = 1;
          }
          _DAT_362ca200 = _DAT_3622376c;
          *(undefined4 *)(uVar10 + (int)puVar4) = *puVar4;
          DAT_362ca220 = (int)uVar10 >> 2;
          _DAT_362ca204 = 0.0;
          _DAT_362ca218 = 0.0;
          DAT_362ca23c = puVar4;
        }
        _DAT_362ca228 = (int)*(short *)((int)fVar8 + 0x8c);
        _DAT_362ca224 = (int)*(short *)((int)fVar8 + 0x8e);
        fVar6 = _DAT_362ca218 - _DAT_362ca214 / _DAT_362ca21c;
        fVar1 = ABS((_DAT_362ca21c * fVar6) / (float)DAT_362ca244);
        if (fVar6 <= _DAT_3622376c) {
          fVar6 = _DAT_362ca208 * _DAT_36227cf0;
          fVar7 = fVar1 * _DAT_36227cf0;
          if (fVar7 < fVar6 != (fVar7 == fVar6)) {
            fVar6 = fVar7;
          }
          fVar6 = -fVar6;
          local_14 = fVar1 + fVar6;
        }
        else {
          local_14 = _DAT_362ca20c * _DAT_36227cf0;
          fVar6 = fVar1 * _DAT_36227cf0;
          if (fVar6 < local_14 != (fVar6 == local_14)) {
            local_14 = fVar6;
          }
          local_14 = -local_14;
          fVar6 = local_14 + fVar1;
        }
        _DAT_362ca20c = _DAT_362ca20c + local_14;
        _DAT_362ca208 = _DAT_362ca208 + fVar6;
        if (0 < DAT_362ca220) {
          if (_DAT_362ca204 < _DAT_3622376c) {
            do {
              _DAT_362ca204 = (float)DAT_362ca220 + _DAT_362ca204;
            } while (_DAT_362ca204 < _DAT_3622376c);
          }
          if (_DAT_362ca200 < _DAT_3622376c) {
            do {
              _DAT_362ca200 = (float)DAT_362ca220 + _DAT_362ca200;
            } while (_DAT_362ca200 < _DAT_3622376c);
          }
          fVar1 = (float)DAT_362ca220;
          for (; fVar1 <= _DAT_362ca204; _DAT_362ca204 = _DAT_362ca204 - fVar1) {
          }
          for (; fVar1 <= _DAT_362ca200; _DAT_362ca200 = _DAT_362ca200 - fVar1) {
          }
          DAT_362ca1d0 = 0;
          if (sVar2 == 2) {
            FUN_360a2610();
          }
          else {
            FUN_360a2450();
          }
        }
        if ((*(byte *)(iVar3 + 0x44) & 1) != 0) {
          DAT_362ca1d0 = local_10;
        }
        if (DAT_362ca1d0 != 0) {
          _DAT_362ca228 = 0;
          _DAT_362ca224 = 0;
          *(uint *)((int)fVar8 + 0x2c) = *(uint *)((int)fVar8 + 0x2c) & 0x7fffffff;
        }
        *(undefined2 *)((int)fVar8 + 0x8c) = DAT_362ca228;
        *(undefined2 *)((int)fVar8 + 0x8e) = DAT_362ca224;
        *(float *)((int)fVar8 + 0x98) =
             (float)DAT_362ca244 * (fVar6 - local_14) + *(float *)((int)fVar8 + 0x98);
        *(float *)((int)fVar8 + 0x90) = (float)_DAT_362ca1f8 * _DAT_3623019c;
        *(float *)((int)fVar8 + 0x94) = (float)_DAT_362ca1f0 * _DAT_3623019c;
      }
      else {
        if ((*(byte *)(iVar3 + 0x44) & 1) == 0) {
          _DAT_362ca214 = (float)DAT_362ca244 * _DAT_362ca208;
          fVar6 = _DAT_362ca214 + *(float *)((int)fVar8 + 0x90);
          *(float *)((int)fVar8 + 0x90) = fVar6;
          fVar1 = _DAT_362ca214 + *(float *)((int)fVar8 + 0x94);
          *(float *)((int)fVar8 + 0x94) = fVar1;
          if ((*(uint *)((int)fVar8 + 0x2c) & 1) == 0) {
            *(uint *)((int)fVar8 + 0x2c) = *(uint *)((int)fVar8 + 0x2c) & 0x7fffffff;
          }
          else {
            if (fVar6 < _DAT_3622376c) {
              do {
                *(float *)((int)fVar8 + 0x90) = (float)DAT_362ca220 + *(float *)((int)fVar8 + 0x90);
              } while (*(float *)((int)fVar8 + 0x90) < _DAT_3622376c);
            }
            if (fVar1 < _DAT_3622376c) {
              do {
                *(float *)((int)fVar8 + 0x94) = (float)DAT_362ca220 + *(float *)((int)fVar8 + 0x94);
              } while (*(float *)((int)fVar8 + 0x94) < _DAT_3622376c);
            }
            fVar6 = (float)DAT_362ca220;
            if (fVar6 < *(float *)((int)fVar8 + 0x90) != (fVar6 == *(float *)((int)fVar8 + 0x90))) {
              do {
                *(float *)((int)fVar8 + 0x90) = *(float *)((int)fVar8 + 0x90) - fVar6;
                fVar6 = (float)DAT_362ca220;
              } while (fVar6 < *(float *)((int)fVar8 + 0x90) !=
                       (fVar6 == *(float *)((int)fVar8 + 0x90)));
            }
            fVar6 = (float)DAT_362ca220;
            if (fVar6 < *(float *)((int)fVar8 + 0x94) != (fVar6 == *(float *)((int)fVar8 + 0x94))) {
              do {
                *(float *)((int)fVar8 + 0x94) = *(float *)((int)fVar8 + 0x94) - fVar6;
                fVar6 = (float)DAT_362ca220;
              } while (fVar6 < *(float *)((int)fVar8 + 0x94) !=
                       (fVar6 == *(float *)((int)fVar8 + 0x94)));
            }
          }
        }
        *(undefined2 *)((int)fVar8 + 0x8c) = 0;
        *(undefined2 *)((int)fVar8 + 0x8e) = 0;
      }
      *(float *)((int)fVar8 + 0x84) = param_1;
      *(float *)((int)fVar8 + 0x88) = local_1c;
    }
  }
  return;
}

