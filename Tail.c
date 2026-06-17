
/* public: class CListNode & __thiscall CListHead::Tail(void)const  */

CListNode * __thiscall CListHead::Tail(CListHead *this)

{
                    /* 0x1310  3793  ?Tail@CListHead@@QBEAAVCListNode@@XZ */
  return *(CListNode **)(this + 8);
}

