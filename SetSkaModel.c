
/* public: void __thiscall CEntity::SetSkaModel(long) */

void __thiscall CEntity::SetSkaModel(CEntity *this,long param_1)

{
  CModelInstance *pCVar1;
  CEntityComponent *pCVar2;
  CModelInstance *pCVar3;
  
                    /* 0x12cfc0  3592  ?SetSkaModel@CEntity@@QAEXJ@Z */
  pCVar2 = CEntityClass::ComponentForTypeAndID(*(CEntityClass **)(this + 0x78),5,param_1);
  pCVar1 = *(CModelInstance **)(*(int *)(pCVar2 + 0x14) + 0x14);
  if (*(int *)(this + 0x7c) == 0) {
    StringDuplicate(s_ETRSCannot_load_default_model____36237cb8 + 0x27);
    pCVar3 = CreateModelInstance();
    *(CModelInstance **)(this + 0x7c) = pCVar3;
  }
  CModelInstance::Copy(*(CModelInstance **)(this + 0x7c),pCVar1);
  SetSkaColisionInfo(this);
  UpdateSpatialRange(this);
  FindCollisionInfo(this);
  return;
}

