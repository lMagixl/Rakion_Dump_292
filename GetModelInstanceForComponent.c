
/* public: class CModelInstance * __thiscall CEntity::GetModelInstanceForComponent(long) */

CModelInstance * __thiscall CEntity::GetModelInstanceForComponent(CEntity *this,long param_1)

{
  CEntityComponent *pCVar1;
  
                    /* 0x126f10  1992
                       ?GetModelInstanceForComponent@CEntity@@QAEPAVCModelInstance@@J@Z */
  pCVar1 = ComponentForTypeAndID(this,5,param_1);
  if (pCVar1 != (CEntityComponent *)0x0) {
    return *(CModelInstance **)(*(int *)(pCVar1 + 0x14) + 0x14);
  }
  return (CModelInstance *)0x0;
}

