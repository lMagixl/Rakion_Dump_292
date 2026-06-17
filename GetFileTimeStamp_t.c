
/* long __cdecl GetFileTimeStamp_t(class CTFileName const &) */

long __cdecl GetFileTimeStamp_t(CTFileName *param_1)

{
  char *pcVar1;
  long lVar2;
  int _FileHandle;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_38;
  undefined4 local_34;
  undefined1 local_30 [28];
  long local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x404f0  1866  ?GetFileTimeStamp_t@@YAJABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210c5a;
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
    pcVar3 = StringDuplicate(*(char **)param_1);
    local_4._0_1_ = 1;
    pcVar5 = pcVar3;
    pcVar4 = Translate(s_ETRSCannot_open_file___s__for_re_362274a0,4);
    ThrowF_t(pcVar4,pcVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(pcVar3);
    local_4 = 0xffffffff;
    StringFree(pcVar1);
    ExceptionList = local_c;
    return -1;
  }
  fstat(_FileHandle,local_30);
  _close(_FileHandle);
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  ExceptionList = local_c;
  return local_14;
}

