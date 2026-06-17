
bool __thiscall FUN_361a2fa0(void *this,LPVOID param_1,DWORD param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = param_2;
  BVar2 = ReadFile(*(HANDLE *)this,param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return false;
  }
  return DVar1 == param_2;
}

