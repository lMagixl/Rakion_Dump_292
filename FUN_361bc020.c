
void __fastcall FUN_361bc020(uint *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  DWORD local_20;
  uint *local_1c;
  uint local_18;
  LPCRITICAL_SECTION local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c458;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  ExceptionList = &local_c;
  local_14 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_10 = 1;
  local_4 = 0;
  uVar3 = FUN_361bc120();
  uVar1 = *param_1;
  local_20 = GetCurrentThreadId();
  local_1c = (uint *)FUN_361bf99c(8);
  if (local_1c == (uint *)0x0) {
    local_1c = (uint *)0x0;
  }
  else {
    *local_1c = uVar3;
    local_1c[1] = uVar1 ^ uVar3;
  }
  puVar4 = FUN_361bbe80(param_1 + 7,&local_20);
  local_20 = local_20 & 0xffffff00;
  FUN_361baee0(&local_18,local_1c);
  *puVar4 = (uint)local_1c;
  piVar2 = (int *)puVar4[1];
  puVar4[1] = local_18;
  if (piVar2 != (int *)0x0) {
    FUN_3600cd20(piVar2);
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return;
}

