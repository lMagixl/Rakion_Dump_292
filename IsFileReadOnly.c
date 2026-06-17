
/* int __cdecl IsFileReadOnly(class CTFileName const &) */

int __cdecl IsFileReadOnly(CTFileName *param_1)

{
  char *pcVar1;
  long lVar2;
  int _FileHandle;
  char *local_38;
  undefined4 local_34;
  undefined1 local_30 [6];
  uint local_2a;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x40620  2390  ?IsFileReadOnly@@YAHABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210c6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = StringDuplicate(&DAT_36222fa0);
  local_34 = 0;
  local_4 = 0;
  lVar2 = ExpandFilePath(1,param_1,(CTFileName *)&local_38);
  pcVar1 = local_38;
  if (lVar2 != 1) {
    local_4 = 0xffffffff;
    StringFree(local_38);
    ExceptionList = local_c;
    return 0;
  }
  _FileHandle = _open(local_38,0x8000);
  if (_FileHandle == -1) {
    local_4 = _FileHandle;
    StringFree(pcVar1);
    ExceptionList = local_c;
    return 0;
  }
  fstat(_FileHandle,local_30);
  _close(_FileHandle);
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  ExceptionList = local_c;
  return ~(local_2a >> 7) & 1;
}

