
/* public: static void __cdecl CTStream::ExceptionFatalError(void) */

void __cdecl CTStream::ExceptionFatalError(void)

{
  DWORD DVar1;
  undefined4 *puVar2;
  char **ppcVar3;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3de80  1583  ?ExceptionFatalError@CTStream@@SAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362108e7;
  local_c = ExceptionList;
  ppcVar3 = &local_10;
  ExceptionList = &local_c;
  DVar1 = GetLastError();
  puVar2 = (undefined4 *)GetWindowsError((ulong)&local_10);
  local_4 = 0;
  FatalError((char *)*puVar2,ppcVar3,DVar1);
  local_4 = 0xffffffff;
  StringFree(local_10);
  ExceptionList = local_c;
  return;
}

