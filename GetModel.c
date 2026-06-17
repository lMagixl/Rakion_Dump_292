
/* public: class CTFileName const & __thiscall CEntity::GetModel(void) */

CTFileName * __thiscall CEntity::GetModel(CEntity *this)

{
  CModelData *pCVar1;
  
                    /* 0x124d40  1985  ?GetModel@CEntity@@QAEABVCTFileName@@XZ */
  pCVar1 = CModelObject::GetData(*(CModelObject **)(this + 0x7c));
  return (CTFileName *)(pCVar1 + 0xc);
}

