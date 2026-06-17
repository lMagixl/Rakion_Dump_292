
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class CQMSLog & __cdecl CQMSLog::getInstance(void) */

CQMSLog * __cdecl CQMSLog::getInstance(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a1bd0  4195  ?getInstance@CQMSLog@@SAAAV1@XZ */
  puStack_8 = &LAB_3621b82e;
  local_c = ExceptionList;
  if ((_DAT_363822f8 & 1) == 0) {
    _DAT_363822f8 = _DAT_363822f8 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    CQMSLog((CQMSLog *)&DAT_363822a0);
    _atexit((_func_4879 *)&LAB_36221440);
  }
  ExceptionList = local_c;
  return (CQMSLog *)&DAT_363822a0;
}

