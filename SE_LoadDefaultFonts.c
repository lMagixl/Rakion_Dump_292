
/* void __cdecl SE_LoadDefaultFonts(void) */

void __cdecl SE_LoadDefaultFonts(void)

{
  char *local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x8010  3186  ?SE_LoadDefaultFonts@@YAXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620d332;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  ExceptionList = &local_10;
  FUN_36187a70();
  local_8 = 0;
  local_20 = StringDuplicate(s_EFNMFonts_Standard_fnt_36222c28 + 4);
  local_1c = 0;
  local_8._0_1_ = 1;
  _pfdDisplayFont = CStock_CFontData::Obtain_t(_pFontStock,(CTFileName *)&local_20);
  local_8._0_1_ = 0;
  StringFree(local_20);
  local_20 = StringDuplicate(s_EFNMFonts_Console1_fnt_36222c40 + 4);
  local_1c = 0;
  local_8._0_1_ = 2;
  _pfdConsoleFont = CStock_CFontData::Obtain_t(_pFontStock,(CTFileName *)&local_20);
  local_8._0_1_ = 0;
  StringFree(local_20);
  local_20 = StringDuplicate(s_EFNMFonts_KSSM_Gulim16x16_fnt_36222c58 + 4);
  local_1c = 0;
  local_8._0_1_ = 3;
  _pfdGulimFont = CStock_CFontData::Obtain_t(_pFontStock,(CTFileName *)&local_20);
  local_8 = (uint)local_8._1_3_ << 8;
  StringFree(local_20);
  *(uint *)(_pfdConsoleFont + 0x30) = *(uint *)(_pfdConsoleFont + 0x30) | 1;
  *(undefined4 *)(_pfdDisplayFont + 0x14) = 0;
  *(undefined4 *)(_pfdConsoleFont + 0x14) = 0xffffffff;
  *(undefined4 *)(_pfdDisplayFont + 0x18) = 0xffffffff;
  *(undefined4 *)(_pfdConsoleFont + 0x18) = 0;
  ExceptionList = local_10;
  return;
}

