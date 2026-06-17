
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: unsigned long __thiscall CFontTexture::getTextWidth(class CTString const &)const  */

ulong __thiscall CFontTexture::getTextWidth(CFontTexture *this,CTString *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  char *pcVar5;
  CCharManager *this_00;
  CharData *pCVar6;
  byte *pbVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [28];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1883d0  4208  ?getTextWidth@CFontTexture@@QBEKABVCTString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621ad79;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  uVar10 = 0;
  if (_buseCreateFontTex == 1) {
    pcVar5 = *(char **)param_1;
    iVar9 = 0;
    pcVar1 = pcVar5 + 1;
    do {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    ExceptionList = &local_c;
    if (pcVar5 != pcVar1 && -1 < (int)pcVar5 - (int)pcVar1) {
      do {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
        local_4 = 0;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        operator+=(local_2c,*(char *)(*(int *)param_1 + iVar9));
        if ((_buseMultiByte == 1) && (*(char *)(*(int *)param_1 + iVar9) < '\0')) {
          pcVar1 = (char *)(*(int *)param_1 + 1 + iVar9);
          iVar9 = iVar9 + 1;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          operator+=(local_2c,*pcVar1);
        }
        pbVar11 = local_2c;
        this_00 = CCharManager::getInstance();
        pCVar6 = CCharManager::getCharData(this_00,pbVar11);
        uVar10 = uVar10 + *(int *)(pCVar6 + 8);
        local_4 = 0xffffffff;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
        pcVar5 = *(char **)param_1;
        iVar9 = iVar9 + 1;
        pcVar1 = pcVar5 + 1;
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
      } while (iVar9 < (int)pcVar5 - (int)pcVar1);
    }
  }
  else {
    pbVar7 = *(byte **)param_1;
    bVar4 = *pbVar7;
    while (bVar4 != 0) {
      if ((_buseMultiByte == 1) && ((char)bVar4 < '\0')) {
        pbVar2 = pbVar7 + 1;
        bVar4 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar8 = (ushort)bVar4 * 0x100 + (ushort)*pbVar2;
LAB_361884ed:
        uVar10 = (uVar10 - 1) + (uint)(byte)(&DAT_36301a44)[(uint)uVar8 * 6];
      }
      else {
        uVar8 = (ushort)bVar4;
        if (uVar8 != 0x20) goto LAB_361884ed;
        uVar10 = uVar10 + 4;
      }
      pbVar2 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar4 = *pbVar2;
    }
  }
  ExceptionList = local_c;
  return uVar10;
}

