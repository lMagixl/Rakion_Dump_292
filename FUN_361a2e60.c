
bool __thiscall FUN_361a2e60(void *this,LPCSTR param_1,char param_2,char param_3,char param_4)

{
  HANDLE pvVar1;
  DWORD dwCreationDisposition;
  
  SetFileAttributesA(param_1,0x80);
  if (param_4 == '\0') {
    dwCreationDisposition = 4 - (param_2 != '\0');
  }
  else {
    dwCreationDisposition = 2;
  }
  pvVar1 = CreateFileA(param_1,(-(uint)(param_2 != '\0') & 0xc0000000) + 0xc0000000,1,
                       (LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,
                       (-(uint)(param_3 != '\0') & 0x8000000) + 0x8000080,(HANDLE)0x0);
  *(HANDLE *)this = pvVar1;
  return pvVar1 != (HANDLE)0xffffffff;
}

