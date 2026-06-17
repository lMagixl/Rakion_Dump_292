
void __fastcall FUN_3619d630(void *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b3e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x3c));
  local_4 = 0;
  uVar1 = rand_();
  FUN_3619d220(param_1,uVar1 & 0x1fff);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x3c));
  ExceptionList = local_c;
  return;
}

