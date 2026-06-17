
int * __thiscall FUN_3609dae0(void *this,CTFileName *param_1)

{
  ushort uVar1;
  long lVar2;
  CTString *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  FILE *pFVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  undefined4 local_6c;
  undefined4 local_60;
  char *local_58;
  undefined4 local_54;
  char *local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  long local_20;
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_36212f32;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  local_18 = this;
  local_50 = StringDuplicate(&DAT_36222fa0);
  local_4c = 0;
  local_8 = 0;
  lVar2 = ExpandFilePath(1,param_1,(CTFileName *)&local_50);
  pCVar3 = (CTString *)CTFileName::FileExt((CTFileName *)&local_50);
  local_8._0_1_ = 1;
  iVar4 = CTString::operator==(pCVar3,&DAT_3622f09c);
  local_8._0_1_ = 0;
  StringFree(local_58);
  if (iVar4 == 0) {
    pCVar3 = (CTString *)CTFileName::FileExt((CTFileName *)&local_50);
    local_8._0_1_ = 5;
    iVar4 = CTString::operator==(pCVar3,&DAT_3622f1a0);
    local_8._0_1_ = 0;
    StringFree(local_58);
    if ((iVar4 != 0) && (DAT_362c9f94 != 0)) {
      puVar5 = (undefined4 *)FUN_361bf99c(0x24);
      *(undefined4 **)this = puVar5;
      *puVar5 = 0;
      *(undefined4 *)(*(int *)this + 4) = 0;
      *(undefined4 *)(*(int *)this + 8) = 0;
      local_1c = 0;
      local_8._0_1_ = 6;
      if ((lVar2 == 2) || (lVar2 == 3)) {
        iVar4 = FUN_360477f0((CTString *)&local_50);
        local_1c = iVar4;
        local_58 = StringDuplicate(&DAT_36222fa0);
        local_54 = 0;
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_36046a70(iVar4,(CTFileName *)&local_58,&local_20,&local_34,&local_24,&local_28);
        if (local_28 != 0) {
          pcVar7 = Translate(s_ETRSencoded_audio_in_archives_mu_3622f1a8,4);
          ThrowF_t(pcVar7);
        }
        uVar8 = (*DAT_362c9fa4)(local_58);
        **(undefined4 **)this = uVar8;
        if (**(int **)this == 0) {
          pcVar7 = Translate(s_ETRScannot_open_archive___s__3622f1e0,4);
          ThrowF_t(pcVar7,local_58);
        }
        uVar8 = (*DAT_362c9fac)(**(undefined4 **)this,local_20,local_24);
        *(undefined4 *)(*(int *)this + 4) = uVar8;
        if (*(int *)(*(int *)this + 4) == 0) {
          pcVar7 = Translate(s_ETRScannot_open_encoded_audio_fi_3622f200,4);
          ThrowF_t(pcVar7);
        }
        local_8._0_1_ = 6;
        StringFree(local_58);
      }
      else if (lVar2 == 1) {
        uVar8 = (*DAT_362c9fa4)(local_50);
        *(undefined4 *)(*(int *)this + 4) = uVar8;
        if (*(int *)(*(int *)this + 4) == 0) {
          pcVar7 = Translate(s_ETRScannot_open_mpx_file_3622f224,4);
          ThrowF_t(pcVar7);
        }
      }
      else {
        pcVar7 = Translate(s_ETRSfile_not_found_3622f240,4);
        ThrowF_t(pcVar7);
      }
      iVar4 = (*DAT_362c9fb0)(*(undefined4 *)(*(int *)this + 4),local_40,local_3c,&local_30,
                              &local_2c,local_38);
      if (iVar4 == 0) {
        pcVar7 = Translate(s_ETRSnot_a_valid_mpeg_audio_file__3622f254,4);
        ThrowF_t(pcVar7);
      }
      uVar1 = (local_2c != 0) + 1;
      local_6c = CONCAT22(uVar1,1);
      iVar4 = (int)((uint)uVar1 * 0x10) >> 3;
      local_60 = CONCAT22(0x10,(short)iVar4);
      if (local_2c == 0) {
        pcVar7 = Translate(s_ETRSnot_stereo_3622f278,4);
        ThrowF_t(pcVar7);
      }
      iVar9 = *(int *)this;
      *(undefined4 *)(iVar9 + 0x10) = local_6c;
      *(int *)(iVar9 + 0x14) = local_30;
      *(int *)(iVar9 + 0x18) = iVar4 * local_30;
      *(undefined4 *)(iVar9 + 0x1c) = local_60;
      *(undefined2 *)(iVar9 + 0x20) = 0;
      uVar8 = (*DAT_362c9fa8)(*(undefined4 *)(*(int *)this + 4));
      *(undefined4 *)(*(int *)this + 8) = uVar8;
      if (*(int *)(*(int *)this + 8) == 0) {
        pcVar7 = Translate(s_ETRScannot_open_mpx_decoder_3622f288,4);
        ThrowF_t(pcVar7);
      }
      local_8 = 0;
      if (local_1c != 0) {
        FUN_36046ea0(local_1c);
      }
      fVar11 = (float10)(*DAT_362c9fc0)(*(undefined4 *)(*(int *)this + 8));
      *(float *)(*(int *)this + 0xc) = (float)fVar11;
    }
  }
  else if (DAT_362c9fc4 != 0) {
    puVar5 = (undefined4 *)FUN_361bf99c(0x24);
    *(undefined4 **)((int)this + 4) = puVar5;
    *puVar5 = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0xc) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 4) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 8) = 0;
    local_1c = 0;
    local_8._0_1_ = 2;
    if ((lVar2 == 2) || (lVar2 == 3)) {
      iVar4 = FUN_360477f0((CTString *)&local_50);
      local_1c = iVar4;
      local_48 = StringDuplicate(&DAT_36222fa0);
      local_44 = 0;
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_36046a70(iVar4,(CTFileName *)&local_48,&local_20,&local_30,&local_28,&local_24);
      if (local_24 != 0) {
        pcVar7 = Translate(s_ETRSencoded_audio_in_archives_mu_3622f0a4,4);
        ThrowF_t(pcVar7);
      }
      pFVar6 = fopen(local_48,&DAT_3622f0dc);
      **(undefined4 **)((int)this + 4) = pFVar6;
      if (**(int **)((int)this + 4) == 0) {
        pcVar7 = Translate(s_ETRScannot_open_archive___s__3622f0e0,4);
        ThrowF_t(pcVar7,local_48);
      }
      *(long *)(*(int *)((int)this + 4) + 4) = local_20;
      *(uint *)(*(int *)((int)this + 4) + 8) = local_28;
      fseek((FILE *)**(undefined4 **)((int)this + 4),local_20,0);
      local_8._0_1_ = 2;
      StringFree(local_48);
    }
    else if (lVar2 == 1) {
      pFVar6 = fopen(local_50,&DAT_3622f100);
      **(undefined4 **)((int)this + 4) = pFVar6;
      if (**(int **)((int)this + 4) == 0) {
        pcVar7 = Translate(s_ETRScannot_open_encoded_audio_fi_3622f104,4);
        ThrowF_t(pcVar7);
      }
      *(undefined4 *)(*(int *)((int)this + 4) + 4) = 0;
      fseek((FILE *)**(undefined4 **)((int)this + 4),0,2);
      lVar2 = ftell((FILE *)**(undefined4 **)((int)this + 4));
      *(long *)(*(int *)((int)this + 4) + 8) = lVar2;
      fseek((FILE *)**(undefined4 **)((int)this + 4),0,0);
    }
    else {
      pcVar7 = Translate(s_ETRSfile_not_found_3622f128,4);
      ThrowF_t(pcVar7);
    }
    uVar8 = FUN_361bf99c(0x800);
    *(undefined4 *)(*(int *)((int)this + 4) + 0xc) = uVar8;
    iVar4 = (*DAT_362c9fd4)(*(int *)((int)this + 4),*(undefined4 *)(*(int *)((int)this + 4) + 0xc),0
                            ,0,PTR_FUN_362a5188,PTR_LAB_362a518c,PTR_LAB_362a5190,PTR_LAB_362a5194);
    if (iVar4 != 0) {
      pcVar7 = Translate(s_ETRScannot_open_ogg_decoder_3622f13c,4);
      ThrowF_t(pcVar7);
    }
    iVar9 = (*DAT_362c9fdc)(*(undefined4 *)(*(int *)((int)this + 4) + 0xc),0xffffffff);
    iVar4 = *(int *)(iVar9 + 8);
    uVar10 = (int)((uint)*(ushort *)(iVar9 + 4) * 0x10) >> 3;
    local_6c = CONCAT22(*(ushort *)(iVar9 + 4),1);
    local_60 = CONCAT22(0x10,(short)uVar10);
    if (*(int *)(iVar9 + 4) != 2) {
      pcVar7 = Translate(s_ETRSnot_stereo_3622f158,4);
      ThrowF_t(pcVar7);
    }
    iVar9 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar9 + 0x10) = local_6c;
    *(int *)(iVar9 + 0x14) = iVar4;
    *(uint *)(iVar9 + 0x18) = (uVar10 & 0xffff) * iVar4;
    *(undefined4 *)(iVar9 + 0x1c) = local_60;
    *(undefined2 *)(iVar9 + 0x20) = 0;
    local_8 = 0;
    if (local_1c != 0) {
      FUN_36046ea0(local_1c);
    }
  }
  local_8 = 0xffffffff;
  StringFree(local_50);
  ExceptionList = local_10;
  return this;
}

