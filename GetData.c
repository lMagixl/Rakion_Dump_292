
/* public: class CModelData * __thiscall CModelObject::GetData(void) */

CModelData * __thiscall CModelObject::GetData(CModelObject *this)

{
                    /* 0xb4b50  1820  ?GetData@CModelObject@@QAEPAVCModelData@@XZ */
  return *(CModelData **)(this + 0x14);
}

