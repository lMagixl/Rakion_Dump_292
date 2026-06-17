
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360861b0(void)

{
  CStock_CTextureData *this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  char *pcStack_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_36212064;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_360942b0();
  this = _pTextureStock;
  local_64 = 0;
  local_58 = 0;
  local_4c = 0;
  local_68 = 0;
  local_5c = 0;
  local_50 = 0;
  local_6c = 0;
  local_60 = 0;
  local_54 = 0;
  local_40 = 0;
  local_34 = 0;
  local_28 = 0;
  local_44 = 0;
  local_38 = 0;
  local_2c = 0;
  local_48 = 0;
  local_3c = 0;
  local_30 = 0;
  local_20 = 0;
  local_c = 0;
  iVar1 = FUN_3608a5a0((int)_pTextureStock);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_3608a4e0(this,local_20);
      iVar1 = piVar2[0xd];
      uVar3 = piVar2[7] & 1;
      iVar4 = (**(code **)(*piVar2 + 0x18))();
      iVar9 = (piVar2[9] >> ((byte)piVar2[10] & 0x1f)) * (piVar2[8] >> ((byte)piVar2[10] & 0x1f));
      iVar5 = iVar9;
      if (1 < piVar2[0xb]) {
        iVar5 = (iVar9 * 4) / 3;
      }
      if (iVar9 < 0x1000) {
        if (uVar3 == 0) {
          local_68 = local_68 + iVar5;
          local_6c = local_6c + iVar4;
          local_64 = local_64 + iVar1;
        }
        else {
          local_44 = local_44 + iVar5;
          local_48 = local_48 + iVar4;
          local_40 = local_40 + iVar1;
        }
      }
      else if (iVar9 < 0x10001) {
        if (uVar3 == 0) {
          local_5c = local_5c + iVar5;
          local_60 = local_60 + iVar4;
          local_58 = local_58 + iVar1;
        }
        else {
          local_38 = local_38 + iVar5;
          local_3c = local_3c + iVar4;
          local_34 = local_34 + iVar1;
        }
      }
      else if (uVar3 == 0) {
        local_50 = local_50 + iVar5;
        local_54 = local_54 + iVar4;
        local_4c = local_4c + iVar1;
      }
      else {
        local_2c = local_2c + iVar5;
        local_30 = local_30 + iVar4;
        local_28 = local_28 + iVar1;
      }
      local_20 = local_20 + 1;
      iVar1 = FUN_3608a5a0((int)this);
    } while (local_20 < iVar1);
  }
  local_c = 0xffffffff;
  uVar10 = FUN_361bfd6c();
  uVar11 = FUN_361bfd6c();
  iVar1 = 1 << ((byte)DAT_362a4068 & 0x1f);
  pcVar6 = StringDuplicate(&DAT_36222fa0);
  local_c = 1;
  pcVar7 = s_32_bit_3622b220;
  if (DAT_362c53a0 == 0) {
    pcVar7 = s_16_bit_3622b228;
  }
  pcVar7 = StringDuplicate(pcVar7);
  StringFree(pcVar6);
  CPrintF(&DAT_3622b230);
  puVar8 = (undefined4 *)FUN_36084670();
  local_c._0_1_ = 2;
  CPrintF(s_Normal_opaque_textures_quality____3622b234,*puVar8);
  local_c._0_1_ = 1;
  StringFree(pcStack_24);
  puVar8 = (undefined4 *)FUN_36084670();
  local_c._0_1_ = 3;
  CPrintF(s_Normal_translucent_textures_qual_3622b260,*puVar8);
  local_c._0_1_ = 1;
  StringFree(pcStack_24);
  puVar8 = (undefined4 *)FUN_36084670();
  local_c._0_1_ = 4;
  CPrintF(s_Animation_opaque_textures_qualit_3622b28c,*puVar8);
  local_c._0_1_ = 1;
  StringFree(pcStack_24);
  puVar8 = (undefined4 *)FUN_36084670();
  local_c._0_1_ = 5;
  CPrintF(s_Animation_translucent_textures_q_3622b2b8,*puVar8);
  local_c = CONCAT31(local_c._1_3_,1);
  StringFree(pcStack_24);
  CPrintF(s_Effect_textures_quality___s_3622b2e4,pcVar7);
  CPrintF(&DAT_3622b310);
  CPrintF(s_Max_allowed_normal_texture_area_s_3622b314,(int)uVar10,(int)uVar10);
  CPrintF(s_Max_allowed_animation_texture_ar_3622b348,(int)uVar11,(int)uVar11);
  CPrintF(s_Max_allowed_effect_texture_area_s_3622b37c,iVar1,iVar1);
  CPrintF(&DAT_3622b3b0);
  CPrintF(s_Opaque_textures_memory_usage__3622b3b4);
  CPrintF(s_<64_pix:__3d_frames_use__6_1f_Kp_3622b3d4,local_64,
          (double)((float)local_68 * _DAT_362265a4),
          (int)(local_6c + (local_6c >> 0x1f & 0x3ffU)) >> 10);
  CPrintF(s_64_256_pix___3d_frames_use__6_1f_3622b408,local_58,
          (double)((float)local_5c * _DAT_362265a4),
          (int)(local_60 + (local_60 >> 0x1f & 0x3ffU)) >> 10);
  CPrintF(s_>256_pix___3d_frames_use__6_1f_K_3622b43c,local_4c,
          (double)((float)local_50 * _DAT_362265a4),
          (int)(local_54 + (local_54 >> 0x1f & 0x3ffU)) >> 10);
  CPrintF(s_Translucent_textures_memory_usag_3622b470);
  CPrintF(s_<64_pix:__3d_frames_use__6_1f_Kp_3622b494,local_40,
          (double)((float)local_44 * _DAT_362265a4),
          (int)(local_48 + (local_48 >> 0x1f & 0x3ffU)) >> 10);
  CPrintF(s_64_256_pix___3d_frames_use__6_1f_3622b4c8,local_34,
          (double)((float)local_38 * _DAT_362265a4),
          (int)(local_3c + (local_3c >> 0x1f & 0x3ffU)) >> 10);
  CPrintF(s_>256_pix___3d_frames_use__6_1f_K_3622b4fc,local_28,
          (double)((float)local_2c * _DAT_362265a4),
          (int)(local_30 + (local_30 >> 0x1f & 0x3ffU)) >> 10);
  CPrintF(s___________________________________3622b530);
  local_c = 0xffffffff;
  StringFree(pcVar7);
  ExceptionList = pvStack_14;
  return;
}

