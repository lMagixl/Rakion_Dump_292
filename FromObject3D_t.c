
/* public: void __thiscall CBrush3D::FromObject3D_t(class CObject3D &) */

void __thiscall CBrush3D::FromObject3D_t(CBrush3D *this,CObject3D *param_1)

{
  CBrushMip *this_00;
  CBrushMip *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x137f90  1683  ?FromObject3D_t@CBrush3D@@QAEXAAVCObject3D@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621941c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Clear(this);
  this_00 = (CBrushMip *)FUN_361bf99c(0x54);
  this_01 = (CBrushMip *)0x0;
  local_4 = 0;
  if (this_00 != (CBrushMip *)0x0) {
    this_01 = (CBrushMip *)CBrushMip::CBrushMip(this_00);
  }
  local_4 = 0xffffffff;
  CListHead::AddTail((CListHead *)(this + 0x674),(CListNode *)(this_01 + 0x18));
  *(CBrush3D **)(this_01 + 0x14) = this;
  CBrushMip::AddFromObject3D_t(this_01,param_1);
  ExceptionList = local_c;
  return;
}

