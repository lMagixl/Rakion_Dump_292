
/* public: class CModelData * __thiscall CEntity::GetModelDataForComponent(long) */

CModelData * __thiscall CEntity::GetModelDataForComponent(CEntity *this,long param_1)

{
  CEntityComponent *pCVar1;
  
                    /* 0x126ef0  1988  ?GetModelDataForComponent@CEntity@@QAEPAVCModelData@@J@Z */
  pCVar1 = ComponentForTypeAndID(this,2,param_1);
  if (pCVar1 != (CEntityComponent *)0x0) {
    return *(CModelData **)(pCVar1 + 0x14);
  }
  return (CModelData *)0x0;
}

