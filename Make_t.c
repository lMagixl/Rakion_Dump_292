
/* public: void __thiscall CFontData::Make_t(class CTFileName const &,long,long,class CTFileName
   &,int) */

void __thiscall
CFontData::Make_t(CFontData *this,CTFileName *param_1,long param_2,long param_3,CTFileName *param_4,
                 int param_5)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  CTextureData *this_00;
  int iVar5;
  int iVar6;
  uint uVar7;
  CTFileName *pCVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  char *local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x187550  2623  ?Make_t@CFontData@@QAEXABVCTFileName@@JJAAV2@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621acfa;
  local_c = ExceptionList;
  pCVar8 = (CTFileName *)(this + 0x40);
  ExceptionList = &local_c;
  pcVar4 = StringDuplicate(*(char **)param_1);
  StringFree(*(char **)pCVar8);
  *(char **)pCVar8 = pcVar4;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 4);
  this_00 = CStock_CTextureData::Obtain_t(_pTextureStock,pCVar8);
  *(CTextureData **)(this + 0x1048) = this_00;
  CTextureData::Force(this_00,0x300);
  iVar6 = *(int *)(*(int *)(this + 0x1048) + 0x20) >>
          ((byte)*(undefined4 *)(*(int *)(this + 0x1048) + 0x28) & 0x1f);
  local_14 = iVar6;
  local_30 = StringDuplicate(&DAT_36222fa0);
  pCVar8 = (CTFileName *)0x0;
  local_4 = 0;
  IgnoreApplicationPath();
  CTString::Load_t((CTString *)&local_30,param_4);
  UseApplicationPath();
  *(long *)(this + 0x1c) = param_2;
  *(long *)(this + 0x20) = param_3;
  local_20 = *(int *)(*(int *)(this + 0x1048) + 0x60);
  param_4 = (CTFileName *)0x0;
  if (*local_30 != '\n') {
    do {
      pcVar4 = local_30;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
    } while ((pCVar8 < (CTFileName *)(pcVar4 + -(int)(local_30 + 1))) &&
            (pcVar4 = local_30 + 1 + (int)pCVar8, pCVar8 = pCVar8 + 1, *pcVar4 != '\n'));
    param_4 = pCVar8;
    if (0 < (int)pCVar8) goto LAB_36187654;
  }
  FatalError(s_Invalid_font_definition_ASCII_fi_3623db7c);
LAB_36187654:
  local_2c = 0xffffff00;
  if (param_5 != 0) {
    local_2c = 0xffffffff;
  }
  local_10 = *(int *)(this + 0x20) * iVar6;
  uVar7 = 0;
  param_3 = 0;
  pcVar4 = local_30;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (pcVar4 != local_30 + 1) {
    param_5 = 0;
    do {
      iVar6 = 0;
      if (0 < (int)param_4) {
        do {
          pcVar4 = local_30;
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          if ((uint)((int)pcVar4 - (int)(local_30 + 1)) <= uVar7) break;
          pbVar1 = (byte *)(local_30 + uVar7);
          param_2 = *(long *)(this + 0x1c);
          iVar10 = 0;
          uVar7 = uVar7 + 1;
          iVar9 = 0;
          local_28 = 0;
          if (0 < *(int *)(this + 0x20)) {
            do {
              iVar5 = 0;
              if (0 < *(int *)(this + 0x1c)) {
                do {
                  local_1c = *(uint *)(local_20 +
                                      (*(int *)(this + 0x1c) * iVar6 + param_5 + iVar10 + iVar5) * 4
                                      );
                  local_18 = local_1c >> 0x18 | (local_1c & 0xff0000) >> 8 |
                             (local_1c & 0xff00) << 8 | local_1c << 0x18;
                  if ((local_18 & local_2c) != 0) {
                    if (iVar5 < param_2) {
                      param_2 = iVar5;
                    }
                    if (iVar9 < iVar5) {
                      iVar9 = iVar5;
                    }
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(this + 0x1c));
              }
              local_28 = local_28 + 1;
              iVar10 = iVar10 + local_14;
            } while (local_28 < *(int *)(this + 0x20));
          }
          uVar3 = (uint)*pbVar1;
          *(int *)(this + uVar3 * 0x10 + 0x48) = *(int *)(this + 0x1c) * iVar6;
          *(int *)(this + uVar3 * 0x10 + 0x4c) = *(int *)(this + 0x20) * param_3;
          *(int *)(this + uVar3 * 0x10 + 0x54) = iVar9 + 1;
          iVar6 = iVar6 + 1;
          *(long *)(this + (uVar3 + 5) * 0x10) = param_2;
          local_24 = uVar7;
        } while (iVar6 < (int)param_4);
      }
      param_3 = param_3 + 1;
      param_5 = param_5 + local_10;
      uVar7 = uVar7 + 1;
      pcVar4 = local_30;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
    } while (uVar7 < (uint)((int)pcVar4 - (int)(local_30 + 1)));
  }
  *(undefined4 *)(this + 0x250) = 0;
  uVar11 = FUN_361bfd6c();
  *(int *)(this + 0x254) = (int)uVar11;
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) & 0xfffffffe;
  CStock_CTextureData::Release(_pTextureStock,*(CTextureData **)(this + 0x1048));
  *(undefined4 *)(this + 0x1048) = 0;
  local_4 = 0xffffffff;
  StringFree(local_30);
  ExceptionList = local_c;
  return;
}

