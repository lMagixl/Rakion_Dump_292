
/* public: void __thiscall CBrush3D::DeleteBrushMip(class CBrushMip *) */

void __thiscall CBrush3D::DeleteBrushMip(CBrush3D *this,CBrushMip *param_1)

{
  long lVar1;
  
                    /* 0x135da0  1461  ?DeleteBrushMip@CBrush3D@@QAEXPAVCBrushMip@@@Z */
  lVar1 = CListHead::Count((CListHead *)(this + 0x674));
  if ((1 < lVar1) && (CListNode::Remove((CListNode *)(param_1 + 0x18)), param_1 != (CBrushMip *)0x0)
     ) {
    CBrushMip::~CBrushMip(param_1);
    operator_delete(param_1);
  }
  return;
}

