
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36166280(void)

{
  float *pfVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_34;
  float local_30 [12];
  
  local_ac = FUN_3615fda0(unaff_EBX + 0xc);
  if (1 < local_ac) {
    local_ac = local_ac + -1;
    iVar2 = 0xe8;
    do {
      iVar3 = *(int *)(unaff_EBX + 0x10) + iVar2;
      if (*(int *)(*(int *)(*(int *)(unaff_EBX + 0x10) + iVar2) + 8) == 1) {
        FUN_3608d7d0(local_30,(float *)(unaff_EBX + 0x60));
        pfVar1 = (float *)(iVar3 + 0x88);
        FUN_36162800(pfVar1,local_30,pfVar1);
        local_a8 = _DAT_36223384;
        *(float *)(iVar3 + 0xb8) = *pfVar1;
        *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar3 + 0x8c);
        *(undefined4 *)(iVar3 + 0xc0) = *(undefined4 *)(iVar3 + 0x90);
        *(undefined4 *)(iVar3 + 0xc4) = *(undefined4 *)(iVar3 + 0x94);
        *(undefined4 *)(iVar3 + 200) = *(undefined4 *)(iVar3 + 0x98);
        *(undefined4 *)(iVar3 + 0xcc) = *(undefined4 *)(iVar3 + 0x9c);
        *(undefined4 *)(iVar3 + 0xd0) = *(undefined4 *)(iVar3 + 0xa0);
        *(undefined4 *)(iVar3 + 0xd4) = *(undefined4 *)(iVar3 + 0xa4);
        *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar3 + 0xa8);
        *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 0xac);
        *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar3 + 0xb0);
        *(undefined4 *)(iVar3 + 0xe4) = *(undefined4 *)(iVar3 + 0xb4);
        iVar4 = *(int *)(*(int *)(iVar3 + 8) * 0x8c + DAT_362fe994);
        local_78 = *(float *)(iVar4 + 0x90);
        local_74 = *(float *)(iVar4 + 0x94);
        local_70 = *(float *)(iVar4 + 0x98);
        local_a8 = local_a8 / local_78;
        local_a4 = 0;
        local_a0 = 0;
        local_9c = 0;
        local_98 = 0;
        local_90 = 0;
        local_8c = 0;
        local_88 = 0;
        local_84 = 0;
        local_7c = 0;
        local_94 = _DAT_36223384 / local_74;
        local_80 = _DAT_36223384 / local_70;
        local_34 = local_80;
        FUN_36162680((float *)(iVar3 + 0x58),pfVar1,&local_a8);
      }
      iVar2 = iVar2 + 0xe8;
      local_ac = local_ac + -1;
    } while (local_ac != 0);
  }
  local_ac = FUN_3615fda0(unaff_EBX + 0xc);
  if (1 < local_ac) {
    local_ac = local_ac + -1;
    iVar2 = 0xe8;
    do {
      iVar3 = *(int *)(*(int *)(unaff_EBX + 0x10) + iVar2);
      iVar4 = *(int *)(unaff_EBX + 0x10) + iVar2;
      if (*(int *)(iVar3 + 8) == 1) {
        FUN_3608d7d0(local_30,(float *)(iVar3 + 0xc));
        FUN_36162680(&local_a8,(float *)(iVar4 + 0x58),local_30);
        *(float *)(iVar4 + 0x58) = local_a8;
        *(undefined4 *)(iVar4 + 0x5c) = local_a4;
        *(undefined4 *)(iVar4 + 0x60) = local_a0;
        *(undefined4 *)(iVar4 + 100) = local_9c;
        *(undefined4 *)(iVar4 + 0x68) = local_98;
        *(float *)(iVar4 + 0x6c) = local_94;
        *(undefined4 *)(iVar4 + 0x70) = local_90;
        *(undefined4 *)(iVar4 + 0x74) = local_8c;
        *(undefined4 *)(iVar4 + 0x78) = local_88;
        *(undefined4 *)(iVar4 + 0x7c) = local_84;
        *(float *)(iVar4 + 0x80) = local_80;
        *(undefined4 *)(iVar4 + 0x84) = local_7c;
        FUN_36162680(&local_6c,(float *)(iVar4 + 0x88),local_30);
        *(float *)(iVar4 + 0x88) = local_6c;
        *(undefined4 *)(iVar4 + 0x8c) = local_68;
        *(undefined4 *)(iVar4 + 0x90) = local_64;
        *(undefined4 *)(iVar4 + 0x94) = local_60;
        *(undefined4 *)(iVar4 + 0x98) = local_5c;
        *(undefined4 *)(iVar4 + 0x9c) = local_58;
        *(undefined4 *)(iVar4 + 0xa0) = local_54;
        *(undefined4 *)(iVar4 + 0xa4) = local_50;
        *(undefined4 *)(iVar4 + 0xa8) = local_4c;
        *(undefined4 *)(iVar4 + 0xac) = local_48;
        *(undefined4 *)(iVar4 + 0xb0) = local_44;
        *(undefined4 *)(iVar4 + 0xb4) = local_40;
      }
      iVar2 = iVar2 + 0xe8;
      local_ac = local_ac + -1;
    } while (local_ac != 0);
  }
  return;
}

