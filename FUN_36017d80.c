
void __thiscall FUN_36017d80(void *this,uint param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c));
  local_4 = 0;
  FUN_36017d30(this,param_1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c));
  ExceptionList = local_c;
  return;
}

