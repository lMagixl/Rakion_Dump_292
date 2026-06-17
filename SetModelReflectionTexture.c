
/* public: void __thiscall CEntity::SetModelReflectionTexture(long) */

void __thiscall CEntity::SetModelReflectionTexture(CEntity *this,long param_1)

{
  CEntityComponent *pCVar1;
  
                    /* 0x125530  3526  ?SetModelReflectionTexture@CEntity@@QAEXJ@Z */
  pCVar1 = CEntityClass::ComponentForTypeAndID(*(CEntityClass **)(this + 0x78),1,param_1);
  CAnimObject::SetData((CAnimObject *)(*(int *)(this + 0x7c) + 0x3c),*(CAnimData **)(pCVar1 + 0x14))
  ;
  return;
}

