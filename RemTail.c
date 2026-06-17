
/* public: void __thiscall CListHead::RemTail(void) */

void __thiscall CListHead::RemTail(CListHead *this)

{
                    /* 0x2b550  3110  ?RemTail@CListHead@@QAEXXZ */
  CListNode::Remove(*(CListNode **)(this + 8));
  return;
}

