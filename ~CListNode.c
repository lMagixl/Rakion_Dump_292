
/* public: __thiscall CListNode::~CListNode(void) */

void __thiscall CListNode::~CListNode(CListNode *this)

{
  int iVar1;
  
                    /* 0x11c0  434  ??1CListNode@@QAE@XZ */
  iVar1 = IsLinked(this);
  if (iVar1 != 0) {
    Remove(this);
    return;
  }
  return;
}

