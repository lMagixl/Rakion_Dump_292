
/* public: class CListNode & __thiscall CListHead::IterationTail(void)const  */

CListNode * __thiscall CListHead::IterationTail(CListHead *this)

{
                    /* 0x1330  2518  ?IterationTail@CListHead@@QBEAAVCListNode@@XZ */
  return *(CListNode **)(this + 8);
}

