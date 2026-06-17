
void __fastcall FUN_360ce230(int param_1)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
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
  float local_8;
  float local_4;
  
  piVar3 = *(int **)(param_1 + 0xec);
  local_ac = 3e+38;
  *(undefined4 *)(param_1 + 0x1a8) = 0x7f61b1e6;
  local_a8 = 3e+38;
  *(undefined4 *)(param_1 + 0x1ac) = 0x7f61b1e6;
  local_a4 = 3e+38;
  *(undefined4 *)(param_1 + 0x1b0) = 0x7f61b1e6;
  local_a0 = -3e+38;
  *(undefined4 *)(param_1 + 0x1b4) = 0xff61b1e6;
  local_9c = -3e+38;
  local_98 = -3e+38;
  *(undefined4 *)(param_1 + 0x1b8) = 0xff61b1e6;
  *(undefined4 *)(param_1 + 0x1bc) = 0xff61b1e6;
  iVar4 = 0;
  if (0 < *piVar3) {
    local_64 = 0;
    do {
      pfVar1 = (float *)(piVar3[1] + local_64);
      local_48 = *pfVar1 * *(float *)(param_1 + 0x124) +
                 pfVar1[2] * *(float *)(param_1 + 300) +
                 *(float *)(param_1 + 0x128) * *(float *)(piVar3[1] + 4 + local_64);
      local_44 = pfVar1[1] * *(float *)(param_1 + 0x134) +
                 pfVar1[2] * *(float *)(param_1 + 0x138) + *pfVar1 * *(float *)(param_1 + 0x130);
      local_40 = *(float *)(param_1 + 0x144) * pfVar1[2] +
                 *(float *)(param_1 + 0x140) * pfVar1[1] + *pfVar1 * *(float *)(param_1 + 0x13c);
      local_60 = local_48 + *(float *)(param_1 + 0x118);
      local_5c = local_44 + *(float *)(param_1 + 0x11c);
      local_58 = local_40 + *(float *)(param_1 + 0x120);
      local_30 = local_60 * *(float *)(param_1 + 0x98) +
                 local_58 * *(float *)(param_1 + 0xa0) + local_5c * *(float *)(param_1 + 0x9c);
      local_2c = local_58 * *(float *)(param_1 + 0xac) +
                 local_5c * *(float *)(param_1 + 0xa8) + local_60 * *(float *)(param_1 + 0xa4);
      local_28 = local_58 * *(float *)(param_1 + 0xb8) +
                 local_5c * *(float *)(param_1 + 0xb4) + local_60 * *(float *)(param_1 + 0xb0);
      local_70 = local_30 + *(float *)(param_1 + 0x8c);
      local_6c = local_2c + *(float *)(param_1 + 0x90);
      local_68 = local_28 + *(float *)(param_1 + 0x94);
      local_24 = *(float *)(param_1 + 0x154) * *pfVar1 +
                 pfVar1[2] * *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x158) * pfVar1[1];
      local_20 = pfVar1[1] * *(float *)(param_1 + 0x164) +
                 *(float *)(param_1 + 0x160) * *pfVar1 + pfVar1[2] * *(float *)(param_1 + 0x168);
      local_1c = *(float *)(param_1 + 0x174) * pfVar1[2] +
                 *pfVar1 * *(float *)(param_1 + 0x16c) + *(float *)(param_1 + 0x170) * pfVar1[1];
      local_88 = local_24 + *(float *)(param_1 + 0x148);
      local_84 = local_20 + *(float *)(param_1 + 0x14c);
      local_80 = local_1c + *(float *)(param_1 + 0x150);
      local_3c = local_88 * *(float *)(param_1 + 0x98) +
                 local_80 * *(float *)(param_1 + 0xa0) + local_84 * *(float *)(param_1 + 0x9c);
      local_38 = local_84 * *(float *)(param_1 + 0xa8) +
                 local_88 * *(float *)(param_1 + 0xa4) + local_80 * *(float *)(param_1 + 0xac);
      local_34 = local_84 * *(float *)(param_1 + 0xb4) +
                 local_88 * *(float *)(param_1 + 0xb0) + local_80 * *(float *)(param_1 + 0xb8);
      local_94 = local_3c + *(float *)(param_1 + 0x8c);
      local_90 = local_38 + *(float *)(param_1 + 0x90);
      local_8c = local_34 + *(float *)(param_1 + 0x94);
      local_7c = local_88;
      local_78 = local_84;
      local_74 = local_80;
      local_54 = local_60;
      local_50 = local_5c;
      local_4c = local_58;
      local_18 = local_94;
      local_14 = local_90;
      local_10 = local_8c;
      local_c = local_70;
      local_8 = local_6c;
      local_4 = local_68;
      FUN_360bef70(&local_ac,&local_c,&local_18);
      fVar2 = pfVar1[3];
      local_a0 = local_a0 + fVar2;
      local_ac = local_ac - fVar2;
      local_9c = local_9c + fVar2;
      local_a8 = local_a8 - fVar2;
      local_98 = local_98 + fVar2;
      local_a4 = local_a4 - fVar2;
      FUN_360b1850((void *)(param_1 + 0x1a8),&local_ac);
      iVar4 = iVar4 + 1;
      local_64 = local_64 + 0x40;
    } while (iVar4 < *piVar3);
  }
  return;
}

