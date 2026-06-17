
uint __thiscall FUN_36019460(void *this,int param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c));
  local_4 = 0;
  uVar1 = FUN_36019300(this,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c));
  ExceptionList = local_c;
  return uVar1;
}

