
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36184250(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_68;
  int local_64;
  float local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  iVar5 = *(int *)(param_1 + 0x1c);
  local_5c = *(int *)(param_1 + 0x18) + -1;
  bVar2 = (byte)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    local_64 = local_5c >> (-bVar2 & 0x1f);
    local_68 = iVar5 + -1 >> (-bVar2 & 0x1f);
  }
  else {
    local_64 = local_5c << (bVar2 & 0x1f);
    local_68 = iVar5 + -1 << (bVar2 & 0x1f);
  }
  local_60 = (float)(iVar5 + -1);
  fVar4 = (float)(int)local_60;
  fVar3 = (float)(int)local_68;
  uVar8 = FUN_361bfd6c();
  local_58 = (int)uVar8;
  uVar9 = FUN_361bfd6c();
  local_3c = (int)uVar9;
  uVar10 = FUN_361bfd6c();
  iVar7 = (int)uVar10 - (int)uVar9;
  local_28 = iVar7;
  uVar9 = FUN_361bfd6c();
  iVar5 = (int)uVar9 - (int)uVar8;
  local_2c = iVar5;
  FUN_360605c0(&param_2,*(uint *)(in_EAX + 4));
  FUN_360605c0(&local_68,*(uint *)(in_EAX + 8));
  local_24 = *(float *)(in_EAX + 0xc);
  local_20 = *(float *)(in_EAX + 0x10);
  local_1c = *(float *)(in_EAX + 0x14);
  local_54 = local_68 & 0xff;
  if (0x7f < local_54) {
    local_54 = 0x7f;
  }
  local_50 = local_68 >> 8 & 0xff;
  if (0x7f < local_50) {
    local_50 = 0x7f;
  }
  local_4c = local_68 >> 0x10 & 0xff;
  if (0x7f < local_4c) {
    local_4c = 0x7f;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x60);
  local_40 = 0;
  if (0 < iVar5) {
    local_5c = local_58 * local_64;
    do {
      if (0 < iVar7) {
        local_34 = 255.0;
        local_38 = (float)(local_40 + local_58) * (fVar4 / fVar3);
        iVar6 = local_3c;
        local_44 = iVar7;
        do {
          iVar5 = local_5c + iVar6;
          local_48 = iVar6;
          FUN_36183a20((float)iVar6 * (fVar4 / fVar3),local_38,local_c,&local_18);
          local_60 = local_24 * local_18 + local_20 * local_14 + local_1c * local_10;
          if (local_60 < _DAT_3622376c) {
            local_60 = 0.0;
          }
          else if (local_60 < _DAT_36223384 == (local_60 == _DAT_36223384)) {
            local_60 = 1.0;
          }
          local_30 = (int)ROUND(local_60 * local_34);
          iVar7 = (uint)*(byte *)(iVar1 + iVar5 * 4) +
                  ((int)((param_2 & 0xff) * local_30) >> 8) + local_54;
          if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          *(char *)(iVar1 + iVar5 * 4) = (char)iVar7;
          iVar7 = (uint)*(byte *)(iVar1 + 1 + iVar5 * 4) +
                  ((int)((param_2 >> 8 & 0xff) * local_30) >> 8) + local_50;
          if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          *(char *)(iVar1 + 1 + iVar5 * 4) = (char)iVar7;
          iVar7 = (uint)*(byte *)(iVar1 + 2 + iVar5 * 4) +
                  ((int)((param_2 >> 0x10 & 0xff) * local_30) >> 8) + local_4c;
          if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          *(char *)(iVar1 + 2 + iVar5 * 4) = (char)iVar7;
          iVar6 = iVar6 + 1;
          local_44 = local_44 + -1;
          *(undefined1 *)(iVar1 + 3 + iVar5 * 4) = 0xff;
          iVar5 = local_2c;
          iVar7 = local_28;
        } while (local_44 != 0);
      }
      local_40 = local_40 + 1;
      local_5c = local_5c + local_64;
    } while (local_40 < iVar5);
  }
  return;
}

