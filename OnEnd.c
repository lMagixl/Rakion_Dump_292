
/* public: virtual void __thiscall CMovableEntity::OnEnd(void) */

void __thiscall CMovableEntity::OnEnd(CMovableEntity *this)

{
  int iVar1;
  
                    /* 0x1ada60  2714  ?OnEnd@CMovableEntity@@UAEXXZ */
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0x2a0));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 0x2a0));
  }
  ClearTemporaryData(this);
  *(undefined4 *)(this + 0x1ec) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1f0) = 0x7f61b1e6;
  *(undefined4 *)(this + 500) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1f8) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1fc) = 0xff61b1e6;
  *(undefined4 *)(this + 0x200) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1d4) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1d8) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1dc) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1e0) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1e4) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1e8) = 0xff61b1e6;
  CRationalEntity::OnEnd((CRationalEntity *)this);
  return;
}

