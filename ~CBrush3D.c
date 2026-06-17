
/* public: __thiscall CBrush3D::~CBrush3D(void) */

void __thiscall CBrush3D::~CBrush3D(CBrush3D *this)

{
  int iVar1;
  
                    /* 0x135740  392  ??1CBrush3D@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  iVar1 = CListNode::IsLinked((CListNode *)(this + 4));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 4));
    return;
  }
  return;
}

