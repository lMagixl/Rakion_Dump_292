
/* public: void __thiscall CEntity::InitAsFieldBrush(void) */

void __thiscall CEntity::InitAsFieldBrush(CEntity *this)

{
  int *piVar1;
  CBrushMip *this_00;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12b370  2298  ?InitAsFieldBrush@CEntity@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218aaa;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = 8;
  if (*(int *)(this + 0x7c) == 0) {
    piVar1 = FUN_360cc9d0((void *)(*(int *)(*(int *)(this + 0xa8) + 0x34) + 0x14),1);
    *(int **)(this + 0x7c) = piVar1;
    piVar1[0x19a] = (int)this;
    this_00 = (CBrushMip *)FUN_361bf99c(0x54);
    local_4 = 0;
    if (this_00 != (CBrushMip *)0x0) {
      iVar2 = CBrushMip::CBrushMip(this_00);
    }
    local_4 = 0xffffffff;
    CListHead::AddTail((CListHead *)(*(int *)(this + 0x7c) + 0x674),(CListNode *)(iVar2 + 0x18));
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(this + 0x7c);
    CBrush3D::CalculateBoundingBoxes(*(CBrush3D **)(this + 0x7c));
  }
  UpdateSpatialRange(this);
  ExceptionList = local_c;
  return;
}

