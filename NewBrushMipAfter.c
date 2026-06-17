
/* public: class CBrushMip * __thiscall CBrush3D::NewBrushMipAfter(class CBrushMip *,int) */

CBrushMip * __thiscall CBrush3D::NewBrushMipAfter(CBrush3D *this,CBrushMip *param_1,int param_2)

{
  CBrushMip *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x135760  2666  ?NewBrushMipAfter@CBrush3D@@QAEPAVCBrushMip@@PAV2@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362191db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CBrushMip *)FUN_361bf99c(0x54);
  local_4 = 0;
  if (pCVar1 == (CBrushMip *)0x0) {
    pCVar1 = (CBrushMip *)0x0;
  }
  else {
    pCVar1 = (CBrushMip *)CBrushMip::CBrushMip(pCVar1);
  }
  *(CBrush3D **)(pCVar1 + 0x14) = this;
  local_4 = 0xffffffff;
  CListNode::AddAfter((CListNode *)(param_1 + 0x18),(CListNode *)(pCVar1 + 0x18));
  if (param_2 != 0) {
    CBrushMip::Copy(pCVar1,param_1,1.0,0);
  }
  CBrushMip::SpreadFurtherMips(param_1);
  ExceptionList = local_c;
  return pCVar1;
}

