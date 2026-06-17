
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class CTextureData * __thiscall CFontTexture::createFontTexture(class CTString const &)
    */

CTextureData * __thiscall CFontTexture::createFontTexture(CFontTexture *this,CTString *param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  void **ppvVar4;
  char *pcVar5;
  CCharManager *this_00;
  int iVar6;
  CTextureData *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  void *pvVar13;
  uint uVar14;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar15;
  int local_54;
  CharData *local_50;
  undefined1 local_4c [4];
  void *local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c [3];
  undefined4 *local_30;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [28];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x188520  4155
                       ?createFontTexture@CFontTexture@@AAEPAVCTextureData@@ABVCTString@@@Z */
  puStack_8 = &LAB_3621ada7;
  local_c = ExceptionList;
  pvVar13 = (void *)0x0;
  puVar11 = (undefined4 *)0x0;
  local_10 = DAT_362abd90;
  local_48 = (void *)0x0;
  local_44 = (undefined4 *)0x0;
  local_40 = 0;
  pcVar5 = *(char **)param_1;
  local_4 = 0;
  local_54 = 0;
  uVar14 = 0;
  pcVar1 = pcVar5 + 1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_c;
  ppvVar4 = &local_c;
  if (pcVar5 != pcVar1) {
    do {
      ExceptionList = ppvVar4;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
      local_4 = CONCAT31(local_4._1_3_,1);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
                (local_2c,*(char *)(*(int *)param_1 + uVar14));
      if (*(char *)(*(int *)param_1 + uVar14) < '\0') {
        pcVar1 = (char *)(*(int *)param_1 + 1 + uVar14);
        uVar14 = uVar14 + 1;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        operator+=(local_2c,*pcVar1);
      }
      pbVar15 = local_2c;
      this_00 = CCharManager::getInstance();
      local_50 = CCharManager::getCharData(this_00,pbVar15);
      if (local_50 != (CharData *)0x0) {
        local_54 = local_54 + *(int *)(local_50 + 8);
        if (0x400 < local_54) {
          local_54 = local_54 - *(int *)(local_50 + 8);
          local_4 = local_4 & 0xffffff00;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
          break;
        }
        if ((pvVar13 == (void *)0x0) ||
           ((uint)(local_40 - (int)pvVar13 >> 2) <= (uint)((int)puVar11 - (int)pvVar13 >> 2))) {
          FUN_3618a040(local_4c,puVar11,1,&local_50);
          puVar11 = local_44;
          pvVar13 = local_48;
        }
        else {
          *puVar11 = local_50;
          local_44 = puVar11 + 1;
          puVar11 = local_44;
        }
      }
      local_4 = local_4 & 0xffffff00;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
      pcVar5 = *(char **)param_1;
      uVar14 = uVar14 + 1;
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      ppvVar4 = ExceptionList;
    } while (uVar14 < (uint)((int)pcVar5 - (int)pcVar1));
  }
  iVar12 = 1;
  if (1 < local_54 + 1) {
    do {
      iVar12 = iVar12 * 2;
    } while (iVar12 < local_54 + 1);
  }
  iVar10 = 0;
  local_30 = (undefined4 *)thunk_FUN_361bf99c(iVar12 << 6);
  puVar11 = local_30;
  for (uVar14 = (uint)(iVar12 << 6) >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  for (uVar14 = 0; (pvVar13 != (void *)0x0 && (uVar14 < (uint)((int)local_44 - (int)pvVar13 >> 2)));
      uVar14 = uVar14 + 1) {
    piVar3 = *(int **)((int)pvVar13 + uVar14 * 4);
    iVar8 = 0;
    if (0 < piVar3[3]) {
      do {
        iVar6 = piVar3[2];
        iVar9 = 0;
        if (0 < iVar6) {
          do {
            if (*(int *)(*piVar3 + (iVar6 * iVar8 + iVar9) * 4) != 0) {
              local_30[iVar8 * iVar12 + iVar9 + iVar10] = 0xffffffff;
              local_30[(iVar8 + 1) * iVar12 + iVar9 + iVar10 + 1] = 0xff000000;
            }
            iVar6 = piVar3[2];
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar6);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < piVar3[3]);
    }
    iVar10 = iVar10 + piVar3[2];
    pvVar13 = local_48;
  }
  CImageInfo::CImageInfo((CImageInfo *)local_3c);
  local_4._0_1_ = 2;
  local_3c[1] = 0x10;
  local_3c[2] = 0x20;
  local_3c[0] = iVar12;
  local_50 = (CharData *)FUN_361bf99c(0x80);
  local_4._0_1_ = 3;
  if (local_50 == (CharData *)0x0) {
    pCVar7 = (CTextureData *)0x0;
  }
  else {
    pCVar7 = (CTextureData *)CTextureData::CTextureData((CTextureData *)local_50);
  }
  local_4._0_1_ = 2;
  CreateTexture_t(pCVar7,(CImageInfo *)local_3c,local_3c[0],10,0x60b);
  local_4 = (uint)local_4._1_3_ << 8;
  CImageInfo::~CImageInfo((CImageInfo *)local_3c);
  if (pvVar13 != (void *)0x0) {
    operator_delete(pvVar13);
  }
  ExceptionList = local_c;
  return pCVar7;
}

