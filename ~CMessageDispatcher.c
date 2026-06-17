
/* public: virtual __thiscall CMessageDispatcher::~CMessageDispatcher(void) */

void __thiscall CMessageDispatcher::~CMessageDispatcher(CMessageDispatcher *this)

{
  CListNode *pCVar1;
  CListNode *pCVar2;
  CListNode *this_00;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x104030  439  ??1CMessageDispatcher@@UAE@XZ */
  puStack_8 = &LAB_362176fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  CCommunicationInterface::Close(&_cmiComm);
  pCVar2 = *(CListNode **)(this + 4);
  while (this_00 = pCVar2, pCVar2 = *(CListNode **)this_00, pCVar2 != (CListNode *)0x0) {
    pCVar1 = this_00 + -4;
    if (pCVar1 != (CListNode *)0x0) {
      local_4 = CONCAT31(local_4._1_3_,1);
      iVar3 = CListNode::IsLinked(this_00);
      if (iVar3 != 0) {
        CListNode::Remove(this_00);
      }
      local_4 = local_4 & 0xffffff00;
      StringFree(*(char **)pCVar1);
      operator_delete(pCVar1);
    }
  }
  local_4 = 0xffffffff;
  StringFree(*(char **)(this + 0x10));
  ExceptionList = local_c;
  return;
}

