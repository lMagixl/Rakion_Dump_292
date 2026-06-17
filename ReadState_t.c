
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CSessionState::ReadState_t(class CTStream *) */

void __thiscall CSessionState::ReadState_t(CSessionState *this,CTStream *param_1)

{
  bool bVar1;
  long lVar2;
  xFile *this_00;
  undefined4 *lpBuffer;
  HANDLE hFile;
  size_t nNumberOfBytesToRead;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *local_1e8;
  undefined4 local_1e4;
  char *local_1e0;
  undefined4 local_1dc;
  char *local_1d8;
  undefined4 local_1d4;
  char *local_1d0;
  undefined4 local_1cc;
  DWORD local_1c8;
  CTMemoryStream local_1c4 [20];
  undefined4 *local_1b0;
  xFileManager local_168 [64];
  xDeviceFile *local_128;
  map<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>,struct_Xenesis2::Foundation::File::XFSFileInfo,struct_std::less<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>_>,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>_const_,struct_Xenesis2::Foundation::File::XFSFileInfo>_>_>
  local_124 [14];
  undefined1 local_116;
  CHAR local_110 [256];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x113110  2992  ?ReadState_t@CSessionState@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362183bc;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  CWorld::LockAll((CWorld *)(_pNetwork + 0x11e4));
  CTMemoryStream::CTMemoryStream(local_1c4);
  local_4 = 0;
  local_1c8 = 0;
  local_1d8 = StringDuplicate(&DAT_36222fa0);
  local_1d4 = 0;
  local_4._0_1_ = 1;
  local_1e0 = StringDuplicate(&DAT_36222fa0);
  local_1dc = 0;
  local_4._0_1_ = 2;
  lVar2 = ExpandxFilePath(1,(CTFileName *)(_pNetwork + 0x3c),(CTFileName *)&local_1d8,
                          (CTFileName *)&local_1e0);
  if (lVar2 == 1) {
    local_1e8 = StringDuplicate(&DAT_36237738);
    local_4._0_1_ = 3;
    CTString::operator+=((CTString *)&local_1e0,(CTString *)&local_1e8);
    local_4._0_1_ = 2;
    StringFree(local_1e8);
    Xenesis2::Foundation::File::xFileManager::xFileManager(local_168);
    local_4._0_1_ = 4;
    local_116 = 1;
    bVar1 = Xenesis2::Foundation::File::xFileManager::setXFS
                      (local_168,local_1d8,local_128,(XFSHeader *)local_168,local_124);
    if (!bVar1) {
      MessageBoxA((HWND)0x0,s_Can_t_load_wld_dat_file_36237748,s_Error_36237740,0);
      local_4._0_1_ = 2;
      Xenesis2::Foundation::File::xFileManager::~xFileManager(local_168);
      local_4._0_1_ = 1;
      StringFree(local_1e0);
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(local_1d8);
      goto LAB_361134d5;
    }
    this_00 = Xenesis2::Foundation::File::xFileManager::open(local_168,local_1e0,true,false);
    if (this_00 == (xFile *)0x0) {
      MessageBoxA((HWND)0x0,s_Can_t_load_wld_dat_file_36237768,s_Error_36237760,0);
      local_4._0_1_ = 2;
      Xenesis2::Foundation::File::xFileManager::~xFileManager(local_168);
      local_4._0_1_ = 1;
      StringFree(local_1e0);
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(local_1d8);
      goto LAB_361134d5;
    }
    nNumberOfBytesToRead = *(size_t *)(*(int *)(this_00 + 8) + 0x78);
    lpBuffer = (undefined4 *)thunk_FUN_361bf99c(nNumberOfBytesToRead);
    Xenesis2::Foundation::File::xFile::load(this_00,lpBuffer,nNumberOfBytesToRead);
    Xenesis2::Foundation::File::xFileManager::close(local_168,this_00);
    local_4 = CONCAT31(local_4._1_3_,2);
    Xenesis2::Foundation::File::xFileManager::~xFileManager(local_168);
LAB_36113456:
    puVar4 = lpBuffer;
    puVar5 = local_1b0;
    for (uVar3 = nNumberOfBytesToRead >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = nNumberOfBytesToRead & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    local_1b0 = (undefined4 *)((int)local_1b0 + nNumberOfBytesToRead);
    CTStream::SetPos_t((CTStream *)local_1c4,0);
    CWorld::ReadState_net_t((CWorld *)(_pNetwork + 0x11e4),(CTStream *)local_1c4);
    CWorld::UnlockAll((CWorld *)(_pNetwork + 0x11e4));
    operator_delete__(lpBuffer);
    local_4 = CONCAT31(local_4._1_3_,1);
    StringFree(local_1e0);
  }
  else {
    wsprintfA(local_110,s__s_dat_36237780,*(undefined4 *)(_pNetwork + 0x3c));
    local_1e8 = StringDuplicate(&DAT_36222fa0);
    local_1e4 = 0;
    local_4._0_1_ = 5;
    local_1d0 = StringDuplicate(local_110);
    local_1cc = 0;
    local_4._0_1_ = 6;
    ExpandFilePath(1,(CTFileName *)&local_1d0,(CTFileName *)&local_1e8);
    local_4._0_1_ = 5;
    StringFree(local_1d0);
    hFile = CreateFileA(local_1e8,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
      lpBuffer = (undefined4 *)thunk_FUN_361bf99c(nNumberOfBytesToRead);
      ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&local_1c8,(LPOVERLAPPED)0x0);
      CloseHandle(hFile);
      local_4 = CONCAT31(local_4._1_3_,2);
      StringFree(local_1e8);
      goto LAB_36113456;
    }
    MessageBoxA((HWND)0x0,s_Can_t_load_wld_dat_file_36237790,s_Error_36237788,0);
    local_4._0_1_ = 2;
    StringFree(local_1e8);
    local_4 = CONCAT31(local_4._1_3_,1);
    StringFree(local_1e0);
  }
  local_4 = local_4 & 0xffffff00;
  StringFree(local_1d8);
LAB_361134d5:
  local_4 = 0xffffffff;
  CTMemoryStream::~CTMemoryStream(local_1c4);
  ExceptionList = local_c;
  return;
}

