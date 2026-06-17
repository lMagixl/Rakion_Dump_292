
/* private: __thiscall CQMSLog::~CQMSLog(void) */

void __thiscall CQMSLog::~CQMSLog(CQMSLog *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1a1b00  465  ??1CQMSLog@@AAE@XZ */
  puStack_8 = &LAB_3621b816;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  if (*(void **)(this + 0x4c) != (void *)0x0) {
    ExceptionList = &local_c;
    operator_delete(*(void **)(this + 0x4c));
  }
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x3c));
  }
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  StringFree(*(char **)(this + 0x20));
  local_4._0_1_ = 4;
  StringFree(*(char **)(this + 0x1c));
  local_4._0_1_ = 3;
  StringFree(*(char **)(this + 0x18));
  local_4._0_1_ = 2;
  StringFree(*(char **)(this + 0x14));
  local_4._0_1_ = 1;
  StringFree(*(char **)(this + 0x10));
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(*(char **)(this + 0xc));
  local_4 = 0xffffffff;
  StringFree(*(char **)(this + 4));
  ExceptionList = local_c;
  return;
}

