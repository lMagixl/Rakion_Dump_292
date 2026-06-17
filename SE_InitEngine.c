
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl SE_InitEngine(class CTString) */

void __cdecl SE_InitEngine(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  CTCriticalSection *pCVar5;
  undefined4 *puVar6;
  CTString *pCVar7;
  DWORD DVar8;
  CTString *this;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  _MEMORYSTATUS local_80;
  char *local_60;
  undefined4 local_5c;
  HMODULE local_58;
  HWND__ *local_54;
  CTCriticalSection *local_50;
  char *local_4c;
  char *local_48;
  DWORD local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  CHAR local_20;
  undefined3 uStack_1f;
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x85f0  3185  ?SE_InitEngine@@YAXVCTString@@@Z */
  puStack_c = &LAB_3620d58c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff70;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_36007ed0();
  pcVar2 = StringDuplicate(&DAT_362b8bf8);
  local_8._0_1_ = 1;
  local_50 = (CTCriticalSection *)pcVar2;
  pcVar3 = StringDuplicate(pcVar2);
  StringFree(__fnmApplicationPath);
  DAT_362bf088 = 0;
  local_8._0_1_ = 0;
  __fnmApplicationPath = pcVar3;
  StringFree(pcVar2);
  pcVar2 = StringDuplicate(&DAT_362b8af0);
  local_8._0_1_ = 2;
  local_50 = (CTCriticalSection *)pcVar2;
  pcVar3 = StringDuplicate(pcVar2);
  StringFree(__fnmApplicationExe);
  _DAT_362bf090 = 0;
  local_8._0_1_ = 0;
  __fnmApplicationExe = pcVar3;
  StringFree(pcVar2);
  local_8 = CONCAT31(local_8._1_3_,3);
  CTFileName::RemoveApplicationPath_t(&_fnmApplicationExe);
  local_8 = 0;
  FUN_36008430();
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x2c);
  local_8._0_1_ = 5;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pConsole = (CConsole *)0x0;
  }
  else {
    _pConsole = (CConsole *)FUN_36021d10(local_50);
  }
  local_8._0_1_ = 0;
  iVar4 = CTString::operator==(&_strLogFile,&DAT_36222776);
  if (iVar4 != 0) {
    pCVar5 = (CTCriticalSection *)StringDuplicate(&DAT_362b8af0);
    local_8._0_1_ = 6;
    local_50 = pCVar5;
    local_4c = StringDuplicate((char *)pCVar5);
    local_48 = (char *)0x0;
    local_8._0_1_ = 7;
    puVar6 = (undefined4 *)CTFileName::FileName((CTFileName *)&local_4c);
    local_8._0_1_ = 8;
    pcVar2 = StringDuplicate((char *)*puVar6);
    StringFree(__strLogFile);
    local_8._0_1_ = 7;
    __strLogFile = pcVar2;
    StringFree(local_30);
    local_8._0_1_ = 6;
    StringFree(local_4c);
    local_8._0_1_ = 0;
    StringFree((char *)pCVar5);
  }
  local_24 = StringDuplicate(&DAT_36222778);
  local_8._0_1_ = 9;
  pCVar7 = (CTString *)CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_2c);
  local_8._0_1_ = 10;
  puVar6 = (undefined4 *)CTString::operator+(pCVar7,(CTString *)&local_28);
  local_8._0_1_ = 0xb;
  local_60 = StringDuplicate((char *)*puVar6);
  local_5c = 0;
  local_8._0_1_ = 0xf;
  StringFree(local_28);
  local_8._0_1_ = 0xe;
  StringFree(local_2c);
  local_8._0_1_ = 0xd;
  StringFree(local_24);
  FUN_36022360(_pConsole,&local_60,0x50,0x200);
  InitExceptionHandler();
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x10;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pAnimStock = (CStock_CAnimData *)0x0;
  }
  else {
    _pAnimStock = (CStock_CAnimData *)FUN_360e5910((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x11;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pTextureStock = (CStock_CTextureData *)0x0;
  }
  else {
    _pTextureStock = (CStock_CTextureData *)FUN_360f0880((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x12;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pFontStock = (CStock_CFontData *)0x0;
  }
  else {
    _pFontStock = (CStock_CFontData *)FUN_360e8ec0((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x13;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pSoundStock = (CStock_CSoundData *)0x0;
  }
  else {
    _pSoundStock = (CStock_CSoundData *)FUN_360ef770((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x14;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pModelStock = (CStock_CModelData *)0x0;
  }
  else {
    _pModelStock = (CStock_CModelData *)FUN_360eb140((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x15;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pEntityClassStock = (CStock_CEntityClass *)0x0;
  }
  else {
    _pEntityClassStock = (CStock_CEntityClass *)FUN_360e7d00((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x16;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pMeshStock = (CStock_CMesh *)0x0;
  }
  else {
    _pMeshStock = (CStock_CMesh *)FUN_360ea080((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x17;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pSkeletonStock = (CStock_CSkeleton *)0x0;
  }
  else {
    _pSkeletonStock = (CStock_CSkeleton *)FUN_360ee5b0((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x18;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pAnimSetStock = (CStock_CAnimSet *)0x0;
  }
  else {
    _pAnimSetStock = (CStock_CAnimSet *)FUN_360e6cb0((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x19;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pShaderStock = (CStock_CShader *)0x0;
  }
  else {
    _pShaderStock = (CStock_CShader *)FUN_360ed410((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x24);
  local_8._0_1_ = 0x1a;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pModelInstanceStock = (CStock_CModelInstance *)0x0;
  }
  else {
    _pModelInstanceStock = (CStock_CModelInstance *)FUN_360ec250((undefined4 *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x30);
  local_8._0_1_ = 0x1b;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pTimer = (CTimer *)0x0;
  }
  else {
    _pTimer = (CTimer *)CTimer::CTimer((CTimer *)local_50,1);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0xb48);
  local_8._0_1_ = 0x1c;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pGfx = (CGfxLibrary *)0x0;
  }
  else {
    _pGfx = (CGfxLibrary *)CGfxLibrary::CGfxLibrary((CGfxLibrary *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x470);
  local_8._0_1_ = 0x1d;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pSound = (CSoundLibrary *)0x0;
  }
  else {
    _pSound = (CSoundLibrary *)CSoundLibrary::CSoundLibrary((CSoundLibrary *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x48);
  local_8._0_1_ = 0x1e;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pInput = (CInput *)0x0;
  }
  else {
    _pInput = (CInput *)CInput::CInput((CInput *)local_50);
  }
  local_8._0_1_ = 0xd;
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x1378);
  local_8._0_1_ = 0x1f;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pNetwork = (CNetworkLibrary *)0x0;
  }
  else {
    _pNetwork = (CNetworkLibrary *)CNetworkLibrary::CNetworkLibrary((CNetworkLibrary *)local_50);
  }
  local_8._0_1_ = 0xd;
  FUN_36022ae0();
  Translate(s_ETRSSeriousEngine_Build___d__d_36222780,4);
  CTString::PrintF(this,(char *)&_strEngineBuild);
  local_50 = (CTCriticalSection *)FUN_361bf99c(0x1c);
  local_8._0_1_ = 0x20;
  if (local_50 == (CTCriticalSection *)0x0) {
    _pShell = (CShell *)0x0;
  }
  else {
    _pShell = (CShell *)CShell::CShell((CShell *)local_50);
  }
  local_8._0_1_ = 0xd;
  CShell::Initialize(_pShell);
  FUN_36007e30();
  FUN_360374f0((char *)0x0);
  GlobalMemoryStatus(&local_80);
  DAT_362b2ad0 = local_80.dwTotalPhys >> 0x14;
  _DAT_362b2ad4 = local_80.dwTotalPageFile >> 0x14;
  _DAT_362b8de0 = 0xffffffff;
  _local_20 = CONCAT31(0x5c3a,DAT_362b8af0);
  GetVolumeInformationA(&local_20,(LPSTR)0x0,0,&local_44,(LPDWORD)0x0,(LPDWORD)0x0,(LPSTR)0x0,0);
  GetDiskFreeSpaceA(&local_20,&local_34,&local_38,&local_40,&local_3c);
  uVar11 = (uint)((ulonglong)local_34 * (ulonglong)local_38);
  iVar4 = (int)((ulonglong)local_34 * (ulonglong)local_38 >> 0x20);
  lVar9 = __allmul(local_3c,0,uVar11,iVar4);
  uVar10 = __alldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),0x100000,0);
  _DAT_362b2ad8 = (undefined4)uVar10;
  lVar9 = __allmul(local_40,0,uVar11,iVar4);
  uVar10 = __alldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),0x100000,0);
  _DAT_362b2adc = (undefined4)uVar10;
  _DAT_362b2ae0 = local_44;
  local_1c = StringDuplicate(s_user_INDEX_con_bNoWarnings__362227a4);
  local_8._0_1_ = 0x21;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b91ec);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_INDEX_wld_bFastObjectOptimi_362227c0);
  local_8._0_1_ = 0x22;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362a299c);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_FLOAT_mth_fCSGEpsilon__362227e8);
  local_8._0_1_ = 0x23;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362a29a0);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_persistent_user_INDEX_fil_bPrefe_36222804);
  local_8._0_1_ = 0x24;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362bef98);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_persistent_user_INDEX_fil_iRepor_3622282c);
  local_8._0_1_ = 0x25;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362bef9c);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_CTString_sys_strOS___36222854);
  local_8._0_1_ = 0x26;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b8de4);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iOSMajor___36222878);
  local_8._0_1_ = 0x27;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2a9c);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iOSMinor___3622289c);
  local_8._0_1_ = 0x28;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2aa0);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iOSBuild___362228c0);
  local_8._0_1_ = 0x29;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2aa4);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_CTString_sys_strOSMis_362228e4);
  local_8._0_1_ = 0x2a;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b8de8);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_CTString_sys_strCPUVe_36222908);
  local_8._0_1_ = 0x2b;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b8dec);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iCPUType___36222930);
  local_8._0_1_ = 0x2c;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2aac);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iCPUFamily___36222958);
  local_8._0_1_ = 0x2d;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ab0);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iCPUModel___36222980);
  local_8._0_1_ = 0x2e;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ab4);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iCPUSteppin_362229a8);
  local_8._0_1_ = 0x2f;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ab8);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_bCPUHasMMX___362229d0);
  local_8._0_1_ = 0x30;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2abc);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_bCPUHasSSE___362229f8);
  local_8._0_1_ = 0x31;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ac0);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_bCPUHasCMOV_36222a20);
  local_8._0_1_ = 0x32;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ac4);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iCPUMHz___36222a48);
  local_8._0_1_ = 0x33;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ac8);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_const_INDEX_sys_iCPUMisc___36222a70);
  local_8._0_1_ = 0x34;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2acc);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iRAMPhys__36222a98);
  local_8._0_1_ = 0x35;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ad0);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iRAMSwap__36222ab8);
  local_8._0_1_ = 0x36;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ad4);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iHDDSize__36222ad8);
  local_8._0_1_ = 0x37;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ad8);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_INDEX_sys_iHDDFree__36222af8);
  local_8._0_1_ = 0x38;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2adc);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_const_INDEX_sys_iHDDMisc__36222b18);
  local_8._0_1_ = 0x39;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b2ae0);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_CTString_sys_strModNa_36222b38);
  local_8._0_1_ = 0x3a;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b8df0);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_CTString_sys_strModEx_36222b5c);
  local_8._0_1_ = 0x3b;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362b8df4);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_void_FreeUnusedStock_void___36222b80);
  local_8._0_1_ = 0x3c;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,FUN_360f3800);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_user_const_FLOAT_fTickQuantum__36222ba4);
  local_8._0_1_ = 0x3d;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&CTimer::TickQuantum);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_persistent_user_INDEX_gam_iMaxSa_36222bc4);
  local_8._0_1_ = 0x3e;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&DAT_362a1594);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  local_1c = StringDuplicate(s_INDEX_dbg_bAtHome__36222bf0);
  local_8._0_1_ = 0x3f;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_1c,&dbg_bAtHome);
  local_8._0_1_ = 0xd;
  StringFree(local_1c);
  FUN_3603d6f0();
  if (_bDedicatedServer == 0) {
    local_18 = StringDuplicate(&DAT_36222c10);
    local_8._0_1_ = 0x40;
    local_1c = StringDuplicate(s_include___36222c04);
    local_8._0_1_ = 0x41;
    pCVar7 = (CTString *)CTString::operator+((CTString *)&local_1c,(CTString *)&local_50);
    local_8._0_1_ = 0x42;
    pCVar7 = (CTString *)CTString::operator+(pCVar7,(CTString *)&local_48);
    local_8._0_1_ = 0x43;
    CShell::Execute(_pShell,pCVar7);
    local_8._0_1_ = 0x42;
    StringFree(local_48);
    local_8._0_1_ = 0x41;
    StringFree((char *)local_50);
    local_8._0_1_ = 0x40;
    StringFree(local_1c);
    local_8._0_1_ = 0xd;
    StringFree(local_18);
  }
  FUN_36021dc0(_pConsole,&local_60);
  pcVar2 = StringDuplicate(__strModName);
  StringFree(DAT_362b8df0);
  DAT_362b8df0 = pcVar2;
  pcVar2 = StringDuplicate(__strModExt);
  StringFree(DAT_362b8df4);
  DAT_362b8df4 = pcVar2;
  CInput::Initialize(_pInput);
  CGfxLibrary::Init(_pGfx);
  CSoundLibrary::Init(_pSound);
  iVar4 = CTString::operator!=((CTString *)&param_1,&DAT_36222c13);
  if (iVar4 == 0) {
    if (_pNetwork != (CNetworkLibrary *)0x0) {
      (*(code *)**(undefined4 **)_pNetwork)();
    }
    _pNetwork = (CNetworkLibrary *)0x0;
  }
  else {
    CNetworkLibrary::Init(_pNetwork,(CTString *)&param_1);
  }
  _pfdDisplayFont = (CFontData *)0x0;
  _pfdConsoleFont = (CFontData *)0x0;
  local_54 = (HWND__ *)0x0;
  local_58 = GetModuleHandleA((LPCSTR)0x0);
  iVar4 = IFeel_InitDevice(&local_58,&local_54);
  if (iVar4 != 0) {
    local_1c = StringDuplicate(s_Data_Default_ifr_36222c14);
    local_8._0_1_ = 0x44;
    IFeel_GetProjectFileName();
    local_8 = CONCAT31(local_8._1_3_,0x45);
    pcVar2 = local_18;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_50 = (CTCriticalSection *)((int)pcVar2 - (int)(local_18 + 1));
    if (local_50 == (CTCriticalSection *)0x0) {
      pcVar2 = StringDuplicate(local_1c);
      StringFree(local_18);
      local_18 = pcVar2;
    }
    local_50 = (CTCriticalSection *)&stack0xffffff68;
    StringDuplicate(local_18);
    iVar4 = IFeel_LoadFile();
    if (iVar4 == 0) {
      iVar4 = CTString::operator!=((CTString *)&local_18,(CTString *)&local_1c);
      if (iVar4 != 0) {
        local_50 = (CTCriticalSection *)&stack0xffffff68;
        StringDuplicate(local_1c);
        IFeel_LoadFile();
      }
    }
    local_8._0_1_ = 0x44;
    StringFree(local_18);
    local_8._0_1_ = 0xd;
    StringFree(local_1c);
  }
  DVar8 = timeGetTime();
  srand_(DVar8);
  local_8 = (uint)local_8._1_3_ << 8;
  StringFree(local_60);
  local_8 = 0xffffffff;
  StringFree(param_1);
  ExceptionList = local_10;
  return;
}

