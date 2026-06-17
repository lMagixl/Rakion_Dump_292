
/* public: void __thiscall CListHead::RemHead(void) */

void __thiscall CListHead::RemHead(CListHead *this)

{
                    /* 0x2b540  3104  ?RemHead@CListHead@@QAEXXZ */
  CListNode::Remove(*(CListNode **)this);
  return;
}

