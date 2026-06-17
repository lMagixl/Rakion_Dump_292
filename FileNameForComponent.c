
/* public: class CTFileName const & __thiscall CEntity::FileNameForComponent(long,long) */

CTFileName * __thiscall CEntity::FileNameForComponent(CEntity *this,long param_1,long param_2)

{
  CEntityComponent *pCVar1;
  
                    /* 0x125bb0  1617  ?FileNameForComponent@CEntity@@QAEABVCTFileName@@JJ@Z */
  pCVar1 = CEntityClass::ComponentForTypeAndID(*(CEntityClass **)(this + 0x78),param_1,param_2);
  return (CTFileName *)(pCVar1 + 0xc);
}

