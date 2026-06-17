
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBrush3D::Read_old_t(class CTStream *) */

void __thiscall CBrush3D::Read_old_t(CBrush3D *this,CTStream *param_1)

{
  CBrushMip *this_00;
  int iVar1;
  CBrushMip *this_01;
  undefined4 local_11;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x139110  3004  ?Read_old_t@CBrush3D@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219493;
  local_c = ExceptionList;
  iVar1 = **(int **)(param_1 + 0x14);
  _DAT_362fd7b0 = 0;
  ExceptionList = &local_c;
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  if (0 < iVar1) {
    do {
      this_00 = (CBrushMip *)FUN_361bf99c(0x54);
      this_01 = (CBrushMip *)0x0;
      local_4 = 0;
      if (this_00 != (CBrushMip *)0x0) {
        this_01 = (CBrushMip *)CBrushMip::CBrushMip(this_00);
      }
      local_4 = 0xffffffff;
      CListHead::AddTail((CListHead *)(this + 0x674),(CListNode *)(this_01 + 0x18));
      CBrushMip::Read_old_t(this_01,param_1);
      iVar1 = iVar1 + -1;
      *(CBrush3D **)(this_01 + 0x14) = this;
    } while (iVar1 != 0);
  }
  local_11 = DAT_36238978;
  local_d = DAT_3623897c;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_11);
  ExceptionList = local_c;
  return;
}

