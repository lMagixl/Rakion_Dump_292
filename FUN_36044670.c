
bool __cdecl FUN_36044670(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[3] = pvVar1;
  return pvVar1 != (HANDLE)0x0;
}

