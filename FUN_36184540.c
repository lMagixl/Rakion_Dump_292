
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36184540(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_7c;
  int local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [4];
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
  
  iVar4 = FUN_36184ed0(0x363016f4);
  if (0 < iVar4) {
    iVar7 = 0;
    do {
      puVar5 = (uint *)(iVar7 + DAT_363016f8);
      AnglesToDirectionVector((Vector<float,3> *)(puVar5 + 9),(Vector<float,3> *)&local_70);
      fVar3 = local_70 * _DAT_3630167c + local_6c * _DAT_36301680 + local_68 * _DAT_36301684;
      fVar2 = _DAT_3630168c * local_70 + local_6c * _DAT_36301690 + local_68 * _DAT_36301694;
      local_68 = _DAT_3630169c * local_70 + _DAT_363016a0 * local_6c + local_68 * _DAT_363016a4;
      fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + local_68 * local_68);
      local_70 = _DAT_3622376c;
      if ((float)_DAT_36223438 <= fVar1) {
        local_70 = _DAT_36223384 / fVar1;
      }
      local_68 = local_68 * local_70;
      local_6c = fVar2 * local_70;
      local_70 = fVar3 * local_70;
      local_64 = -local_70;
      local_60 = -local_6c;
      puVar5[3] = (uint)local_64;
      puVar5[4] = (uint)local_60;
      local_5c = -local_68;
      iVar7 = iVar7 + 0x48;
      iVar4 = iVar4 + -1;
      puVar5[5] = (uint)local_5c;
      *puVar5 = *puVar5 | 2;
    } while (iVar4 != 0);
  }
  local_78 = FUN_36184eb0(0x363016e4);
  if (0 < local_78) {
    local_7c = 0;
    do {
      local_c = *(float *)(local_7c + 4 + DAT_363016e8);
      puVar6 = (uint *)(local_7c + DAT_363016e8);
      local_64 = (float)puVar6[7];
      local_60 = (float)puVar6[8];
      local_5c = (float)puVar6[9];
      local_20 = local_64 - local_c;
      local_14 = local_64 + local_c;
      local_1c = local_60 - local_c;
      local_10 = local_60 + local_c;
      local_18 = local_5c - local_c;
      local_c = local_5c + local_c;
      FUN_36183290();
      puVar6[0x11] = (uint)local_38;
      puVar6[0x12] = (uint)local_34;
      puVar6[0x13] = (uint)local_30;
      puVar6[0x14] = (uint)local_2c;
      puVar6[0x15] = (uint)local_28;
      puVar6[0x16] = (uint)local_24;
      puVar5 = (uint *)FUN_3605cd80(&local_38,&local_70);
      puVar6[4] = *puVar5;
      puVar6[5] = puVar5[1];
      puVar6[6] = puVar5[2];
      if ((~(((uint)(_DAT_362a6c6c - local_30) |
             (uint)(local_2c - _DAT_362a6c58) | (uint)(_DAT_362a6c64 - local_38) |
             (uint)(local_28 - _DAT_362a6c5c) | (uint)(_DAT_362a6c68 - local_34) |
             (uint)(local_24 - _DAT_362a6c60)) >> 0x1f) & 1) != 0) {
        floor((double)local_38);
        uVar8 = FUN_361bfd6c();
        local_58 = (int)uVar8;
        ceil((double)local_2c);
        uVar9 = FUN_361bfd6c();
        local_50 = (int)uVar9;
        floor((double)local_30);
        uVar10 = FUN_361bfd6c();
        local_54 = (int)uVar10;
        ceil((double)local_24);
        uVar11 = FUN_361bfd6c();
        local_4c = (int)uVar11;
        if ((((DAT_3630170c < (int)uVar8) || ((int)uVar9 < DAT_36301704)) ||
            (DAT_36301710 < (int)uVar10)) || (local_4c < DAT_36301708)) {
          *puVar6 = *puVar6 & 0xfffffffd;
        }
        else {
          *puVar6 = *puVar6 | 2;
          puVar5 = (uint *)FUN_36172d30(local_48,&local_58,&DAT_36301704);
          puVar6[0xd] = *puVar5;
          puVar6[0xe] = puVar5[1];
          puVar6[0xf] = puVar5[2];
          puVar6[0x10] = puVar5[3];
        }
      }
      local_7c = local_7c + 0x5c;
      local_78 = local_78 + -1;
    } while (local_78 != 0);
  }
  return;
}

