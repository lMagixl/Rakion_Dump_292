
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __thiscall FUN_361cc14a(void *this,LPCWSTR param_1,int param_2)

{
  int cbMultiByte;
  HANDLE pvVar1;
  undefined4 uVar2;
  LPCWSTR lpFileName;
  _OSVERSIONINFOA local_9c;
  undefined4 *local_8;
  
  if (param_1 == (LPCWSTR)0x0) {
    return 0x8876086c;
  }
  lpFileName = param_1;
  local_8 = this;
  if (param_2 != 0) {
    local_9c.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_9c);
    if (local_9c.dwPlatformId != 2) {
      cbMultiByte = WideCharToMultiByte(0,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      lpFileName = (LPCWSTR)&stack0xffffff58;
      WideCharToMultiByte(0,0,param_1,-1,&stack0xffffff58,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      param_2 = 0;
      this = local_8;
    }
    if (param_2 != 0) {
      pvVar1 = CreateFileW(lpFileName,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
      goto LAB_361cc1f1;
    }
  }
  pvVar1 = CreateFileA((LPCSTR)lpFileName,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
LAB_361cc1f1:
  *(HANDLE *)this = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    GetLastError();
    uVar2 = 0x88760b59;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

