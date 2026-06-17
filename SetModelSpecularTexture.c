
/* public: void __thiscall CEntity::SetModelSpecularTexture(long) */

void __thiscall CEntity::SetModelSpecularTexture(CEntity *this,long param_1)

{
  CEntityComponent *pCVar1;
  
                    /* 0x125560  3527  ?SetModelSpecularTexture@CEntity@@QAEXJ@Z */
  pCVar1 = CEntityClass::ComponentForTypeAndID(*(CEntityClass **)(this + 0x78),1,param_1);
  CAnimObject::SetData((CAnimObject *)(*(int *)(this + 0x7c) + 0x54),*(CAnimData **)(pCVar1 + 0x14))
  ;
  return;
}

