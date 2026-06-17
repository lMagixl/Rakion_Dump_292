
/* public: __thiscall CNetworkSession::~CNetworkSession(void) */

void __thiscall CNetworkSession::~CNetworkSession(CNetworkSession *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x6880  455  ??1CNetworkSession@@QAE@XZ */
  puStack_8 = &LAB_3620d23f;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  StringFree(*(char **)(this + 0x2c));
  local_4._0_1_ = 4;
  StringFree(*(char **)(this + 0x28));
  local_4._0_1_ = 3;
  StringFree(*(char **)(this + 0x24));
  local_4._0_1_ = 2;
  StringFree(*(char **)(this + 0x14));
  local_4._0_1_ = 1;
  StringFree(*(char **)(this + 0x10));
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(*(char **)(this + 8));
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked((CListNode *)this);
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)this);
  }
  ExceptionList = local_c;
  return;
}

