
/* public: __thiscall CBrush3D::CBrush3D(void) */

CBrush3D * __thiscall CBrush3D::CBrush3D(CBrush3D *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1358c0  32  ??0CBrush3D@@QAE@XZ */
  puStack_8 = &LAB_36219205;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  local_4 = 0;
  CAnyProjection3D::CAnyProjection3D((CAnyProjection3D *)(this + 0xc));
  CListHead::Clear((CListHead *)(this + 0x674));
  *(undefined4 *)(this + 0x668) = 0;
  *(undefined4 *)(this + 0x66c) = 0;
  *(undefined4 *)(this + 0x670) = 0;
  ExceptionList = local_c;
  return this;
}

