
/* public: __thiscall CMappingUndo::~CMappingUndo(void) */

void __thiscall CMappingUndo::~CMappingUndo(CMappingUndo *this)

{
  int iVar1;
  
                    /* 0xa7a80  437  ??1CMappingUndo@@QAE@XZ */
  iVar1 = CListNode::IsLinked((CListNode *)this);
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)this);
    return;
  }
  return;
}

