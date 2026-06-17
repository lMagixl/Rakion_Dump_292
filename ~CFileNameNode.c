
/* public: __thiscall CFileNameNode::~CFileNameNode(void) */

void __thiscall CFileNameNode::~CFileNameNode(CFileNameNode *this)

{
  int iVar1;
  
                    /* 0x3ad0  422  ??1CFileNameNode@@QAE@XZ */
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0x104));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 0x104));
    return;
  }
  return;
}

