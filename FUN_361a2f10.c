
bool __thiscall FUN_361a2f10(void *this,LONG param_1,LONG param_2)

{
  DWORD DVar1;
  LONG local_4;
  
  local_4 = param_2;
  DVar1 = SetFilePointer(*(HANDLE *)this,param_1,&local_4,0);
  if (DVar1 != 0xffffffff) {
    return true;
  }
  DVar1 = GetLastError();
  return (bool)('\x01' - (DVar1 != 0));
}

