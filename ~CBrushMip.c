
/* public: __thiscall CBrushMip::~CBrushMip(void) */

void __thiscall CBrushMip::~CBrushMip(CBrushMip *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4920  394  ??1CBrushMip@@QAE@XZ */
  puStack_8 = &LAB_3620d1a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0x18));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 0x18));
  }
  local_4 = 0xffffffff;
  thunk_FUN_36043c40((undefined4 *)this);
  ExceptionList = local_c;
  return;
}

