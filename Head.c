
/* public: class CListNode & __thiscall CListHead::Head(void)const  */

CListNode * __thiscall CListHead::Head(CListHead *this)

{
                    /* 0x1300  2261  ?Head@CListHead@@QBEAAVCListNode@@XZ */
  return *(CListNode **)this;
}

