
/* public: void __thiscall CEntity::SetModel(long) */

void __thiscall CEntity::SetModel(CEntity *this,long param_1)

{
  CEntityComponent *pCVar1;
  
                    /* 0x12cd00  3518  ?SetModel@CEntity@@QAEXJ@Z */
  pCVar1 = CEntityClass::ComponentForTypeAndID(*(CEntityClass **)(this + 0x78),2,param_1);
  CModelObject::SetData(*(CModelObject **)(this + 0x7c),*(CModelData **)(pCVar1 + 0x14));
  UpdateSpatialRange(this);
  FindCollisionInfo(this);
  return;
}

