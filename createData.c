
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: struct CharData * __thiscall CCharManager::createData(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &) */

CharData * __thiscall
CCharManager::createData
          (CCharManager *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  code *pcVar1;
  HBITMAP pHVar2;
  HGDIOBJ pvVar3;
  HDC hdc;
  DWORD iCharSet;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *lpString;
  undefined4 *puVar4;
  int iVar5;
  CharData *pCVar6;
  int iVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *lpString_00;
  uint uVar8;
  BITMAPINFO *pBVar9;
  undefined4 *puVar10;
  DWORD iOutPrecision;
  DWORD iClipPrecision;
  DWORD iQuality;
  DWORD iPitchAndFamily;
  LPCSTR pszFaceName;
  void *local_58;
  CharData *local_54;
  HBITMAP local_50;
  HGDIOBJ local_4c;
  HFONT local_48;
  HDC local_44;
  tagSIZE local_40;
  BITMAPINFO local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1861e0  4150
                       ?createData@CCharManager@@QAEPAUCharData@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621ac0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_44 = GetDC((HWND)0x0);
  hdc = CreateCompatibleDC(local_44);
  iPitchAndFamily = 0;
  iQuality = 0;
  iClipPrecision = 0;
  iOutPrecision = 0;
  pszFaceName = __strFontName;
  iCharSet = GetCharsetFromLang(_langid);
  local_48 = CreateFontA(0xc,0,0,0,0,0,0,0,iCharSet,iOutPrecision,iClipPrecision,iQuality,
                         iPitchAndFamily,pszFaceName);
  pcVar1 = SelectObject_exref;
  local_4c = SelectObject(hdc,local_48);
  lpString_00 = param_1 + 4;
  lpString = lpString_00;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    lpString = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                lpString_00;
  }
  GetTextExtentPoint32A(hdc,(LPCSTR)lpString,*(int *)(param_1 + 0x14),&local_40);
  pBVar9 = &local_38;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    (pBVar9->bmiHeader).biSize = 0;
    pBVar9 = (BITMAPINFO *)&(pBVar9->bmiHeader).biWidth;
  }
  local_38.bmiHeader.biWidth = local_40.cx;
  local_38.bmiHeader.biSize = 0x28;
  local_38.bmiHeader.biHeight = local_40.cy;
  local_38.bmiHeader.biPlanes = 1;
  local_38.bmiHeader.biBitCount = 0x20;
  local_38.bmiHeader.biCompression = 0;
  local_58 = (HGDIOBJ)0x0;
  local_50 = CreateDIBSection(hdc,&local_38,0,&local_58,(HANDLE)0x0,0);
  local_54 = SelectObject(hdc,local_50);
  SetTextColor(hdc,0xffffff);
  SetBkColor(hdc,0);
  if (0xf < *(uint *)(param_1 + 0x18)) {
    lpString_00 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   lpString_00;
  }
  ExtTextOutA(hdc,0,0,2,(RECT *)0x0,(LPCSTR)lpString_00,*(UINT *)(param_1 + 0x14),(INT *)0x0);
  puVar4 = (undefined4 *)thunk_FUN_361bf99c(local_40.cy * local_40.cx * 4);
  puVar10 = puVar4;
  for (uVar8 = local_40.cy * local_40.cx & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  iVar7 = 0;
  while (local_40.cy = local_40.cy + -1, -1 < local_40.cy) {
    iVar5 = 0;
    if (0 < local_40.cx) {
      do {
        if (*(int *)((int)local_58 + (local_40.cy * local_40.cx + iVar5) * 4) != 0) {
          puVar4[iVar7] = 0xffffffff;
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 1;
        pcVar1 = SelectObject_exref;
      } while (iVar5 < local_40.cx);
    }
  }
  (*pcVar1)(hdc,local_54);
  DeleteObject(local_58);
  (*pcVar1)(hdc,local_54);
  DeleteObject(local_58);
  DeleteDC(hdc);
  ReleaseDC((HWND)0x0,(HDC)local_54);
  pCVar6 = (CharData *)FUN_361bf99c(0x10);
  pvVar3 = local_4c;
  pHVar2 = local_50;
  local_38.bmiHeader.biClrImportant = 0;
  if (pCVar6 == (CharData *)0x0) {
    ExceptionList = (void *)local_38.bmiHeader.biYPelsPerMeter;
    return (CharData *)0x0;
  }
  local_c = (void *)((uint)local_c & 0xffffff00);
  *(undefined4 **)pCVar6 = puVar4;
  local_54 = pCVar6;
  FUN_36185ee0(pCVar6 + 4,puVar4);
  *(HBITMAP *)(pCVar6 + 8) = pHVar2;
  *(HGDIOBJ *)(pCVar6 + 0xc) = pvVar3;
  ExceptionList = (void *)local_38.bmiHeader.biYPelsPerMeter;
  return pCVar6;
}

