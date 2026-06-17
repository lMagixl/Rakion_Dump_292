
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36183d20(int param_1)

{
  int iVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  float local_94;
  float local_90;
  int local_8c;
  int local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  local_98 = *(int *)(param_1 + 0x18) + -1;
  bVar2 = (byte)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    local_8c = local_98 >> (-bVar2 & 0x1f);
    local_90 = (float)(iVar1 + -1 >> (-bVar2 & 0x1f));
  }
  else {
    local_8c = local_98 << (bVar2 & 0x1f);
    local_90 = (float)(iVar1 + -1 << (bVar2 & 0x1f));
  }
  local_94 = (float)(iVar1 + -1);
  local_80 = (float)(int)local_94 / (float)(int)local_90;
  uVar7 = FUN_361bfd6c();
  local_48 = (int)uVar7;
  uVar8 = FUN_361bfd6c();
  local_54 = (int)uVar8;
  uVar8 = FUN_361bfd6c();
  iVar5 = (int)uVar8 - local_54;
  local_4c = iVar5;
  uVar8 = FUN_361bfd6c();
  local_60 = *(float *)(in_EAX + 0x10) * *(float *)(param_1 + 0x34);
  local_64 = *(float *)(in_EAX + 4);
  local_5c = *(float *)(in_EAX + 0x14) * *(float *)(param_1 + 0x38);
  local_90 = *(float *)(in_EAX + 8);
  iVar3 = (int)uVar8 - (int)uVar7;
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x60);
  local_58 = *(float *)(in_EAX + 0x18) * *(float *)(param_1 + 0x3c);
  local_40 = *(uint *)(in_EAX + 0xc);
  local_50 = 0;
  if (0 < iVar3) {
    local_98 = local_48 * local_8c;
    local_20 = iVar3;
    do {
      if (0 < iVar5) {
        local_30 = 255.0;
        local_1c = 255.0;
        local_44 = (float)(local_50 + local_48) * local_80;
        local_88 = local_4c;
        iVar6 = local_54;
        do {
          iVar3 = local_98 + iVar6;
          local_a8 = (float)iVar6;
          FUN_36183a20((float)iVar6 * local_80,local_44,&local_18,&local_c);
          local_70 = local_18 - local_60;
          local_6c = local_14 - local_5c;
          local_68 = local_10 - local_58;
          local_a8 = SQRT(local_70 * local_70 + local_6c * local_6c + local_68 * local_68);
          local_a4 = _DAT_3622376c;
          if ((float)_DAT_36223438 <= local_a8) {
            local_a4 = _DAT_36223384 / local_a8;
          }
          local_9c = local_68 * local_a4;
          local_a0 = local_6c * local_a4;
          local_a4 = local_70 * local_a4;
          local_7c = -local_a4;
          local_78 = -local_a0;
          local_74 = -local_9c;
          local_84 = 1.0;
          if (local_64 < local_a8) {
LAB_361840bf:
            local_84 = 0.0;
          }
          else if (local_90 < local_a8) {
            if (local_64 <= local_a8) goto LAB_361840bf;
            local_84 = (local_a8 - local_90) / (local_64 - local_90);
            if (_DAT_3622376c <= local_84) {
              if (_DAT_3622376c < local_84) {
                local_84 = _DAT_36223384 - local_84;
                goto joined_r0x361840a2;
              }
LAB_361840b1:
              local_84 = _DAT_36223384;
            }
            else {
              local_84 = local_84 / _DAT_3622376c;
joined_r0x361840a2:
              if (local_84 < _DAT_3622376c) {
                local_84 = _DAT_3622376c;
              }
              else if (local_84 < _DAT_36223384 == (local_84 == _DAT_36223384)) goto LAB_361840b1;
            }
          }
          local_3c = (uint)ROUND(local_84 * local_30);
          local_34 = local_40 >> 0x18 | (local_40 & 0xff0000) >> 8 | (local_40 & 0xff00) << 8 |
                     local_40 << 0x18;
          local_2c = local_7c;
          local_28 = local_78;
          local_24 = local_74;
          uVar4 = MulColors(local_34,((local_3c << 8 | local_3c) << 8 | local_3c) << 8);
          FUN_360605c0(&local_ac,uVar4);
          local_94 = local_2c * local_c + local_28 * local_8 + local_24 * local_4;
          if (local_94 < _DAT_3622376c) {
            local_94 = 0.0;
          }
          else if (local_94 < _DAT_36223384 == (local_94 == _DAT_36223384)) {
            local_94 = 1.0;
          }
          local_38 = (int)ROUND(local_94 * local_1c);
          iVar5 = ((int)((local_ac & 0xff) * local_38) >> 8) + (uint)*(byte *)(iVar1 + iVar3 * 4);
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          *(char *)(iVar1 + iVar3 * 4) = (char)iVar5;
          iVar5 = ((int)((local_ac >> 8 & 0xff) * local_38) >> 8) +
                  (uint)*(byte *)(iVar1 + 1 + iVar3 * 4);
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          *(char *)(iVar1 + 1 + iVar3 * 4) = (char)iVar5;
          iVar5 = ((int)((local_ac >> 0x10 & 0xff) * local_38) >> 8) +
                  (uint)*(byte *)(iVar1 + 2 + iVar3 * 4);
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          *(char *)(iVar1 + 2 + iVar3 * 4) = (char)iVar5;
          iVar6 = iVar6 + 1;
          local_88 = local_88 + -1;
          *(undefined1 *)(iVar1 + 3 + iVar3 * 4) = 0xff;
          iVar3 = local_20;
          iVar5 = local_4c;
        } while (local_88 != 0);
      }
      local_50 = local_50 + 1;
      local_98 = local_98 + local_8c;
    } while (local_50 < iVar3);
  }
  return;
}

