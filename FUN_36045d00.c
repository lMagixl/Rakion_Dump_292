
undefined4 * __cdecl FUN_36045d00(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pcVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362113e9;
  local_c = ExceptionList;
  switch(param_2) {
  case (char *)0x0:
    ExceptionList = &local_c;
    pcVar2 = Translate(s_ETRSZ_OK_36227900,4);
    pcVar2 = StringDuplicate(pcVar2);
    *param_1 = pcVar2;
    ExceptionList = local_c;
    return param_1;
  case (char *)0x1:
    pcVar2 = s_ETRSZ_STREAM_END_36227914;
    break;
  case (char *)0x2:
    pcVar2 = s_ETRSZ_NEED_DICT_36227928;
    break;
  case (char *)0xfffffffa:
    pcVar2 = s_ETRSZ_VERSION_ERROR_3622798c;
    break;
  case (char *)0xfffffffb:
    pcVar2 = s_ETRSZ_BUF_ERROR_36227978;
    break;
  case (char *)0xfffffffc:
    pcVar2 = s_ETRSZ_MEM_ERROR_36227964;
    break;
  case (char *)0xfffffffd:
    pcVar2 = s_ETRSZ_DATA_ERROR_36227950;
    break;
  case (char *)0xfffffffe:
    pcVar2 = s_ETRSZ_STREAM_ERROR_3622793c;
    break;
  case (char *)0xffffffff:
    ExceptionList = &local_c;
    param_2 = StringDuplicate(&DAT_36222fa0);
    local_4 = 1;
    piVar1 = _errno();
    pcVar2 = strerror(*piVar1);
    pcVar3 = s_ETRSZ_ERRNO___s_362279a0;
    goto LAB_36045e19;
  default:
    ExceptionList = &local_c;
    param_2 = StringDuplicate(&DAT_36222fa0);
    local_4 = 2;
    pcVar3 = s_ETRSUnknown_ZLIB_error___d_362279b0;
LAB_36045e19:
    pcVar3 = Translate(pcVar3,4);
    CTString::PrintF((CTString *)&param_2,(char *)&param_2,pcVar3,pcVar2);
    pcVar2 = StringDuplicate(param_2);
    *param_1 = pcVar2;
    local_4 = local_4 & 0xffffff00;
    StringFree(param_2);
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = &local_c;
  pcVar2 = Translate(pcVar2,4);
  pcVar2 = StringDuplicate(pcVar2);
  *param_1 = pcVar2;
  ExceptionList = local_c;
  return param_1;
}

