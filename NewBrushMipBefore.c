
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class CBrushMip * __thiscall CBrush3D::NewBrushMipBefore(class CBrushMip *,int) */

CBrushMip * __thiscall CBrush3D::NewBrushMipBefore(CBrush3D *this,CBrushMip *param_1,int param_2)

{
  float fVar1;
  CBrushMip *pCVar2;
  CBrushMip *pCVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1357f0  2667  ?NewBrushMipBefore@CBrush3D@@QAEPAVCBrushMip@@PAV2@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362191f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar2 = (CBrushMip *)FUN_361bf99c(0x54);
  local_4 = 0;
  if (pCVar2 == (CBrushMip *)0x0) {
    pCVar2 = (CBrushMip *)0x0;
  }
  else {
    pCVar2 = (CBrushMip *)CBrushMip::CBrushMip(pCVar2);
  }
  *(CBrush3D **)(pCVar2 + 0x14) = this;
  local_4 = 0xffffffff;
  CListNode::AddBefore((CListNode *)(param_1 + 0x18),(CListNode *)(pCVar2 + 0x18));
  if (param_2 != 0) {
    CBrushMip::Copy(pCVar2,param_1,1.0,0);
  }
  pCVar3 = CBrushMip::GetPrev(pCVar2);
  if (pCVar3 == (CBrushMip *)0x0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(pCVar3 + 0x20);
  }
  *(float *)(pCVar2 + 0x20) = (fVar1 + *(float *)(param_1 + 0x20)) * _DAT_36227cf0;
  ExceptionList = local_c;
  return pCVar2;
}

