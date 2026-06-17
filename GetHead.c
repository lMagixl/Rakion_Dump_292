
/* public: class CListHead & __thiscall CListNode::GetHead(void) */

CListHead * __thiscall CListNode::GetHead(CListNode *this)

{
  CListHead *pCVar1;
  CListHead *pCVar2;
  
                    /* 0x2b520  1907  ?GetHead@CListNode@@QAEAAVCListHead@@XZ */
  pCVar2 = *(CListHead **)(this + 4);
  while (pCVar1 = pCVar2, pCVar1 != (CListHead *)0x0) {
    this = (CListNode *)pCVar1;
    pCVar2 = *(CListHead **)(pCVar1 + 4);
  }
  return (CListHead *)this;
}

