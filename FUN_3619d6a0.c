
void __fastcall FUN_3619d6a0(undefined4 *param_1)

{
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621b408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_onEvent_36242fe8;
  local_4 = 0;
  if (param_1[4] == 1) {
    param_1[4] = 0;
    SetEvent((HANDLE)param_1[3]);
  }
  WaitForSingleObject((HANDLE)param_1[2],1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  operator_delete__((void *)param_1[10]);
  operator_delete__((void *)param_1[9]);
  operator_delete__((void *)param_1[8]);
  FUN_36016ea0(param_1 + 5,&local_10,*(int **)param_1[6],(int *)param_1[6]);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &ThreadBase<0,10>::_vftable_;
  if (param_1[4] == 1) {
    param_1[4] = 0;
    SetEvent((HANDLE)param_1[3]);
  }
  WaitForSingleObject((HANDLE)param_1[2],0);
  CloseHandle((HANDLE)param_1[3]);
  ExceptionList = local_c;
  return;
}

