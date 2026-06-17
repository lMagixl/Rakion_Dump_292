
/* public: __thiscall CNetworkProvider::~CNetworkProvider(void) */

void __thiscall CNetworkProvider::~CNetworkProvider(CNetworkProvider *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x66b0  454  ??1CNetworkProvider@@QAE@XZ */
  puStack_8 = &LAB_3620d1e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = CListNode::IsLinked((CListNode *)(this + 4));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 4));
  }
  local_4 = 0xffffffff;
  StringFree(*(char **)this);
  ExceptionList = local_c;
  return;
}

