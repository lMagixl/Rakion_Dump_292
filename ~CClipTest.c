
/* public: __thiscall CClipTest::~CClipTest(void) */

void __thiscall CClipTest::~CClipTest(CClipTest *this)

{
  CListNode *pCVar1;
  CListNode *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x130b60  402  ??1CClipTest@@QAE@XZ */
  puStack_8 = &LAB_36218e3b;
  local_c = ExceptionList;
  local_4 = 0;
  this_00 = *(CListNode **)(this + 0x58);
  ExceptionList = &local_c;
  while (pCVar1 = *(CListNode **)this_00, pCVar1 != (CListNode *)0x0) {
    CListNode::Remove(this_00);
    this_00 = pCVar1;
  }
  if (*(int *)(this + 0xc) != 0) {
    operator_delete__(*(void **)(this + 0x10));
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  ExceptionList = local_c;
  return;
}

