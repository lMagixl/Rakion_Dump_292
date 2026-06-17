
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEditModel::SaveIncludeFile_t(class CTFileName,class CTString) */

void __thiscall
CEditModel::SaveIncludeFile_t(CEditModel *this,char *param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  CTString *this_00;
  int iVar9;
  CTString *pCVar10;
  CEditModel *pCVar11;
  undefined4 *puVar12;
  char *local_6d0;
  char *local_6cc;
  char *local_6c8;
  char *local_6c4;
  char *local_6c0;
  char *local_6bc;
  char *local_6b8;
  char *local_6b4;
  char *local_6b0;
  CTFileStream local_6ac [20];
  char *local_698;
  CAnimInfo local_638 [40];
  char local_610 [1023];
  undefined4 uStack_211;
  undefined1 local_20a [250];
  char local_110 [256];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xa9420  3194  ?SaveIncludeFile_t@CEditModel@@QAEXVCTFileName@@VCTString@@@Z
                        */
  puStack_8 = &LAB_36213631;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  local_4 = 1;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_6ac);
  local_4 = CONCAT31(local_4._1_3_,2);
  CTFileStream::Create_t(local_6ac,(CTFileName *)&param_2,1);
  pcVar4 = param_4;
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_610 + -(int)param_4)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _strupr(local_610);
  pcVar2 = StringDuplicate(local_610);
  local_4._0_1_ = 3;
  local_6bc = pcVar2;
  pcVar3 = StringDuplicate(pcVar2);
  local_6c4 = pcVar3;
  StringFree(pcVar4);
  local_4 = CONCAT31(local_4._1_3_,2);
  param_4 = pcVar3;
  StringFree(pcVar2);
  sprintf(local_610,s____Animation_names_36230aa0);
  pcVar4 = local_610;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(local_610 + 1);
  pcVar4 = local_610;
  pcVar2 = local_698;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  local_698 = local_698 + uVar5;
  iVar9 = 1 - (int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)&uStack_211 + iVar9] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  puVar7 = &uStack_211;
  do {
    puVar12 = puVar7;
    puVar7 = (undefined4 *)((int)puVar12 + 1);
  } while (*(char *)((int)puVar12 + 1) != '\0');
  *(undefined4 *)((int)puVar12 + 1) = DAT_36230ab4;
  *(undefined2 *)((int)puVar12 + 5) = DAT_36230ab8;
  *(undefined1 *)((int)puVar12 + 7) = DAT_36230aba;
  local_6b8 = StringDuplicate((char *)((int)&uStack_211 + 1));
  local_4 = CONCAT31(local_4._1_3_,4);
  local_6bc = &stack0xfffff918;
  pcVar4 = StringDuplicate((char *)((int)&uStack_211 + 1));
  FUN_3601f9b0(this + 0x18,(CTStream *)local_6ac,pcVar4);
  sprintf(local_610,s____Color_names_36230abc);
  pcVar4 = local_610;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(local_610 + 1);
  pcVar4 = local_610;
  pcVar2 = local_698;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  local_698 = local_698 + uVar5;
  iVar9 = 0;
  pCVar10 = (CTString *)(this + 0x11f8);
  do {
    iVar6 = CTString::operator!=(pCVar10,&DAT_36230acd);
    if (iVar6 != 0) {
      sprintf(local_610,s__define__s_PART__s___1L__<<__d)_36230ad0,local_6c4,*(undefined4 *)pCVar10)
      ;
      pcVar4 = local_610;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)(local_610 + 1);
      pcVar4 = local_610;
      pcVar2 = local_698;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar2 = pcVar2 + 1;
      }
      local_698 = local_698 + uVar5;
    }
    iVar9 = iVar9 + 1;
    pCVar10 = pCVar10 + 4;
  } while (iVar9 < 0x20);
  sprintf(local_610,s____Patch_names_36230af4);
  pcVar4 = local_610;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(local_610 + 1);
  pcVar4 = local_610;
  pcVar2 = local_698;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  local_698 = local_698 + uVar5;
  pCVar11 = this + 0xcf8;
  local_6cc = (char *)0x20;
  do {
    local_6d0 = StringDuplicate(*(char **)pCVar11);
    local_4 = CONCAT31(local_4._1_3_,5);
    iVar9 = CTString::operator!=((CTString *)&local_6d0,&DAT_36230b05);
    if (iVar9 != 0) {
      sprintf(local_610,s__define__s_PATCH__s__d_36230b08,local_6c4,local_6d0);
      pcVar4 = local_610;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)(local_610 + 1);
      pcVar4 = local_610;
      pcVar2 = local_698;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar2 = pcVar2 + 1;
      }
      local_698 = local_698 + uVar5;
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    StringFree(local_6d0);
    pCVar11 = pCVar11 + 0x28;
    local_6cc = local_6cc + -1;
  } while (local_6cc != (char *)0x0);
  sprintf(local_610,s____Names_of_collision_boxes_36230b20);
  pcVar4 = local_610;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(local_610 + 1);
  pcVar4 = local_610;
  pcVar2 = local_698;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  local_698 = local_698 + uVar5;
  iVar6 = 0;
  iVar9 = FUN_360b0e40((int)(this + 0x12a8));
  if (0 < iVar9) {
    do {
      puVar7 = (undefined4 *)GetCollisionBoxName(this,(long)&local_6c0);
      sprintf(local_610,s__define__s_COLLISION_BOX__s__d_36230b40,local_6c4,*puVar7);
      StringFree(local_6c0);
      pcVar4 = local_610;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)(local_610 + 1);
      pcVar4 = local_610;
      pcVar2 = local_698;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar2 = pcVar2 + 1;
      }
      local_698 = local_698 + uVar5;
      iVar6 = iVar6 + 1;
      iVar9 = FUN_360b0e40((int)(this + 0x12a8));
    } while (iVar6 < iVar9);
  }
  sprintf(local_610,s____Attaching_position_names_36230b60);
  pcVar4 = local_610;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(local_610 + 1);
  pcVar4 = local_610;
  pcVar2 = local_698;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  local_698 = local_698 + uVar5;
  pCVar11 = this + 0x12ec;
  iVar6 = 0;
  iVar9 = FUN_360b0ea0((int)pCVar11);
  if (0 < iVar9) {
    do {
      iVar9 = FUN_360b0e90(pCVar11,iVar6);
      pcVar2 = *(char **)(iVar9 + 0xb0);
      pcVar4 = local_110;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      _strupr(local_110);
      sprintf(local_610,s__define__s_ATTACHMENT__s__d_36230b80,local_6c4,local_110,iVar6);
      pcVar4 = local_610;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)(local_610 + 1);
      pcVar4 = local_610;
      pcVar2 = local_698;
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar2 = pcVar2 + 1;
      }
      local_698 = local_698 + uVar5;
      iVar6 = iVar6 + 1;
      iVar9 = FUN_360b0ea0((int)pCVar11);
    } while (iVar6 < iVar9);
  }
  sprintf(local_610,s____Sound_names_36230ba0);
  pcVar4 = local_610;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(local_610 + 1);
  pcVar4 = local_610;
  pcVar2 = local_698;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  local_698 = local_698 + uVar5;
  pcVar4 = (char *)0x0;
  local_6c0 = (char *)0x0;
  iVar9 = FUN_360b0f50((undefined4 *)(this + 0x1300));
  if (0 < iVar9) {
    iVar9 = 0;
    do {
      iVar6 = CTString::operator!=
                        ((CTString *)(iVar9 + 0xc + *(int *)(this + 0x1304)),&DAT_36230bb1);
      if (iVar6 != 0) {
        pcVar2 = StringDuplicate(&DAT_36222fa0);
        local_4._0_1_ = 6;
        if (*(int *)(iVar9 + *(int *)(this + 0x1304)) == 0) {
          pcVar3 = &DAT_36230bb8;
        }
        else {
          pcVar3 = &DAT_36230bb4;
        }
        local_6b4 = pcVar2;
        local_6c8 = StringDuplicate(pcVar3);
        StringFree(pcVar2);
        pcVar2 = local_6c8;
        local_6b4 = local_6c8;
        local_6d0 = StringDuplicate(&DAT_36230bbb);
        pCVar10 = (CTString *)(iVar9 + 8 + *(int *)(this + 0x1304));
        local_4 = CONCAT31(local_4._1_3_,7);
        if (*(float *)(iVar9 + 8 + *(int *)(this + 0x1304)) == _DAT_3622376c) {
          local_6c8 = StringDuplicate(&DAT_36230bbc);
          StringFree(local_6d0);
          local_6d0 = local_6c8;
        }
        else {
          CTString::PrintF(pCVar10,(char *)&local_6d0,&DAT_36230bc4,(double)*(float *)pCVar10);
        }
        CAnimData::GetAnimInfo((CAnimData *)(this + 0x18),(long)pcVar4,local_638);
        local_6cc = StringDuplicate(&DAT_36222fa0);
        local_4._0_1_ = 8;
        pcVar4 = StringDuplicate(*(char **)(iVar9 + 0xc + *(int *)(this + 0x1304)));
        local_4._0_1_ = 9;
        local_6c8 = pcVar4;
        CTString::PrintF(this_00,(char *)&local_6cc,s___s___36230bc8,pcVar4);
        local_4._0_1_ = 8;
        StringFree(pcVar4);
        local_6b0 = StringDuplicate((char *)local_638);
        local_4._0_1_ = 10;
        puVar7 = (undefined4 *)CTString::operator+((CTString *)&local_6b8,(CTString *)&local_6bc);
        sprintf(local_610,s___sound_SOUND__s___16s___32s______36230bd0,local_6c4,local_638,local_6cc
                ,*puVar7,pcVar2);
        StringFree(local_6bc);
        local_4._0_1_ = 8;
        StringFree(local_6b0);
        pcVar4 = local_610;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)(local_610 + 1);
        pcVar4 = local_610;
        pcVar3 = local_698;
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        local_698 = local_698 + uVar5;
        local_4._0_1_ = 7;
        StringFree(local_6cc);
        local_4._0_1_ = 6;
        StringFree(local_6d0);
        local_4 = CONCAT31(local_4._1_3_,4);
        StringFree(pcVar2);
        pcVar4 = local_6c0;
      }
      pcVar4 = pcVar4 + 1;
      iVar9 = iVar9 + 0x14;
      local_6c0 = pcVar4;
      iVar6 = FUN_360b0f50((undefined4 *)(this + 0x1300));
    } while ((int)pcVar4 < iVar6);
  }
  CTFileStream::Close(local_6ac);
  local_4._0_1_ = 2;
  StringFree(local_6b8);
  local_4._0_1_ = 1;
  CTFileStream::~CTFileStream(local_6ac);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(param_2);
  local_4 = 0xffffffff;
  StringFree(local_6c4);
  ExceptionList = local_c;
  return;
}

