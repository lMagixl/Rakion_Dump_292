
/* public: void __thiscall CEntity::SetModelMainTexture(long) */

void __thiscall CEntity::SetModelMainTexture(CEntity *this,long param_1)

{
  CEntityComponent *pCVar1;
  
                    /* 0x1254e0  3525  ?SetModelMainTexture@CEntity@@QAEXJ@Z */
  pCVar1 = CEntityClass::ComponentForTypeAndID(*(CEntityClass **)(this + 0x78),1,param_1);
  CAnimObject::SetData((CAnimObject *)(*(int *)(this + 0x7c) + 0x24),*(CAnimData **)(pCVar1 + 0x14))
  ;
  return;
}

