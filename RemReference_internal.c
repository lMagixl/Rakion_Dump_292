
/* public: virtual void __thiscall CModelData::RemReference_internal(void) */

void __thiscall CModelData::RemReference_internal(CModelData *this)

{
                    /* 0xb49e0  3108  ?RemReference_internal@CModelData@@UAEXXZ */
  if (*(int *)(this + 0x12bc) != 0) {
    CSerial::MarkUnused((CSerial *)this);
    return;
  }
  CStock_CModelData::Release(_pModelStock,this);
  return;
}

