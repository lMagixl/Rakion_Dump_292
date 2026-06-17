
/* public: class CTextureData * __thiscall CEntity::GetTextureDataForComponent(long) */

CTextureData * __thiscall CEntity::GetTextureDataForComponent(CEntity *this,long param_1)

{
  CEntityComponent *pCVar1;
  
                    /* 0x126ed0  2157  ?GetTextureDataForComponent@CEntity@@QAEPAVCTextureData@@J@Z
                        */
  pCVar1 = ComponentForTypeAndID(this,1,param_1);
  if (pCVar1 != (CEntityComponent *)0x0) {
    return *(CTextureData **)(pCVar1 + 0x14);
  }
  return (CTextureData *)0x0;
}

