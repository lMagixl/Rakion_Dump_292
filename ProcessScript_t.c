
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl ProcessScript_t(class CTFileName const &) */

void __cdecl ProcessScript_t(CTFileName *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  CTString *pCVar6;
  undefined4 *puVar7;
  CListNode *pCVar8;
  ulonglong uVar9;
  long lVar10;
  char *local_348;
  char *local_344;
  undefined4 local_340;
  char *local_33c;
  char *local_338;
  undefined4 local_334;
  char *local_330;
  long local_32c;
  undefined4 local_328;
  char *local_324;
  undefined4 local_320;
  CImageInfo local_31c [16];
  CListNode *local_30c [3];
  char *local_300;
  CTextureData local_2f8 [128];
  CTFileStream local_278 [116];
  CTFileStream local_204 [116];
  char local_190 [128];
  char local_110 [256];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x96fa0  2837  ?ProcessScript_t@@YAXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212d55;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_278);
  local_4 = 0;
  local_328 = 0x40000000;
  local_32c = 10;
  CTextureData::CTextureData(local_2f8);
  local_4 = CONCAT31(local_4._1_3_,1);
  CListHead::Clear((CListHead *)local_30c);
  local_344 = (char *)0x0;
  local_33c = (char *)0x0;
  local_338 = (char *)0x0;
  local_348 = (char *)0x0;
  CTFileStream::Open_t(local_278,param_1,1);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              do {
                CTStream::GetLine_t((CTStream *)local_278,local_190,0x80,'\n');
                local_330 = local_190;
                do {
                  cVar1 = *local_330;
                  local_330 = local_330 + 1;
                } while (cVar1 != '\0');
                local_330 = (char *)((int)local_330 - (int)(local_190 + 1));
              } while ((local_330 == (char *)0x0) || (local_190[0] == ';'));
              _strupr(local_190);
              iVar2 = _strnicmp(local_190,s_TEXTURE_WIDTH_3622e808,0xd);
              if (iVar2 != 0) break;
              sscanf(local_190,s_TEXTURE_WIDTH__g_3622e818);
              local_344 = (char *)((int)local_344 + 1);
            }
            iVar2 = _strnicmp(local_190,s_TEXTURE_MIPMAPS_3622e82c,0xf);
            if (iVar2 != 0) break;
            sscanf(local_190,s_TEXTURE_MIPMAPS__d_3622e83c);
          }
          iVar2 = _strnicmp(local_190,s_TEXTURE_32BIT_3622e850,0xd);
          if (iVar2 != 0) break;
          local_33c = (char *)0x1;
        }
        iVar2 = _strnicmp(local_190,s_TEXTURE_COMPRESSED_3622e860,0x12);
        if (iVar2 != 0) break;
        local_338 = (char *)0x1;
      }
      iVar2 = _strnicmp(local_190,s_TEXTURE_COMPRESSALPHA_3622e874,0x15);
      if (iVar2 != 0) break;
      local_348 = (char *)0x1;
    }
    iVar2 = _strnicmp(local_190,s_ANIM_START_3622e88c,10);
    if (iVar2 != 0) break;
    CAnimData::LoadFromScript_t((CAnimData *)local_2f8,(CTStream *)local_278,(CListHead *)local_30c)
    ;
    local_344 = (char *)((int)local_344 + 1);
  }
  iVar2 = _strnicmp(local_190,&DAT_3622e898,3);
  if (iVar2 != 0) {
    pcVar3 = Translate(s_ETRSUnidentified_key_word_found___3622e8a0,4);
    sprintf(local_110,pcVar3);
    local_348 = local_110;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_348,(ThrowInfo *)&DAT_3624f688);
  }
  if (local_344 == (char *)0x2) {
    CImageInfo::CImageInfo(local_31c);
    local_4._0_1_ = 2;
    pcVar3 = StringDuplicate(&DAT_36222fa0);
    local_320 = 0;
    local_4._0_1_ = 3;
    local_324 = pcVar3;
    CTFileStream::CTFileStream(local_204);
    local_4._0_1_ = 4;
    pcVar4 = StringDuplicate((char *)(local_30c[0] + -0x104));
    local_4._0_1_ = 5;
    local_330 = pcVar4;
    local_344 = StringDuplicate(pcVar4);
    local_340 = 0;
    local_4._0_1_ = 6;
    CImageInfo::LoadAnyGfxFormat_t(local_31c,(CTFileName *)&local_344);
    local_4._0_1_ = 5;
    StringFree(local_344);
    local_4 = CONCAT31(local_4._1_3_,4);
    StringFree(pcVar4);
    uVar5 = 0;
    if (local_33c != (char *)0x0) {
      uVar5 = 2;
    }
    if (local_338 != (char *)0x0) {
      uVar5 = uVar5 | 0x10000;
    }
    if (local_348 != (char *)0x0) {
      uVar5 = uVar5 | 0x20000;
    }
    lVar10 = local_32c;
    uVar9 = FUN_361bfd6c();
    CTextureData::Create_t(local_2f8,local_31c,(long)uVar9,lVar10,uVar5);
    CImageInfo::Clear(local_31c);
    local_348 = (char *)0x1;
    pCVar8 = local_30c[0];
    while (*(int *)pCVar8 != 0) {
      if (local_348 == (char *)0x0) {
        pcVar4 = StringDuplicate((char *)(pCVar8 + -0x104));
        local_4._0_1_ = 7;
        local_330 = pcVar4;
        local_338 = StringDuplicate(pcVar4);
        local_334 = 0;
        local_4._0_1_ = 8;
        CImageInfo::LoadAnyGfxFormat_t(local_31c,(CTFileName *)&local_338);
        local_4._0_1_ = 7;
        StringFree(local_338);
        local_4 = CONCAT31(local_4._1_3_,4);
        StringFree(pcVar4);
        CTextureData::AddFrame_t(local_2f8,local_31c);
        CImageInfo::Clear(local_31c);
        pCVar8 = *(CListNode **)pCVar8;
      }
      else {
        pCVar8 = *(CListNode **)pCVar8;
        local_348 = (char *)0x0;
      }
    }
    local_348 = StringDuplicate(&DAT_3622e950);
    local_4._0_1_ = 9;
    CTFileName::FileName(param_1);
    local_4._0_1_ = 10;
    pCVar6 = (CTString *)CTFileName::FileDir(param_1);
    local_4._0_1_ = 0xb;
    pCVar6 = (CTString *)CTString::operator+(pCVar6,(CTString *)&local_33c);
    local_4._0_1_ = 0xc;
    puVar7 = (undefined4 *)CTString::operator+(pCVar6,(CTString *)&local_338);
    local_4._0_1_ = 0xd;
    pcVar4 = StringDuplicate((char *)*puVar7);
    StringFree(pcVar3);
    local_320 = 0;
    local_4._0_1_ = 0xc;
    local_324 = pcVar4;
    StringFree(local_338);
    local_4._0_1_ = 0xb;
    StringFree(local_33c);
    local_4._0_1_ = 10;
    StringFree(local_344);
    local_4._0_1_ = 9;
    StringFree(local_300);
    local_4 = CONCAT31(local_4._1_3_,4);
    StringFree(local_348);
    local_330 = &stack0xfffffca0;
    StringDuplicate(pcVar4);
    CSerial::Save_t((CSerial *)local_2f8);
    while (pCVar8 = local_30c[0], local_30c[0] = *(CListNode **)pCVar8,
          local_30c[0] != (CListNode *)0x0) {
      if (pCVar8 + -0x104 != (CListNode *)0x0) {
        iVar2 = CListNode::IsLinked(pCVar8);
        if (iVar2 != 0) {
          CListNode::Remove(pCVar8);
        }
        operator_delete(pCVar8 + -0x104);
      }
    }
    local_4._0_1_ = 3;
    CTFileStream::~CTFileStream(local_204);
    local_4._0_1_ = 2;
    StringFree(pcVar4);
    local_4._0_1_ = 1;
    CImageInfo::~CImageInfo(local_31c);
    local_4 = (uint)local_4._1_3_ << 8;
    CTextureData::~CTextureData(local_2f8);
    local_4 = 0xffffffff;
    CTFileStream::~CTFileStream(local_278);
    ExceptionList = local_c;
    return;
  }
  local_348 = Translate(s_ETRSRequired_key_word_s__has_not_3622e8f0,4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_348,(ThrowInfo *)&DAT_3624f688);
}

