
DWORD __thiscall FUN_361a30b0(void *this,DWORD param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForMultipleObjects(*(DWORD *)this,*(HANDLE **)((int)this + 4),0,param_1);
  if ((DVar1 == 0xffffffff) || (DVar1 == 0x102)) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

