
bool __thiscall FUN_361a2f50(void *this,uint *param_1)

{
  DWORD DVar1;
  longlong lVar2;
  void *local_4;
  
  local_4 = this;
  DVar1 = GetFileSize(*(HANDLE *)this,(LPDWORD)&local_4);
  *param_1 = (uint)local_4;
  param_1[1] = 0;
  lVar2 = __allshl(0x20,param_1[1]);
  *(longlong *)param_1 = lVar2;
  *param_1 = (uint)lVar2 | DVar1;
  param_1[1] = (uint)((ulonglong)lVar2 >> 0x20);
  DVar1 = GetLastError();
  return (bool)('\x01' - (DVar1 != 0));
}

