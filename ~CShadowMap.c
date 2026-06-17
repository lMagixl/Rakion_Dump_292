
/* public: __thiscall CShadowMap::~CShadowMap(void) */

void __thiscall CShadowMap::~CShadowMap(CShadowMap *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x92360  476  ??1CShadowMap@@QAE@XZ */
  puStack_8 = &LAB_36212b3f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  Clear(this);
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked((CListNode *)(this + 8));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 8));
  }
  ExceptionList = local_c;
  return;
}

