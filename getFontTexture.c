
/* public: class CTextureData * __thiscall CFontTexture::getFontTexture(class CTString const &,int
   const &) */

CTextureData * __thiscall
CFontTexture::getFontTexture(CFontTexture *this,CTString *param_1,int *param_2)

{
  CFontTexture *pCVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  uint uVar6;
  CTextureData *local_e0;
  int *local_dc;
  uint local_d8 [2];
  char *local_d0 [2];
  int *local_c8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_c4 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_a8 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_8c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_70 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_54 [36];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1888b0  4190
                       ?getFontTexture@CFontTexture@@QAEPAVCTextureData@@ABVCTString@@ABH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621ae37;
  local_c = ExceptionList;
  iVar3 = *param_2;
  if (iVar3 == 0) {
    ExceptionList = &local_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_70,*(char **)param_1);
    local_4 = 0;
    FUN_3618a360(this,local_d8,local_70);
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_70);
    if (local_d8[0] == *(uint *)(this + 8)) {
      local_e0 = createFontTexture(this,param_1);
      local_d8[0] = local_d8[0] & 0xffffff00;
      FUN_36189ce0(&local_dc,local_e0);
      local_4 = 1;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_a8,*(char **)param_1);
      local_4._0_1_ = 2;
      pbVar5 = FUN_36189990(local_30,local_a8,&local_e0);
      local_4._0_1_ = 3;
      FUN_3618ac20(this,(int *)local_d8,pbVar5);
      local_4._0_1_ = 2;
      FUN_3606b250(local_30);
      local_4 = CONCAT31(local_4._1_3_,1);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_a8);
      local_4 = 0xffffffff;
      if (local_dc != (int *)0x0) {
        FUN_3600cd20(local_dc);
      }
    }
    else {
      local_e0 = *(CTextureData **)(local_d8[0] + 0x24);
    }
  }
  else {
    if (iVar3 == 1) {
      ExceptionList = &local_c;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_8c,*(char **)param_1);
      local_4 = 4;
      FUN_3618a360(this + 0x28,local_d8,local_8c);
      local_4 = 0xffffffff;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_8c);
      if (local_d8[0] != *(uint *)(this + 0x30)) {
        ExceptionList = local_c;
        return *(CTextureData **)(local_d8[0] + 0x24);
      }
      local_e0 = createFontTexture(this,param_1);
      local_d8[0] = local_d8[0] & 0xffffff00;
      FUN_36189ce0(&local_dc,local_e0);
      local_4 = 5;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_c4,*(char **)param_1);
      local_4._0_1_ = 6;
      pbVar5 = FUN_36189990(local_54,local_c4,&local_e0);
      local_4._0_1_ = 7;
      FUN_3618ac20(this + 0x28,(int *)local_d8,pbVar5);
      local_4._0_1_ = 6;
      FUN_3606b250(local_54);
      local_4 = CONCAT31(local_4._1_3_,5);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_c4);
    }
    else {
      if (iVar3 != 2) {
        return (CTextureData *)0x0;
      }
      ExceptionList = &local_c;
      for (uVar6 = *(uint *)(this + 0x5c); uVar6 != *(int *)(this + 0x5c) + *(int *)(this + 0x60);
          uVar6 = uVar6 + 1) {
        uVar2 = uVar6;
        if (*(uint *)(this + 0x58) <= uVar6) {
          uVar2 = uVar6 - *(uint *)(this + 0x58);
        }
        iVar3 = CTString::operator==(param_1,*(CTString **)(*(int *)(this + 0x54) + uVar2 * 4));
        if (iVar3 != 0) {
          if (*(uint *)(this + 0x58) <= uVar6) {
            uVar6 = uVar6 - *(uint *)(this + 0x58);
          }
          ExceptionList = local_c;
          return *(CTextureData **)(*(int *)(*(int *)(this + 0x54) + uVar6 * 4) + 4);
        }
      }
      local_e0 = createFontTexture(this,param_1);
      local_d8[0] = local_d8[0] & 0xffffff00;
      FUN_36189ce0(&local_dc,local_e0);
      local_4 = 8;
      puVar4 = FUN_36189d70(local_d0,(undefined4 *)param_1,&local_e0);
      local_4._0_1_ = 9;
      FUN_3618a640(this + 0x50,puVar4);
      local_4._0_1_ = 10;
      if (local_c8 != (int *)0x0) {
        FUN_3600cd20(local_c8);
      }
      local_4 = CONCAT31(local_4._1_3_,8);
      StringFree(local_d0[0]);
      if ((6 < *(uint *)(this + 0x60)) && (*(int *)(this + 0x60) != 0)) {
        FUN_36189420(*(undefined4 **)(*(int *)(this + 0x54) + *(int *)(this + 0x5c) * 4));
        iVar3 = *(int *)(this + 0x5c);
        *(uint *)(this + 0x5c) = iVar3 + 1U;
        if (*(uint *)(this + 0x58) <= iVar3 + 1U) {
          *(undefined4 *)(this + 0x5c) = 0;
        }
        pCVar1 = this + 0x60;
        *(int *)pCVar1 = *(int *)pCVar1 + -1;
        if (*(int *)pCVar1 == 0) {
          *(undefined4 *)(this + 0x5c) = 0;
        }
      }
    }
    local_4 = 0xffffffff;
    if (local_dc != (int *)0x0) {
      FUN_3600cd20(local_dc);
    }
  }
  ExceptionList = local_c;
  return local_e0;
}

