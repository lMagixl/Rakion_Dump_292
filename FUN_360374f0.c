
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360374f0(char *param_1)

{
  char *pcVar1;
  HANDLE hProcess;
  ULONG_PTR *lpMinimumWorkingSetSize;
  ULONG_PTR *lpMaximumWorkingSetSize;
  ULONG_PTR local_34;
  ULONG_PTR local_30;
  SIZE_T local_2c;
  _MEMORYSTATUS local_28;
  
  pcVar1 = Translate(s_ETRSGlobal_memory_status____36225be4,4);
  FUN_36037460(param_1,pcVar1);
  GlobalMemoryStatus(&local_28);
  local_2c = local_28.dwTotalPhys;
  pcVar1 = Translate(s_ETRS_Physical_memory_used___6_2f_36225c04,4);
  FUN_36037460(param_1,pcVar1);
  local_2c = local_28.dwTotalPageFile - local_28.dwAvailPageFile;
  pcVar1 = Translate(s_ETRS_Page_file_used___6_2f__6_2f_36225c44,4);
  FUN_36037460(param_1,pcVar1);
  local_2c = local_28.dwTotalVirtual - local_28.dwAvailVirtual;
  pcVar1 = Translate(s_ETRS_Virtual_memory_used___6_2f__36225c70,4);
  FUN_36037460(param_1,pcVar1);
  pcVar1 = Translate(s_ETRS_Memory_load___3d___36225c9c,4);
  FUN_36037460(param_1,pcVar1);
  lpMaximumWorkingSetSize = &local_34;
  lpMinimumWorkingSetSize = &local_30;
  hProcess = GetCurrentProcess();
  GetProcessWorkingSetSize(hProcess,lpMinimumWorkingSetSize,lpMaximumWorkingSetSize);
  pcVar1 = Translate(s_ETRS_Process_working_set___dMB___36225cb8,4);
  FUN_36037460(param_1,pcVar1);
  return;
}

