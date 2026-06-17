
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FUN_36041f10(undefined4 *param_1,int *param_2)

{
  xFileManager *this;
  bool bVar1;
  xFileManager *pxVar2;
  HMODULE hModule;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  uint uVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  xFileManager *this_00;
  HANDLE hFile;
  char *pcVar6;
  char *pcVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  CHAR *lpFilename;
  DWORD DVar9;
  undefined1 local_508 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_504;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_500;
  undefined4 local_4fc;
  uint local_4f8;
  xFileManager *local_4f4;
  char local_4f0 [4];
  char *local_4ec;
  undefined4 local_4e8;
  char *local_4e4;
  DWORD local_4e0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_4dc [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_4c0 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_4a4 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_488 [4];
  char ***local_484 [4];
  uint local_474;
  uint local_470;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_46c [4];
  char ***local_468 [5];
  uint local_454;
  CMD5 local_450 [56];
  char local_418 [260];
  CHAR local_314 [260];
  char local_210 [256];
  char local_110 [256];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211018;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  bVar1 = true;
  if (*param_2 == 0) {
    ExceptionList = &local_c;
    local_4f4 = (xFileManager *)FUN_361bf99c(0x1108);
    local_4 = 0;
    if (local_4f4 == (xFileManager *)0x0) {
      pxVar2 = (xFileManager *)0x0;
    }
    else {
      pxVar2 = (xFileManager *)Xenesis::xFileManager::xFileManager(local_4f4);
    }
    this = (xFileManager *)*param_2;
    local_4 = 0xffffffff;
    if ((pxVar2 != this) && (this != (xFileManager *)0x0)) {
      Xenesis::xFileManager::~xFileManager(this);
      operator_delete(this);
    }
    *param_2 = (int)pxVar2;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_46c);
    local_4 = 1;
    CMD5::CMD5(local_450);
    DVar9 = 0x104;
    lpFilename = local_314;
    local_4._0_1_ = 2;
    hModule = GetModuleHandleA((LPCSTR)0x0);
    GetModuleFileNameA(hModule,lpFilename,DVar9);
    _splitpath(local_314,local_4f0,local_418,local_110,local_210);
    pcVar6 = local_418;
    do {
      pcVar7 = pcVar6;
      pcVar6 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    pcVar7[-4] = '\0';
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_4a4,local_4f0);
    local_4._0_1_ = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
              (local_4a4,local_418);
    local_504 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_500 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_4fc = 0;
    local_4._0_1_ = 4;
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Bin_Engine_dll_36227520);
    local_4._0_1_ = 5;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 6;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 5;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Bin_EngineGUI_dll_36227530);
    local_4._0_1_ = 7;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 8;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 7;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Bin_GameGUIMP_dll_36227544);
    local_4._0_1_ = 9;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 10;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 9;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Bin_GameMP_dll_36227558);
    local_4._0_1_ = 0xb;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 0xc;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 0xb;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Bin_ImmWrapper_dll_36227568);
    local_4._0_1_ = 0xd;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 0xe;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 0xd;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Bin_KeyHook_dll_3622757c);
    local_4._0_1_ = 0xf;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 0x10;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 0xf;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_4dc,local_314);
    local_4._0_1_ = 0x11;
    FUN_360444e0(local_508,local_4dc);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Bin_Shaders_dll_3622758c);
    local_4._0_1_ = 0x12;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 0x13;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 0x12;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Bin_UIToolKit_dll_3622759c);
    local_4._0_1_ = 0x14;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 0x15;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 0x14;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Bin_EntitiesMP_dll_362275b0);
    local_4._0_1_ = 0x16;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 0x17;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 0x16;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       (local_4dc,s_Classes_xfs_362275c4);
    local_4._0_1_ = 0x18;
    pbVar3 = FUN_3600ac90(local_4c0,local_4a4,pbVar3);
    local_4._0_1_ = 0x19;
    FUN_360444e0(local_508,pbVar3);
    local_4._0_1_ = 0x18;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_488);
    local_4._0_1_ = 0x1a;
    local_4f8 = 0;
    pbVar3 = local_504 + 4;
    pbVar8 = local_504;
    while ((pbVar8 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)0x0 && (local_4f8 < (uint)(((int)local_500 - (int)pbVar8) / 0x1c)))) {
      uVar4 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              find(pbVar3 + -4,&DAT_362275d0,0,4);
      if ((uVar4 == *(uint *)npos_exref) || (uVar4 + 4 != *(int *)(pbVar3 + 0x10))) {
        pbVar5 = pbVar3;
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar5 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )pbVar3;
        }
        hFile = CreateFileA((LPCSTR)pbVar5,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
        if (hFile != (HANDLE)0xffffffff) {
          DVar9 = GetFileSize(hFile,(LPDWORD)&local_4f4);
          uVar4 = (int)local_4f4 << 0x10 | DVar9;
          pcVar6 = (char *)thunk_FUN_361bf99c(uVar4);
          local_4 = CONCAT31(local_4._1_3_,0x1d);
          local_4e4 = pcVar6;
          ReadFile(hFile,pcVar6,uVar4,&local_4e0,(LPOVERLAPPED)0x0);
          if (hFile != (HANDLE)0x0) {
            CloseHandle(hFile);
          }
          pcVar7 = CMD5::GetString(local_450,pcVar6,uVar4);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (local_4c0,pcVar7);
          local_4._0_1_ = 0x1e;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          operator+=(local_488,local_4c0);
          local_4._0_1_ = 0x1d;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c0);
          local_4._0_1_ = 0x1a;
          operator_delete(pcVar6);
          pbVar8 = local_504;
        }
        local_4f8 = local_4f8 + 1;
        pbVar3 = pbVar3 + 0x1c;
      }
      else {
        pbVar5 = pbVar3;
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar5 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )pbVar3;
        }
        local_4ec = StringDuplicate((char *)pbVar5);
        local_4e8 = 0;
        local_4._0_1_ = 0x1b;
        this_00 = xfsMan::InitXfsFile((xfsMan *)&DAT_362befb0,(CTFileName *)&local_4ec);
        Xenesis2::Foundation::File::xFileManager::getMD5Code(this_00);
        local_4._0_1_ = 0x1c;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        operator+=(local_488,local_4dc);
        local_4._0_1_ = 0x1b;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4dc);
        local_4._0_1_ = 0x1a;
        StringFree(local_4ec);
        local_4f8 = local_4f8 + 1;
        pbVar3 = pbVar3 + 0x1c;
      }
    }
    if (local_470 < 0x10) {
      local_484[0] = (char ***)local_484;
    }
    pcVar6 = CMD5::GetString(local_450,(char *)local_484[0],local_474);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
              (local_46c,pcVar6);
    if (local_454 < 0x10) {
      local_468[0] = (char ***)local_468;
    }
    Xenesis::xFileManager::setPassword((xFileManager *)*param_2,(char *)local_468[0]);
    bVar1 = Xenesis::xFileManager::init((xFileManager *)*param_2,(char *)*param_1,true);
    local_4._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_488);
    pbVar5 = local_500;
    local_4._0_1_ = 3;
    pbVar3 = pbVar8;
    if (pbVar8 != (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  0x0) {
      for (; pbVar3 != pbVar5; pbVar3 = pbVar3 + 0x1c) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
        ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(pbVar3);
      }
      operator_delete(pbVar8);
    }
    local_4._0_1_ = 2;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4a4);
    local_4 = CONCAT31(local_4._1_3_,1);
    CMD5::~CMD5(local_450);
    local_4 = 0xffffffff;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_46c);
  }
  ExceptionList = local_c;
  return bVar1;
}

