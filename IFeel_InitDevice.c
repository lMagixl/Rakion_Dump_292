
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl IFeel_InitDevice(struct HINSTANCE__ * &,struct HWND__ * &) */

int __cdecl IFeel_InitDevice(HINSTANCE__ **param_1,HWND__ **param_2)

{
  char *pcVar1;
  UINT uMode;
  int iVar2;
  undefined4 *puVar3;
  char **ppcVar4;
  char *local_20;
  undefined4 local_1c;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x276c0  2272  ?IFeel_InitDevice@@YAHAAPAUHINSTANCE__@@AAPAUHWND__@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f44d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = StringDuplicate(s_void_inp_IFeelGainChange_INDEX___36224338);
  local_4 = 0;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_20,&LAB_360276b0);
  local_4 = 0xffffffff;
  StringFree(local_20);
  local_20 = StringDuplicate(s_persistent_user_FLOAT_inp_fIFeel_3622435c);
  local_4 = 1;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_20,&DAT_362a1b38);
  local_4 = 0xffffffff;
  StringFree(local_20);
  local_20 = StringDuplicate(s_const_user_INDEX_sys_bIFeelEnabl_3622439c);
  local_4 = 2;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_20,&DAT_362b9330);
  local_4 = 0xffffffff;
  StringFree(local_20);
  IFeel_ChangeGain(DAT_362a1b38);
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_10 = 0;
  local_4 = 3;
  pcVar1 = StringDuplicate(s_Bin_ImmWrapper_dll_362243c0);
  local_4._0_1_ = 4;
  local_18 = pcVar1;
  local_20 = StringDuplicate(pcVar1);
  local_1c = 0;
  local_4._0_1_ = 5;
  ExpandFilePath(0x80000001,(CTFileName *)&local_20,(CTFileName *)&local_14);
  local_4._0_1_ = 4;
  StringFree(local_20);
  local_4._0_1_ = 3;
  StringFree(pcVar1);
  if (DAT_362b930c != (HMODULE)0x0) {
    local_4 = 0xffffffff;
    StringFree(local_14);
    ExceptionList = local_c;
    return 0;
  }
  uMode = SetErrorMode(0x8001);
  DAT_362b930c = LoadLibraryA(local_14);
  SetErrorMode(uMode);
  if (DAT_362b930c == (HMODULE)0x0) {
    CPrintF(s_Error_loading_ImmWraper_dll__IFe_362243d4);
  }
  else {
    DAT_362b9310 = GetProcAddress(DAT_362b930c,s_Imm_CreateDevice_36224404);
    DAT_362b9314 = GetProcAddress(DAT_362b930c,s_Imm_DeleteDevice_36224418);
    DAT_362b9318 = GetProcAddress(DAT_362b930c,s_Imm_GetProductName_3622442c);
    DAT_362b931c = GetProcAddress(DAT_362b930c,s_Imm_LoadFile_36224440);
    _DAT_362b9320 = GetProcAddress(DAT_362b930c,s_immUnloadFile_36224450);
    DAT_362b9324 = GetProcAddress(DAT_362b930c,s_Imm_PlayEffect_36224460);
    DAT_362b9328 = GetProcAddress(DAT_362b930c,s_Imm_StopEffect_36224470);
    DAT_362b932c = GetProcAddress(DAT_362b930c,s_Imm_ChangeGain_36224480);
    if (DAT_362b9310 == (FARPROC)0x0) {
      local_4 = 0xffffffff;
      StringFree(local_14);
      ExceptionList = local_c;
      return 0;
    }
    iVar2 = (*DAT_362b9310)(param_1,param_2);
    if (iVar2 != 0) {
      ppcVar4 = &local_18;
      puVar3 = (undefined4 *)IFeel_GetProductName();
      local_4._0_1_ = 6;
      CPrintF(s_IFeel_mouse___s__initialized_362244a8,*puVar3,ppcVar4);
      local_4 = CONCAT31(local_4._1_3_,3);
      StringFree(local_18);
      _DAT_362b9330 = 1;
      local_4 = 0xffffffff;
      StringFree(local_14);
      ExceptionList = local_c;
      return 1;
    }
    CPrintF(s_IFeel_mouse_not_found__36224490);
    IFeel_DeleteDevice();
  }
  local_4 = 0xffffffff;
  StringFree(local_14);
  ExceptionList = local_c;
  return 0;
}

