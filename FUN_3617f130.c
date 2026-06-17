
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3617f130(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  float *this;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  ulonglong uVar9;
  int local_54;
  float local_50;
  int local_4c;
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
  
  iVar7 = param_1 * 0x160 + *(int *)(unaff_EBX + 0x104);
  local_54 = *(int *)(unaff_EBX + 0x58);
  this = (float *)(param_1 * 0x2c + *(int *)(unaff_EBX + 0xf4));
  local_50 = 1.0;
  local_4c = FUN_36182a70(0x36301538);
  if (0 < local_4c) {
    iVar6 = 0;
    do {
      pfVar1 = (float *)(DAT_3630153c + iVar6);
      FUN_3605cd80(this,&local_30);
      local_24 = this[3] - *this;
      local_20 = this[4] - this[1];
      local_1c = this[5] - this[2];
      fVar3 = _DAT_36300d48 * local_30 + local_2c * _DAT_36300d4c + local_28 * _DAT_36300d50 +
              _DAT_36300d54;
      fVar2 = _DAT_36300d58 * local_30 + local_2c * _DAT_36300d5c + local_28 * _DAT_36300d60 +
              _DAT_36300d64;
      local_28 = _DAT_36300d68 * local_30 + _DAT_36300d6c * local_2c + local_28 * _DAT_36300d70 +
                 _DAT_36300d74;
      local_18 = fVar3 - *pfVar1;
      local_14 = fVar2 - pfVar1[1];
      local_10 = local_28 - pfVar1[2];
      local_30 = fVar3;
      local_2c = fVar2;
      local_c = local_18;
      local_8 = local_14;
      local_4 = local_10;
      uVar9 = FUN_361bfd6c();
      iVar4 = (int)uVar9;
      if (iVar4 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(unaff_EBX + 0x58);
        if (iVar4 <= *(int *)(unaff_EBX + 0x58)) {
          iVar5 = iVar4;
        }
      }
      fVar8 = extraout_ST0 - (float10)iVar4;
      if (fVar8 < (float10)_DAT_3622376c) {
        fVar8 = (float10)_DAT_3622376c;
      }
      else if (fVar8 < (float10)_DAT_36223384 == (fVar8 == (float10)_DAT_36223384)) {
        fVar8 = (float10)_DAT_36223384;
      }
      if (iVar5 < local_54) {
        local_50 = (float)fVar8;
        local_54 = iVar5;
      }
      else if ((local_54 == iVar5) && (fVar8 < (float10)local_50)) {
        local_50 = (float)fVar8;
      }
      iVar6 = iVar6 + 0x10;
      local_4c = local_4c + -1;
    } while (local_4c != 0);
  }
  iVar6 = *(int *)(unaff_EBX + 0x58);
  if (local_54 == iVar6) {
    local_50 = 0.0;
  }
  if (DAT_362a6c54 != -1) {
    if (DAT_362a6c54 < 0) {
      local_54 = 0;
    }
    else {
      local_54 = iVar6;
      if (DAT_362a6c54 <= iVar6) {
        local_54 = DAT_362a6c54;
      }
    }
    local_50 = 0.0;
  }
  *(int *)(iVar7 + 0xc) = local_54;
  *(float *)(iVar7 + 0x10) = local_50;
  if (local_54 != *(int *)(iVar7 + 8)) {
    FUN_36178920(unaff_EBX,param_1,0);
  }
  return;
}

