
/* public: __thiscall CSessionState::~CSessionState(void) */

void __thiscall CSessionState::~CSessionState(CSessionState *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x111f90  472  ??1CSessionState@@QAE@XZ */
  puStack_8 = &LAB_36218329;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FUN_360cd280((int *)(this + 0x2960));
  CNetworkMessage::~CNetworkMessage((CNetworkMessage *)(this + 0x1cdc));
  local_4._0_1_ = 2;
  FUN_36100a20((undefined4 *)(this + 0x90));
  local_4._0_1_ = 1;
  StringFree(*(char **)(this + 0x7c));
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_36106fb0((undefined4 *)(this + 8));
  local_4 = 0xffffffff;
  StringFree(*(char **)this);
  ExceptionList = local_c;
  return;
}

