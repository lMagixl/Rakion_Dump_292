
void __thiscall FUN_361a3280(void *this,DWORD param_1)

{
  if (*(HANDLE *)this != (HANDLE)0xffffffff) {
    WaitForSingleObject(*(HANDLE *)this,param_1);
  }
  return;
}

