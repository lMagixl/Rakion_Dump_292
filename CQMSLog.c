
/* private: __thiscall CQMSLog::CQMSLog(void) */

CQMSLog * __thiscall CQMSLog::CQMSLog(CQMSLog *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a1a30  206  ??0CQMSLog@@AAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b7ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 4) = pcVar1;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xc) = pcVar1;
  local_4._0_1_ = 1;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x10) = pcVar1;
  local_4._0_1_ = 2;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x14) = pcVar1;
  local_4._0_1_ = 3;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x18) = pcVar1;
  local_4._0_1_ = 4;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x1c) = pcVar1;
  local_4._0_1_ = 5;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x20) = pcVar1;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  Init(this);
  ExceptionList = local_c;
  return this;
}

