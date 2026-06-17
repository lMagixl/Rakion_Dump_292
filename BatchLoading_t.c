
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl CObject3D::BatchLoading_t(int) */

void __cdecl CObject3D::BatchLoading_t(int param_1)

{
  int iVar1;
  HMODULE hInstance;
  LPVOID lpParam;
  char *local_30;
  char *local_2c;
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x4d830  1078  ?BatchLoading_t@CObject3D@@SAXH@Z */
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211950;
  local_c = ExceptionList;
  if ((DAT_362bf554 == 0) != (param_1 == 0)) {
    if (param_1 == 0) {
      if (DAT_362bf530 != (HWND)0x0) {
        ExceptionList = &local_c;
        DestroyWindow(DAT_362bf530);
        DAT_362bf530 = (HWND)0x0;
      }
    }
    else {
      ExceptionList = &local_c;
      if (DAT_362bf550 == (HMODULE)0x0) {
        ExceptionList = &local_c;
        local_30 = StringDuplicate(&DAT_36227dac);
        local_4 = 0;
        param_1 = (int)StringDuplicate(s_HKEY_LOCAL_MACHINE_SOFTWARE_X_Di_36227db0);
        local_4._0_1_ = 1;
        REG_SetString((CTString *)&param_1,(CTString *)&local_30);
        local_4 = (uint)local_4._1_3_ << 8;
        StringFree((char *)param_1);
        local_4 = 0xffffffff;
        StringFree(local_30);
        local_30 = StringDuplicate(&DAT_36227e00);
        local_4 = 2;
        param_1 = (int)StringDuplicate(s_HKEY_LOCAL_MACHINE_SOFTWARE_X_Di_36227e08);
        local_4._0_1_ = 3;
        REG_SetString((CTString *)&param_1,(CTString *)&local_30);
        local_4 = CONCAT31(local_4._1_3_,2);
        StringFree((char *)param_1);
        local_4 = 0xffffffff;
        StringFree(local_30);
        local_30 = StringDuplicate(&DAT_36227e54);
        local_4 = 4;
        param_1 = (int)StringDuplicate(s_HKEY_LOCAL_MACHINE_SOFTWARE_X_Di_36227e58);
        local_4._0_1_ = 5;
        REG_SetString((CTString *)&param_1,(CTString *)&local_30);
        local_4 = CONCAT31(local_4._1_3_,4);
        StringFree((char *)param_1);
        local_4 = 0xffffffff;
        StringFree(local_30);
        local_30 = StringDuplicate(&DAT_36227ea4);
        local_4 = 6;
        param_1 = (int)StringDuplicate(s_HKEY_LOCAL_MACHINE_SOFTWARE_X_Di_36227ea8);
        local_4._0_1_ = 7;
        REG_SetString((CTString *)&param_1,(CTString *)&local_30);
        local_4 = CONCAT31(local_4._1_3_,6);
        StringFree((char *)param_1);
        local_4 = 0xffffffff;
        StringFree(local_30);
        DAT_362bf550 = LoadLibraryA(s_eview3d_dll_36227ef4);
        if (DAT_362bf550 == (HMODULE)0x0) {
          param_1 = (int)s_3D_Exploration_dll_not_found___36227f00;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
        }
        DAT_362bf540 = GetProcAddress(DAT_362bf550,s_InitExploration3D_36227f20);
        param_1 = (int)StringDuplicate(s_Bin_3DExplorationPlugins_36227f34);
        local_4 = 8;
        CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_2c);
        local_4 = CONCAT31(local_4._1_3_,10);
        StringFree((char *)param_1);
        local_20 = 0;
        local_1c = 0;
        local_10 = 0;
        local_24 = 0x18;
        local_18 = s_Software_X_Dimension_SeriousEngi_36227f50;
        local_14 = local_2c;
        if (DAT_362bf540 == (FARPROC)0x0) {
          local_28 = s_Unable_to_initialize_3D_object_l_36227f74;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_28,(ThrowInfo *)&DAT_3624f688);
        }
        _DAT_362bf53c = (*DAT_362bf540)(&local_24);
        local_4 = 0xffffffff;
        StringFree(local_2c);
      }
      if (DAT_362bf530 == (HWND)0x0) {
        lpParam = (LPVOID)0x0;
        hInstance = GetModuleHandleA((LPCSTR)0x0);
        DAT_362bf530 = CreateWindowExA(0,s_EXPLORATION_3D_WINDOW_36227fac,s_Object_Loader_36227f9c,0
                                       ,100,100,100,0x32,(HWND)0x0,(HMENU)0x0,hInstance,lpParam);
      }
    }
    DAT_362bf554 = iVar1;
  }
  ExceptionList = local_c;
  return;
}

