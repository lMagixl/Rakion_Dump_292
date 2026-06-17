
void __fastcall FUN_361bb7c0(uint *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  DWORD local_1c;
  uint local_18;
  LPCRITICAL_SECTION local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c398;
  pvStack_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  ExceptionList = &pvStack_c;
  local_14 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_10 = 1;
  local_4 = 0;
  local_1c = GetCurrentThreadId();
  FUN_361bb0c0(param_1 + 7,&local_18,&local_1c);
  if (local_18 == param_1[9]) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if ((*param_1 ^ **(uint **)(local_18 + 0xc)) != (*(uint **)(local_18 + 0xc))[1]) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  *(undefined4 *)(local_18 + 0xc) = 0;
  piVar1 = *(int **)(local_18 + 0x10);
  *(undefined4 *)(local_18 + 0x10) = 0;
  if (piVar1 != (int *)0x0) {
    FUN_3600cd20(piVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = pvStack_c;
  return;
}

